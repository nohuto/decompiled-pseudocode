/*
 * XREFs of SetManipulationInputTargetTransform @ 0x14009A5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x14009A418 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 */

__int64 __fastcall SetManipulationInputTargetTransform(__int64 a1, struct tagWND *a2, void *a3, __int64 a4, int a5)
{
  InputTransform *v7; // rbx

  if ( a5 )
    return 0LL;
  v7 = *(InputTransform **)(a1 + 80);
  if ( a2 )
  {
    if ( !*((_QWORD *)v7 + 34) )
      InputTransform::SetCompositionInput(*(InputTransform **)(a1 + 80), a2, a3);
  }
  return InputTransform::OnInput(v7, (struct tagWND *)a3);
}
