/*
 * XREFs of ?AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ @ 0x180090D14
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027B30 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUIS.c)
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027750 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CDeviceGraphObjectsStore::AnySaDeviceExists(CDeviceGraphObjectsStore *this)
{
  _QWORD v3[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+68h] [rbp+18h] BYREF
  _QWORD *v5; // [rsp+70h] [rbp+20h]

  v4 = 0LL;
  v5 = v3;
  v3[0] = &std::_Func_impl<std::_Callable_obj<_lambda_1a70960ba4f942cadfd949f5c7a0cc3c_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  v3[3] = v3;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v4);
  LOBYTE(this) = (int)CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v3, &v4) >= 0;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v4);
  return (char)this;
}
