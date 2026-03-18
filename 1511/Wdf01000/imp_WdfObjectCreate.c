/*
 * XREFs of imp_WdfObjectCreate @ 0x1C0024530
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0024670 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C002483C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006D650 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v6; // r9
  unsigned __int64 globals; // rsi
  FxObject *flags; // rbx
  __int64 v9; // rcx
  FxObject_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  __int64 result; // rax
  int v14; // edi
  void *v15; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  FxObject **p_pParent; // [rsp+50h] [rbp-38h] BYREF
  __int16 v18; // [rsp+58h] [rbp-30h]
  __int16 v19; // [rsp+5Ah] [rbp-2Eh]
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxObject *pParent; // [rsp+90h] [rbp+8h] BYREF
  FxUserObject *pUserObject; // [rsp+A8h] [rbp+20h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  pUserObject = 0LL;
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], Attributes, 0) >= 0 )
  {
    globals = (unsigned __int64)Attributes->ParentObject;
    if ( !globals )
      FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
    flags = (FxObject *)(~globals & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v9) = 0;
    if ( (globals & 1) != 0 )
    {
      v9 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v9);
    }
    if ( flags->m_Type == 4096 )
    {
      pParent = flags;
    }
    else
    {
      pParent = 0LL;
      p_pParent = &pParent;
      v10 = flags->__vftable;
      v19 = v9;
      v18 = 4096;
      if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pParent) < 0 )
      {
        WPP_IFR_SF_qDqD(flags->m_Globals, v11, v12, v6, traceGuid, (const void *)globals, 0x1000u, flags, flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, globals, 0x1000uLL);
      }
      flags = pParent;
    }
    m_Globals = flags->m_Globals;
  }
  if ( !Object )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, Attributes, 2, v6);
  if ( (int)result >= 0 )
  {
    v14 = FxUserObject::_Create(m_Globals, Attributes, &pUserObject);
    if ( v14 >= 0 )
    {
      if ( pUserObject->m_ObjectSize )
        v15 = (void *)((unsigned __int64)pUserObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      *Object = v15;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0x13u, 0xAu, WPP_FxUserObjectApi_cpp_Traceguids, v15);
    }
    return (unsigned int)v14;
  }
  return result;
}
