/*
 * XREFs of ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0036ED0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0035B84 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMapImmediate(SURFACE **this, void *a2, struct DC *a3)
{
  __int64 result; // rax
  SURFACE *v5; // rcx

  result = 0LL;
  v5 = *this;
  if ( v5 )
    result = SURFACE::bUnMapImmediate(v5, a2, a3);
  *this = 0LL;
  return result;
}
