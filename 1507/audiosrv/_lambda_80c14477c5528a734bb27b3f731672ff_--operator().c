/*
 * XREFs of _lambda_80c14477c5528a734bb27b3f731672ff_::operator() @ 0x18009074C
 * Callers:
 *     ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180090E70 (-GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV-$vec.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800670B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006718C (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?push_back@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800913AC (-push_back@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStrea.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_80c14477c5528a734bb27b3f731672ff_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  __int64 v3; // rdi
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v5[1] = -2LL;
  v5[0] = 0LL;
  if ( **(int **)a1 >= 0 && (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, v5) >= 0 && v5[0] )
  {
    v8 = 0LL;
    v7 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(v5, &v8) >= 0 )
    {
      v3 = v8;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v7);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 152LL))(v3, &v7) >= 0
        && v7 == **(_QWORD **)(a1 + 8) )
      {
        try
        {
          std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::push_back(**(_QWORD **)(a1 + 16), &v8);
        }
        catch ( std::bad_alloc )
        {
          **(_DWORD **)a1 = -2147024882;
        }
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v8);
  }
  return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v5);
}
