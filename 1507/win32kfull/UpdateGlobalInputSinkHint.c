/*
 * XREFs of UpdateGlobalInputSinkHint @ 0x1C00F7258
 * Callers:
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C00F7184 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
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
