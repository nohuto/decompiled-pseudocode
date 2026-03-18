/*
 * XREFs of MiZeroLargePageThread @ 0x140165A28
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     MiZeroLargePage @ 0x1400FC2EC (MiZeroLargePage.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePage @ 0x1401023B8 (MiUnlinkNodeLargePage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall MiZeroLargePageThread(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // edi

  v2 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 1u);
  while ( 1 )
  {
    v3 = MiUnlinkNodeLargePage((__int64)MiSystemPartition, v2 >> byte_14034EB89, 4u, 1);
    v4 = v3;
    if ( !v3 )
      break;
    MiZeroLargePage(v3, a1);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    MiInsertLargePageInNodeList((v4 + 0x58000000000LL) / 48, 0x200uLL, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  MiDeleteZeroThreadContext((__int64)MiSystemPartition, a1);
}
