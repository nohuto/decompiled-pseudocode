/*
 * XREFs of ?IsSPDIFEndpoint@@YAHPEBG@Z @ 0x18008BB34
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008B984 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsSPDIFEndpoint(const unsigned __int16 *a1)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  struct IMMDevice *v5; // [rsp+68h] [rbp+10h] BYREF
  LPVOID v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v6 = 0LL;
  v5 = 0LL;
  v3 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v6);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)v6 + 40LL))(
               v6,
               a1,
               &v5),
        v3 < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x71u,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        v3);
    }
  }
  else
  {
    v2 = IsSPDIFEndpoint(v5);
  }
  if ( v5 )
    ((void (__fastcall *)(struct IMMDevice *))v5->lpVtbl->Release)(v5);
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return v2;
}
