/*
 * XREFs of _lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator() @ 0x18007664C
 * Callers:
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180076C10 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025A38 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007619C (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ?push_back@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18007723C (-push_back@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevice.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator()(
        _QWORD *a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v2; // r8
  struct IInspectable *v4; // rcx
  int *result; // rax
  struct IInspectable *v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0LL;
  v7 = 0LL;
  result = (int *)a1[1];
  if ( *result >= 0 )
  {
    result = (int *)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v7);
    v4 = v7;
    if ( (int)result >= 0 )
    {
      if ( v7 )
      {
        v8 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v7, &v8) >= 0 )
        {
          try
          {
            std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::push_back(*a1, &v8);
          }
          catch ( std::bad_alloc )
          {
            *(_DWORD *)a1[1] = -2147024882;
          }
        }
        result = (int *)Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v8);
        v4 = v7;
      }
    }
  }
  if ( v4 )
  {
    v7 = 0LL;
    return (int *)((__int64 (__fastcall *)(struct IInspectable *, Microsoft::WRL::Details::WeakReferenceImpl **, Microsoft::WRL::Details::WeakReferenceImpl **))v4->lpVtbl->Release)(
                    v4,
                    a2,
                    v2);
  }
  return result;
}
