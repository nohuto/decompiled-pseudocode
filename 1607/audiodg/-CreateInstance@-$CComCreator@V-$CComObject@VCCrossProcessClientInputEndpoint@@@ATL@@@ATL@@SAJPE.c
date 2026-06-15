/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140036584
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140036080 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012A20 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140024D9C (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140034770 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x140036BB4 (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CCrossProcessClientInputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v6; // esi
  void *v7; // rax
  CCrossProcessClientInputEndpoint *v8; // rax
  volatile int *v9; // rdx
  CCrossProcessClientInputEndpoint *v10; // rdi
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF
  CCrossProcessClientInputEndpoint *v14; // [rsp+78h] [rbp+20h]

  v11[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (void *)AERTGetDLLRTHeap();
    v8 = (CCrossProcessClientInputEndpoint *)AERTAllocate(0x208uLL, v7);
    v11[5] = v8;
    if ( v8 )
      v10 = ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v8);
    else
      v10 = 0LL;
    v14 = v10;
  }
  catch ( ... )
  {
    v9 = (volatile int *)v11;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v10 = v14;
  }
  if ( v10 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CCrossProcessClientInputEndpoint *)((char *)v10 + 464), v9);
    v6 = ATL::CComSafeDeleteCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v10 + 472));
    if ( v6 >= 0 )
      v6 = 0;
    CCrossProcessServerOutputEndpoint::InternalFinalConstructRelease(v10);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CCrossProcessClientInputEndpoint *, __int64, _QWORD *))v10)(v10, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CCrossProcessClientInputEndpoint *, __int64))(*(_QWORD *)v10 + 64LL))(v10, 1LL);
    }
  }
  return (unsigned int)v6;
}
