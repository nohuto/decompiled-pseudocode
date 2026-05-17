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

__int64 __fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  __int64 result; // rax
  __int64 v9; // rbx
  char v10; // r14
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  int i; // r8d
  _DWORD *v16; // rax

  v4 = a4;
  result = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( (a4 & 0xC) != 0 && (a4 & 0xFFFFFFF3) == 0 && ((a4 & 4) == 0 || a2) )
  {
    v14 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    result = 0LL;
    if ( v14 )
    {
      if ( a3 )
        *a3 = 0LL;
      RtlAcquireSRWLockShared(&MuiCacheSWRLock, v11, v12, v13);
      for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
      {
        if ( *(_QWORD *)(AlternateResourceModules + 72LL * i + 8) == a1 )
        {
          if ( *(_DWORD *)(AlternateResourceModules + 72LL * i + 24) != *(_DWORD *)(v14 + 88) )
          {
            v10 = 1;
            break;
          }
          if ( (v4 & 8) != 0 )
          {
            v16 = *(_DWORD **)(AlternateResourceModules + 72LL * i + 16);
            if ( v16 )
            {
              v9 = *(_QWORD *)(AlternateResourceModules + 72LL * i + 16);
              if ( v16 != (_DWORD *)-1LL && *v16 != -20054323 )
              {
                v10 = 1;
                v9 = 0LL;
              }
              break;
            }
          }
          else if ( (v4 & 4) != 0 && a2 && *(_WORD *)(AlternateResourceModules + 72LL * i) == a2 )
          {
            v9 = *(_QWORD *)(AlternateResourceModules + 72LL * i + 32);
            if ( a3 )
              *a3 = *(_QWORD *)(AlternateResourceModules + 72LL * i + 48);
            break;
          }
        }
      }
      RtlReleaseSRWLockShared(&MuiCacheSWRLock);
      if ( v10 )
        LdrUnloadAlternateResourceModuleEx(a1, 0);
      return v9;
    }
  }
  return result;
}
