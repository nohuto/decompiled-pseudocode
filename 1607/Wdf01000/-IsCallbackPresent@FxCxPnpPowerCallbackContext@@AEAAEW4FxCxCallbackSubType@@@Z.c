/*
 * XREFs of ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C0099094
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C00252A8 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C0099124 (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00991AC (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0099238 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00992C8 (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxCxPnpPowerCallbackContext::IsCallbackPresent(
        FxCxPnpPowerCallbackContext *this,
        unsigned __int8 SubType)
{
  unsigned int m_CallbackType; // r9d
  char v3; // r8
  unsigned int v4; // r9d
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  int v7; // r9d
  bool v8; // zf
  unsigned int v9; // r9d
  unsigned int v10; // r9d

  m_CallbackType = (unsigned __int8)this->m_CallbackType;
  v3 = 0;
  if ( m_CallbackType <= 5 )
  {
    if ( m_CallbackType == 5 )
      goto LABEL_8;
    if ( this->m_CallbackType )
    {
      v4 = m_CallbackType - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
LABEL_7:
            if ( v6 != 1 )
              return v3;
LABEL_8:
            v7 = SubType;
            if ( !SubType )
            {
              if ( this->u.PrepareHardware.PreCallback )
                return 1;
              return v3;
            }
            goto LABEL_9;
          }
        }
      }
    }
    if ( SubType )
    {
      if ( SubType == 1 )
        goto LABEL_10;
      if ( SubType == 2 )
      {
        v8 = this->u.PrepareHardware.CleanupCallback == 0LL;
        return !v8;
      }
      return v3;
    }
    goto LABEL_22;
  }
  v9 = m_CallbackType - 6;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_8;
    v6 = v10 - 1;
    if ( !v6 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v7 = SubType;
  if ( !SubType )
  {
LABEL_22:
    v8 = this->u.PrepareHardware.PreCallback == 0LL;
    return !v8;
  }
LABEL_9:
  if ( v7 == 1 )
  {
LABEL_10:
    v8 = this->u.PrepareHardware.PostCallback == 0LL;
    return !v8;
  }
  return v3;
}
