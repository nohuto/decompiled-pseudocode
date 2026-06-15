/*
 * XREFs of ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140027DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x14002581C (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x1400270A8 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x140027A68 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400287B4 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x140028A88 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CpuManager::RegisterDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r13
  struct IAudioDeviceEndpoint *v4; // r12
  CpuManager *v5; // rsi
  __int64 v6; // rbx
  int v7; // r14d
  char v8; // r15
  struct IUnknown *v9; // rax
  __int64 Node; // rax
  __int64 v11; // rdi
  unsigned int *v13; // rbx
  int v14; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-98h]
  int v17; // [rsp+48h] [rbp-90h] BYREF
  __int64 v18; // [rsp+50h] [rbp-88h] BYREF
  __int64 v19; // [rsp+58h] [rbp-80h] BYREF
  int v20; // [rsp+60h] [rbp-78h] BYREF
  __int64 v21; // [rsp+68h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-68h] BYREF
  char v23; // [rsp+78h] [rbp-60h]
  __int64 v24; // [rsp+80h] [rbp-58h]
  __int64 v25; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v26; // [rsp+90h] [rbp-48h] BYREF

  v24 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v16 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_14;
  v8 = 1;
  v9 = ListKeyForDevice(v4);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v15, (__int64)v9);
  v6 = v15;
  v18 = v15;
  Node = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 200,
           (unsigned int *)&v18,
           &v17,
           (unsigned int *)&v14,
           &v25);
  v11 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
    v6 = v15;
LABEL_9:
    *v3 = (struct DeviceRegistrationToken__ *)v11;
    v11 = 0LL;
    v8 = 0;
    v7 = 0;
    goto LABEL_10;
  }
  v21 = 0LL;
  v20 = 1;
  try
  {
    v19 = v6;
    v11 = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::SetAt(
            (char *)v5 + 200,
            &v19,
            &v20);
    v16 = v11;
  }
  catch ( ATL::CAtlException *v26 )
  {
    v13 = (unsigned int *)v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      _resetstkoflw();
    v14 = *v13;
    v7 = v14;
    v5 = this;
    v11 = v16;
    v6 = v15;
    v8 = 1;
    if ( v14 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, struct IAudioDeviceEndpoint *, __int64))(*(_QWORD *)v5 + 112LL))(
         v5,
         v4,
         v11 + 16);
  if ( v7 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v11 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 200,
      v11);
  if ( v8 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
