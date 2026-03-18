/*
 * XREFs of MiEncodeProtoFill @ 0x1400902CC
 * Callers:
 *     MiInitializePrototypePtes @ 0x1404B8A74 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  char *AnyMultiplexedVm; // rsi
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r9
  __int64 v10; // rcx

  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = &v3[a2 >> 12];
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v7;
  if ( v3 < v4 )
  {
    v8 = a3;
    do
    {
      *v3 = v8;
      if ( (unsigned int)MiPteInShadowRange(v3, v8) )
      {
        MiWritePteShadow(v10, v8);
        v8 = a3;
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
  LOBYTE(v8) = v9;
  return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v8);
}
