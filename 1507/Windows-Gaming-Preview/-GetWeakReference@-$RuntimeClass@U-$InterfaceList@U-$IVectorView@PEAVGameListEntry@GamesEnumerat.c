/*
 * XREFs of ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800026C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18000793C (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800079E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rsi
  __int64 v6; // r8
  signed __int32 v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v11; // rdx
  bool i; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rsi
  signed __int32 v15; // eax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h]
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  *a2 = 0LL;
  v17 = v2;
  v5 = v2;
  if ( v2 >= 0 )
  {
    v18 = a1 - 8;
    v8 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v16, &v18);
    v9 = *v8;
    *v8 = 0LL;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    }
    if ( !v9 )
      return 2147942414LL;
    *(_DWORD *)(v9 + 16) = v5;
    v11 = (v9 >> 1) | 0x8000000000000000uLL;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v11, v5);
    for ( i = v5 == v13; ; i = v13 == v14 )
    {
      v14 = v13;
      if ( i )
      {
        *a2 = v9;
        return 0LL;
      }
      if ( v13 < 0 )
        break;
      *(_DWORD *)(v9 + 16) = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v11, v13);
    }
    *(_QWORD *)v9 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    *(_DWORD *)(v9 + 16) = -1073741823;
    *(_DWORD *)(v9 + 12) = -1073741823;
    operator delete((void *)v9);
    v6 = 2 * v14;
    do
      v15 = *(_DWORD *)(2 * v14 + 0xC);
    while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v15 + 1, v15) );
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
