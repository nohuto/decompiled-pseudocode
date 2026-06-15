/*
 * XREFs of ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180021C00
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180021D10 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800219A0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

bool __fastcall CDeviceGraphObjectsStore::SaDeviceExists(CDeviceGraphObjectsStore *this, enum _AUDCLNT_SHAREMODE a2)
{
  bool v2; // bl
  void **v4; // [rsp+20h] [rbp-48h] BYREF
  enum _AUDCLNT_SHAREMODE v5; // [rsp+28h] [rbp-40h]
  void ***v6; // [rsp+58h] [rbp-10h]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = &std::_Func_impl<_lambda_c7c1c81e1b12c5b6da40af71127e61d7_,std::allocator<int>,bool,ISaDeviceProxy *>::`vftable';
  v5 = a2;
  v6 = &v4;
  v2 = (int)CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)&v4, &v7) >= 0;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v7);
  return v2;
}
