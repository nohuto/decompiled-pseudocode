/*
 * XREFs of IsImmersiveAppIORestricted @ 0x1C0086DD0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 776);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}
