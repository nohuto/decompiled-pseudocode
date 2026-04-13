/*
 * XREFs of ?GetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x18003B358
 * Callers:
 *     ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438 (-CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UITargetedCon.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x180048320 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetString(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        HSTRING *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r9
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rcx
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+38h] BYREF

  v18[1] = -2LL;
  if ( !a3 )
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)0x80004003LL);
    return (unsigned int)v6;
  }
  v18[0] = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  if ( !v8 )
  {
    v6 = -2147467261;
    goto LABEL_10;
  }
  v9 = (**v8)(v8, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v20);
  v6 = v9;
  if ( v9 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9);
  if ( v6 < 0 )
  {
    v7 = v20;
LABEL_10:
    if ( v7 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_23;
  }
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, a2, &v21);
  if ( v6 < 0 )
  {
LABEL_13:
    v10 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
    }
    v7 = v20;
    goto LABEL_10;
  }
  v11 = (**v21)(v21, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v18);
  v6 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v11);
    goto LABEL_13;
  }
  v12 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
  }
  v13 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v6 = 0;
LABEL_23:
  if ( v6 < 0 )
    goto LABEL_24;
  v15 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}(v18[0], a3);
  v6 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v15);
LABEL_24:
    v14 = v18[0];
    if ( v18[0] )
    {
      v18[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)v6;
  }
  v16 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0;
}
