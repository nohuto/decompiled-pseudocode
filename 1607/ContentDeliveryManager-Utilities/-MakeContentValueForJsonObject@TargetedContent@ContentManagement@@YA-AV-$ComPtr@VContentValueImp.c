/*
 * XREFs of ?MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B588
 * Callers:
 *     ?RuntimeClassInitialize@ContentItemImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x180049B54 (-RuntimeClassInitialize@ContentItemImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentValue@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AF00 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000DDB4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?StringContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004A834 (-StringContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@T.c)
 *     ?BooleanContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004A978 (-BooleanContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@.c)
 *     ?UriContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004AA84 (-UriContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Targ.c)
 *     ?NumericContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004AD0C (-NumericContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@.c)
 *     ?FileContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B100 (-FileContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Tar.c)
 *     ?ImageContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B248 (-ImageContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Ta.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800535E0 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
volatile signed __int64 **__fastcall ContentManagement::TargetedContent::MakeContentValueForJsonObject(
        volatile signed __int64 **a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        _DWORD *a3)
{
  wchar_t **v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // r8d
  volatile signed __int64 ***v19; // rax
  volatile signed __int64 *v20; // rdx
  volatile signed __int64 *v21; // rcx
  bool v22; // zf
  volatile signed __int64 *v23; // rcx
  volatile signed __int64 *v25; // [rsp+20h] [rbp-60h] BYREF
  char v26[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 **v28; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h]
  char v31[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v30 = -2LL;
  v28 = a1;
  v29 = 0;
  v27 = 0LL;
  if ( (**a2)(a2, &GUID_c9d9a725_786b_5113_b4b7_9b61764c220b, &v27) < 0 )
  {
LABEL_9:
    v11 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v9 = 0;
  }
  else
  {
    v6 = &off_18008B240;
    while ( 1 )
    {
      v7 = v27;
      v8 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v31, (const WCHAR **)v6);
      if ( (*(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v7 + 64LL))(v7, *v8, v26) >= 0 )
      {
        if ( v26[0] )
          break;
      }
      v6 += 2;
      if ( v6 == (wchar_t **)&std::logic_error `RTTI Type Descriptor' )
        goto LABEL_9;
    }
    v9 = *((_DWORD *)v6 + 2);
    v10 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  *a1 = 0LL;
  v29 = 1;
  v12 = v9 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 1 )
            {
              v17 = wil::verify_hresult<long>(0x80070057);
              wil::details::in1diag3::Throw_Hr(retaddr, (void *)0x207, v18, (const char *)v17, (int)v25);
              __debugbreak();
            }
            v19 = (volatile signed __int64 ***)ContentManagement::TargetedContent::FileContentValueFromJson(
                                                 (__int64 *)&v25,
                                                 (__int64)a2,
                                                 a3);
          }
          else
          {
            v19 = (volatile signed __int64 ***)ContentManagement::TargetedContent::ImageContentValueFromJson(
                                                 (__int64 *)&v25,
                                                 (__int64)a2,
                                                 a3);
          }
        }
        else
        {
          ContentManagement::TargetedContent::NumericContentValueFromJson((__int64 *)&v25, (__int64)a2);
        }
      }
      else
      {
        v19 = (volatile signed __int64 ***)ContentManagement::TargetedContent::UriContentValueFromJson(
                                             (HSTRING)&v25,
                                             (__int64)a2);
      }
    }
    else
    {
      ContentManagement::TargetedContent::BooleanContentValueFromJson((__int64 *)&v25, (__int64)a2);
    }
  }
  else
  {
    v19 = (volatile signed __int64 ***)ContentManagement::TargetedContent::StringContentValueFromJson(
                                         (HSTRING)&v25,
                                         (__int64)a2);
  }
  v20 = 0LL;
  if ( &v28 != v19 )
  {
    v20 = (volatile signed __int64 *)*v19;
    *v19 = 0LL;
  }
  v21 = *a1;
  v22 = *a1 == 0LL;
  *a1 = v20;
  if ( !v22 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v21);
  v23 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v23);
  }
  return a1;
}
