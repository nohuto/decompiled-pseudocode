/*
 * XREFs of ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000EE68
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0023194 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0022F90 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 */

void *__fastcall FxDevice::AllocateRequestMemory(FxDevice *this, _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _NPAGED_LOOKASIDE_LIST *p_m_RequestLookasideList; // rdi
  PSLIST_ENTRY v7; // rbx
  _SLIST_ENTRY *v8; // r14
  unsigned __int64 m_RequestLookasideListElementSize; // r13
  KIRQL v11; // r8
  _FX_DRIVER_GLOBALS **Blink; // rdx
  unsigned __int64 NonPagedBytes; // rdx
  unsigned int NonPagedAllocations; // eax
  _SLIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

  m_PkgPnp = this->m_PkgPnp;
  m_Globals = this->m_Globals;
  if ( !m_PkgPnp || m_PkgPnp->m_Type != 4354 || !BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
  {
    p_m_RequestLookasideList = &this->m_RequestLookasideList;
    ++this->m_RequestLookasideList.L.TotalAllocates;
    v7 = ExpInterlockedPopEntrySList(&this->m_RequestLookasideList.L.ListHead);
    if ( v7 )
      goto LABEL_6;
    ++this->m_RequestLookasideList.L.AllocateMisses;
    goto LABEL_5;
  }
  p_m_RequestLookasideList = &this->m_RequestLookasideList;
  v7 = ExpInterlockedPopEntrySList(&this->m_RequestLookasideList.L.ListHead);
  if ( !v7 )
LABEL_5:
    v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))p_m_RequestLookasideList->L.AllocateEx)(
                         (unsigned int)p_m_RequestLookasideList->L.Type,
                         p_m_RequestLookasideList->L.Size,
                         p_m_RequestLookasideList->L.Tag);
LABEL_6:
  if ( !v7 )
    return 0LL;
  if ( m_Globals->FxPoolTrackingOn )
  {
    m_RequestLookasideListElementSize = this->m_RequestLookasideListElementSize;
    *((_DWORD *)&v7[1].Next + 2) = m_Globals->Tag;
    v8 = v7 + 4;
    *((_DWORD *)&v7[2].Next + 2) = ExDefaultNonPagedPoolType;
    v7[3].Next = retaddr;
    v7[1].Next = (_SLIST_ENTRY *)&m_Globals->FxPoolFrameworks;
    v7[2].Next = (_SLIST_ENTRY *)m_RequestLookasideListElementSize;
    v11 = KeAcquireSpinLockRaiseToDpc(&m_Globals->FxPoolFrameworks.NonPagedLock.m_Lock);
    Blink = (_FX_DRIVER_GLOBALS **)m_Globals->FxPoolFrameworks.NonPagedHead.Blink;
    v7->Next = (_SLIST_ENTRY *)&m_Globals->FxPoolFrameworks.NonPagedHead;
    *((_QWORD *)&v7->Next + 1) = Blink;
    if ( *Blink != (_FX_DRIVER_GLOBALS *)&m_Globals->FxPoolFrameworks.NonPagedHead )
      __fastfail(3u);
    *Blink = (_FX_DRIVER_GLOBALS *)v7;
    m_Globals->FxPoolFrameworks.NonPagedHead.Blink = (_LIST_ENTRY *)v7;
    m_Globals->FxPoolFrameworks.NonPagedBytes += m_RequestLookasideListElementSize;
    ++m_Globals->FxPoolFrameworks.NonPagedAllocations;
    NonPagedBytes = m_Globals->FxPoolFrameworks.NonPagedBytes;
    NonPagedAllocations = m_Globals->FxPoolFrameworks.NonPagedAllocations;
    if ( NonPagedBytes > m_Globals->FxPoolFrameworks.PeakNonPagedBytes )
      m_Globals->FxPoolFrameworks.PeakNonPagedBytes = NonPagedBytes;
    if ( NonPagedAllocations > m_Globals->FxPoolFrameworks.PeakNonPagedAllocations )
      m_Globals->FxPoolFrameworks.PeakNonPagedAllocations = NonPagedAllocations;
    KeReleaseSpinLock(&m_Globals->FxPoolFrameworks.NonPagedLock.m_Lock, v11);
  }
  else
  {
    v8 = v7;
  }
  v8->Next = v7;
  *((_QWORD *)&v8->Next + 1) = m_Globals;
  if ( !RequestAttributes )
    RequestAttributes = &this->m_RequestAttributes;
  return FxObjectAndHandleHeaderInit(m_Globals, &v8[1], 0x170u, RequestAttributes, FxObjectTypeExternal);
}
