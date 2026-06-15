/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002BF68
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002BE30 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140024D9C (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14002B81C (--0-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ @ 0x14002CB28 (-InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffload>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v6; // esi
  CSystemAudioDeviceOffload *v7; // rax
  volatile int *v8; // rdx
  CSystemAudioDeviceOffload *v9; // rdi
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF
  CSystemAudioDeviceOffload *v13; // [rsp+78h] [rbp+20h]

  v10[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceOffload *)operator new(0x1A8uLL);
    v10[5] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CSystemAudioDeviceOffload>::CComObject<CSystemAudioDeviceOffload>(v7);
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CSystemAudioDeviceOffload *)((char *)v9 + 296), v8);
    v6 = ATL::CComSafeDeleteCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 304));
    if ( v6 >= 0 )
      v6 = 0;
    CSystemAudioDeviceOffload::InternalFinalConstructRelease(v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(CSystemAudioDeviceOffload *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(CSystemAudioDeviceOffload *, __int64))(*(_QWORD *)v9 + 168LL))(v9, 1LL);
  }
  return (unsigned int)v6;
}
