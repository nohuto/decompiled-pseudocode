/*
 * XREFs of _InitPwSB @ 0x1C0087CBC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     CalcSBStuff @ 0x1C0087930 (CalcSBStuff.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D59E4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxShowScrollBar @ 0x1C00EB8B0 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rax

  result = *(_QWORD *)(a1 + 176);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x24u);
    *(_QWORD *)(a1 + 176) = v3;
    if ( v3 )
    {
      v3[6] = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 8LL) = 100;
    }
    return *(_QWORD *)(a1 + 176);
  }
  return result;
}
