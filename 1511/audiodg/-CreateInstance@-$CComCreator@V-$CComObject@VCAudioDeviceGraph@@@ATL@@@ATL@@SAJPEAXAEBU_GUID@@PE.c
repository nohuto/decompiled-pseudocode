/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002734
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002720 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140004E28 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140006560 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x140006624 (--0-$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v5; // esi
  void *v6; // rax
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
    v6 = operator new(0x180uLL);
    if ( v6 )
      v7 = (volatile signed __int32 *)ATL::CComObject<CAudioDeviceGraph>::CComObject<CAudioDeviceGraph>(v6);
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
    _InterlockedIncrement(v7 + 6);
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 8));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v7 + 72) = 1;
      v5 = 0;
    }
    _InterlockedDecrement(v7 + 6);
    if ( v5
      || ((v8 = **(__int64 (__fastcall ***)(volatile signed __int32 *, __int64, _QWORD *))v7,
           (char *)v8 != (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface)
        ? (Interface = v8(v7, v4, v3))
        : (Interface = ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 168LL))(v7, 1LL);
    }
  }
  return (unsigned int)v5;
}
