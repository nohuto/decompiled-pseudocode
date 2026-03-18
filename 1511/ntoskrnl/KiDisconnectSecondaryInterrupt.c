/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x1401C6A68
 * Callers:
 *     KeDisconnectInterrupt @ 0x140115AA4 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KiDisconnectInterruptCommon @ 0x140115E6C (KiDisconnectInterruptCommon.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1401C68CC (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1401C6E18 (KiReleaseSecondaryPassiveConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, __int64 a2)
{
  bool v3; // bl
  KSPIN_LOCK *v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  KSPIN_LOCK v7; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx

  v3 = 0;
  v5 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256));
  KiAcquireSecondaryPassiveConnectLock((__int64)v5);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(v5);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v7 = v5[5];
    if ( v7 == a1 )
      v3 = *(_QWORD *)(v7 + 8) == v7 + 8;
  }
  KxReleaseSpinLock(v5);
  __writecr8(CurrentIrql);
  if ( v3 )
    HalDisableInterrupt(a2);
  v9 = KiDisconnectInterruptCommon(1, a1, a2, v8);
  KiReleaseSecondaryPassiveConnectLock(v5);
  return v9;
}
