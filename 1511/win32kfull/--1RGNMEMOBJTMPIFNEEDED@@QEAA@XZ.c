/*
 * XREFs of ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0008088
 * Callers:
 *     EngFillPath @ 0x1C00E6210 (EngFillPath.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
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
