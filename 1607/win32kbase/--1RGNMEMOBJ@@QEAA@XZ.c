/*
 * XREFs of ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00317EC
 * Callers:
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::~RGNMEMOBJ(__int16 **this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    RGNOBJ::vDeleteRGNOBJ(this);
}
