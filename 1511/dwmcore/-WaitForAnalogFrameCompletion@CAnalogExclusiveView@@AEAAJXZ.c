/*
 * XREFs of ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BAD4
 * Callers:
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BC8C (-WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x18013D450 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::WaitForAnalogFrameCompletion(CAnalogExclusiveView *this, unsigned int a2)
{
  HANDLE v3; // r8
  __int64 result; // rax

  *((_DWORD *)this + 28) = 2;
  v3 = qword_1801A3F80;
  if ( !qword_1801A3F80 )
  {
    (*(void (__fastcall **)(_QWORD, HANDLE *))(*(_QWORD *)xmmword_1801A3FB0 + 112LL))(
      xmmword_1801A3FB0,
      &qword_1801A3F80);
    v3 = qword_1801A3F80;
  }
  result = CAnalogCompositorTarget::WaitForVBlankInternal(*((CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1), a2, v3);
  if ( (_DWORD)result == 1 )
    return CAnalogExclusiveView::WaitForVBlankAfterFrameCompletion(this);
  return result;
}
