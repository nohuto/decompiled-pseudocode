/*
 * XREFs of ??_E?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x180001220
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180002610 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventAr.c)
 * Callees:
 *     ??1?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x1800012F4 (--1-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180001954 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??3@YAXPEAX@Z @ 0x180005B08 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr,2>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::~GitPtrImpl<Windows::Internal::GitPtr>(Block + 10);
  Block[9] = -1073741823;
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(Block + 6);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
