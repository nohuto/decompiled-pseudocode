/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfObjectAllocateContext @ 0x1C0023140 (imp_WdfObjectAllocateContext.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0015604 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F194 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F204 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObjectAllocateContext(
        FxObject *Object,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int8 AllowCallbacksOnly,
        void **Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_OBJECT_ATTRIBUTES *v9; // rdx
  unsigned __int16 v10; // r9
  char v11; // r10
  __int64 result; // rax
  unsigned int v13; // ecx
  _LIST_ENTRY *Flink; // rax
  unsigned __int64 ContextSize; // rax
  FxContextHeader *v16; // rax
  FxContextHeader *v17; // rsi
  unsigned __int64 size; // [rsp+40h] [rbp-28h] BYREF
  _LIST_ENTRY *Caller; // [rsp+68h] [rbp+0h]
  int status; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = Object->m_Globals;
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Attributes, 0xBu) )
    ++v11;
  result = FxValidateObjectAttributes(m_Globals, v9, v11, v10);
  status = result;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo || AllowCallbacksOnly )
    {
      v13 = _InterlockedIncrement(&Object->m_Refcnt);
      if ( SLOBYTE(Object->m_ObjectFlags) < 0 )
        Flink = Object[-1].m_ChildEntry.Flink;
      else
        Flink = 0LL;
      if ( Flink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Flink,
          &status,
          459,
          "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp",
          TagAddRef,
          v13);
      ContextSize = FxGetContextSize(Attributes);
      status = FxCalculateObjectTotalSize2(m_Globals, 0, 0, ContextSize, &size);
      if ( status >= 0 )
      {
        v16 = (FxContextHeader *)FxPoolAllocator(
                                   m_Globals,
                                   (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   size,
                                   m_Globals->Tag,
                                   Caller);
        v17 = v16;
        if ( v16 )
        {
          FxContextHeaderInit(v16, Object, Attributes);
          status = FxObject::AddContext(Object, v17, Context, Attributes);
          if ( status )
            FxPoolFree(v17);
        }
        else
        {
          status = -1073741670;
        }
      }
      Object->Release(Object, &status, 494, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
    }
    else
    {
      status = -1073741773;
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
    }
    return (unsigned int)status;
  }
  return result;
}
