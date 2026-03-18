/*
 * XREFs of ?WaitForVBlankAfterFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BC8C
 * Callers:
 *     ?WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ @ 0x18013BAD4 (-WaitForAnalogFrameCompletion@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x18013D450 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall CAnalogExclusiveView::WaitForVBlankAfterFrameCompletion(CAnalogExclusiveView *this)
{
  unsigned int v2; // edx
  __int64 i; // rbx
  void *v4; // rcx
  unsigned int v5; // edx
  __int64 result; // rax

  AcquireSRWLockExclusive(&stru_1801A3FC0);
  v2 = dword_1801A3FA0;
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    v4 = *(void **)(*(_QWORD *)(qword_1801A3F88 + 8 * i) + 88LL);
    if ( v4 )
    {
      SetEvent(v4);
      v2 = dword_1801A3FA0;
    }
  }
  ReleaseSRWLockExclusive(&stru_1801A3FC0);
  result = CAnalogCompositorTarget::WaitForVBlankInternal(
             *((CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1),
             v5,
             0LL);
  *((_DWORD *)this + 28) = 1;
  return result;
}
