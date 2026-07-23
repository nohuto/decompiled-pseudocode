/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x14002A698
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14002A0FC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x14002A564 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x1405807EC (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpInitMuiCrits @ 0x14002A838 (LdrpInitMuiCrits.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  PIMAGE_NT_HEADERS v11; // r13
  int i; // r8d
  ULONG v13; // edx
  char v15; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v15 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v11 = RtlImageNtHeader((PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v11 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits(v10, v9);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == DllHandle )
    {
      if ( *((_DWORD *)AlternateResourceModules + 18 * i + 6) != v11->OptionalHeader.CheckSum )
      {
        v15 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *((_QWORD *)AlternateResourceModules + 9 * i + 2) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 9 * i + 2);
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v15 = 1;
            v8 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *((_WORD *)AlternateResourceModules + 36 * i) == a2 )
      {
        v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 9 * i + 4);
        if ( a3 )
          *a3 = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
        break;
      }
    }
  }
  KeReleaseMutex(&MuiMutex, 0);
  if ( v15 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v13);
  return v8;
}
