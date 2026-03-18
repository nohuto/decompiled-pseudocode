/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x1C0072FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0012998 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 ParentObject; // r8
  FxObject *v10; // rcx
  __int64 Offset; // rdx
  WDFMEMORY__ **v12; // r14
  __int64 result; // rax
  FxMemoryObject *v14; // rax
  FxObject *v15; // rdi
  int v16; // ebx
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v6 = BufferSize;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        v10 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(Offset) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          Offset = LOWORD(v10->__vftable);
          v10 = (FxObject *)((char *)v10 - Offset);
        }
        LOWORD(BufferSize) = 4096;
        if ( v10->m_Type == 4096 )
        {
          pParent = v10;
        }
        else
        {
          FxObjectHandleGetPtrQI(v10, (void **)&pParent, (void *)ParentObject, 0x1000u, Offset);
          v10 = pParent;
        }
        m_Globals = v10->m_Globals;
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
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v12 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PMemory = 0LL;
  if ( v6 )
  {
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0, BufferSize);
    if ( (int)result >= 0 )
    {
      v14 = (FxMemoryObject *)FxObjectHandleAlloc(
                                m_Globals,
                                ExDefaultNonPagedPoolType,
                                0x80uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v15 = v14;
      if ( v14 )
      {
        FxMemoryObject::FxMemoryObject(v14, m_Globals, 0x80u, v6);
        v15[1].m_Globals = Buffer;
        v15->__vftable = (FxObject_vtbl *)&FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
        v15[1].__vftable = (FxObject_vtbl *)&FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        v16 = FxObject::Commit(v15, Attributes, (void **)&pParent, 0LL, 1u);
        if ( v16 < 0 )
          FxObject::DeleteFromFailedCreate(v15);
        else
          *v12 = (WDFMEMORY__ *)pParent;
        return (unsigned int)v16;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
