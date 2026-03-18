/*
 * XREFs of ImeCheckTopmost @ 0x1C004FE88
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C004FBC0 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00527D4 (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     ImeSetTopmost @ 0x1C004FED8 (ImeSetTopmost.c)
 */

__int64 __fastcall ImeCheckTopmost(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(a1 + 16) == gptiForeground )
      v3 = 0LL;
    if ( (*(_BYTE *)(v1 + 48) & 8) != 0 || *(_DWORD *)(a1 + 304) != 1 )
      v2 = 1;
    return ImeSetTopmost(a1, v2, v3);
  }
  return result;
}
