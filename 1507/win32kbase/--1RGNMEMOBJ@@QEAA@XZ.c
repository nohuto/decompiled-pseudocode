/*
 * XREFs of ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C004C104
 * Callers:
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::~RGNMEMOBJ(__int16 **this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    RGNOBJ::vDeleteRGNOBJ(this);
}
