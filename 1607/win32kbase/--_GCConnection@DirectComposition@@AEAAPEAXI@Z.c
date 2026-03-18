/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814
 * Callers:
 *     NtDCompositionDiscardFrame @ 0x1C0017640 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionConfirmFrame @ 0x1C0017740 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C00179A0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0017B80 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0017E70 (NtDCompositionGetConnectionBatch.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0019420 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00192AC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00425A4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CChannel *v2; // rcx
  struct _ERESOURCE *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  void *v5; // rcx

  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  v2 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
  if ( v2 )
    DirectComposition::CChannel::Release(v2);
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    Win32FreePool(*((_QWORD *)this + 2));
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)this + 1));
  }
  v5 = (void *)*((_QWORD *)this + 29);
  if ( v5 )
    ObfDereferenceObject(v5);
  *((_QWORD *)this + 3) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CConnection *)((char *)this + 24));
  Win32FreePool(this);
  return this;
}
