/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEBGPEBUtWAVEFORMATEX@@PEAPEAU1@H@Z @ 0x18008A904
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008A5A8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAcceptableSPDIFTypeForDevice(
        const unsigned __int16 *a1,
        const struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX **a3)
{
  int Instance; // esi
  struct IMMDevice *v8; // [rsp+30h] [rbp-38h] BYREF
  LPVOID v9[3]; // [rsp+38h] [rbp-30h] BYREF

  v9[1] = (LPVOID)-2LL;
  v9[0] = 0LL;
  v8 = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v9);
  if ( Instance < 0
    || (Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)v9[0] + 40LL))(
                     v9[0],
                     a1,
                     &v8),
        Instance < 0)
    || (Instance = GetAcceptableSPDIFTypeForDevice(v8, a2, a3, 0), Instance < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x76u,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        Instance);
    }
  }
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  if ( v9[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  return (unsigned int)Instance;
}
