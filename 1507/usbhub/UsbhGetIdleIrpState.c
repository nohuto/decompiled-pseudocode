/*
 * XREFs of UsbhGetIdleIrpState @ 0x1C002233C
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C002220C (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

__int64 __fastcall UsbhGetIdleIrpState(__int64 a1, __int64 a2, KIRQL *a3, __int64 a4)
{
  KSPIN_LOCK *v5; // rdi
  KIRQL v6; // al
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 result; // rax

  v5 = (KSPIN_LOCK *)PdoExt(a2, a2, (__int64)a3, a4);
  v6 = KeAcquireSpinLockRaiseToDpc(v5 + 255);
  v7 = *((_DWORD *)v5 + 382);
  v8 = 4LL * *((unsigned int *)v5 + 445);
  *a3 = v6;
  result = v7;
  LODWORD(v5[v8 + 223]) = 0;
  HIDWORD(v5[v8 + 223]) = v7;
  return result;
}
