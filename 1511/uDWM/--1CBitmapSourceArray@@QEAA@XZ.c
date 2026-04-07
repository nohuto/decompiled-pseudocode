/*
 * XREFs of ??1CBitmapSourceArray@@QEAA@XZ @ 0x18004EAA8
 * Callers:
 *     sub_180051400 @ 0x180051400 (sub_180051400.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ABC (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBitmapSourceArray::~CBitmapSourceArray(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
