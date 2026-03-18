/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x14020FAB4
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     PspIoRateEntryVolumeCompare @ 0x14020F844 (PspIoRateEntryVolumeCompare.c)
 */

unsigned __int64 *__fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rsi
  unsigned __int64 *v5; // rdi
  KIRQL v6; // al
  unsigned __int64 *v7; // rbx
  KIRQL v8; // bp
  int v9; // eax

  v2 = (volatile LONG *)(a1 + 1448);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
  v7 = *(unsigned __int64 **)(a1 + 1456);
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
        v7 = (unsigned __int64 *)v7[1];
      }
      else
      {
        v7 = (unsigned __int64 *)*v7;
      }
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(a1 + 1456), v7);
      v7[2] = -1LL;
      v5 = v7;
    }
  }
  ExReleaseSpinLockExclusive(v2, v8);
  return v5;
}
