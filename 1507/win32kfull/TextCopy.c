/*
 * XREFs of TextCopy @ 0x1C00E38A8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserInternalGetWindowText @ 0x1C00E37F0 (NtUserInternalGetWindowText.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     _GetAltTabInfo @ 0x1C0200E70 (_GetAltTabInfo.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall TextCopy(__int64 a1, void *a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r9d

  LODWORD(v3) = a3;
  if ( a3 )
  {
    v3 = (unsigned int)(a3 - 1);
    v5 = *(_DWORD *)a1 >> 1;
    if ( v5 < a3 - 1 )
      v3 = v5;
    memmove(a2, *(const void **)(a1 + 8), 2 * v3);
    *((_WORD *)a2 + v3) = 0;
  }
  return (unsigned int)v3;
}
