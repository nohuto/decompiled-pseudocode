/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140029D64
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140029D50 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140024D9C (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140029828 (--0-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceExclusive>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v7; // esi
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  try
  {
    v8 = operator new(0x188uLL);
    if ( v8 )
      v9 = ATL::CComAggObject<CSystemAudioDeviceExclusive>::CComAggObject<CSystemAudioDeviceExclusive>((__int64)v8, a1);
    else
      v9 = 0LL;
    v10 = v9;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v7 = -2147024882;
    v9 = v10;
  }
  if ( v9 )
  {
    v7 = ATL::CComSafeDeleteCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 304));
    if ( v7 >= 0 )
      v7 = 0;
    if ( v7 >= 0 )
      v7 = 0;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  return (unsigned int)v7;
}
