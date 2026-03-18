/*
 * XREFs of DoExplorerHangDetection @ 0x1C000D200
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C02201D8 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C000D28C (-IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     ?ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z @ 0x1C022650C (-ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall DoExplorerHangDetection(struct tagDESKTOP *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *((_QWORD *)a1 + 35);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 184LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  result = IsValidForHangTest(*((const struct tagTHREADINFO **)a1 + 35));
  if ( (_DWORD)result )
  {
    result = IsValidForHangTest((const struct tagTHREADINFO *)v3);
    if ( (_DWORD)result )
    {
      result = IsThreadHung(v5, gdwHungAppTimeout);
      if ( !(_DWORD)result )
      {
        result = IsThreadHung(v2, gdwHungAppTimeout);
        if ( !(_DWORD)result )
          return result;
        v3 = v2;
      }
      if ( v3 )
        return ReportHungExplorerToWer(a1, (const struct tagTHREADINFO *)v3);
    }
  }
  return result;
}
