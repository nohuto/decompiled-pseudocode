/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400011B4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400011A0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@A.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400013E0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x140001574 (--0-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400166F4 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14002738C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ @ 0x14002EC64 (-InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ.c)
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
  void *v7; // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, __int64, _QWORD *); // rdi
  __int64 (__fastcall *v10)(_QWORD, __int64, _QWORD *); // rsi
  int Interface; // eax
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, __int64, _QWORD *); // [rsp+78h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = operator new(0x1A8uLL);
    v12[5] = v7;
    if ( v7 )
      v9 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))ATL::CComObject<CSystemAudioDeviceOffload>::CComObject<CSystemAudioDeviceOffload>(v7);
    else
      v9 = 0LL;
    v15 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v12;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v15;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 37), v8);
    v6 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v9 + 38));
    if ( v6 >= 0 )
      v6 = 0;
    CSystemAudioDeviceOffload::InternalFinalConstructRelease((CSystemAudioDeviceOffload *)v9);
    if ( v6
      || ((v10 = **v9, (char *)v10 != (char *)ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface)
        ? (Interface = v10(v9, v4, v3))
        : (Interface = ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface(v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *), __int64))(*v9)[18])(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
