/*
 * XREFs of imp_WdfObjectCreate @ 0x1C0012010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0012150 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 ParentObject; // rsi
  FxObject *v7; // rbx
  __int64 v8; // rcx
  FxObject_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  int result; // eax
  int v14; // edi
  void *v15; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-68h]
  FxObject **p_pParent; // [rsp+50h] [rbp-38h] BYREF
  __int16 v18; // [rsp+58h] [rbp-30h]
  __int16 v19; // [rsp+5Ah] [rbp-2Eh]
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxObject *pParent; // [rsp+90h] [rbp+8h] BYREF
  FxUserObject *pUserObject; // [rsp+98h] [rbp+10h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  pUserObject = 0LL;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        v7 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v8) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v8 = LOWORD(v7->__vftable);
          v7 = (FxObject *)((char *)v7 - v8);
        }
        if ( v7->m_Type == 4096 )
        {
          pParent = v7;
        }
        else
        {
          pParent = 0LL;
          p_pParent = &pParent;
          v9 = v7->__vftable;
          v19 = v8;
          v18 = 4096;
          if ( v9->QueryInterface(v7, (FxQueryInterfaceParams *)&p_pParent) < 0 )
          {
            WPP_IFR_SF_qDqD(v7->m_Globals, v10, v11, v12, _a1, (const void *)ParentObject, 0x1000u, v7, v7->m_Type);
            FxVerifierBugCheckWorker(v7->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v7 = pParent;
        }
        m_Globals = v7->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  if ( !Object )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, Attributes, 2u);
  if ( result >= 0 )
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
    return v14;
  }
  return result;
}
