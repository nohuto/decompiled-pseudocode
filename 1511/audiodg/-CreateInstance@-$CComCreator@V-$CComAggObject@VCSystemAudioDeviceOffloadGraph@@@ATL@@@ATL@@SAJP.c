/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002EAE4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002EAD0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@AT.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400013C8 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002E454 (--0-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  int v7; // r14d
  void *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  try
  {
    v8 = operator new(0x1E0uLL);
    if ( v8 )
      v9 = ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::CComAggObject<CSystemAudioDeviceOffloadGraph>(
             (__int64)v8,
             a1);
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
    v7 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v9 + 400));
    if ( v7 >= 0 )
      v7 = 0;
    if ( v7 >= 0 )
      v7 = 0;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  return (unsigned int)v7;
}
