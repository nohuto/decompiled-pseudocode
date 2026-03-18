/*
 * XREFs of UnlockQueue @ 0x1C00A4970
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C0035760 (Win32FreeToPagedLookasideList.c)
 */

__int64 __fastcall UnlockQueue(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 340))-- == 1 && (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
    return Win32FreeToPagedLookasideList();
  return result;
}
