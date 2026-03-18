/*
 * XREFs of IsPointerPromotedMouseMessage @ 0x1C0090B4C
 * Callers:
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerPromotedMouseMessage(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 && (unsigned int)(a1 - 512) <= 0xE )
    return ((*a2 - 4) & 0xFFFFFFFB) == 0;
  return v2;
}
