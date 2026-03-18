/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0011A20 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0012CD0 (NtDCompositionGetConnectionBatch.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionRetireFrame @ 0x1C003A8A0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C003AC20 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C003C5F0 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C006DEC0 (NtDCompositionGetFrameStatistics.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0013AC4 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C001E234 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E4A0 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
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
