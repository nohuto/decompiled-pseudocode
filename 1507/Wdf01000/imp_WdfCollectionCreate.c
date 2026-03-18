/*
 * XREFs of imp_WdfCollectionCreate @ 0x1C002CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020A64 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 ParentObject; // r8
  FxObject *v8; // rcx
  __int64 Offset; // rdx
  __int64 result; // rax
  FxNonPagedObject *v11; // rax
  FxNonPagedObject *v12; // rdi
  int v13; // eax
  unsigned int v14; // esi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+78h] [rbp+10h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( CollectionAttributes )
  {
    if ( CollectionAttributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)CollectionAttributes->ParentObject;
      if ( ParentObject )
      {
        v8 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(Offset) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          Offset = LOWORD(v8->__vftable);
          v8 = (FxObject *)((char *)v8 - Offset);
        }
        a4 = 4096;
        if ( v8->m_Type == 4096 )
        {
          pParent = v8;
        }
        else
        {
          FxObjectHandleGetPtrQI(v8, (void **)&pParent, (void *)ParentObject, 0x1000u, Offset);
          v8 = pParent;
        }
        m_Globals = v8->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        (unsigned __int8)CollectionAttributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        CollectionAttributes,
        56,
        CollectionAttributes->Size,
        -1073741820);
    }
  }
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(m_Globals, CollectionAttributes, 0, a4);
  if ( (int)result >= 0 )
  {
    v11 = (FxNonPagedObject *)FxObjectHandleAlloc(
                                m_Globals,
                                ExDefaultNonPagedPoolType,
                                0x90uLL,
                                0,
                                CollectionAttributes,
                                0,
                                FxObjectTypeExternal);
    v12 = v11;
    if ( v11 )
    {
      FxNonPagedObject::FxNonPagedObject(v11, (_FX_DRIVER_GLOBALS *)0x100E, 0x90u, m_Globals);
      LODWORD(v12[1].__vftable) = 0;
      v12[1].m_Globals = (_FX_DRIVER_GLOBALS *)&v12[1].m_Type;
      *(_QWORD *)&v12[1].m_Type = (char *)v12 + 128;
      v12->__vftable = (FxNonPagedObject_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxObject::Commit(v12, CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v14 = v13;
      if ( v13 < 0 )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, v13);
        FxObject::DeleteFromFailedCreate(v12);
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
    return v14;
  }
  return result;
}
