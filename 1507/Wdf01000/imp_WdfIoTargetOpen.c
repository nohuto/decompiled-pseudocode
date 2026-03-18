/*
 * XREFs of imp_WdfIoTargetOpen @ 0x1C00214A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1C00215BC (FxIoTargetValidateOpenParams.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  WDFIOTARGET__ *_a1; // rdi
  FxIoTargetRemote *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v8; // dl
  size_t Size; // rbp
  int result; // eax
  int _a2; // eax
  int v12; // esi
  unsigned __int8 CurrentIrql; // al
  _DWORD v14[46]; // [rsp+40h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+10h] BYREF
  FxIoTargetRemote *pTarget; // [rsp+118h] [rbp+20h] BYREF

  _a1 = (WDFIOTARGET__ *)IoTarget;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1201uLL);
  v5 = (FxIoTargetRemote *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LODWORD(IoTarget) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    IoTarget = LOWORD(v5->__vftable);
    v5 = (FxIoTargetRemote *)((char *)v5 - IoTarget);
  }
  if ( v5->m_Type == 4609 )
  {
    pTarget = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pTarget, _a1, 0x1201u, IoTarget);
    v5 = pTarget;
  }
  m_Globals = v5->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x14u, WPP_FxIoTargetAPI_cpp_Traceguids, _a1);
  if ( !OpenParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v16 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v16,
      m_Globals->Public.DriverName,
      (const char *)&v16);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, IoTarget, 0xDu);
    Size = OpenParams->Size;
    if ( (((_DWORD)Size - 120) & 0xFFFFFFEF) != 0 )
    {
      WPP_IFR_SF_DDd(
        m_Globals,
        v8,
        0xEu,
        0x15u,
        WPP_FxIoTargetAPI_cpp_Traceguids,
        Size,
        IsVersionGreaterThanOrEqualTo != 0 ? 136 : 120,
        -1073741820);
      return -1073741820;
    }
    else
    {
      if ( (unsigned int)Size < 0x88 )
      {
        memset(v14, 0, 0x88uLL);
        memmove(v14, OpenParams, Size);
        v14[0] = 136;
        OpenParams = (_WDF_IO_TARGET_OPEN_PARAMS *)v14;
      }
      result = FxIoTargetValidateOpenParams(m_Globals, OpenParams);
      if ( result >= 0 )
      {
        _a2 = FxIoTargetRemote::Open(pTarget, OpenParams);
        v12 = _a2;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, _a2);
        return v12;
      }
    }
  }
  return result;
}
