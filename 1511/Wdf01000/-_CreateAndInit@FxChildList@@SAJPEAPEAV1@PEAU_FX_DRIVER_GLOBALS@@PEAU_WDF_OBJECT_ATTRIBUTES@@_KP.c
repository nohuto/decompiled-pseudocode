/*
 * XREFs of ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025F90
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0018910 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0019370 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfChildListCreate @ 0x1C005E9B0 (imp_WdfChildListCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0004D30 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C00262F0 (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C0026B90 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

__int64 __fastcall FxChildList::_CreateAndInit(
        FxChildList **ChildList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        unsigned __int8 Static)
{
  _POOL_TYPE v7; // ebx
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // esi
  void *Caller; // rax
  FxChildList *v15; // rax
  FxChildList *v16; // rbx
  FxChildList *v17; // rax
  FxChildList *v18; // rbx
  __int64 result; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v21; // rax
  unsigned __int64 ContextSize; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 Size; // [rsp+50h] [rbp+8h] BYREF

  v7 = ExDefaultNonPagedPoolType;
  ContextSizeOverride = 0LL;
  *ChildList = 0LL;
  Tag = FxDriverGlobals->Tag;
  if ( ListAttributes )
  {
    ContextTypeInfo = ListAttributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = ListAttributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
    }
  }
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x168u, 0, ContextSizeOverride, &Size) < 0 )
    goto LABEL_21;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v15 = (FxChildList *)FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v7, Size, Tag, Caller);
  v16 = v15;
  if ( v15 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v15, 0, 0x20uLL);
      *(_DWORD *)(&v16->m_ObjectState + 1) = 1146058822;
      v16 = (FxChildList *)((char *)v16 + 32);
    }
    memset(&v16[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v16[1].m_Type = v16;
    if ( ListAttributes )
    {
      v21 = ListAttributes->ContextTypeInfo;
      if ( v21 )
      {
        ContextSize = ListAttributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v21->ContextSize;
        memset(&v16[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v16[1].m_ChildListHead.Blink = (_LIST_ENTRY *)ListAttributes->ContextTypeInfo;
    }
  }
  if ( v16 && (FxChildList::FxChildList(v16, FxDriverGlobals, TotalDescriptionSize, Device, Static), (v18 = v17) != 0LL) )
  {
    FxChildList::Initialize(v17, ListConfig);
    result = 0LL;
    *ChildList = v18;
  }
  else
  {
LABEL_21:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
  return result;
}
