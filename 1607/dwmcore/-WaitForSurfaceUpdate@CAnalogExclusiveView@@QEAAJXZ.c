/*
 * XREFs of ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C
 * Callers:
 *     ?WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z @ 0x180167340 (-WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x1801657E8 (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 *     ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x180165C50 (-UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x180165CC4 (-WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x180165E08 (-WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x1801673C4 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::WaitForSurfaceUpdate(CAnalogExclusiveView *this)
{
  unsigned int v2; // edx
  int v3; // eax
  int v4; // esi
  CAnalogExclusiveView *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // edi
  bool v8; // al

  if ( *((_QWORD *)this + 17) )
    CAnalogExclusiveView::ActivateSwapChain(this);
  CAnalogExclusiveView::UpdateSyncRefreshCount(this);
  v3 = *((_DWORD *)this + 48);
  v4 = *((_DWORD *)this + 42);
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
    {
      v6 = CAnalogCompositorTarget::WaitForVBlankInternal(
             *((CAnalogCompositorTarget **)&xmmword_1801F03A0 + 1),
             v2,
             0LL);
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(this, v4 + 1) )
  {
LABEL_5:
    v5 = this;
    goto LABEL_6;
  }
  v7 = CAnalogCompositorTarget::WaitForVBlankInternal(
         *((CAnalogCompositorTarget **)&xmmword_1801F03A0 + 1),
         v2,
         hObject);
  if ( v7 != 1 )
    goto LABEL_13;
  v8 = CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(this, v4 + 1);
  v5 = this;
  if ( !v8 )
  {
    v6 = CAnalogExclusiveView::WaitForVBlankAfterFrameCompletion(this);
    goto LABEL_12;
  }
LABEL_6:
  v6 = CAnalogExclusiveView::WaitForAnalogFrameCompletion(v5, v2);
LABEL_12:
  v7 = v6;
LABEL_13:
  if ( !v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)xmmword_1801F03A0 + 104LL))(xmmword_1801F03A0);
  if ( *((_BYTE *)this + 131) )
    NtTokenManagerConfirmOutstandingAnalogToken();
  return v7;
}
