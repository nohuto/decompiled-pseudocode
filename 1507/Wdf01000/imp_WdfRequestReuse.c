/*
 * XREFs of imp_WdfRequestReuse @ 0x1C001FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0020590 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  __int64 Offset; // r8
  FxRequest *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // edx
  int v9; // eax
  unsigned int _a2; // edx
  int _a3; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+58h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  LOWORD(Offset) = 0;
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !ReuseParams )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( ReuseParams->Size == 24 )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    Major = WdfBindInfo->Version.Major;
    if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      v9 = 3;
    else
      v9 = 1;
    _a2 = ReuseParams->Flags;
    _a3 = ~v9;
    if ( (_a2 & _a3) != 0 )
    {
      WPP_IFR_SF_DDd(m_Globals, _a2, 0x10u, 0xDu, WPP_FxRequestApi_cpp_Traceguids, _a2, _a3, -1073741811);
      return -1073741811;
    }
    else
    {
      return FxRequest::Reuse(v5, ReuseParams);
    }
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      ReuseParams->Size,
      0x10u,
      0xCu,
      WPP_FxRequestApi_cpp_Traceguids,
      ReuseParams->Size,
      24,
      -1073741811);
    return -1073741811;
  }
}
