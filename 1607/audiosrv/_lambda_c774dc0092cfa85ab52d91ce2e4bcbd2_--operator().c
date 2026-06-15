/*
 * XREFs of _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x18007672C
 * Callers:
 *     ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180076CB0 (-GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV-$vec.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025A38 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004FF60 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?push_back@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800772B8 (-push_back@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStrea.c)
 */

// Hidden C++ exception states: #wind=3
int *__fastcall lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v2; // r8
  struct IInspectable *v4; // rcx
  int *result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IInspectable *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v8[1] = -2LL;
  v2 = a2;
  v4 = 0LL;
  v10 = 0LL;
  result = *(int **)a1;
  if ( **(int **)a1 < 0 )
    goto LABEL_10;
  result = (int *)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v10);
  if ( (int)result >= 0 )
  {
    v4 = v10;
    if ( !v10 )
      goto LABEL_10;
    v11 = 0LL;
    v8[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v10, &v11) >= 0 )
    {
      v6 = v11;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(v8);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 176LL))(v6, v8) >= 0
        && v8[0] == **(_QWORD **)(a1 + 8) )
      {
        try
        {
          std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::push_back(**(_QWORD **)(a1 + 16), &v11);
        }
        catch ( std::bad_alloc )
        {
          **(_DWORD **)a1 = -2147024882;
        }
      }
    }
    result = (int *)Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(v8);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      result = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v4 = v10;
LABEL_10:
  if ( v4 )
  {
    v10 = 0LL;
    return (int *)((__int64 (__fastcall *)(struct IInspectable *, Microsoft::WRL::Details::WeakReferenceImpl **, Microsoft::WRL::Details::WeakReferenceImpl **))v4->lpVtbl->Release)(
                    v4,
                    a2,
                    v2);
  }
  return result;
}
