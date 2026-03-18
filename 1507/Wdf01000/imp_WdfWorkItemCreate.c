/*
 * XREFs of imp_WdfWorkItemCreate @ 0x1C001F260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001F3B4 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int64 ParentObject; // r8
  FxObject *v9; // rcx
  __int64 Offset; // rdx
  unsigned __int16 v11; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int Size; // eax
  int result; // eax
  int _a1; // ebx
  const _GUID *v16; // rax
  unsigned __int16 v17; // r9
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !Attributes )
  {
    _a1 = -1071644142;
    v16 = WPP_FxValidateFunctions_hpp_Traceguids;
    v17 = 10;
LABEL_17:
    WPP_IFR_SF_d(v4, 2u, 0x12u, v17, v16, _a1);
    return _a1;
  }
  if ( Attributes->Size != 56 )
  {
    _a1 = -1073741820;
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
    return _a1;
  }
  ParentObject = (unsigned __int64)Attributes->ParentObject;
  if ( !ParentObject )
  {
    _a1 = -1071644142;
    WPP_IFR_SF_qd(v4, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, -1071644142);
    return _a1;
  }
  v9 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (ParentObject & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - Offset);
  }
  v11 = 4096;
  if ( v9->m_Type == 4096 )
  {
    pParent = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pParent, (void *)ParentObject, 0x1000u, Offset);
    v9 = pParent;
  }
  m_Globals = v9->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( !WorkItem )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  Size = Config->Size;
  if ( Config->Size != 24 )
  {
    _a1 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, Offset, 0x12u, 0xAu, WPP_FxWorkItemApi_cpp_Traceguids, Size, 24, -1073741820);
    return _a1;
  }
  if ( !Config->EvtWorkItemFunc )
  {
    _a1 = -1073741811;
    v16 = WPP_FxWorkItemApi_cpp_Traceguids;
    v17 = 11;
    v4 = v9->m_Globals;
    goto LABEL_17;
  }
  result = FxValidateObjectAttributes(v9->m_Globals, Attributes, 0, v11);
  if ( result >= 0 )
    return FxWorkItem::_Create(m_Globals, Config, Attributes, pParent, WorkItem);
  return result;
}
