/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C003A96C
 * Callers:
 *     hbmSelectBitmap @ 0x1C0039900 (hbmSelectBitmap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
