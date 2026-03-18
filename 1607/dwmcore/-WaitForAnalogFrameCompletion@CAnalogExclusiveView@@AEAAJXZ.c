/*
 * XREFs of ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x180165CC4
 * Callers:
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x180165E08 (-WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x1801673C4 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::WaitForAnalogFrameCompletion(CAnalogExclusiveView *this, unsigned int a2)
{
  HANDLE v3; // r8
  __int64 result; // rax

  *((_DWORD *)this + 48) = 2;
  v3 = qword_1801F0370;
  if ( !qword_1801F0370 )
  {
    (*(void (__fastcall **)(_QWORD, HANDLE *))(*(_QWORD *)xmmword_1801F03A0 + 112LL))(
      xmmword_1801F03A0,
      &qword_1801F0370);
    v3 = qword_1801F0370;
  }
  result = CAnalogCompositorTarget::WaitForVBlankInternal(*((CAnalogCompositorTarget **)&xmmword_1801F03A0 + 1), a2, v3);
  if ( (_DWORD)result == 1 )
    return CAnalogExclusiveView::WaitForVBlankAfterFrameCompletion(this);
  return result;
}
