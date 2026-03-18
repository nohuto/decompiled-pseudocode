/*
 * XREFs of _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1C01623CC
 * Callers:
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0162400 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x52445476u);
  if ( *(_QWORD *)(a1 + 8) )
    WdDbgDestroySnapshot();
}
