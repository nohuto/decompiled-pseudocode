/*
 * XREFs of ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18000B970
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18000DDC0 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rsi
  __int64 v6; // r8
  signed __int32 v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v12; // rdx
  bool i; // zf
  signed __int64 v14; // rax
  signed __int64 v15; // rsi
  signed __int32 v16; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h]
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  v18 = v2;
  v5 = v2;
  if ( v2 >= 0 )
  {
    v19 = a1 - 8;
    v8 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v17, &v19);
    v9 = *v8;
    *v8 = 0LL;
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
    }
    if ( !v9 )
      return 2147942414LL;
    *(_DWORD *)(v9 + 16) = v5;
    v12 = (v9 >> 1) | 0x8000000000000000uLL;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v12, v5);
    for ( i = v5 == v14; ; i = v14 == v15 )
    {
      v15 = v14;
      if ( i )
      {
        *a2 = v9;
        return 0LL;
      }
      if ( v14 < 0 )
        break;
      *(_DWORD *)(v9 + 16) = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v12, v14);
    }
    *(_QWORD *)v9 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    *(_DWORD *)(v9 + 16) = -1073741823;
    *(_DWORD *)(v9 + 12) = -1073741823;
    operator delete((void *)v9);
    v6 = 2 * v15;
    do
      v16 = *(_DWORD *)(2 * v15 + 0xC);
    while ( v16 != 0x7FFFFFFF && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v16 + 1, v16) );
  }
  else
  {
    v6 = 2 * v2;
    do
      v7 = *(_DWORD *)(v6 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v7 + 1, v7) );
  }
  *a2 = v6;
  return 0LL;
}
