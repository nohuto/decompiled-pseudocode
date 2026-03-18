/*
 * XREFs of MiWaitForVadDeletion @ 0x14022F098
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140089350 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiInsertVadEvent @ 0x140089D40 (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 1;
    v8[1] = 0;
    LOWORD(v8[0]) = 263;
    BYTE2(v8[0]) = 6;
    v9[1] = v9;
    v9[0] = v9;
    MiInsertVadEvent(a1, &v6, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate(v8, 0x12u);
    return MiLockVad((__int64)CurrentThread, a1, v3, v4);
  }
  return result;
}
