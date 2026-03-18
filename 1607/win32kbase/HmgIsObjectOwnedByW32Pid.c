/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C00C09F4
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C00C0878 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C002B450 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, int a2)
{
  unsigned int v2; // ebx
  ENTRYOBJ *EntryFromObject; // rax

  v2 = 0;
  if ( a1 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        a1);
    if ( EntryFromObject )
      return ENTRYOBJ::bOwnedBy(EntryFromObject, a2);
  }
  return v2;
}
