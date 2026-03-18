/*
 * XREFs of ??1SURFREFVIEW@@QEAA@XZ @ 0x1C00A8C5C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SURFREFVIEW::~SURFREFVIEW(SURFREFVIEW *this)
{
  SURFREFVIEW::bUnMap(this);
}
