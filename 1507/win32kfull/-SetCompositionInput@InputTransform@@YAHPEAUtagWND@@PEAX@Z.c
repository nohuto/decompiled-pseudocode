/*
 * XREFs of ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0227F54
 * Callers:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000776C (ResolveDCompInputHandleToPwnd.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C0227EA8 (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall InputTransform::SetCompositionInput(InputTransform *this, struct tagWND *a2, void *a3)
{
  struct tagINPUTTRANSFORMLIST *inited; // rax
  struct CompositionInputObject **v5; // rbx
  CompositionObject *v6; // rcx

  inited = InitInputTransformList(this);
  if ( !inited )
    return 0LL;
  v5 = (struct CompositionInputObject **)((char *)inited + 96);
  v6 = (CompositionObject *)*((_QWORD *)inited + 12);
  if ( v6 )
  {
    CompositionObject::Release(v6);
    *v5 = 0LL;
  }
  return (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, v5) >= 0;
}
