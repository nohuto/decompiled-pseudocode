/*
 * XREFs of ImeCheckTopmost @ 0x1C0064DCC
 * Callers:
 *     zzzImeCanDestroyDefIME @ 0x1C009D50C (zzzImeCanDestroyDefIME.c)
 *     NtUserSetImeOwnerWindow @ 0x1C00A7C60 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     ImeSetTopmost @ 0x1C0063C38 (ImeSetTopmost.c)
 */

void __fastcall ImeCheckTopmost(__int64 a1)
{
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r10

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(a1 + 16) == gptiForeground )
      v3 = 0LL;
    if ( (*(_BYTE *)(v1 + 48) & 8) != 0 || *(_DWORD *)(a1 + 304) != 1 )
      v2 = 1;
    ImeSetTopmost(a1, v2, v3);
  }
}
