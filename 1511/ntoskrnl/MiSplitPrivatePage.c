/*
 * XREFs of MiSplitPrivatePage @ 0x14001E7D0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiMakeProtoLeafValid @ 0x14001EF04 (MiMakeProtoLeafValid.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  _KPROCESS *Process; // r13
  _QWORD *v5; // rsi
  int v6; // r14d
  int v7; // r12d
  KIRQL v8; // bp
  int v9; // r9d
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  struct _KTHREAD *v12; // rbp
  int v13; // ebx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // eax
  int v23; // [rsp+30h] [rbp-78h]
  _BYTE v24[4]; // [rsp+34h] [rbp-74h] BYREF
  unsigned __int64 ProtoPteAddress; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-60h]
  _QWORD v28[11]; // [rsp+50h] [rbp-58h] BYREF
  int v31; // [rsp+C0h] [rbp+18h]
  int v32; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  Process = CurrentThread->ApcState.Process;
  v32 = MiVadPureReserve(a2);
  v28[0] = *(_QWORD *)(v3 + 72);
  v5 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v31 = 0;
  v6 = MiChargeFullProcessCommitment(Process, 1LL);
  v7 = 0;
  v23 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  while ( 1 )
  {
    LOBYTE(v9) = v8;
    v10 = (ULONG_PTR)v5;
    if ( v32 )
    {
      if ( v5 == (_QWORD *)MiGetNextPageTable((_DWORD)v5, (_DWORD)v5, 0, v9, 4, (__int64)v24) )
        goto LABEL_9;
      LOBYTE(v11) = v8;
      MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v11);
      if ( v6 < 0 )
        return (unsigned int)v6;
      v12 = CurrentThread;
      v23 = 1;
      LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
      v13 = MiCommitPageTablesForVad(v3, a1);
      if ( v13 < 0 )
      {
        UNLOCK_PAGE_TABLE_COMMITMENT(v12, Process);
        MiReturnFullProcessCommitment(Process);
        return (unsigned int)v13;
      }
      v3 = a2;
      v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
      v10 = (ULONG_PTR)v5;
    }
    MiMakeSystemAddressValid(v10, 1);
LABEL_9:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 1LL, v28);
    v26 = MI_READ_PTE_LOCK_FREE(v5);
    v15 = v26;
    if ( !v26 )
    {
      if ( v6 < 0 )
        goto LABEL_42;
      v16 = MI_GET_USED_PTES_HANDLE(a1);
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v16, 1LL);
      if ( v32 )
      {
        if ( !ProtoPteAddress )
          goto LABEL_29;
        v17 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v17 & 1) == 0 && (v17 & 0x3E0) == 0 )
          goto LABEL_29;
      }
      v15 = -4294966240LL;
      v26 = -4294966240LL;
      *v5 = -4294966240LL;
      if ( (unsigned int)MiPteInShadowRange(v5) )
        MiWritePteShadow(v5, -4294966240LL);
    }
    if ( (v15 & 1) == 0 )
      break;
    v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
    v14 = 0x200000000000000LL;
    v19 = 48 * v18 - 0x58000000000LL;
    if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_33;
    v14 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
      goto LABEL_33;
    if ( v6 < 0 )
      goto LABEL_42;
    if ( (unsigned int)MiCopyOnWriteEx(a1, 0) )
    {
      v7 = 1;
      goto LABEL_30;
    }
LABEL_2:
    v3 = a2;
  }
  if ( (v15 & 0x400) == 0 || HIDWORD(v15) != 0xFFFFFFFF && v15 >> 16 != ProtoPteAddress )
    goto LABEL_33;
  if ( (_QWORD *)MiMakeProtoLeafValid((ULONG_PTR)v5) == v5 || v15 != MI_READ_PTE_LOCK_FREE(v5) )
    goto LABEL_2;
  if ( v6 < 0 )
  {
LABEL_42:
    LOBYTE(v14) = v8;
    MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v14);
    return (unsigned int)v6;
  }
LABEL_29:
  v7 = 1;
  v31 = 1;
LABEL_30:
  v20 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1;
  v21 = v20 ^ *(_DWORD *)(a2 + 52);
  v14 = v20 >> 31;
  *(_DWORD *)(a2 + 52) ^= v21 & 0x7FFFFFFF;
  *(_BYTE *)(a2 + 34) = v14;
  if ( v31 == 1 )
  {
    v26 = 32LL;
    *v5 = 32LL;
    if ( (unsigned int)MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, 32LL);
  }
LABEL_33:
  LOBYTE(v14) = v8;
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v14);
  if ( v23 == 1 )
    UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
  if ( !v7 && v6 >= 0 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
