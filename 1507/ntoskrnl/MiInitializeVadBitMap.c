/*
 * XREFs of MiInitializeVadBitMap @ 0x140467E18
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x140467ED4 (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  unsigned int v6; // ebx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  MEMORY[0xFFFFF58010804214] = (unsigned __int64)(*(_QWORD *)(Process + 1144) - 65537LL) >> 16;
  MEMORY[0xFFFFF580108041FC] = MEMORY[0xFFFFF58010804208] & 0x7FFF;
  MEMORY[0xFFFFF58010804230] = 4 * ((unsigned __int64)(MEMORY[0xFFFFF58010804208] >> 15 << 12) >> 2) - 0xA8000000000LL;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, a3, a4);
  v6 = MiExpandVadBitMap(1LL);
  MEMORY[0xFFFFF58010804200] = MEMORY[0xFFFFF580108041FC];
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  return v6;
}
