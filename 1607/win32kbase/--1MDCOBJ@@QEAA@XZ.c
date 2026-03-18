/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C0026B30
 * Callers:
 *     hbmSelectBitmap @ 0x1C0025B20 (hbmSelectBitmap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
