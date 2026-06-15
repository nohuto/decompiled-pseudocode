/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012E3C
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012B40 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@AT.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140011278 (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011450 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x14002B670 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r14
  const struct _GUID *v4; // r15
  int v6; // esi
  CSystemAudioDeviceSharedBase *v7; // rax
  volatile int *v8; // rdx
  CSystemAudioDeviceSharedBase *v9; // rdi
  __int64 (__fastcall *v10)(char *, const struct _GUID *, char **); // rax
  int Interface; // eax
  _QWORD v12[13]; // [rsp+0h] [rbp-68h] BYREF
  CSystemAudioDeviceSharedBase *v15; // [rsp+88h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceSharedBase *)operator new(0x190uLL);
    v12[5] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(v7);
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CSystemAudioDeviceSharedBase *)((char *)v9 + 344), v8);
    v6 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 352));
    if ( v6 >= 0 )
    {
      *((_BYTE *)v9 + 392) = 1;
      v6 = 0;
    }
    CSystemAudioDeviceShared::InternalFinalConstructRelease(v9);
    if ( v6
      || ((v10 = **(__int64 (__fastcall ***)(char *, const struct _GUID *, char **))v9,
           v10 != ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface)
        ? (Interface = v10((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *, __int64))(*(_QWORD *)v9 + 168LL))(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
