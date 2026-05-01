/*
 * XREFs of ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18004A0F0
 * Callers:
 *     ?PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z @ 0x18004B2CC (-PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@UDummy@Details@23@@Z @ 0x1800480AC (--$-0V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@HStringReference@Wrappers@WR.c)
 *     ??$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIXmlDocument@Dom@Xml@Data@1@@Z @ 0x18004810C (--$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@P.c)
 *     ??$As@UIXmlNode@Dom@Xml@Data@Windows@@@?$ComPtr@UIXmlElement@Dom@Xml@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXmlNode@Dom@Xml@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800481C4 (--$As@UIXmlNode@Dom@Xml@Data@Windows@@@-$ComPtr@UIXmlElement@Dom@Xml@Data@Windows@@@WRL@Microsof.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004920C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180049D80 (-GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$a.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EnergyToastMessage::GetToastXml(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rdi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rsi
  GUID *v24; // rdi
  int v25; // eax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // rdi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rsi
  GUID *v32; // rdi
  int v33; // eax
  __int64 (__fastcall ***v34)(_QWORD, GUID *, _QWORD *); // rdi
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rsi
  GUID *v40; // rdi
  int v41; // eax
  int TargetAppDisplayName; // eax
  __int64 (__fastcall ***v43)(_QWORD, GUID *, _QWORD *); // rsi
  HSTRING_HEADER *v44; // rax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdi
  int v48; // eax
  __int64 (__fastcall ***v49)(_QWORD, GUID *, _QWORD *); // rdi
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdi
  int v53; // eax
  __int64 v54; // rsi
  GUID *v55; // rdi
  int v56; // eax
  __int64 (__fastcall ***v57)(_QWORD, GUID *, _QWORD *); // rsi
  HSTRING_HEADER *v58; // rax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdi
  int v62; // eax
  int v63; // eax
  __int64 v64; // rdi
  int v65; // eax
  __int64 *StringRawBuffer; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  int v70[2]; // [rsp+20h] [rbp-B9h] BYREF
  __int64 (__fastcall ***v71)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-B1h] BYREF
  __int64 v72; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v73; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v74; // [rsp+40h] [rbp-99h] BYREF
  HSTRING string; // [rsp+48h] [rbp-91h] BYREF
  __int64 v76; // [rsp+50h] [rbp-89h] BYREF
  __int64 v77; // [rsp+58h] [rbp-81h] BYREF
  __int64 v78; // [rsp+60h] [rbp-79h] BYREF
  __int64 v79; // [rsp+68h] [rbp-71h] BYREF
  __int64 v80; // [rsp+70h] [rbp-69h] BYREF
  __int64 v81; // [rsp+78h] [rbp-61h] BYREF
  __int64 v82; // [rsp+80h] [rbp-59h] BYREF
  __int64 v83; // [rsp+88h] [rbp-51h] BYREF
  __int64 v84; // [rsp+90h] [rbp-49h] BYREF
  void *v85[2]; // [rsp+98h] [rbp-41h] BYREF
  _WORD v86[8]; // [rsp+A8h] [rbp-31h] BYREF
  HSTRING_HEADER v87; // [rsp+B8h] [rbp-21h] BYREF
  GUID *v88; // [rsp+D0h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v90; // [rsp+F0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v85[0] = v86;
  v71 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v83 = 0LL;
  v78 = 0LL;
  v81 = 0LL;
  v76 = 0LL;
  v79 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  *(_QWORD *)v70 = 0LL;
  v74 = 0LL;
  v77 = 0LL;
  v85[1] = v86;
  v86[0] = 0;
  v84 = 0LL;
  string = 0LL;
  v90 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Xml.Dom.XmlDocument",
    0x21u,
    0x20u);
  v4 = v90;
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v71);
  v5 = Windows::Foundation::ActivateInstance<Windows::Data::Xml::Dom::IXmlDocument>(v4, &v71);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v82);
    v9 = (**v71)(v71, &GUID_1c741d59_2122_47d5_a856_83f3d4214875, &v82);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v10 = v71;
      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v80);
      v90 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"toast", 6u, 5u);
      v11 = (*v10)[9](v10, (GUID *)v90, &v80);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v12 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                &v80,
                (__int64)&v83);
        v6 = v12;
        if ( v12 >= 0 )
        {
          v13 = v82;
          Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v13 + 176LL))(v13, v83, v70);
          v6 = v14;
          if ( v14 >= 0 )
          {
            v15 = v80;
            v90 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"ms-settings:batterysaver",
              0x19u,
              0x18u);
            v16 = v90;
            v88 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v87, L"launch", 7u, 6u);
            v17 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 64LL))(v15, v88, v16);
            v6 = v17;
            if ( v17 >= 0 )
            {
              v18 = v71;
              Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v78);
              v88 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v87, L"visual", 7u, 6u);
              v19 = (*v18)[9](v18, v88, &v78);
              v6 = v19;
              if ( v19 >= 0 )
              {
                v20 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                        &v78,
                        (__int64)&v81);
                v6 = v20;
                if ( v20 >= 0 )
                {
                  v21 = v83;
                  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
                  v22 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v21 + 176LL))(v21, v81, v70);
                  v6 = v22;
                  if ( v22 >= 0 )
                  {
                    v23 = v78;
                    v88 = 0LL;
                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v87, L"1", 2u, 1u);
                    v24 = v88;
                    v90 = 0LL;
                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"version", 8u, 7u);
                    v25 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v23 + 64LL))(v23, v90, v24);
                    v6 = v25;
                    if ( v25 >= 0 )
                    {
                      v26 = v71;
                      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v76);
                      v88 = 0LL;
                      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v87, L"binding", 8u, 7u);
                      v27 = (*v26)[9](v26, v88, &v76);
                      v6 = v27;
                      if ( v27 >= 0 )
                      {
                        v28 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                                &v76,
                                (__int64)&v79);
                        v6 = v28;
                        if ( v28 >= 0 )
                        {
                          v29 = v81;
                          Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
                          v30 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v29 + 176LL))(
                                  v29,
                                  v79,
                                  v70);
                          v6 = v30;
                          if ( v30 >= 0 )
                          {
                            v31 = v76;
                            v88 = 0LL;
                            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                              &v87,
                              L"ToastText02",
                              0xCu,
                              0xBu);
                            v32 = v88;
                            v90 = 0LL;
                            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                              &hstringHeader,
                              L"template",
                              9u,
                              8u);
                            v33 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v31 + 64LL))(
                                    v31,
                                    v90,
                                    v32);
                            v6 = v33;
                            if ( v33 >= 0 )
                            {
                              v34 = v71;
                              Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v72);
                              v88 = 0LL;
                              Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v87, L"text", 5u, 4u);
                              v35 = (*v34)[9](v34, v88, &v72);
                              v6 = v35;
                              if ( v35 >= 0 )
                              {
                                v36 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                                        &v72,
                                        (__int64)&v73);
                                v6 = v36;
                                if ( v36 >= 0 )
                                {
                                  v37 = v79;
                                  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
                                  v38 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v37 + 176LL))(
                                          v37,
                                          v73,
                                          v70);
                                  v6 = v38;
                                  if ( v38 >= 0 )
                                  {
                                    v39 = v72;
                                    v88 = 0LL;
                                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v87, L"1", 2u, 1u);
                                    v40 = v88;
                                    v90 = 0LL;
                                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                                      &hstringHeader,
                                      L"id",
                                      3u,
                                      2u);
                                    v41 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v39 + 64LL))(
                                            v39,
                                            v90,
                                            v40);
                                    v6 = v41;
                                    if ( v41 >= 0 )
                                    {
                                      TargetAppDisplayName = EnergyToastMessage::GetTargetAppDisplayName(
                                                               a1,
                                                               (__int64)v85);
                                      v6 = TargetAppDisplayName;
                                      if ( TargetAppDisplayName >= 0 )
                                      {
                                        v43 = v71;
                                        Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v74);
                                        v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                &v87,
                                                (const WCHAR **)v85);
                                        v45 = (*v43)[11](v43, (GUID *)v44[1].Reserved.Reserved1, &v74);
                                        v6 = v45;
                                        if ( v45 >= 0 )
                                        {
                                          v46 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                                                  &v74,
                                                  (__int64)&v77);
                                          v6 = v46;
                                          if ( v46 >= 0 )
                                          {
                                            v47 = v73;
                                            Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
                                            v48 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v47 + 176LL))(
                                                    v47,
                                                    v77,
                                                    v70);
                                            v6 = v48;
                                            if ( v48 >= 0 )
                                            {
                                              v49 = v71;
                                              Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v72);
                                              v88 = 0LL;
                                              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                                                &v87,
                                                L"text",
                                                5u,
                                                4u);
                                              v50 = (*v49)[9](v49, v88, &v72);
                                              v6 = v50;
                                              if ( v50 >= 0 )
                                              {
                                                v51 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                                                        &v72,
                                                        (__int64)&v73);
                                                v6 = v51;
                                                if ( v51 >= 0 )
                                                {
                                                  v52 = v79;
                                                  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
                                                  v53 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v52 + 176LL))(
                                                          v52,
                                                          v73,
                                                          v70);
                                                  v6 = v53;
                                                  if ( v53 >= 0 )
                                                  {
                                                    v54 = v72;
                                                    v88 = 0LL;
                                                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                                                      &v87,
                                                      L"2",
                                                      2u,
                                                      1u);
                                                    v55 = v88;
                                                    v90 = 0LL;
                                                    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                                                      &hstringHeader,
                                                      L"id",
                                                      3u,
                                                      2u);
                                                    v56 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v54 + 64LL))(
                                                            v54,
                                                            v90,
                                                            v55);
                                                    v6 = v56;
                                                    if ( v56 >= 0 )
                                                    {
                                                      v57 = v71;
                                                      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v74);
                                                      v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                              &v87,
                                                              (const WCHAR **)(a1 + 96));
                                                      v59 = (*v57)[11](v57, (GUID *)v58[1].Reserved.Reserved1, &v74);
                                                      v6 = v59;
                                                      if ( v59 >= 0 )
                                                      {
                                                        v60 = Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlElement>::As<Windows::Data::Xml::Dom::IXmlNode>(
                                                                &v74,
                                                                (__int64)&v77);
                                                        v6 = v60;
                                                        if ( v60 >= 0 )
                                                        {
                                                          v61 = v73;
                                                          Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
                                                          v62 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v61 + 176LL))(
                                                                  v61,
                                                                  v77,
                                                                  v70);
                                                          v6 = v62;
                                                          if ( v62 >= 0 )
                                                          {
                                                            Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v84);
                                                            v63 = (**v71)(
                                                                    v71,
                                                                    &GUID_5cc5b382_e6dd_4991_abef_06d8d2e7bd0c,
                                                                    &v84);
                                                            v6 = v63;
                                                            if ( v63 >= 0 )
                                                            {
                                                              v64 = v84;
                                                              WindowsDeleteString(string);
                                                              string = 0LL;
                                                              v65 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v64 + 48LL))(
                                                                      v64,
                                                                      &string);
                                                              v6 = v65;
                                                              if ( v65 >= 0 )
                                                              {
                                                                StringRawBuffer = (__int64 *)WindowsGetStringRawBuffer(
                                                                                               string,
                                                                                               0LL);
                                                                if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                                                                       a2,
                                                                       StringRawBuffer,
                                                                       v67,
                                                                       v68) )
                                                                {
                                                                  v6 = 0;
                                                                  goto LABEL_67;
                                                                }
                                                                v6 = -2147024882;
                                                                v8 = 1799LL;
                                                                v7 = 2147942414LL;
                                                              }
                                                              else
                                                              {
                                                                v7 = (unsigned int)v65;
                                                                v8 = 1798LL;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v7 = (unsigned int)v63;
                                                              v8 = 1797LL;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v7 = (unsigned int)v62;
                                                            v8 = 1794LL;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v7 = (unsigned int)v60;
                                                          v8 = 1793LL;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v7 = (unsigned int)v59;
                                                        v8 = 1792LL;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v7 = (unsigned int)v56;
                                                      v8 = 1791LL;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v7 = (unsigned int)v53;
                                                    v8 = 1790LL;
                                                  }
                                                }
                                                else
                                                {
                                                  v7 = (unsigned int)v51;
                                                  v8 = 1789LL;
                                                }
                                              }
                                              else
                                              {
                                                v7 = (unsigned int)v50;
                                                v8 = 1788LL;
                                              }
                                            }
                                            else
                                            {
                                              v7 = (unsigned int)v48;
                                              v8 = 1785LL;
                                            }
                                          }
                                          else
                                          {
                                            v7 = (unsigned int)v46;
                                            v8 = 1784LL;
                                          }
                                        }
                                        else
                                        {
                                          v7 = (unsigned int)v45;
                                          v8 = 1783LL;
                                        }
                                      }
                                      else
                                      {
                                        v7 = (unsigned int)TargetAppDisplayName;
                                        v8 = 1782LL;
                                      }
                                    }
                                    else
                                    {
                                      v7 = (unsigned int)v41;
                                      v8 = 1781LL;
                                    }
                                  }
                                  else
                                  {
                                    v7 = (unsigned int)v38;
                                    v8 = 1780LL;
                                  }
                                }
                                else
                                {
                                  v7 = (unsigned int)v36;
                                  v8 = 1779LL;
                                }
                              }
                              else
                              {
                                v7 = (unsigned int)v35;
                                v8 = 1778LL;
                              }
                            }
                            else
                            {
                              v7 = (unsigned int)v33;
                              v8 = 1775LL;
                            }
                          }
                          else
                          {
                            v7 = (unsigned int)v30;
                            v8 = 1774LL;
                          }
                        }
                        else
                        {
                          v7 = (unsigned int)v28;
                          v8 = 1773LL;
                        }
                      }
                      else
                      {
                        v7 = (unsigned int)v27;
                        v8 = 1772LL;
                      }
                    }
                    else
                    {
                      v7 = (unsigned int)v25;
                      v8 = 1769LL;
                    }
                  }
                  else
                  {
                    v7 = (unsigned int)v22;
                    v8 = 1768LL;
                  }
                }
                else
                {
                  v7 = (unsigned int)v20;
                  v8 = 1767LL;
                }
              }
              else
              {
                v7 = (unsigned int)v19;
                v8 = 1766LL;
              }
            }
            else
            {
              v7 = (unsigned int)v17;
              v8 = 1763LL;
            }
          }
          else
          {
            v7 = (unsigned int)v14;
            v8 = 1762LL;
          }
        }
        else
        {
          v7 = (unsigned int)v12;
          v8 = 1761LL;
        }
      }
      else
      {
        v7 = (unsigned int)v11;
        v8 = 1760LL;
      }
    }
    else
    {
      v7 = (unsigned int)v9;
      v8 = 1757LL;
    }
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 1756LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)v8,
    (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)v7,
    v70[0]);
LABEL_67:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v84);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v85);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v77);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v74);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v70);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v73);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v72);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v79);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v76);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v81);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v78);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v83);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v80);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v82);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v71);
  return v6;
}
