/*
 * XREFs of ??_GSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180006250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180004334 (--1-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation *__fastcall Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
