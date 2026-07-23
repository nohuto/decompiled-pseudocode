/*
 * XREFs of MiInitializeVadBitMap @ 0x14046C79C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x14046C874 (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(int a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // r14
  int *v4; // rbx
  unsigned int i; // edi
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // esi

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v4 = (int *)(qword_140327FD0 + 276840480);
  *(_DWORD *)(qword_140327FD0 + 276840548) = (unsigned __int64)(*(_QWORD *)(Process + 1152) - 65537LL) >> 16;
  for ( i = 0; i < 2; ++i )
  {
    v6 = (unsigned int)v4[3] >> 15 << 12;
    *v4 = v4[3] & 0x7FFF;
    *((_QWORD *)v4 - 1) = qword_140327FD0 + 4 * (v6 >> 2);
    if ( a1 == 1 )
      *(v4 - 4) = 0;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    v7 = MiExpandVadBitMap(v4 - 4, 1LL);
    v4[2] = *v4;
    v8 = v7;
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( !v8 )
      break;
    v4 += 10;
  }
  return v8;
}
