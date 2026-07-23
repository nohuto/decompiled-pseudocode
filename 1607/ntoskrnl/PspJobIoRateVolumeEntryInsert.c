/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x14020F79C
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x1406809FC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     PspIoRateEntryVolumeCompare @ 0x14020F670 (PspIoRateEntryVolumeCompare.c)
 */

void __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // al
  _RTL_BALANCED_NODE *v6; // rdi
  BOOLEAN v7; // bl
  unsigned __int64 v8; // r14
  KIRQL v9; // r12
  _RTL_BALANCED_NODE *v10; // rax

  v2 = (volatile LONG *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
  v6 = *(_RTL_BALANCED_NODE **)(a1 + 1456);
  v7 = 0;
  v8 = (unsigned __int64)a2[1].Children[0];
  v9 = v5;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)PspIoRateEntryVolumeCompare(v8, (__int64)v6) < 0 )
      {
        v10 = v6->Children[0];
        if ( !v6->Children[0] )
          break;
      }
      else
      {
        v10 = v6->Children[1];
        if ( !v10 )
        {
          v7 = 1;
          break;
        }
      }
      v6 = v10;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 1456), v6, v7, a2);
  ExReleaseSpinLockExclusive(v2, v9);
}
