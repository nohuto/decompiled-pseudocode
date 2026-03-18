/*
 * XREFs of imp_WdfCollectionCreate @ 0x1C00248C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C002483C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0024A20 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v6; // r9
  __int64 result; // rax
  FxNonPagedObject *v8; // rax
  FxNonPagedObject *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+70h] [rbp+18h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( (int)FxValidateObjectAttributesForParentHandle(
              (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
              CollectionAttributes,
              0) >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)CollectionAttributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(m_Globals, CollectionAttributes, 0, v6);
  if ( (int)result >= 0 )
  {
    v8 = (FxNonPagedObject *)FxObjectHandleAlloc(
                               m_Globals,
                               ExDefaultNonPagedPoolType,
                               0x90uLL,
                               0,
                               CollectionAttributes,
                               0,
                               FxObjectTypeExternal);
    v9 = v8;
    if ( v8 )
    {
      FxNonPagedObject::FxNonPagedObject(v8, 0x100Eu, 0x90u, m_Globals);
      LODWORD(v9[1].__vftable) = 0;
      v9[1].m_Globals = (_FX_DRIVER_GLOBALS *)&v9[1].m_Type;
      *(_QWORD *)&v9[1].m_Type = (char *)v9 + 128;
      v9->__vftable = (FxNonPagedObject_vtbl *)&FxIoResList::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v10 = FxObject::Commit(v9, CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v11 = v10;
      if ( v10 < 0 )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, v10);
        FxObject::DeleteFromFailedCreate(v9);
      }
      else
      {
        *Collection = hCol;
      }
    }
    else
    {
      WPP_IFR_SF_(m_Globals, 2u, 2u, 0xBu, WPP_FxCollectionApi_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v11;
  }
  return result;
}
