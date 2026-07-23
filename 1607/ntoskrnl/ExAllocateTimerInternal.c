/*
 * XREFs of ExAllocateTimerInternal @ 0x140133028
 * Callers:
 *     ExAllocateTimer @ 0x140133010 (ExAllocateTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall ExAllocateTimerInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  PVOID PoolWithTag; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx

  if ( (a3 & 0x8000000E) != a3 || (a3 & 6) != 0 && (a3 & 8) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6D547845u);
  v7 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeTimer2((__int64)PoolWithTag, a1, a2, a3);
    *(_QWORD *)(v7 + 136) = KiWaitNever ^ __ROR8__(v7 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    v8 = KiWaitNever ^ __ROR8__(v7 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    *(_BYTE *)(v7 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v7 + 144) = v8;
  }
  return v7;
}
