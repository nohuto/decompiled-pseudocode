/*
 * XREFs of ?SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001DF68
 * Callers:
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DCC8 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001DE68 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPE.c)
 * Callees:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180002244 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E2C4 (-Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SynthesizeLegacyPhoneAppUserModelId(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct IApplicationIdentifier *a2,
        unsigned __int16 **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  int v9; // eax
  void *v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[272]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v4 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *, _BYTE *, unsigned __int16 **))(*(_QWORD *)this + 72LL))(
         this,
         v13,
         a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 131;
    v6 = ApplicationUserModelIdFromProductId(v13, &v11, v14);
    if ( v6 )
      return wil::details::in1diag3::Return_Win32PreRelease(retaddr, (void *)0x56, v7, (const char *)v6, v11);
    memset(v12, 0, sizeof(v12));
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
           (__int64)v12,
           (__int64)v14);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0LL;
      *(_QWORD *)a2 = v12[0];
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        89LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)v9);
      v10 = (void *)v12[0];
    }
    if ( v10 )
      CoTaskMemFree(v10);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      81LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\tdlutility.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
