/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1401E2D84
 * Callers:
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140099F9C (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x14009A2A8 (MiLockProbePacketWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 a1, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
  int v6; // edi
  int v7; // edi
  unsigned int v8; // r9d
  char v9; // al
  int v10; // r9d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v14; // r10
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  MiUnlockProbePacketWorkingSet(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 62) = 1;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v5);
  v6 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 72), 1LL);
  if ( v6 >= 0 )
  {
    v7 = 1;
    MiLockProbePacketWorkingSet(a1);
    v8 = 3;
    while ( 1 )
    {
      v9 = MI_READ_PTE_LOCK_FREE(a2[v8]);
      if ( (v9 & 1) == 0 || v9 < 0 )
        break;
      v8 = v10 - 1;
      if ( !v8 )
      {
        v16 = **a2;
        if ( (v16 & 1) != 0 )
        {
          v11 = MI_READ_PTE_LOCK_FREE(&v16);
          if ( (*(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
          {
            v12 = *(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
            if ( v12 < 0 )
            {
              CloneAddress = MiLocateCloneAddress(*(_QWORD *)(a1 + 72), v12 | 0x8000000000000000uLL);
              if ( CloneAddress )
              {
                if ( *(_QWORD *)(qword_140327FD0 + 276840632) > CloneAddress[9]
                  && (unsigned int)MiCopyOnWriteEx(*(_QWORD *)a1, v14, -1LL, *(_BYTE *)(a1 + 80), 0) )
                {
                  v7 = 0;
                }
              }
            }
          }
        }
        break;
      }
    }
    MiUnlockProbePacketWorkingSet(a1);
    if ( v7 )
      MiReturnFullProcessCommitment(*(_QWORD *)(a1 + 72), 1LL);
    v6 = 0;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, *(_QWORD *)(a1 + 72));
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v6;
}
