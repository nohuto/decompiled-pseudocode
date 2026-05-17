/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC374
 * Callers:
 *     LdrpAccessResourceData @ 0x180030164 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800DC4FC (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, char *a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  int v9; // edi
  bool v10; // sf
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock, a2, a3, (__int64)a4);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  HIDWORD(v13) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *(_QWORD *)(AlternateResourceModules + 72LL * i + 8) == a1 )
    {
      if ( v15[0] )
      {
        v9 = v7;
        for ( LODWORD(v13) = v7; ; LODWORD(v13) = v9 )
        {
          v10 = v9 < 0;
          if ( v9 < 0 )
            break;
          if ( *(_QWORD *)(AlternateResourceModules + 72LL * v9 + 8) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v9, a3, v15, &v14, v13) )
          {
            v7 = v9;
            v10 = v9 < 0;
            break;
          }
          --v9;
        }
        if ( v10 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v15[0] = *(_QWORD *)(AlternateResourceModules + 72LL * i + 32);
      v14 = *(_QWORD *)(AlternateResourceModules + 72LL * i + 48);
      v7 = i;
      HIDWORD(v13) = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v15[0] = 0LL;
  }
  else
  {
    if ( !v14 )
    {
      v11 = RtlImageNtHeader(v15[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v11 )
      {
        if ( *(_WORD *)(v11 + 24) == 267 || *(_WORD *)(v11 + 24) == 523 )
          v14 = *(unsigned int *)(v11 + 80);
        else
          v14 = 0LL;
      }
    }
    *a4 = v14;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v15[0];
}
