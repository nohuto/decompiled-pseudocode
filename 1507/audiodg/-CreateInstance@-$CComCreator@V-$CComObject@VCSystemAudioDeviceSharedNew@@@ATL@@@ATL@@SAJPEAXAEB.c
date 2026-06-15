/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400144DC
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014320 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140013590 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013B70 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z @ 0x140013CFC (--0-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14002738C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceSharedNew@@QEAAXXZ @ 0x14002E2FC (-InternalFinalConstructRelease@CSystemAudioDeviceSharedNew@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceSharedNew>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r14
  const struct _GUID *v4; // r15
  int v6; // esi
  CSystemAudioDeviceSharedNew *v7; // rax
  volatile int *v8; // rdx
  CSystemAudioDeviceSharedNew *v9; // rdi
  __int64 (__fastcall *v10)(char *, const struct _GUID *, char **); // rsi
  int Interface; // eax
  _QWORD v12[13]; // [rsp+0h] [rbp-68h] BYREF
  CSystemAudioDeviceSharedNew *v15; // [rsp+88h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceSharedNew *)operator new(0x188uLL);
    v12[5] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CSystemAudioDeviceSharedNew>::CComObject<CSystemAudioDeviceSharedNew>(v7);
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CSystemAudioDeviceSharedNew *)((char *)v9 + 288), v8);
    v6 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 296));
    if ( v6 >= 0 )
    {
      *((_BYTE *)v9 + 336) = 1;
      v6 = 0;
    }
    CSystemAudioDeviceSharedNew::InternalFinalConstructRelease(v9);
    if ( v6
      || ((v10 = **(__int64 (__fastcall ***)(char *, const struct _GUID *, char **))v9,
           v10 != ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface)
        ? (Interface = v10((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *, __int64))(*(_QWORD *)v9 + 144LL))(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
