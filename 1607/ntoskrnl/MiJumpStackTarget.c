/*
 * XREFs of MiJumpStackTarget @ 0x1401E6214
 * Callers:
 *     MiDoStackCopy @ 0x1401E6130 (MiDoStackCopy.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwapStackPageNoDpc @ 0x1401098D4 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140109F4C (MiCanStealKernelStack.c)
 *     MiStackTheftFreezeProcessors @ 0x1401E6410 (MiStackTheftFreezeProcessors.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // r14
  signed __int32 v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rbp
  char *AnyMultiplexedVm; // r13
  LONG *SharedVm; // rdi
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // rsi
  signed __int32 v18; // eax
  unsigned int v19; // edi
  volatile signed __int32 *result; // rax
  KIRQL v21; // [rsp+60h] [rbp+8h]
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v22);
  }
  else
  {
    *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
    if ( !*(_DWORD *)(v1 + 32) )
    {
      v6 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
      v7 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v10 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v21 = v10;
      MiLockPageAtDpcInline(v6);
      if ( (unsigned int)MiCanStealKernelStack(v6) == 1
        && *(_QWORD *)v6 != -5LL
        && (*(_QWORD *)v6 & 1) != 0
        && *(_QWORD *)(v1 + 40) == (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16 )
      {
        if ( *(_QWORD *)(v1 + 48) )
        {
          MiRemoveLockedPageChargeAndDecRef(v6, v11, v12, v13);
          *(_QWORD *)(v1 + 48) = 0LL;
        }
        if ( (MiFlags & 0x800) != 0 )
        {
          MiStackTheftFreezeProcessors(v1);
          *(_DWORD *)(v1 + 32) = 0;
        }
        else
        {
          *(_DWORD *)(v1 + 32) = (unsigned int)MiSwapStackPageNoDpc(0LL, v6, v7) != 1 ? 0xC0000434 : 0;
        }
      }
      else
      {
        *(_DWORD *)(v1 + 32) = -1073740748;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = *(_QWORD **)(v1 + 16);
      *v14 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v14, v11) )
        MiWritePteShadow(v16, 0LL);
      LOBYTE(v15) = v21;
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v15);
    }
  }
  v17 = a1[2];
  v18 = _InterlockedDecrement((volatile signed __int32 *)v17);
  v19 = ~v18 & 0x80000000;
  if ( (v18 & 0x7FFFFFFF) != 0 )
  {
    v23 = 0;
    while ( (*(_DWORD *)v17 & 0x80000000) != v19 )
      KeYieldProcessorEx(&v23);
  }
  else
  {
    *(_DWORD *)v17 = v19 | *(_DWORD *)(v17 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
