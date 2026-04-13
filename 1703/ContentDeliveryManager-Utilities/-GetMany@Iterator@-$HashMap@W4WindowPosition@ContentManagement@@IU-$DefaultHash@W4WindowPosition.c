/*
 * XREFs of ?GetMany@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@PEAI@Z @ 0x18005CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D350 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@W4WindowPosition@ContentManagement@@I@.c)
 *     ?GetNext@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAPEAVCPair@12@AEAPEAUTXPOSITION@2@@Z @ 0x18005DF8C (-GetNext@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 *     ??$Make@V?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@@12@$$QEAUpermission@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@@Z @ 0x18005E190 (--$Make@V-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Wi.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::GetMany(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  unsigned int v6; // ebx
  int v8; // ebx
  _DWORD *v9; // r14
  __int64 v10; // r13
  int v11; // edi
  _DWORD *v12; // rbx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rbx
  unsigned int *v16; // rax
  _DWORD *v18; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+48h]
  unsigned int *v23; // [rsp+A8h] [rbp+58h]

  v23 = a4;
  v22 = a2;
  v21 = 0;
  v4 = 0;
  *a4 = 0;
  v5 = a3;
  v6 = a2;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read((__int64)&v20, (RTL_SRWLOCK *)(a1[7] + 152LL), &v21);
  if ( v21 >= 0 )
  {
    if ( *(_QWORD *)(a1[7] + 168LL) == a1[9] )
    {
      v8 = 0;
    }
    else
    {
      v8 = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
    }
    v21 = v8;
    v6 = v22;
  }
  v9 = (_DWORD *)a1[8];
  v10 = 0LL;
  v11 = v21;
  v19 = v9;
  if ( v21 < 0 )
    goto LABEL_22;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= v6 )
      goto LABEL_27;
    if ( v11 >= 0 )
      break;
LABEL_18:
    v10 = (unsigned int)(v10 + 1);
    if ( v11 < 0 )
      goto LABEL_19;
  }
  if ( !v9 )
    goto LABEL_27;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>,Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::permission>(&v18);
  v12 = v18;
  if ( !v18 )
  {
    v11 = -2147024882;
    v21 = -2147024882;
LABEL_17:
    v6 = v22;
    goto LABEL_18;
  }
  v13 = *v9;
  v11 = 0;
  v14 = v9[1];
  v18 = 0LL;
  v12[14] = v13;
  v12[15] = v14;
  v21 = 0;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  v5[v10] = v12;
  XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNext(
    a1[7] + 64LL,
    &v19);
  v9 = v19;
  ++v4;
  if ( v19 )
  {
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v12);
    goto LABEL_17;
  }
  if ( !v12 )
    goto LABEL_28;
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v12);
LABEL_27:
  if ( v11 >= 0 )
  {
LABEL_28:
    v16 = v23;
    a1[8] = v9;
    *v16 = v4;
    goto LABEL_22;
  }
LABEL_19:
  if ( v4 )
  {
    v15 = v4;
    do
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
      *v5++ = 0LL;
      --v15;
    }
    while ( v15 );
  }
LABEL_22:
  if ( v20 )
  {
    if ( *(_DWORD *)v20 == 1 )
      --*(_DWORD *)(v20 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v20 + 8));
  }
  return (unsigned int)v11;
}
