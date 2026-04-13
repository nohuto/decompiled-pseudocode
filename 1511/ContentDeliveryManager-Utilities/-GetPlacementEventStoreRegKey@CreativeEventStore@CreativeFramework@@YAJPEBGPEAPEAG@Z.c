/*
 * XREFs of ?GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x18000D0E8
 * Callers:
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18000D174 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000256C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180013BBC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::GetPlacementEventStoreRegKey(
        CreativeFramework::CreativeEventStore *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  memset(v8, 0, 24);
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v8,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0LL;
    *(_QWORD *)a2 = v8[0];
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      37LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h",
      (const char *)(unsigned int)v4);
    v6 = (void *)v8[0];
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v5;
}
