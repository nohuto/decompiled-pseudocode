/*
 * XREFs of _DxgDbgTakeSnapshot_::_9_::_AUTO::__AUTO @ 0x1C0139708
 * Callers:
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C013973C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgTakeSnapshot_::_9_::_AUTO::__AUTO(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x52445476u);
  if ( *(_QWORD *)(a1 + 8) )
    WdDbgDestroySnapshot();
}
