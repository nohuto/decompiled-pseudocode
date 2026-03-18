/*
 * XREFs of GreSetRegionOwner @ 0x1C00697B0
 * Callers:
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0069744 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     EngCreateRectRgn @ 0x1C0069780 (EngCreateRectRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetRegionOwner(int a1, unsigned int a2)
{
  PsGetCurrentProcessId();
  if ( a2 == -2147483646 )
    a2 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  return HmgSetOwner(a1, a2, 4);
}
