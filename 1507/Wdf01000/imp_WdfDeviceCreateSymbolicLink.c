/*
 * XREFs of imp_WdfDeviceCreateSymbolicLink @ 0x1C000A660
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C000A744 (--1FxAutoString@@QEAA@XZ.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000E28C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateSymbolicLink(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _UNICODE_STRING *SymbolicLinkName)
{
  WDFDEVICE__ *_a1; // rbp
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned int SymbolicLink; // ebx
  unsigned __int16 v11; // r9
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v13; // r9
  FxAutoString pdoName; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v16; // [rsp+88h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&pdoName.m_UnicodeString.Length = 0LL;
  pdoName.m_UnicodeString.Buffer = 0LL;
  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = pDevice;
  }
  m_Globals = v5->m_Globals;
  if ( !SymbolicLinkName )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  Length = SymbolicLinkName->Length;
  if ( !SymbolicLinkName->Length )
  {
    v11 = 28;
    goto LABEL_22;
  }
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    if ( (Length & 1) != 0 )
    {
      _a2 = Length;
      v13 = 13;
    }
    else
    {
      LOWORD(_a2) = SymbolicLinkName->MaximumLength;
      if ( (_a2 & 1) != 0 )
      {
        _a2 = (unsigned __int16)_a2;
        v13 = 14;
      }
      else
      {
        if ( !(_WORD)_a2 || SymbolicLinkName->Buffer )
        {
          if ( Length > (unsigned __int16)_a2 )
          {
            SymbolicLink = -1073741811;
            WPP_IFR_SF_qddd(
              m_Globals,
              Length,
              6u,
              0x10u,
              WPP_FxValidateFunctions_hpp_Traceguids_0,
              SymbolicLinkName,
              Length,
              (unsigned __int16)_a2,
              -1073741811);
            goto LABEL_16;
          }
          if ( !v5->m_SymbolicLinkName.Buffer )
          {
            SymbolicLink = FxDevice::CreateSymbolicLink(v5, v5->m_Globals, SymbolicLinkName);
            goto LABEL_16;
          }
          v11 = 29;
LABEL_22:
          SymbolicLink = -1073741808;
          WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v11, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741808);
          goto LABEL_16;
        }
        _a2 = (unsigned __int16)_a2;
        v13 = 15;
      }
    }
    SymbolicLink = -1073741811;
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v13, WPP_FxValidateFunctions_hpp_Traceguids_0, SymbolicLinkName, _a2, -1073741811);
    goto LABEL_16;
  }
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
  SymbolicLink = -1073741808;
LABEL_16:
  FxAutoString::~FxAutoString(&pdoName);
  return SymbolicLink;
}
