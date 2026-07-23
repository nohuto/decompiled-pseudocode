/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x18003195C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 */

__int64 __fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  __int64 result; // rax
  __int64 v9; // rbx
  char v10; // r14
  PIMAGE_NT_HEADERS v11; // r13
  int i; // r8d
  _DWORD *v13; // rax

  v4 = a4;
  result = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( (a4 & 0xC) != 0 && (a4 & 0xFFFFFFF3) == 0 && ((a4 & 4) == 0 || a2) )
  {
    v11 = RtlImageNtHeader((PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL));
    result = 0LL;
    if ( v11 )
    {
      if ( a3 )
        *a3 = 0LL;
      RtlAcquireSRWLockShared(&MuiCacheSWRLock);
      for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
      {
        if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == DllHandle )
        {
          if ( *((_DWORD *)AlternateResourceModules + 18 * i + 6) != v11->OptionalHeader.CheckSum )
          {
            v10 = 1;
            break;
          }
          if ( (v4 & 8) != 0 )
          {
            v13 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 9 * i + 2);
            if ( v13 )
            {
              v9 = *((_QWORD *)AlternateResourceModules + 9 * i + 2);
              if ( v13 != (_DWORD *)-1LL && *v13 != -20054323 )
              {
                v10 = 1;
                v9 = 0LL;
              }
              break;
            }
          }
          else if ( (v4 & 4) != 0 && a2 && *((_WORD *)AlternateResourceModules + 36 * i) == a2 )
          {
            v9 = *((_QWORD *)AlternateResourceModules + 9 * i + 4);
            if ( a3 )
              *a3 = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
            break;
          }
        }
      }
      RtlReleaseSRWLockShared(&MuiCacheSWRLock);
      if ( v10 )
        LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
      return v9;
    }
  }
  return result;
}
