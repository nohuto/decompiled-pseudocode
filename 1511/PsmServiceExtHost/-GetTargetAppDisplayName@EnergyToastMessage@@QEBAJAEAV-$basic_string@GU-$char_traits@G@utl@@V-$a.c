/*
 * XREFs of ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180050C18
 * Callers:
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180050F88 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800488F0 (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@UDummy@Details@23@@Z @ 0x18004F05C (--$-0V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@HStringReference@Wrappers@WR.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800501B8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180051B58 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EnergyToastMessage::GetTargetAppDisplayName(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rsi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  int ActivationFactory; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  const WCHAR *StringRawBuffer; // rax
  HRESULT v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v21[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  WCHAR pszOutBuf[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v24 = 0LL;
  v23 = 0LL;
  *(_QWORD *)v21 = 0LL;
  v22 = 0LL;
  pszOutBuf[0] = 0;
  memset_0(&pszOutBuf[1], 0, 0x206uLL);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Package",
    0x29u,
    0x28u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
         v27,
         (__int64)&v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v24;
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v23);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)(a1 + 64));
    v10 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v8 + 168LL))(
            v8,
            v9[1].Reserved.Reserved1,
            &v23);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v27 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.StateRepository.MrtPackage",
        0x2Cu,
        0x2Bu);
      v11 = v27;
      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v21);
      ActivationFactory = RoGetActivationFactory(v11, &GUID_8e0f95e9_6a20_4ac3_85d9_6765d7b711fa, v21);
      v5 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        v13 = *(_QWORD *)v21;
        Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v22);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, v23, &v22);
        v5 = v14;
        if ( v14 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v22 + 112LL))(v22, &string);
          v5 = v15;
          if ( v15 >= 0 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v17 = SHLoadIndirectString(StringRawBuffer, pszOutBuf, 0x104u, 0LL);
            v5 = v17;
            if ( v17 >= 0 )
            {
              if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                     a2,
                     (__int64 *)pszOutBuf,
                     v18,
                     v19) )
              {
                v5 = 0;
                goto LABEL_17;
              }
              v5 = -2147024882;
              v7 = 1868LL;
              v6 = 2147942414LL;
            }
            else
            {
              v6 = (unsigned int)v17;
              v7 = 1866LL;
            }
          }
          else
          {
            v6 = (unsigned int)v15;
            v7 = 1864LL;
          }
        }
        else
        {
          v6 = (unsigned int)v14;
          v7 = 1862LL;
        }
      }
      else
      {
        v6 = (unsigned int)ActivationFactory;
        v7 = 1860LL;
      }
    }
    else
    {
      v6 = (unsigned int)v10;
      v7 = 1858LL;
    }
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 1856LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)v7,
    (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)v6,
    v21[0]);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v21);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v24);
  return v5;
}
