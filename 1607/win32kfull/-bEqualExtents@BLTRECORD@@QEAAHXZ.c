/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C004CC70
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 46) - *((_DWORD *)this + 44) == *((_DWORD *)this + 40) - *((_DWORD *)this + 38)
      && *((_DWORD *)this + 47) - *((_DWORD *)this + 45) == *((_DWORD *)this + 41) - *((_DWORD *)this + 39);
}
