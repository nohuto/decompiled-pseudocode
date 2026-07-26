/*
 * XREFs of ndisNdkPcwMiniportCleanup @ 0x1C00D1594
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall ndisNdkPcwMiniportCleanup(__int64 a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rdx
  struct _NDIS_NDK_BLOCK **v3; // rcx
  __int64 v4; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, &ndisPcwMutex);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = NdkPcwNdkBlockList;
    v3 = &NdkPcwNdkBlockList;
    while ( v2 )
    {
      if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
      {
        *v3 = *(struct _NDIS_NDK_BLOCK **)v2;
        *(_QWORD *)v2 = 0LL;
        break;
      }
      v3 = (struct _NDIS_NDK_BLOCK **)v2;
      v2 = *(struct _NDIS_NDK_BLOCK **)v2;
    }
    if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 16) = 0;
      KLockHolder::ReleaseExclusive(&v5);
      ndisDereferenceMiniport(v4, 0x5Au);
    }
  }
  KLockHolder::~KLockHolder(&v5);
}
