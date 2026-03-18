/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C0005D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiBeginGdiRendering(HSURF a1)
{
  return GreBeginGdiRenderingToDxSurface(a1);
}
