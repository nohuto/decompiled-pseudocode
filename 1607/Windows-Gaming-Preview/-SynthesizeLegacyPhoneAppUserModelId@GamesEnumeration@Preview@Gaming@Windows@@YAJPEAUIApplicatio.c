/*
 * XREFs of ?SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001F584
 * Callers:
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001F48C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180005FE8 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001F934 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

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
      return wil::details::in1diag3::Return_Win32(retaddr, (void *)0x5A, v7, (const char *)v6, v11);
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
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)v9);
      v10 = (void *)v12[0];
    }
    if ( v10 )
      CoTaskMemFree(v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
