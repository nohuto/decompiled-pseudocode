/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1400F8A28
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F8494 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x1400F88F4 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x1405434E0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     LdrpInitMuiCrits @ 0x1400F8BC8 (LdrpInitMuiCrits.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int i; // r8d
  ULONG v11; // edx
  char v13; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v13 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v9 = RtlImageNtHeader((PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v9 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == DllHandle )
    {
      if ( *((_DWORD *)AlternateResourceModules + 18 * i + 6) != v9->OptionalHeader.CheckSum )
      {
        v13 = 1;
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
            v13 = 1;
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
  if ( v13 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v11);
  return v8;
}
