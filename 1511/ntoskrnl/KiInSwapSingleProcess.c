/*
 * XREFs of KiInSwapSingleProcess @ 0x1400C7B28
 * Callers:
 *     KeReadyThread @ 0x1400287E0 (KeReadyThread.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x1400C7960 (KiAttachProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiRequestProcessInSwap @ 0x1400C7BB0 (KiRequestProcessInSwap.c)
 */

char __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // bp
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rdx

  v4 = a3;
  v6 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2, a2, a3);
  if ( (*(_DWORD *)(a2 + 572) & 7) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
    goto LABEL_5;
  }
  KiRequestProcessInSwap(a1, a2);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_KTHREAD *)a1 != CurrentPrcb->CurrentThread )
  {
LABEL_5:
    __writecr8(v4);
    return v6;
  }
  *(_BYTE *)(a1 + 643) = 23;
  *(_BYTE *)(a1 + 390) = v4;
  KiSwapThread(a1, (__int64)CurrentPrcb);
  return v6;
}
