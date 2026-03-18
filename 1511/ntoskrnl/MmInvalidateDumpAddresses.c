/*
 * XREFs of MmInvalidateDumpAddresses @ 0x14039D45C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebp
  _QWORD *PteAddress; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *result; // rax

  v3 = a1;
  v4 = 0;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( a2 )
  {
    do
    {
      *PteAddress = 0LL;
      if ( MiPteInShadowRange((__int64)PteAddress) )
        MiWritePteShadow((__int64)PteAddress, 0LL);
      ++v4;
      ++PteAddress;
    }
    while ( v4 < a2 );
    do
    {
      KeFlushSingleCurrentTb(v3, 0);
      v3 += 4096LL;
      --a2;
    }
    while ( a2 );
  }
  v6 = (_QWORD *)qword_1402FECB8;
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
