/*
 * XREFs of MiWaitForVadDeletion @ 0x1401E1DD8
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+28h] [rbp-40h]
  __int16 v5; // [rsp+30h] [rbp-38h] BYREF
  char v6; // [rsp+32h] [rbp-36h]
  int v7; // [rsp+34h] [rbp-34h]
  _QWORD v8[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    v7 = 0;
    v5 = 263;
    v6 = 6;
    v8[1] = v8;
    v8[0] = v8;
    MiInsertVadEvent(a1, &v3, 1LL);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v5, 18);
    MiLockVad((__int64)CurrentThread, a1);
  }
}
