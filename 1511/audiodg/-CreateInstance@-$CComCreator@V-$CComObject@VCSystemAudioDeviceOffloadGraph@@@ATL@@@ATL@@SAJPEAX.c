/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002EC24
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002EAD0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@AT.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400013C8 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002E558 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffloadGraph>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  int v6; // r14d
  CSystemAudioDeviceOffloadGraph *v7; // rax
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v11; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceOffloadGraph *)operator new(0x1C8uLL);
    if ( v7 )
      v8 = (volatile signed __int32 *)ATL::CComObject<CSystemAudioDeviceOffloadGraph>::CComObject<CSystemAudioDeviceOffloadGraph>(v7);
    else
      v8 = 0LL;
    v11 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v8 = v11;
  }
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 92);
    v6 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v8 + 94));
    if ( v6 >= 0 )
      v6 = 0;
    _InterlockedDecrement(v8 + 92);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(volatile signed __int32 *, __int64, _QWORD *))v8)(v8, v4, v3)) != 0 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 168LL))(v8, 1LL);
  }
  return (unsigned int)v6;
}
