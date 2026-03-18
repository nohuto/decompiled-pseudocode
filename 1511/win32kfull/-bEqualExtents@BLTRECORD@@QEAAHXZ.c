/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0047F84
 * Callers:
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 46) - *((_DWORD *)this + 44) == *((_DWORD *)this + 40) - *((_DWORD *)this + 38)
      && *((_DWORD *)this + 47) - *((_DWORD *)this + 45) == *((_DWORD *)this + 41) - *((_DWORD *)this + 39);
}
