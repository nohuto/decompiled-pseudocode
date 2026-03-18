/*
 * XREFs of MiInitializeVadBitMap @ 0x140462CA0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x140462D7C (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(int a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int *v3; // rbx
  __int64 Process; // r14
  unsigned int i; // edi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // esi

  CurrentThread = KeGetCurrentThread();
  v3 = (int *)0xFFFFF58010804218LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  MEMORY[0xFFFFF5801080425C] = (unsigned __int64)(*(_QWORD *)(Process + 1152) - 65537LL) >> 16;
  for ( i = 0; i < 2; ++i )
  {
    v6 = (unsigned int)v3[3] >> 15;
    *v3 = v3[3] & 0x7FFF;
    *((_QWORD *)v3 - 1) = 4 * ((unsigned __int64)(v6 << 12) >> 2) - 0xA8000000000LL;
    if ( a1 == 1 )
      *(v3 - 4) = 0;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    v7 = MiExpandVadBitMap(v3 - 4, 1LL);
    v3[2] = *v3;
    v8 = v7;
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( !v8 )
      break;
    v3 += 10;
  }
  return v8;
}
