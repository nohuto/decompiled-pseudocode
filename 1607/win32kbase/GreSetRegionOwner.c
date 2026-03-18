/*
 * XREFs of GreSetRegionOwner @ 0x1C00578B0
 * Callers:
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0056338 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     EngCreateRectRgn @ 0x1C0057710 (EngCreateRectRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0057880 (CreateEmptyRgnPublic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetRegionOwner(__int64 a1, unsigned int a2)
{
  PsGetCurrentProcessId();
  if ( a2 == -2147483646 )
    a2 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  return HmgSetOwner(a1, a2, 4u);
}
