/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x180040A40
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x18003A820 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C360 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  __int64 v9; // r13
  int i; // r8d
  char v12; // [rsp+78h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v12 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v9 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !v9 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *(_QWORD *)(AlternateResourceModules + 72LL * i + 8) == a1 )
    {
      if ( *(_DWORD *)(AlternateResourceModules + 72LL * i + 24) != *(_DWORD *)(v9 + 88) )
      {
        v12 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)(AlternateResourceModules + 72LL * i + 16) )
        {
          _mm_lfence();
          v8 = *(_DWORD **)(AlternateResourceModules + 72LL * i + 16);
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v12 = 1;
            v8 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)(AlternateResourceModules + 72LL * i) == a2 )
      {
        v8 = *(_DWORD **)(AlternateResourceModules + 72LL * i + 32);
        if ( a3 )
          *a3 = *(_QWORD *)(AlternateResourceModules + 72LL * i + 48);
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v12 )
    LdrUnloadAlternateResourceModuleEx(a1, 0);
  return v8;
}
