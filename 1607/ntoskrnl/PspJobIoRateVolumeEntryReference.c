/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x14020F848
 * Callers:
 *     PsIoRateControlReference @ 0x1400B3FA0 (PsIoRateControlReference.c)
 * Callees:
 *     PspIoRateEntryIoControlReference @ 0x1400B4024 (PspIoRateEntryIoControlReference.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     PspIoRateEntryVolumeCompare @ 0x14020F670 (PspIoRateEntryVolumeCompare.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rsi
  struct _EX_RUNDOWN_REF *v5; // rdi
  KIRQL v6; // al
  struct _EX_RUNDOWN_REF *Count; // rbx
  KIRQL v8; // bp
  int v9; // eax

  v2 = (volatile LONG *)(a1 + 1448);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1448));
  Count = *(struct _EX_RUNDOWN_REF **)(a1 + 1456);
  v8 = v6;
  if ( Count )
  {
    do
    {
      v9 = PspIoRateEntryVolumeCompare(a2, (__int64)Count);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        Count = (struct _EX_RUNDOWN_REF *)Count[1].Count;
      }
      else
      {
        Count = (struct _EX_RUNDOWN_REF *)Count->Count;
      }
    }
    while ( Count );
    if ( Count )
    {
      v5 = Count;
      PspIoRateEntryIoControlReference(Count);
    }
  }
  ExReleaseSpinLockShared(v2, v8);
  return v5;
}
