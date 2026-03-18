/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1C0079890
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdid @ 0x1C0078A48 (WPP_IFR_SF_qdid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4614 (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **InputBuffer,
        unsigned __int64 *Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 *v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  int v13; // esi
  FxRequest *v14; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int16 v17; // r9
  unsigned __int64 Options; // rax
  unsigned __int16 v19; // r9
  unsigned __int64 v20; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !InputBuffer )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *InputBuffer = 0LL;
  v9 = Length;
  if ( Length )
    *Length = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock(pRequest, &irql, v11);
      v13 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsInCallerContext(pRequest, m_Globals) : 0;
      FxNonPagedObject::Unlock(pRequest, irql, v12);
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
    v14 = pRequest;
    CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 3 )
    {
      if ( !m_Globals->FxVerboseOn )
        return 3221225488LL;
      v17 = 29;
LABEL_15:
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, v17, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
      return 3221225488LL;
    }
    if ( MajorFunction == 15 )
    {
      if ( !m_Globals->FxVerboseOn )
        return 3221225488LL;
      v17 = 30;
      goto LABEL_15;
    }
    if ( MajorFunction == 14 )
    {
      if ( (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3 )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
        if ( Options < RequiredLength )
        {
          if ( !m_Globals->FxVerboseOn )
            return 3221225507LL;
          v19 = 31;
LABEL_24:
          WPP_IFR_SF_qdid(
            m_Globals,
            (unsigned __int8)CurrentStackLocation,
            (unsigned int)pRequest,
            v19,
            traceGuid,
            Request,
            Options,
            RequiredLength);
          return 3221225507LL;
        }
        *InputBuffer = CurrentStackLocation->Parameters.CreatePipe.Parameters;
        if ( v9 )
        {
          v20 = v14->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
LABEL_28:
          *v9 = v20;
          return 0LL;
        }
        return 0LL;
      }
    }
    else if ( MajorFunction == 4
           && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
    {
      Options = CurrentStackLocation->Parameters.Read.Length;
      if ( Options < RequiredLength )
      {
        if ( !m_Globals->FxVerboseOn )
          return 3221225507LL;
        v19 = 32;
        goto LABEL_24;
      }
      *InputBuffer = pRequest->m_Irp.m_Irp->UserBuffer;
      if ( v9 )
      {
        v20 = v14->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
        goto LABEL_28;
      }
      return 0LL;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  return result;
}
