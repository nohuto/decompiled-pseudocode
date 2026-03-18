/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x14020F970
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 *     PspIoRateEntryVolumeCompare @ 0x14020F844 (PspIoRateEntryVolumeCompare.c)
 */

void __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // al
  _QWORD *v6; // rdi
  bool v7; // bl
  unsigned __int64 v8; // r14
  KIRQL v9; // r12
  _QWORD *v10; // rax

  v2 = (volatile LONG *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
  v6 = *(_QWORD **)(a1 + 1456);
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v5;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)PspIoRateEntryVolumeCompare(v8, (__int64)v6) < 0 )
      {
        v10 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
      }
      else
      {
        v10 = (_QWORD *)v6[1];
        if ( !v10 )
        {
          v7 = 1;
          break;
        }
      }
      v6 = v10;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 1456), (unsigned __int64)v6, v7, a2);
  ExReleaseSpinLockExclusive(v2, v9);
}
