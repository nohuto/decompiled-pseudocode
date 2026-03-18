/*
 * XREFs of ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54
 * Callers:
 *     ?WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z @ 0x18013D3B0 (-WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x18013B60C (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 *     ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x18013BA74 (-UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BAD4 (-WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BC8C (-WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x18013D450 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::WaitForSurfaceUpdate(CAnalogExclusiveView *this)
{
  unsigned int v2; // edx
  int v3; // ebx
  CAnalogExclusiveView *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  bool v7; // al
  unsigned int v8; // edx
  __int64 i; // rbx
  void *v10; // rcx

  if ( *((_QWORD *)this + 8) )
    CAnalogExclusiveView::ActivateSwapChain(this);
  CAnalogExclusiveView::UpdateSyncRefreshCount(this);
  v3 = *((_DWORD *)this + 24);
  if ( *((_DWORD *)this + 28) != 1 )
  {
    if ( *((_DWORD *)this + 28) != 2 )
    {
      v5 = CAnalogCompositorTarget::WaitForVBlankInternal(
             *((CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1),
             v2,
             0LL);
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(this, v3 + 1) )
  {
LABEL_5:
    v4 = this;
    goto LABEL_6;
  }
  v6 = CAnalogCompositorTarget::WaitForVBlankInternal(
         *((CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1),
         v2,
         hObject);
  if ( v6 != 1 )
    goto LABEL_13;
  v7 = CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(this, v3 + 1);
  v4 = this;
  if ( !v7 )
  {
    v5 = CAnalogExclusiveView::WaitForVBlankAfterFrameCompletion(this);
    goto LABEL_12;
  }
LABEL_6:
  v5 = CAnalogExclusiveView::WaitForAnalogFrameCompletion(v4, v2);
LABEL_12:
  v6 = v5;
LABEL_13:
  if ( !v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)xmmword_1801A3FB0 + 104LL))(xmmword_1801A3FB0);
  if ( !g_AnalogCompositor )
  {
    AcquireSRWLockExclusive(&stru_1801A3FC0);
    v8 = dword_1801A3FA0;
    for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
    {
      v10 = *(void **)(*(_QWORD *)(qword_1801A3F88 + 8 * i) + 88LL);
      if ( v10 )
      {
        SetEvent(v10);
        v8 = dword_1801A3FA0;
      }
    }
    ReleaseSRWLockExclusive(&stru_1801A3FC0);
  }
  if ( *((_BYTE *)this + 59) )
    NtTokenManagerConfirmOutstandingAnalogToken();
  return v6;
}
