/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0001DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rsi
  _QWORD *v9; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  unsigned __int8 MajorFunction; // cl
  NTSTATUS v13; // eax
  unsigned int v14; // esi
  int v15; // ecx
  __int64 v16; // rcx
  unsigned __int16 v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _IO_STACK_LOCATION *v21; // rax
  __int64 v22; // r11
  _QWORD *v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  _IO_STACK_LOCATION *v26; // rax
  unsigned __int8 v27; // r15
  unsigned __int8 MinorFunction; // r12
  unsigned int v29; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v31; // [rsp+68h] [rbp+10h] BYREF
  void *PPObject; // [rsp+78h] [rbp+20h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = 0LL;
  v6 = ~Device & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v7) = 0;
  if ( (Device & 1) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 -= v7;
  }
  if ( *(_WORD *)(v6 + 8) == 4098 )
  {
    PPObject = (void *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, &PPObject, (void *)Device, 0x1002u, v7);
    v6 = (unsigned __int64)PPObject;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( !Irp )
    FxVerifierNullBugCheck(*(_FX_DRIVER_GLOBALS **)(v6 + 16), retaddr);
  if ( v8->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(*(_FX_DRIVER_GLOBALS **)(v6 + 16), Device, 0xBu)
     || v8->FxVerifyDownlevel) )
  {
    v19 = (_QWORD *)(v6 + 384);
    if ( (_QWORD *)*v19 != v19 )
    {
      if ( *(_QWORD *)(v6 + 368) != v6 + 368 )
      {
        v20 = (_QWORD *)*v19;
        if ( (_QWORD *)*v19 == v19 )
          goto LABEL_8;
        while ( v20[2] != *(_QWORD *)&DriverGlobals[-7].DisplaceDriverUnload )
        {
          v20 = (_QWORD *)*v20;
          if ( v20 == v19 )
            goto LABEL_8;
        }
      }
      WPP_IFR_SF_(v8, 2u, 0xDu, v18, WPP_FxDeviceApiKm_cpp_Traceguids);
      v31 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v8->Public.DriverName,
        (const char *)&v31,
        v8->Public.DriverName,
        (const char *)&v31);
      if ( v8->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      v6 = (unsigned __int64)PPObject;
    }
  }
LABEL_8:
  v9 = **(_QWORD ***)(v6 + 368);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  v11 = CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v11;
  MajorFunction = v11->MajorFunction;
  if ( (v11->MajorFunction == 22 || MajorFunction == 23 || MajorFunction == 27 && v11->MinorFunction != 2)
    && (v13 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v6 + 144) + 336LL), Irp, &a5, 1u, 0x20u),
        v14 = v13,
        v13 < 0) )
  {
    Irp->IoStatus.Status = v13;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
  }
  else if ( v9 == (_QWORD *)(v6 + 368) )
  {
LABEL_14:
    v15 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    if ( v15 == 22 || v15 == 27 )
    {
      v16 = *(_QWORD *)(v6 + 648);
      if ( !v16 )
LABEL_21:
        v16 = *(_QWORD *)(v6 + 672);
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          v16 = *(_QWORD *)(v6 + 656);
          break;
        case 3u:
        case 4u:
        case 0xEu:
        case 0xFu:
          v16 = *(_QWORD *)(v6 + 640);
          break;
        case 0x17u:
          v16 = *(_QWORD *)(v6 + 664);
          break;
        default:
          goto LABEL_21;
      }
    }
    return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v16 + 64LL))(v16, Irp);
  }
  else
  {
    v21 = Irp->Tail.Overlay.CurrentStackLocation;
    v22 = 3LL * v21->MajorFunction;
    while ( 1 )
    {
      v23 = v9;
      v9 = (_QWORD *)*v9;
      if ( v23[v22 + 2] )
        break;
LABEL_43:
      if ( v9 == (_QWORD *)(v6 + 368) )
        goto LABEL_14;
    }
    v24 = v23[v22 + 3];
    if ( v24 )
    {
      v25 = 0;
      while ( *(_BYTE *)(v25 + v23[v22 + 4]) != v21->MinorFunction )
      {
        if ( ++v25 >= v24 )
          goto LABEL_43;
      }
    }
    v26 = Irp->Tail.Overlay.CurrentStackLocation;
    v27 = v26->MajorFunction;
    MinorFunction = v26->MinorFunction;
    if ( *((_BYTE *)v23 + 688) )
    {
      if ( *(_WORD *)(v6 + 10) )
        v5 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v29 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v23[3 * v27 + 2])(v5, Irp, v9);
    }
    else
    {
      if ( *(_WORD *)(v6 + 10) )
        v5 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v29 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *))v23[3 * v27 + 2])(v5, Irp);
    }
    v14 = v29;
    if ( v27 >= 0x16u && (v27 <= 0x17u || v27 == 27 && MinorFunction != 2) )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v6 + 144) + 336LL), Irp, 0x20u);
  }
  return v14;
}
