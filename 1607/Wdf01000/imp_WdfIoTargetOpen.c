/*
 * XREFs of imp_WdfIoTargetOpen @ 0x1C002D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002D058 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1C002D6F4 (FxIoTargetValidateOpenParams.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  unsigned int v7; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v9; // dl
  size_t Size; // rsi
  int v11; // eax
  int v12; // edi
  _DWORD v13[36]; // [rsp+40h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  FxIoTargetRemote *pTarget; // [rsp+F0h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)IoTarget,
    0x1201u,
    (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x14u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( !OpenParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v7, 0xDu);
    Size = OpenParams->Size;
    if ( (((_DWORD)Size - 120) & 0xFFFFFFEF) != 0 )
    {
      v12 = -1073741820;
      WPP_IFR_SF_DDd(
        m_Globals,
        v9,
        0xEu,
        0x15u,
        WPP_FxIoTargetAPI_cpp_Traceguids,
        Size,
        IsVersionGreaterThanOrEqualTo ? 136 : 120,
        -1073741820);
      return v12;
    }
    if ( (unsigned int)Size < 0x88 )
    {
      memset(v13, 0, 0x88uLL);
      memmove(v13, OpenParams, Size);
      v13[0] = 136;
      OpenParams = (_WDF_IO_TARGET_OPEN_PARAMS *)v13;
    }
    result = FxIoTargetValidateOpenParams(m_Globals, OpenParams);
    if ( result >= 0 )
    {
      v11 = FxIoTargetRemote::Open(pTarget, OpenParams);
      v12 = v11;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v11);
      return v12;
    }
  }
  return result;
}
