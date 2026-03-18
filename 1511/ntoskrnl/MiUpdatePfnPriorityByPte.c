/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x14007C6B0
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r9
  ULONG_PTR v7; // rbx
  unsigned __int8 CurrentIrql; // si
  char v9; // cl
  unsigned int v10; // eax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a1;
  v3 = a1;
  if ( (a1 & 1) != 0 )
  {
    v3 = MI_READ_PTE_LOCK_FREE(&v11);
LABEL_5:
    v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_7;
  }
  if ( (a1 & 0x400) == 0 && (a1 & 0x800) != 0 )
    goto LABEL_5;
  v4 = -1LL;
LABEL_7:
  result = MI_IS_PFN(v4);
  if ( (_DWORD)result )
  {
    v7 = 48 * v6 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v9 = *(_BYTE *)(v7 + 35);
    if ( (v9 & 8) != 0 )
      v10 = 5;
    else
      v10 = v9 & 7;
    if ( a2 != v10 && a2 >= v10 )
    {
      if ( (*(_BYTE *)(v7 + 34) & 7) == 2 )
        MiRelinkStandbyPage(v7, a2, 0x3FEu);
      else
        *(_BYTE *)(v7 + 35) = v9 ^ (a2 ^ v9) & 7;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
