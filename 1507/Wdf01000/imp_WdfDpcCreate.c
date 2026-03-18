/*
 * XREFs of imp_WdfDpcCreate @ 0x1C0066780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0068574 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDpcCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDPC__ **Dpc)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  int v8; // ebx
  unsigned __int64 ParentObject; // r8
  int result; // eax
  FxObject *v11; // rcx
  __int64 v12; // rdx
  unsigned __int16 v13; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int Size; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !Attributes )
  {
    v8 = -1071644142;
    WPP_IFR_SF_d(v4, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_hpp_Traceguids, -1071644142);
    return v8;
  }
  if ( Attributes->Size != 56 )
  {
    v8 = -1073741820;
    WPP_IFR_SF_qddd(
      v4,
      (unsigned __int8)Config,
      6u,
      0xBu,
      WPP_FxValidateFunctions_hpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    return v8;
  }
  ParentObject = (unsigned __int64)Attributes->ParentObject;
  if ( !ParentObject )
  {
    v8 = -1071644142;
    WPP_IFR_SF_qd(v4, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, -1071644142);
    return v8;
  }
  v11 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v12) = 0;
  if ( (ParentObject & 1) != 0 )
  {
    v12 = LOWORD(v11->__vftable);
    v11 = (FxObject *)((char *)v11 - v12);
  }
  v13 = 4096;
  if ( v11->m_Type == 4096 )
  {
    pParent = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pParent, (void *)ParentObject, 0x1000u, v12);
    v11 = pParent;
  }
  m_Globals = v11->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(v11->m_Globals, retaddr);
  if ( !Dpc )
    FxVerifierNullBugCheck(v11->m_Globals, retaddr);
  Size = Config->Size;
  if ( Config->Size != 24 )
  {
    v8 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v12, 0x12u, 0xAu, WPP_FxDpcApi_cpp_Traceguids, Size, 24, -1073741820);
    return v8;
  }
  result = FxValidateObjectAttributes(v11->m_Globals, Attributes, 0, v13);
  if ( result >= 0 )
    return FxDpc::_Create(m_Globals, Config, Attributes, pParent, Dpc);
  return result;
}
