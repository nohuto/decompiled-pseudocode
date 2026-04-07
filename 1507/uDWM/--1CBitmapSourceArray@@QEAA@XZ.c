/*
 * XREFs of ??1CBitmapSourceArray@@QEAA@XZ @ 0x180048328
 * Callers:
 *     _dynamic_atexit_destructor_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x18004AD60 (_dynamic_atexit_destructor_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E54C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBitmapSourceArray::~CBitmapSourceArray(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
