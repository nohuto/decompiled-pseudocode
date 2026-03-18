/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C0065CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdid @ 0x1C0064D24 (WPP_IFR_SF_qdid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA04C (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 *v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  int v13; // esi
  FxRequest *v14; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned __int8 MajorFunction; // al
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // dl
  unsigned __int64 level; // rax
  unsigned __int16 v20; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !OutputBuffer )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *OutputBuffer = 0LL;
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
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v17 = 35;
LABEL_15:
        v18 = 5;
LABEL_35:
        WPP_IFR_SF_qd(m_Globals, v18, 0x10u, v17, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
        return 3221225488LL;
      }
      return 3221225488LL;
    }
    if ( MajorFunction == 15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v17 = 36;
        goto LABEL_15;
      }
      return 3221225488LL;
    }
    if ( MajorFunction == 14 )
    {
      if ( (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3 )
      {
        level = CurrentStackLocation->Parameters.Read.Length;
        if ( level < RequiredLength )
        {
          if ( !m_Globals->FxVerboseOn )
            return 3221225507LL;
          v20 = 37;
LABEL_24:
          WPP_IFR_SF_qdid(
            m_Globals,
            (unsigned __int8)pRequest,
            (unsigned int)CurrentStackLocation,
            v20,
            traceGuid,
            Request,
            level,
            RequiredLength);
          return 3221225507LL;
        }
LABEL_26:
        *OutputBuffer = pRequest->m_Irp.m_Irp->UserBuffer;
        if ( v9 )
          *v9 = v14->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
        return 0LL;
      }
    }
    else if ( MajorFunction == 3
           && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
    {
      level = CurrentStackLocation->Parameters.Read.Length;
      if ( level < RequiredLength )
      {
        if ( !m_Globals->FxVerboseOn )
          return 3221225507LL;
        v20 = 38;
        goto LABEL_24;
      }
      goto LABEL_26;
    }
    v17 = 39;
    v18 = 2;
    goto LABEL_35;
  }
  return result;
}
