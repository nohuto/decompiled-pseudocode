/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140031F04
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140031DD0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140024D9C (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140031AC8 (--0-$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x140032118 (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CVpoContext>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v6; // esi
  void *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rdi
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  v10[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = operator new(0x58uLL);
    v10[5] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CVpoContext>::CComObject<CVpoContext>((__int64)v7);
    else
      v9 = 0LL;
    v13 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v10;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v13;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 8), v8);
    v6 = ATL::CComSafeDeleteCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 16));
    if ( v6 >= 0 )
      v6 = 0;
    CVpoContext::InternalFinalConstructRelease((CVpoContext *)v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, 1LL);
  }
  return (unsigned int)v6;
}
