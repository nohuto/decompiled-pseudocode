/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C001DB90 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00227B0 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0022940 (NtDCompositionGetConnectionBatch.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionDiscardFrame @ 0x1C0045800 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C0045A60 (NtDCompositionRetireFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C0045E30 (NtDCompositionBeginFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0046AF0 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C004C380 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00235A4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C0028E14 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C006B614 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
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
    Win32FreePool();
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool();
  }
  v5 = (void *)*((_QWORD *)this + 29);
  if ( v5 )
    ObfDereferenceObject(v5);
  *((_QWORD *)this + 3) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CConnection *)((char *)this + 24));
  Win32FreePool();
  return this;
}
