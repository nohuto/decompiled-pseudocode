/*
 * XREFs of MiWaitForVadDeletion @ 0x1401F7718
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x14002C4F0 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 * Callees:
 *     MiUnlockVad @ 0x1400144A0 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x140014510 (MiInsertVadEvent.c)
 *     MiLockVad @ 0x14002BFB0 (MiLockVad.c)
 *     KeWaitForGate @ 0x140097C98 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+28h] [rbp-40h]
  __int16 v6; // [rsp+30h] [rbp-38h] BYREF
  char v7; // [rsp+32h] [rbp-36h]
  int v8; // [rsp+34h] [rbp-34h]
  _QWORD v9[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 1;
    v8 = 0;
    v6 = 263;
    v7 = 6;
    v9[1] = v9;
    v9[0] = v9;
    MiInsertVadEvent(a1, &v4, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v6, 0x12u);
    return MiLockVad((__int64)CurrentThread, a1);
  }
  return result;
}
