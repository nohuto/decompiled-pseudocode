/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C006FA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdid @ 0x1C006E03C (WPP_IFR_SF_qdid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D114C (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 RequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  FxRequest *v8; // r10
  __int64 v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 *v11; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v14; // r8
  int v15; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  unsigned __int8 v20; // dl
  unsigned __int64 v21; // rax
  unsigned __int16 v22; // r9
  const _GUID *Offset; // [rsp+20h] [rbp-40h]
  FxRequest *pRequest; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  int irql; // [rsp+98h] [rbp+38h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v8 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (Request & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxRequest *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4104 )
  {
    pRequest = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pRequest, (void *)Request, 0x1008u, v9);
    v8 = pRequest;
  }
  m_Globals = v8->m_Globals;
  if ( !OutputBuffer )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  v11 = Length;
  *OutputBuffer = 0LL;
  if ( v11 )
    *v11 = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      irql = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
    FxNonPagedObject::Lock(v8, (unsigned __int8 *)&irql, RequiredLength);
    if ( m_Globals->FxVerifierOn )
      v15 = FxRequest::Vf_VerifyRequestIsInCallerContext(pRequest, m_Globals);
    else
      v15 = 0;
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && pRequest[-1].m_ForwardProgressQueue )
      FxVerifierLock::Unlock((FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue, irql, v14);
    else
      KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, irql);
    if ( v15 < 0 )
      return (unsigned int)v15;
    v8 = pRequest;
  }
  CurrentStackLocation = v8->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  v18 = *((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6);
  if ( CurrentStackLocation->MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v19 = 35;
LABEL_30:
      v20 = 5;
LABEL_50:
      WPP_IFR_SF_qd(m_Globals, v20, 0x10u, v19, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
      return 3221225488LL;
    }
    return 3221225488LL;
  }
  if ( MajorFunction == 15 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v19 = 36;
      goto LABEL_30;
    }
    return 3221225488LL;
  }
  if ( MajorFunction == 14 )
  {
    if ( (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3 )
    {
      v21 = CurrentStackLocation->Parameters.Read.Length;
      if ( v21 < RequiredLength )
      {
        if ( !m_Globals->FxVerboseOn )
          return 3221225507LL;
        v22 = 37;
LABEL_39:
        WPP_IFR_SF_qdid(
          m_Globals,
          (unsigned __int8)CurrentStackLocation,
          v18,
          v22,
          Offset,
          (const void *)Request,
          v21,
          RequiredLength);
        return 3221225507LL;
      }
      goto LABEL_41;
    }
LABEL_49:
    v19 = 39;
    v20 = 2;
    goto LABEL_50;
  }
  if ( MajorFunction != 3 || *(_DWORD *)(v18 + 212) != 1 )
    goto LABEL_49;
  v21 = CurrentStackLocation->Parameters.Read.Length;
  if ( v21 < RequiredLength )
  {
    if ( !m_Globals->FxVerboseOn )
      return 3221225507LL;
    v22 = 38;
    goto LABEL_39;
  }
LABEL_41:
  *OutputBuffer = v8->m_Irp.m_Irp->UserBuffer;
  if ( v11 )
    *v11 = v8->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  return 0LL;
}
