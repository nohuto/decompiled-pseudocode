/*
 * XREFs of ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FFCC
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C00362C0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C00167A8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001E8F4 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C0037B64 (FxAllocateFromNPagedLookasideList.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0079C68 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 */

FxObject *__fastcall FxDevice::AllocateRequestMemory(FxDevice *this, _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 v5; // rdx
  FX_POOL_TRACKER *v6; // rax
  FX_POOL_TRACKER *v7; // rbx
  FX_POOL_TRACKER *v8; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( !FxDevice::IsPdo(this) || !BYTE3(this->m_PkgPnp[1].m_DisposeSingleEntry.Next) )
  {
    v6 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(&this->m_RequestLookasideList, v5);
LABEL_3:
    v7 = v6;
    goto LABEL_4;
  }
  v7 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList(&this->m_RequestLookasideList.L.ListHead);
  if ( !v7 )
  {
    v6 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_RequestLookasideList.L.AllocateEx)(
                              (unsigned int)this->m_RequestLookasideList.L.Type,
                              this->m_RequestLookasideList.L.Size,
                              this->m_RequestLookasideList.L.Tag);
    goto LABEL_3;
  }
LABEL_4:
  if ( !v7 )
    return 0LL;
  if ( m_Globals->FxPoolTrackingOn )
  {
    v8 = v7 + 1;
    FxPoolInsertNonPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      v7,
      this->m_RequestLookasideListElementSize,
      m_Globals->Tag,
      retaddr);
  }
  else
  {
    v8 = v7;
  }
  v8->Link.Flink = &v7->Link;
  v8->Link.Blink = &m_Globals->Linkage;
  if ( !RequestAttributes )
    RequestAttributes = &this->m_RequestAttributes;
  return FxObjectAndHandleHeaderInit(m_Globals, (FxObject *)&v8->Pool, 0x170u, RequestAttributes, FxObjectTypeExternal);
}
