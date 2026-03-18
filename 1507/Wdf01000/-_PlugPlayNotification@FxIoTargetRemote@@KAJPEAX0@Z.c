/*
 * XREFs of ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::_PlugPlayNotification(char *NotificationStructure, FxIoTargetRemote *Context)
{
  unsigned int RefCount; // edx
  WDFIOTARGET__ *v5; // rbx
  FxTagTracker *EaBuffer; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char *v8; // rbp
  const void *v9; // rax
  int (__fastcall *m_Method)(WDFIOTARGET__ *); // rax
  int v11; // eax
  const void *v12; // rax
  FxIoTargetRemoteCloseReason v13; // edx
  const void *v14; // rax
  void (__fastcall *v15)(WDFIOTARGET__ *); // rax
  const void *v16; // rax
  const void *v17; // rax
  unsigned __int64 v18; // rcx
  _WDF_IO_TARGET_OPEN_PARAMS params; // [rsp+30h] [rbp-98h] BYREF

  RefCount = _InterlockedIncrement(&Context->m_Refcnt);
  v5 = 0LL;
  if ( SLOBYTE(Context->m_ObjectFlags) >= 0 )
    EaBuffer = 0LL;
  else
    EaBuffer = (FxTagTracker *)Context[-1].m_OpenParams.EaBuffer;
  if ( EaBuffer )
    FxTagTracker::UpdateTagHistory(
      EaBuffer,
      FxIoTargetRemote::_PlugPlayNotification,
      51,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp",
      TagAddRef,
      RefCount);
  m_Globals = Context->m_Globals;
  v8 = NotificationStructure + 4;
  if ( RtlCompareMemory(v8, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v9 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v9 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v9);
    }
    m_Method = Context->m_EvtQueryRemove.m_Method;
    if ( m_Method )
    {
      if ( Context->m_ObjectSize )
        v5 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      v11 = m_Method(v5);
LABEL_52:
      LODWORD(v5) = v11;
      goto LABEL_53;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v12 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v12 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v12);
    }
    v13 = FxIoTargetRemoteCloseReasonQueryRemove;
    goto LABEL_35;
  }
  if ( RtlCompareMemory(v8, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
    }
    v15 = Context->m_EvtRemoveComplete.m_Method;
    if ( !v15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( Context->m_ObjectSize )
          v16 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v16 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xDu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v16);
      }
      v13 = FxIoTargetRemoteCloseReasonPlainClose;
LABEL_35:
      FxIoTargetRemote::Close(Context, v13);
      goto LABEL_53;
    }
  }
  else
  {
    if ( RtlCompareMemory(v8, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) != 16 )
      goto LABEL_53;
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v17);
    }
    v15 = Context->m_EvtRemoveCanceled.m_Method;
    if ( !v15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( Context->m_ObjectSize )
          v5 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v5);
      }
      memset(&params, 0, sizeof(params));
      params.Size = 136;
      params.Type = WdfIoTargetOpenReopen;
      v11 = FxIoTargetRemote::Open(Context, &params);
      goto LABEL_52;
    }
  }
  if ( Context->m_ObjectSize )
    v18 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v18 = 0LL;
  v15((WDFIOTARGET__ *)v18);
LABEL_53:
  Context->Release(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    136,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  return (unsigned int)v5;
}
