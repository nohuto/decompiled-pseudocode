/*
 * XREFs of ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140029280
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x140026A3C (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140028578 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x140028ECC (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140029B48 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x140029D94 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CpuManager::RegisterDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct IAudioDeviceEndpoint *v3; // r13
  CpuManager *v4; // r15
  __int64 v5; // rbx
  int v6; // esi
  char v7; // r12
  struct IUnknown *v8; // rax
  __int64 Node; // rax
  struct DeviceRegistrationToken__ *v10; // r14
  unsigned int *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+38h] [rbp-A0h] BYREF
  struct DeviceRegistrationToken__ *v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+48h] [rbp-90h] BYREF
  int v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-78h] BYREF
  char v20; // [rsp+68h] [rbp-70h]
  int v21; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+78h] [rbp-60h]
  _QWORD v23[2]; // [rsp+80h] [rbp-58h] BYREF
  ATL::CAtlException *v24; // [rsp+90h] [rbp-48h] BYREF

  v23[1] = -2LL;
  v3 = a2;
  v4 = this;
  v15 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  v6 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 128LL))(v4);
  if ( v6 < 0 )
    goto LABEL_14;
  v7 = 1;
  v8 = ListKeyForDevice(v3);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v13, (__int64)v8);
  v5 = v13;
  v18 = v13;
  Node = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v4 + 200,
           (unsigned int *)&v18,
           &v17,
           (unsigned int *)&v14,
           v23);
  v10 = (struct DeviceRegistrationToken__ *)Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
    v5 = v13;
LABEL_9:
    *a3 = v10;
    v10 = 0LL;
    v7 = 0;
    v6 = 0;
    goto LABEL_10;
  }
  v22 = 0LL;
  v21 = 1;
  try
  {
    v16 = v5;
    v10 = (struct DeviceRegistrationToken__ *)ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::SetAt(
                                                (char *)v4 + 200,
                                                &v16,
                                                &v21);
    v15 = v10;
  }
  catch ( ATL::CAtlException *v24 )
  {
    v12 = (unsigned int *)v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _resetstkoflw();
    v14 = *v12;
    v6 = v14;
    v4 = this;
    v10 = v15;
    v5 = v13;
    v7 = 1;
    if ( v14 < 0 )
      goto LABEL_10;
    v3 = a2;
  }
  v6 = (*(__int64 (__fastcall **)(CpuManager *, struct IAudioDeviceEndpoint *, __int64))(*(_QWORD *)v4 + 112LL))(
         v4,
         v3,
         (__int64)v10 + 16);
  if ( v6 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v10 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)v4 + 200,
      v10);
  if ( v7 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 136LL))(v4);
LABEL_14:
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
