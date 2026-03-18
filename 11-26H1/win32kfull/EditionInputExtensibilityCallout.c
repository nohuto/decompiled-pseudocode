/*
 * XREFs of EditionInputExtensibilityCallout @ 0x1402AA250
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientCallDevCallbackSimple @ 0x1402617D0 (xxxClientCallDevCallbackSimple.c)
 */

__int64 __fastcall EditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 4) == 1 || *(_DWORD *)(a2 + 4) == 3 )
    return xxxClientCallDevCallbackSimple(a1, (__int128 *)a2);
  return result;
}
