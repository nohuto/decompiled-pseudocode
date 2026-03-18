/*
 * XREFs of ??1SURFREFVIEW@@QEAA@XZ @ 0x1C00B148C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SURFREFVIEW::~SURFREFVIEW(SURFACE **this)
{
  SURFREFVIEW::bUnMap(this);
}
