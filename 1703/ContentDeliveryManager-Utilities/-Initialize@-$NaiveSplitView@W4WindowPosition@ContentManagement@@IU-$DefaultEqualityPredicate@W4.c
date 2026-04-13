/*
 * XREFs of ?Initialize@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@@Z @ 0x18005F0C8
 * Callers:
 *     ?Split@View@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@456@0@Z @ 0x18005DD70 (-Split@View@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@Conte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v13);
  if ( v4 < 0 )
    goto LABEL_17;
  v15 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1,
         &v15);
  if ( v4 == -2147467262 )
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    RoTransformError(2147500034LL, 2147549183LL, 0LL);
  }
  if ( v4 >= 0 )
  {
    v5 = v15;
    v6 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v14);
  }
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v4 < 0 )
  {
LABEL_17:
    v9 = v14;
  }
  else
  {
    v8 = v13;
    v9 = v14;
    if ( *(_QWORD *)(a1 + 88) != v14 )
    {
      v10 = v14;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v9 = v14;
      }
      v11 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v10;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v9 = v14;
      }
    }
    *(_DWORD *)(a1 + 96) = v8;
    *(_BYTE *)(a1 + 101) = 1;
    v4 = 0;
  }
  if ( v9 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v4;
}
