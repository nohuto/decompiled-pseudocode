/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C000DF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcLq @ 0x1C000E1C0 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C002BE74 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C002BF50 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcq @ 0x1C002F624 (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int _a3; // r8d
  unsigned __int8 MinorFunction; // cl
  _FX_DRIVER_GLOBALS *v7; // rax
  unsigned __int8 v8; // di
  FxPkgPnp_vtbl *v9; // rax
  int (__fastcall *FireAndForgetIrp)(FxPkgPnp *, FxIrp *); // rax
  FxDeviceBase *v12; // rcx
  _DEVICE_OBJECT *_a2; // rax
  const void *_a1; // rcx
  FxDeviceBase *v15; // rcx
  unsigned int Length; // r9d
  _DEVICE_OBJECT *v17; // rax
  const void *v18; // rcx
  FxDeviceBase *v19; // rcx
  unsigned int id; // r9d
  _DEVICE_OBJECT *v21; // rax
  const void *v22; // rcx
  unsigned __int8 v23; // di
  FxPkgPnp_vtbl *v24; // rax
  FxDeviceBase *v25; // rcx
  _DEVICE_OBJECT *v26; // r10
  const void *v27; // rcx
  _FX_DRIVER_GLOBALS *v28; // rax
  FxDeviceBase *v29; // rcx
  _DEVICE_OBJECT *v30; // r10
  const void *v31; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // r10
  const void *v34; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  _IRP *v36; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v36 = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Irp = v36;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  _a3 = CurrentStackLocation->MinorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( (_BYTE)_a3 && MinorFunction != 2 )
    {
      v28 = this->m_Globals;
      if ( !v28->FxVerboseOn )
      {
LABEL_30:
        v23 = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
        v24 = this->__vftable;
        if ( v23 > 3u )
          FireAndForgetIrp = v24->FireAndForgetIrp;
        else
          FireAndForgetIrp = v24->GetDispatchPower(this)[v23];
        return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))FireAndForgetIrp)(this, &v36);
      }
      m_DeviceBase = this->m_DeviceBase;
      m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        v34 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v34 = 0LL;
      WPP_IFR_SF_qqcq(v28, 5u, 0xCu, 0x13u, WPP_FxPkgPnp_cpp_Traceguids, v34, m_DeviceObject, _a3, Irp);
    }
    else if ( CurrentStackLocation->Parameters.Create.Options )
    {
      v19 = this->m_DeviceBase;
      id = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v21 = v19->m_DeviceObject.m_DeviceObject;
      if ( v19->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      WPP_IFR_SF_qqcqL(this->m_Globals, (unsigned __int8)Irp, _a3, id, traceGuid, v22, v21, _a3, Irp, id);
    }
    else
    {
      v25 = this->m_DeviceBase;
      v26 = v25->m_DeviceObject.m_DeviceObject;
      if ( v25->m_ObjectSize )
        v27 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v27 = 0LL;
      WPP_IFR_SF_qqcqLd(
        this->m_Globals,
        (unsigned __int8)Irp,
        _a3,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        traceGuid,
        v27,
        v26,
        _a3,
        Irp,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1);
    }
    Irp = v36;
    goto LABEL_30;
  }
  if ( MinorFunction >= 0x11u || (unsigned __int8)_a3 < 8u )
  {
    if ( MinorFunction == 7 )
    {
      v15 = this->m_DeviceBase;
      Length = CurrentStackLocation->Parameters.Read.Length;
      v17 = v15->m_DeviceObject.m_DeviceObject;
      if ( v15->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qqcLq(this->m_Globals, (unsigned __int8)Irp, _a3, Length, traceGuid, v18, v17, _a3, Length, Irp);
      goto LABEL_22;
    }
    if ( MinorFunction <= 6u || MinorFunction == 20 || MinorFunction == 17 || MinorFunction == 23 )
    {
      v12 = this->m_DeviceBase;
      _a2 = v12->m_DeviceObject.m_DeviceObject;
      if ( v12->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqcq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2, _a3, Irp);
      Irp = v36;
      goto LABEL_7;
    }
  }
  v7 = this->m_Globals;
  if ( v7->FxVerboseOn )
  {
    v29 = this->m_DeviceBase;
    v30 = v29->m_DeviceObject.m_DeviceObject;
    if ( v29->m_ObjectSize )
      v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v31 = 0LL;
    WPP_IFR_SF_qqcq(v7, 5u, 0xCu, 0x10u, WPP_FxPkgPnp_cpp_Traceguids, v31, v30, _a3, Irp);
LABEL_22:
    Irp = v36;
  }
LABEL_7:
  v8 = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v9 = this->__vftable;
  if ( v8 > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v9->FireAndForgetIrp)(this, &v36);
  FireAndForgetIrp = v9->GetDispatchPnp(this)[v8];
  return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))FireAndForgetIrp)(this, &v36);
}
