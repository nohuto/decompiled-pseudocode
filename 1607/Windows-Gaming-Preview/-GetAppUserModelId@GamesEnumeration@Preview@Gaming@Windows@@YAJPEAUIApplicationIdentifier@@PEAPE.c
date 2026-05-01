/*
 * XREFs of ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001F48C
 * Callers:
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000BFD8 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001F584 (-SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicatio.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct IApplicationIdentifier *a2,
        unsigned __int16 **a3)
{
  int v5; // eax
  unsigned __int16 **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  LPVOID v9; // rax
  void *v10; // rcx
  LPVOID pv; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  *(_QWORD *)a2 = 0LL;
  pv = 0LL;
  v13 = -1LL;
  v14 = -1LL;
  v5 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *, LPVOID *, unsigned __int16 **))(*(_QWORD *)this + 80LL))(
         this,
         &pv,
         a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 58LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
      (const char *)(unsigned int)v5);
    v10 = pv;
    goto LABEL_11;
  }
  v9 = pv;
  if ( pv )
  {
    if ( *(_WORD *)pv )
      goto LABEL_10;
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v13 = -1LL;
  v14 = -1LL;
  v5 = Windows::Gaming::Preview::GamesEnumeration::SynthesizeLegacyPhoneAppUserModelId(
         this,
         (struct IApplicationIdentifier *)&pv,
         v6);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 66LL;
    goto LABEL_8;
  }
  v9 = pv;
LABEL_10:
  v10 = 0LL;
  pv = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  *(_QWORD *)a2 = v9;
  v7 = 0;
LABEL_11:
  if ( v10 )
    CoTaskMemFree(v10);
  return v7;
}
