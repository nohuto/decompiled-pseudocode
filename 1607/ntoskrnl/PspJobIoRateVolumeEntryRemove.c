/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x14020F8E0
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x1406809FC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     PspIoRateEntryVolumeCompare @ 0x14020F670 (PspIoRateEntryVolumeCompare.c)
 */

_RTL_BALANCED_NODE *__fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rsi
  _RTL_BALANCED_NODE *v5; // rdi
  KIRQL v6; // al
  _RTL_BALANCED_NODE *v7; // rbx
  KIRQL v8; // bp
  int v9; // eax

  v2 = (volatile LONG *)(a1 + 1448);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
  v7 = *(_RTL_BALANCED_NODE **)(a1 + 1456);
  v8 = v6;
  if ( v7 )
  {
    do
    {
      v9 = PspIoRateEntryVolumeCompare(a2, (__int64)v7);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v7 = v7->Children[1];
      }
      else
      {
        v7 = v7->Children[0];
      }
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 1456), v7);
      v7->ParentValue = -1LL;
      v5 = v7;
    }
  }
  ExReleaseSpinLockExclusive(v2, v8);
  return v5;
}
