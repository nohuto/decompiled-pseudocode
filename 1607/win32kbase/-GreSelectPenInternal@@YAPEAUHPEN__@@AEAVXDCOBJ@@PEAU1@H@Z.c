/*
 * XREFs of ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00BD050
 * Callers:
 *     GreSelectPen @ 0x1C00BD4A0 (GreSelectPen.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 */

__int64 __fastcall GreSelectPenInternal(struct BRUSH ***a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3
    || (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      (struct OBJECT *)*a1)
        + 2) & 0xFFFFFFFE) != 0 )
  {
    return GreDCSelectPen(*a1, a2);
  }
  return v3;
}
