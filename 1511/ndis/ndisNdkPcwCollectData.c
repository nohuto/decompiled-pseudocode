/*
 * XREFs of ndisNdkPcwCollectData @ 0x1C00D13F8
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00D1620 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00D147C (ndisNdkPcwCollectMiniportStats.c)
 */

__int64 __fastcall ndisNdkPcwCollectData(__int64 a1)
{
  int v2; // edi
  struct _NDIS_NDK_BLOCK *i; // rbx
  int v4; // eax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1073741823;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v6, &ndisPcwMutex);
  for ( i = NdkPcwNdkBlockList; i; i = *(struct _NDIS_NDK_BLOCK **)i )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 == -1 )
    {
      v2 = ndisNdkPcwCollectMiniportStats(i, *(_QWORD *)(a1 + 24));
      if ( v2 < 0 )
        break;
    }
    else if ( v4 == *((_DWORD *)i + 5) )
    {
      v2 = ndisNdkPcwCollectMiniportStats(i, *(_QWORD *)(a1 + 24));
      break;
    }
  }
  KLockHolder::~KLockHolder(&v6);
  return (unsigned int)v2;
}
