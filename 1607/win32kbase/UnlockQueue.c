/*
 * XREFs of UnlockQueue @ 0x1C00B3EA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C0036730 (Win32FreeToPagedLookasideList.c)
 */

__int64 __fastcall UnlockQueue(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 348))-- == 1 && (*(_DWORD *)(a1 + 340) & 0x4000000) != 0 )
    return Win32FreeToPagedLookasideList();
  return result;
}
