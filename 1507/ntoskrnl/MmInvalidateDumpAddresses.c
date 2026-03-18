/*
 * XREFs of MmInvalidateDumpAddresses @ 0x1403EF8C8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 * Callees:
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  _QWORD *i; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *result; // rax

  v2 = 0;
  v3 = a2;
  v4 = a1;
  for ( i = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL); v2 < v3; ++i )
  {
    *i = 0LL;
    if ( MiPteInShadowRange((__int64)i) )
      MiWritePteShadow((__int64)i, 0LL);
    ++v2;
  }
  for ( ; v3; --v3 )
  {
    KeFlushSingleCurrentTb(v4, 0);
    v4 += 4096LL;
  }
  v6 = (_QWORD *)qword_14034F170;
  v7 = 32LL;
  do
  {
    *v6 = 0LL;
    result = (struct _KTHREAD *)MiPteInShadowRange((__int64)v6);
    if ( (_DWORD)result )
      result = MiWritePteShadow((__int64)v6, 0LL);
    ++v6;
    --v7;
  }
  while ( v7 );
  return result;
}
