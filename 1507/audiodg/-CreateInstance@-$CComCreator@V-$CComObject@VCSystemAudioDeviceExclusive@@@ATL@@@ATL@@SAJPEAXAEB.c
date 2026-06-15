/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002AEB4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002AD60 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400166F4 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14002738C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x14002A884 (--0-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x14002B65C (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  int v6; // r14d
  CSystemAudioDeviceExclusive *v7; // rax
  volatile int *v8; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  _QWORD v10[13]; // [rsp+0h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+88h] [rbp+20h]

  v10[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceExclusive *)operator new(0x170uLL);
    v10[5] = v7;
    if ( v7 )
      v9 = (struct _RTL_CRITICAL_SECTION *)ATL::CComObject<CSystemAudioDeviceExclusive>::CComObject<CSystemAudioDeviceExclusive>(v7);
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)&v9[6].SpinCount, v8);
    v6 = ATL::CComSafeDeleteCriticalSection::Init(v9 + 7);
    if ( v6 >= 0 )
      v6 = 0;
    CSystemAudioDeviceExclusive::InternalFinalConstructRelease((CSystemAudioDeviceExclusive *)v9);
    if ( v6
      || (v6 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, _QWORD *))v9->DebugInfo->Type)(
                 v9,
                 v4,
                 v3)) != 0 )
    {
      (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION *, __int64))&v9->DebugInfo[3].Type)(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
