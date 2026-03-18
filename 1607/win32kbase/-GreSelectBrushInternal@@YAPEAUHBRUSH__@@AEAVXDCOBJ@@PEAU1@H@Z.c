/*
 * XREFs of ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00BCFF0
 * Callers:
 *     GreSelectBrush @ 0x1C005C6C0 (GreSelectBrush.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreDCSelectBrush @ 0x1C0059210 (GreDCSelectBrush.c)
 */

__int64 __fastcall GreSelectBrushInternal(struct XDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3
    || (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      *(struct OBJECT **)a1)
        + 2) & 0xFFFFFFFE) != 0 )
  {
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  }
  return v3;
}
