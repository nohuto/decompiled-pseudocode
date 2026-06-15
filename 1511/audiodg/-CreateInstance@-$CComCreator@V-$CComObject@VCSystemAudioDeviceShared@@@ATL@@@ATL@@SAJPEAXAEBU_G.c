/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400028FC
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400026E0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@AT.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140004E28 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008FE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140009164 (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v5; // esi
  CSystemAudioDeviceSharedBase *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 (__fastcall *v8)(volatile signed __int32 *, __int64, _QWORD *); // rsi
  int Interface; // eax
  volatile signed __int32 *v13; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = (CSystemAudioDeviceSharedBase *)operator new(0x190uLL);
    if ( v6 )
      v7 = (volatile signed __int32 *)ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(v6);
    else
      v7 = 0LL;
    v13 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v13;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 86);
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 88));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v7 + 392) = 1;
      v5 = 0;
    }
    _InterlockedDecrement(v7 + 86);
    if ( v5
      || ((v8 = **(__int64 (__fastcall ***)(volatile signed __int32 *, __int64, _QWORD *))v7,
           (char *)v8 != (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface)
        ? (Interface = v8(v7, v4, v3))
        : (Interface = ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 168LL))(v7, 1LL);
    }
  }
  return (unsigned int)v5;
}
