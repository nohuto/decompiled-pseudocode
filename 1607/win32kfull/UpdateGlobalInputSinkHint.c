/*
 * XREFs of UpdateGlobalInputSinkHint @ 0x1C0009B68
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0009A94 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateGlobalInputSinkHint(int a1)
{
  if ( a1 )
  {
    _InterlockedIncrement(&gulAnyInputSinkInSubtree);
  }
  else if ( gulAnyInputSinkInSubtree )
  {
    _InterlockedDecrement(&gulAnyInputSinkInSubtree);
  }
}
