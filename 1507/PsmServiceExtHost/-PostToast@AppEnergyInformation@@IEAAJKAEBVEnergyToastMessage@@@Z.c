/*
 * XREFs of ?PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z @ 0x18004B2CC
 * Callers:
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x18004B73C (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180016900 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18004A0F0 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::PostToast(AppEnergyInformation *this, unsigned int a2, __int64 **a3)
{
  int Instance; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  LPVOID v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rdi
  int *ppv; // [rsp+28h] [rbp-A9h]
  int v15[2]; // [rsp+88h] [rbp-49h] BYREF
  LPVOID v16[2]; // [rsp+90h] [rbp-41h] BYREF
  int v17; // [rsp+A0h] [rbp-31h]
  void *v18[2]; // [rsp+A8h] [rbp-29h] BYREF
  _WORD v19[8]; // [rsp+B8h] [rbp-19h] BYREF
  void *v20[2]; // [rsp+C8h] [rbp-9h] BYREF
  _WORD v21[8]; // [rsp+D8h] [rbp+7h] BYREF
  void *v22[2]; // [rsp+E8h] [rbp+17h] BYREF
  _WORD v23[8]; // [rsp+F8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  __int64 v25; // [rsp+150h] [rbp+7Fh] BYREF

  v22[0] = v23;
  v16[0] = 0LL;
  v22[1] = v23;
  v18[0] = v19;
  *(_QWORD *)v15 = 0LL;
  v18[1] = v19;
  v25 = 0LL;
  v20[0] = v21;
  v20[1] = v21;
  v16[1] = 0LL;
  v23[0] = 0;
  v19[0] = 0;
  v21[0] = 0;
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((__int64 *)v16);
  Instance = CoCreateInstance(
               &GUID_d648fea1_ea00_4ff4_b8bd_034bd2b25a23,
               0LL,
               1u,
               &GUID_1d868537_eea2_4c03_bb99_8a58862f7a59,
               v16);
  v6 = Instance;
  if ( Instance < 0 )
  {
    v7 = 1431LL;
LABEL_15:
    v11 = (unsigned int)Instance;
    goto LABEL_16;
  }
  v8 = v16[0];
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((__int64 *)v15);
  ppv = v15;
  Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, GUID *, GUID *))(*(_QWORD *)v8 + 24LL))(
               v8,
               a2,
               &IID_IWpnPlatform,
               &GUID_9fa045cb_b9b3_47ba_842f_e2ab458f2b0c);
  v6 = Instance;
  if ( Instance < 0 )
  {
    v7 = 1433LL;
    goto LABEL_15;
  }
  if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
         (__int64)v22,
         a3[4],
         ((char *)a3[5] - (char *)a3[4]) >> 1,
         v9) )
  {
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)v18,
           *a3,
           ((char *)a3[1] - (char *)*a3) >> 1,
           v10) )
    {
      Instance = EnergyToastMessage::GetToastXml((__int64)a3, (__int64)v20);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        v12 = *(_QWORD *)v15;
        Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v25);
        Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v25);
        v6 = Instance;
        if ( Instance >= 0 )
        {
          v17 = 0;
          LODWORD(ppv) = 0;
          Instance = (*(__int64 (__fastcall **)(__int64, void *, void *, _QWORD))(*(_QWORD *)v25 + 64LL))(
                       v25,
                       v22[0],
                       v18[0],
                       0LL);
          v6 = Instance;
          if ( Instance >= 0 )
          {
            v6 = 0;
            goto LABEL_18;
          }
          v7 = 1458LL;
        }
        else
        {
          v7 = 1441LL;
        }
      }
      else
      {
        v7 = 1439LL;
      }
      goto LABEL_15;
    }
    v6 = -2147024882;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x711,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x8007000ELL,
      (int)v15);
    v11 = 2147942414LL;
    v7 = 1437LL;
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x71B,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x8007000ELL,
      (int)v15);
    v11 = 2147942414LL;
    v7 = 1435LL;
  }
LABEL_16:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)v7,
    (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)v11,
    (int)ppv);
LABEL_18:
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v20);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v18);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v22);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((__int64 *)v15);
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((__int64 *)v16);
  return v6;
}
