/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x1C003CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001661C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001C98C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  unsigned __int16 v9; // r9
  __int64 result; // rax
  FxMemoryObject *v11; // rax
  FxObject *v12; // rdi
  int v13; // ebx
  WDFMEMORY__ **v14; // rsi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v14 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *PMemory = 0LL;
  if ( BufferSize )
  {
    result = FxValidateObjectAttributes(DriverName, Attributes, 0, v9);
    if ( (int)result >= 0 )
    {
      v11 = (FxMemoryObject *)FxObjectHandleAlloc(
                                DriverName,
                                ExDefaultNonPagedPoolType,
                                0x80uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v12 = v11;
      if ( v11 )
      {
        FxMemoryObject::FxMemoryObject(v11, DriverName, 0x80u, BufferSize);
        v12[1].m_Globals = Buffer;
        v12->__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
        v12[1].__vftable = (FxObject_vtbl *)(&FxObject::`vftable'.Public + 1);
      }
      else
      {
        v12 = 0LL;
      }
      if ( v12 )
      {
        v13 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&pParent, 0LL, 1u);
        if ( v13 >= 0 )
          *v14 = (WDFMEMORY__ *)pParent;
        else
          FxObject::DeleteFromFailedCreate(v12);
        return (unsigned int)v13;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
