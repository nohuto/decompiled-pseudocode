/*
 * XREFs of ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00878C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002EA58 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C0031D6C (FxIsEqualGuid.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

__int64 __fastcall FxIoTargetRemote::_PlugPlayNotification(char *NotificationStructure, FxIoTargetRemote *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  const _GUID *v5; // rbx
  unsigned int v6; // edi
  unsigned __int8 v7; // r8
  const void *_a1; // rcx
  int (__fastcall *m_Method)(WDFIOTARGET__ *); // rax
  unsigned __int64 v10; // rcx
  int v11; // eax
  const void *v12; // r8
  int v13; // edx
  const void *v14; // rcx
  void (__fastcall *v15)(WDFIOTARGET__ *); // rax
  const void *v16; // rcx
  const void *v17; // rcx
  unsigned __int64 v18; // rcx
  const void *v19; // rcx
  _WDF_IO_TARGET_OPEN_PARAMS params; // [rsp+30h] [rbp-98h] BYREF

  FxObject::AddRef(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    51,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  m_Globals = Context->m_Globals;
  v5 = (const _GUID *)(NotificationStructure + 4);
  v6 = 0;
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1);
    }
    m_Method = Context->m_EvtQueryRemove.m_Method;
    if ( m_Method )
    {
      v10 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Context->m_ObjectSize )
        v10 = 0LL;
      v11 = m_Method((WDFIOTARGET__ *)v10);
LABEL_41:
      v6 = v11;
      goto LABEL_42;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v12 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v12);
    }
    v13 = 1;
    goto LABEL_26;
  }
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v14 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
    }
    v15 = Context->m_EvtRemoveComplete.m_Method;
    if ( !v15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v16 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !Context->m_ObjectSize )
          v16 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xDu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v16);
      }
      v13 = 2;
LABEL_26:
      FxIoTargetRemote::Close(Context, v13, v7);
      goto LABEL_42;
    }
  }
  else
  {
    if ( !FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED) )
      goto LABEL_42;
    if ( m_Globals->FxVerboseOn )
    {
      v17 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v17);
    }
    v15 = Context->m_EvtRemoveCanceled.m_Method;
    if ( !v15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v19 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !Context->m_ObjectSize )
          v19 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v19);
      }
      memset(&params, 0, sizeof(params));
      params.Size = 136;
      params.Type = WdfIoTargetOpenReopen;
      v11 = FxIoTargetRemote::Open(Context, &params);
      goto LABEL_41;
    }
  }
  v18 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !Context->m_ObjectSize )
    v18 = 0LL;
  v15((WDFIOTARGET__ *)v18);
LABEL_42:
  Context->Release(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    136,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  return v6;
}
