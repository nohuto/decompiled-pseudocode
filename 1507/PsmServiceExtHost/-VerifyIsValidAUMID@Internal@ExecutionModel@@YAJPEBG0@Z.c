/*
 * XREFs of ?VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z @ 0x180045D48
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$?0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z @ 0x180043904 (--$-0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043950 (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ExecutionModel::Internal::VerifyIsValidAUMID(
        PCWSTR sourceString,
        PCWSTR a2,
        const unsigned __int16 *a3)
{
  __int64 result; // rax
  HSTRING v6; // rbx
  int ActivationFactory; // edi
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  HSTRING v11; // rbx
  HSTRING v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // [rsp+20h] [rbp-59h] BYREF
  __int64 v20; // [rsp+28h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+30h] [rbp-49h] BYREF
  __int64 v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+50h] [rbp-29h] BYREF
  __int64 v26; // [rsp+58h] [rbp-21h] BYREF
  __int64 v27; // [rsp+60h] [rbp-19h] BYREF
  __int64 v28; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h] BYREF
  HSTRING string; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+7h] BYREF

  result = RoInitialize(1LL, a2, a3);
  if ( (int)result >= 0 )
  {
    v24 = 0LL;
    v6 = *Windows::Internal::StringReference::StringReference(&string, L"Windows.Internal.StateRepository.Application");
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v24);
    ActivationFactory = RoGetActivationFactory(v6, &GUID_4ea5d922_2fab_4731_9c4a_568d77bd3ea0, &v24);
    if ( ActivationFactory >= 0 )
    {
      v8 = v24;
      v22 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v22);
      v9 = -1LL;
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
      if ( v10 > 0xFFFFFFFF )
      {
        LODWORD(v10) = -1;
        RaiseException(0xC000000D, 1u, 0, 0LL);
      }
      WindowsCreateStringReference(a2, v10, &hstringHeader, &string);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 120LL))(
                            v8,
                            string,
                            &v22);
      if ( ActivationFactory >= 0 )
      {
        v26 = 0LL;
        v11 = *Windows::Internal::StringReference::StringReference(
                 &string,
                 L"Windows.Internal.StateRepository.PackageUser");
        Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v26);
        ActivationFactory = RoGetActivationFactory(v11, &GUID_ca357daa_fbf0_467a_bf7f_a38e4531f164, &v26);
        if ( ActivationFactory >= 0 )
        {
          v28 = 0LL;
          if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
            RaiseException(0xC000000D, 1u, 0, 0LL);
          ActivationFactory = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
                                (__int64)string,
                                (__int64)&v28);
          if ( ActivationFactory >= 0 )
          {
            v27 = 0LL;
            if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string) < 0 )
              RaiseException(0xC000000D, 1u, 0, 0LL);
            v12 = string;
            Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v27);
            ActivationFactory = RoGetActivationFactory(v12, &GUID_79199dcc_083c_4fd0_9bf7_248da1d4fafb, &v27);
            if ( ActivationFactory >= 0 )
            {
              v13 = v27;
              v23 = 0LL;
              Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v23);
              do
                ++v9;
              while ( sourceString[v9] );
              if ( v9 > 0xFFFFFFFF )
              {
                LODWORD(v9) = -1;
                RaiseException(0xC000000D, 1u, 0, 0LL);
              }
              WindowsCreateStringReference(sourceString, v9, &hstringHeader, &string);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v13 + 80LL))(
                                    v13,
                                    string,
                                    &v23);
              if ( ActivationFactory >= 0 )
              {
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 56LL))(
                                      v22,
                                      &v21);
                if ( ActivationFactory >= 0 )
                {
                  v14 = 0;
                  if ( v21 )
                  {
                    while ( 1 )
                    {
                      v19 = 0LL;
                      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 48LL))(
                                            v22,
                                            v14,
                                            &v19);
                      if ( ActivationFactory < 0 )
                        break;
                      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(
                                            v19,
                                            &v29);
                      if ( ActivationFactory < 0 )
                        break;
                      v25 = 0LL;
                      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v28 + 136LL))(
                                            v28,
                                            v29,
                                            &v25);
                      if ( ActivationFactory < 0 )
                        goto LABEL_41;
                      v20 = 0LL;
                      if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v26 + 120LL))(
                             v26,
                             v23,
                             v25,
                             &v20) >= 0 )
                      {
                        v17 = v20;
                        ActivationFactory = 0;
                        if ( v20 )
                        {
                          v20 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                        }
LABEL_41:
                        Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v25);
                        break;
                      }
                      v15 = v20;
                      if ( v20 )
                      {
                        v20 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                      }
                      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v25);
                      v16 = v19;
                      if ( v19 )
                      {
                        v19 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                      }
                      if ( ++v14 >= v21 )
                        goto LABEL_31;
                    }
                    v18 = v19;
                    if ( v19 )
                    {
                      v19 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                    }
                  }
                  else
                  {
LABEL_31:
                    ActivationFactory = -2147023728;
                  }
                }
              }
              Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v23);
            }
            Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v27);
          }
          Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v28);
        }
        Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v22);
    }
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v24);
    RoUninitialize();
    return (unsigned int)ActivationFactory;
  }
  return result;
}
