/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1401D2E94
 * Callers:
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400E86F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x1400E87A0 (MiLockProbePacketWorkingSet.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 a1, __int64 **a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdx
  int v7; // edi
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rcx
  bool v12; // zf
  __int64 *v13; // rsi
  _QWORD *CloneAddress; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  MiUnlockProbePacketWorkingSet(a1, (__int64)a2, a3);
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 60) = 1;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v6);
  v7 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 72), 1LL);
  if ( v7 >= 0 )
  {
    v8 = 1;
    MiLockProbePacketWorkingSet(a1);
    v10 = 3LL;
    while ( 1 )
    {
      v11 = a2[(unsigned int)v10];
      if ( (*(_BYTE *)v11 & 1) == 0 )
        break;
      v12 = (_DWORD)v10 == 1;
      v10 = (unsigned int)(v10 - 1);
      if ( v12 )
      {
        if ( (MI_READ_PTE_LOCK_FREE(v11) & 0x80u) == 0LL )
        {
          v13 = *a2;
          v16 = *v13;
          if ( (v16 & 1) != 0 )
          {
            v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v16) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
            {
              v10 = *(_QWORD *)(v10 + 8);
              if ( v10 < 0 )
              {
                CloneAddress = MiLocateCloneAddress(*(_QWORD *)(a1 + 72), v10 | 0x8000000000000000uLL);
                if ( CloneAddress )
                {
                  if ( MEMORY[0xFFFFF580108042B0] > CloneAddress[9]
                    && (unsigned int)MiCopyOnWriteEx(*(_QWORD *)a1, (__int64)v13, -1LL, *(_BYTE *)(a1 + 80), 0) )
                  {
                    v8 = 0;
                  }
                }
              }
            }
          }
        }
        break;
      }
    }
    MiUnlockProbePacketWorkingSet(a1, v10, v9);
    if ( v8 )
      MiReturnFullProcessCommitment(*(_QWORD *)(a1 + 72));
    v7 = 0;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, *(_QWORD *)(a1 + 72));
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v7;
}
