/*
 * XREFs of ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083360
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002D058 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C002F130 (FxIsEqualGuid.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0084FF4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::_PlugPlayNotification(char *NotificationStructure, FxIoTargetRemote *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  const _GUID *v5; // rbx
  WDFIOTARGET__ *v6; // rdi
  const void *_a1; // rax
  int (__fastcall *m_Method)(WDFIOTARGET__ *); // rax
  int v9; // eax
  const void *v10; // rax
  FxIoTargetRemoteCloseReason v11; // edx
  const void *v12; // rax
  void (__fastcall *v13)(WDFIOTARGET__ *); // rax
  const void *v14; // rax
  const void *v15; // rax
  unsigned __int64 v16; // rcx
  _WDF_IO_TARGET_OPEN_PARAMS params; // [rsp+30h] [rbp-98h] BYREF

  FxObject::AddRef(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    51,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  m_Globals = Context->m_Globals;
  v5 = (const _GUID *)(NotificationStructure + 4);
  v6 = 0LL;
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1);
    }
    m_Method = Context->m_EvtQueryRemove.m_Method;
    if ( m_Method )
    {
      if ( Context->m_ObjectSize )
        v6 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      v9 = m_Method(v6);
LABEL_47:
      LODWORD(v6) = v9;
      goto LABEL_48;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v10 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v10);
    }
    v11 = FxIoTargetRemoteCloseReasonQueryRemove;
    goto LABEL_30;
  }
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v12 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v12 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v12);
    }
    v13 = Context->m_EvtRemoveComplete.m_Method;
    if ( !v13 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( Context->m_ObjectSize )
          v14 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v14 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xDu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
      }
      v11 = FxIoTargetRemoteCloseReasonPlainClose;
LABEL_30:
      FxIoTargetRemote::Close(Context, v11);
      goto LABEL_48;
    }
  }
  else
  {
    if ( !FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED) )
      goto LABEL_48;
    if ( m_Globals->FxVerboseOn )
    {
      if ( Context->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v15);
    }
    v13 = Context->m_EvtRemoveCanceled.m_Method;
    if ( !v13 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( Context->m_ObjectSize )
          v6 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v6);
      }
      memset(&params, 0, sizeof(params));
      params.Size = 136;
      params.Type = WdfIoTargetOpenReopen;
      v9 = FxIoTargetRemote::Open(Context, &params);
      goto LABEL_47;
    }
  }
  if ( Context->m_ObjectSize )
    v16 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v16 = 0LL;
  v13((WDFIOTARGET__ *)v16);
LABEL_48:
  Context->Release(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    136,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  return (unsigned int)v6;
}
