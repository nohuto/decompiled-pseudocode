/*
 * XREFs of GreSetRegionOwner @ 0x1C0011B80
 * Callers:
 *     EngCreateRectRgn @ 0x1C0011B10 (EngCreateRectRgn.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C006D40C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetRegionOwner(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8

  PsGetCurrentProcessId();
  if ( a2 == -2147483646 )
    a2 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(v4) = 4;
  return HmgSetOwner(a1, a2, v4);
}
