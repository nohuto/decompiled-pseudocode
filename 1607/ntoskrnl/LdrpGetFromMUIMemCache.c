/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1400FAC9C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400FA708 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x1400FAB68 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x140542FA0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     LdrpInitMuiCrits @ 0x1400FAE3C (LdrpInitMuiCrits.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int i; // r8d
  char v12; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v12 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v9 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v9 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( *((_DWORD *)AlternateResourceModules + 18 * i + 6) != v9->OptionalHeader.CheckSum )
      {
        v12 = 1;
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
            v12 = 1;
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
  if ( v12 )
    LdrUnloadAlternateResourceModuleEx(a1);
  return v8;
}
