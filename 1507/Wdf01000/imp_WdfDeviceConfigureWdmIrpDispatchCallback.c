/*
 * XREFs of imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1C006C7F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 */

__int64 __fastcall imp_WdfDeviceConfigureWdmIrpDispatchCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 Driver,
        unsigned __int8 MajorFunction,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  FxCxDeviceInfo *i; // rbx
  unsigned __int16 *_a1; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v11; // rdi
  FxObject *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned __int16 v15; // r9
  void *v17; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  void *PPObject; // [rsp+78h] [rbp+10h] BYREF

  PPObject = 0LL;
  i = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  _a1 = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = *_a1;
    _a1 = (unsigned __int16 *)((char *)_a1 - Offset);
  }
  if ( _a1[4] == 4098 )
  {
    PPObject = _a1;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)_a1, &PPObject, (void *)Device, 0x1002u, Offset);
    _a1 = (unsigned __int16 *)PPObject;
  }
  v11 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)_a1 + 2);
  if ( Driver )
  {
    v12 = (FxObject *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v13) = 0;
    if ( (Driver & 1) != 0 )
    {
      v13 = LOWORD(v12->__vftable);
      v12 = (FxObject *)((char *)v12 - v13);
    }
    if ( v12->m_Type == 4097 )
    {
      v17 = v12;
    }
    else
    {
      FxObjectHandleGetPtrQI(v12, &v17, (void *)Driver, 0x1001u, v13);
      _a1 = (unsigned __int16 *)PPObject;
      v12 = (FxObject *)v17;
    }
    for ( i = (FxCxDeviceInfo *)*((_QWORD *)_a1 + 48);
          i != (FxCxDeviceInfo *)(_a1 + 192);
          i = (FxCxDeviceInfo *)i->ListEntry.Flink )
    {
      if ( i->Driver == v12 )
        goto LABEL_19;
    }
    i = 0LL;
  }
LABEL_19:
  if ( !EvtDeviceWdmIrpDispatch )
    FxVerifierNullBugCheck(v11, retaddr);
  if ( !*((_BYTE *)_a1 + 221) )
  {
    if ( *((_DWORD *)_a1 + 50) != 261 )
    {
      v14 = -1073741436;
      v15 = 28;
      goto LABEL_26;
    }
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           *((FxPkgIo **)_a1 + 80),
                           MajorFunction,
                           i,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  }
  if ( (*(_DWORD *)(*((_QWORD *)_a1 + 18) + 48LL) & 0x80u) != 0 )
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           *((FxPkgIo **)_a1 + 80),
                           MajorFunction,
                           i,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  v14 = -1073741436;
  v15 = 27;
LABEL_26:
  WPP_IFR_SF_qd(v11, 2u, 0xCu, v15, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, -1073741436);
  return v14;
}
