/*
 * XREFs of IsImmersiveAppIORestricted @ 0x1C00DEF54
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 768);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}
