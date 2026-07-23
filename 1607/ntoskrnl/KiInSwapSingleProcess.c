/*
 * XREFs of KiInSwapSingleProcess @ 0x1400CCAA4
 * Callers:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x1400CB390 (KiAttachProcess.c)
 *     KeReadyThread @ 0x1400F0DBC (KeReadyThread.c)
 * Callees:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiRequestProcessInSwap @ 0x1400CCB40 (KiRequestProcessInSwap.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // rdx

  v6 = 1;
  KiAcquireKobjectLockSafe(a2);
  if ( (*(_DWORD *)(a2 + 572) & 7) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
    goto LABEL_6;
  }
  KiRequestProcessInSwap(a1, a2);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_KTHREAD *)a1 != CurrentPrcb->CurrentThread )
  {
LABEL_6:
    __writecr8(a3);
    return v6;
  }
  *(_BYTE *)(a1 + 643) = 23;
  *(_BYTE *)(a1 + 390) = a3;
  KiSwapThread(a1, (__int64)CurrentPrcb, v7, v8);
  return v6;
}
