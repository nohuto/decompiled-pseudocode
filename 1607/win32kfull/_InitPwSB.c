/*
 * XREFs of _InitPwSB @ 0x1C00AFCC8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00FFF8C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxShowScrollBar @ 0x1C0111EC0 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rax

  result = *(_QWORD *)(a1 + 176);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x24u, 6);
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
