/*
 * XREFs of ??_E?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18000CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 8uLL);
  return a1;
}
