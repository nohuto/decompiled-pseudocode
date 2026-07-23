/*
 * XREFs of VfFreeMapRegisters @ 0x140707368
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140222B50 (ViRemoveChannelWcb.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705EA0 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeMapRegisters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  char v7; // bp
  __int64 RealDmaOperation; // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, __int64, _QWORD); // r12
  __int64 AdapterInformationInternal; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rbx

  v4 = 0LL;
  v7 = 0;
  RealDmaOperation = ViGetRealDmaOperation(a1, 56LL);
  LOBYTE(v9) = 1;
  v10 = (void (__fastcall *)(__int64, __int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v9);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v4 = a2;
    if ( a2 == -559026163 )
    {
      a2 = 0LL;
      v7 = 1;
      v4 = 0LL;
    }
    else if ( a2 && *(_DWORD *)a2 == -1393569779 )
    {
      a2 = *(_QWORD *)(a2 + 48);
    }
  }
  v10(a1, a2, a3);
  if ( AdapterInformationInternal )
  {
    if ( v7 == 1 )
      v4 = -559026163LL;
    v12 = ViRemoveChannelWcb(AdapterInformationInternal, v4, 0LL);
    v13 = (_QWORD *)v12;
    if ( v12 )
    {
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v12 + 48));
      if ( v13[12] )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v13);
    }
  }
}
