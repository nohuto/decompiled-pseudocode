/*
 * XREFs of ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0004F04
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED(RGNMEMOBJTMPIFNEEDED *this)
{
  if ( *((_DWORD *)this + 4) )
  {
    RGNMEMOBJ::vPopThreadGuardedObject(this);
    RGNOBJ::vDeleteRGNOBJ(this);
  }
  if ( *((_DWORD *)this + 2) == 1 )
    RGNOBJ::vDeleteRGNOBJ(this);
}
