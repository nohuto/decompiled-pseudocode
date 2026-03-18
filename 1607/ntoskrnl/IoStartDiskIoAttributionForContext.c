/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x1400B720C
 * Callers:
 *     PspIoRateEntryActivate @ 0x1404F1AB0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1404F206C (PspSetJobIoAttribution.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x14001F390 (IopDiskIoAttributionTreeCompare.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  _QWORD *v4; // rdi
  char v5; // bl
  KIRQL v6; // r14
  _QWORD *v7; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v4 = (_QWORD *)IopDiskIoAttributionTree;
  v5 = 0;
  v6 = v2;
  if ( (_QWORD)IopDiskIoAttributionTree )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)(a1 + 24), (__int64)v4) < 0 )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  LOBYTE(v3) = v5;
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, v4, v3, a1);
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v6);
}
