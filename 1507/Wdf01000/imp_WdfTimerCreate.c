/*
 * XREFs of imp_WdfTimerCreate @ 0x1C0023E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023D90 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int64 ParentObject; // r8
  FxObject *v9; // rcx
  __int64 Offset; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Size; // edx
  unsigned int Period; // eax
  unsigned int v14; // r9d
  __int64 result; // rax
  unsigned int v16; // edi
  unsigned __int16 v17; // r9
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !Attributes )
  {
    v16 = -1071644142;
    WPP_IFR_SF_d(v4, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_hpp_Traceguids, -1071644142);
    return v16;
  }
  if ( Attributes->Size != 56 )
  {
    v16 = -1073741820;
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
    return v16;
  }
  ParentObject = (unsigned __int64)Attributes->ParentObject;
  if ( !ParentObject )
  {
    v16 = -1071644142;
    WPP_IFR_SF_qd(v4, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, -1071644142);
    return v16;
  }
  v9 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (ParentObject & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - Offset);
  }
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
  if ( !Timer )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  Size = Config->Size;
  if ( ((Config->Size - 24) & 0xFFFFFFE7) != 0 || Size == 48 )
  {
    v16 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, Size, 0x12u, 0xAu, WPP_FxTimerApi_cpp_Traceguids, Size, 40, -1073741820);
    return v16;
  }
  Period = Config->Period;
  LOWORD(v14) = -1;
  if ( Period > 0x7FFFFFFF )
  {
    v17 = 11;
LABEL_33:
    v16 = -1073741811;
    WPP_IFR_SF_Dd(m_Globals, 2u, 0x12u, v17, WPP_FxTimerApi_cpp_Traceguids, Period, -1073741811);
    return v16;
  }
  if ( Size > 0x18 && !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v9->m_Globals, Size, 0xDu) )
  {
    Period = Config->TolerableDelay;
    if ( Period > v14 )
    {
      v17 = 12;
      goto LABEL_33;
    }
  }
  if ( Size > 0x20 )
  {
    Period = Config->TolerableDelay;
    if ( Period )
    {
      if ( Config->UseHighResolutionTimer )
      {
        v17 = 14;
        goto LABEL_33;
      }
    }
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, 2, v14);
  if ( (int)result >= 0 )
  {
    if ( Config->Period && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
    {
      v16 = -1073741637;
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimerApi_cpp_Traceguids, -1073741637);
      return v16;
    }
    return FxTimer::_Create(m_Globals, Config, Attributes, pParent, Timer);
  }
  return result;
}
