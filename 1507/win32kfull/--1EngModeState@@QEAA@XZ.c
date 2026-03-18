/*
 * XREFs of ??1EngModeState@@QEAA@XZ @ 0x1C026348C
 * Callers:
 *     W32kCddClipRegion @ 0x1C0265210 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_QWORD *)this )
    *(_BYTE *)(*(_QWORD *)this + 331LL) = 0;
}
