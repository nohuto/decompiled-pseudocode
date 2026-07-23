/*
 * XREFs of MmInvalidateDumpAddresses @ 0x1403CB944
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     KeFlushSingleCurrentTb @ 0x14012CDD0 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *PteAddress; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r10d
  _QWORD *v9; // r9
  struct _KTHREAD *result; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10

  v3 = a1;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( v5 )
  {
    do
    {
      *PteAddress = 0LL;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
        MiWritePteShadow(v6, 0LL);
      PteAddress = (_QWORD *)(v7 + 8);
    }
    while ( (unsigned int)(v8 + 1) < a2 );
  }
  for ( ; a2; --a2 )
  {
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v9 = (_QWORD *)qword_1403270C8;
  do
  {
    *v9 = 0LL;
    result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v9);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v11, 0LL);
    v9 = (_QWORD *)(v12 + 8);
  }
  while ( v13 != 1 );
  return result;
}
