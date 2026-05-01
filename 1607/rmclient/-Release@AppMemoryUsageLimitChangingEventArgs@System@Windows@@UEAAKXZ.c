/*
 * XREFs of ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800021F0
 * Callers:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x180006B60 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x180006B70 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
