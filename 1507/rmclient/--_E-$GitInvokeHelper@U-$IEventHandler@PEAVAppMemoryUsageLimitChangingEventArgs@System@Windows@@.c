/*
 * XREFs of ??_E?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x18000C840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002870 (-InternalRelease@-$ComPtr@UIModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     ??1?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x18000C760 (--1-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ.c)
 */

void *__fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr,2>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::~GitPtrImpl<Windows::Internal::GitPtr>((__int64)Block + 40);
  *((_DWORD *)Block + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IModernResourceManagerProxy>::InternalRelease((__int64 *)Block + 3);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
