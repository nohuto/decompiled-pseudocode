/*
 * XREFs of ?_InvertDesktopPixelData@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIRandomAccessStream@Streams@Storage@5@@Z @ 0x180012414
 * Callers:
 *     ?_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x1800127E0 (-_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??_V@YAXPEAX@Z @ 0x180025E1C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180026120 (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InvertDesktopPixelData(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::Streams::IRandomAccessStream *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 *v4; // rsi
  int v6; // eax
  unsigned int v7; // esi
  __int64 *v8; // rdi
  unsigned int v9; // r15d
  char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  __int64 *v14; // rdi
  char *v15; // r12
  int v16; // r13d
  int v17; // eax
  unsigned int v18; // esi
  __int64 *v19; // rdi
  int v20; // eax
  unsigned int v21; // esi
  __int64 *v22; // rdi
  int v23; // eax
  unsigned int v24; // esi
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  __int64 *v27; // [rsp+20h] [rbp-58h] BYREF
  int v28; // [rsp+28h] [rbp-50h] BYREF
  int v29; // [rsp+2Ch] [rbp-4Ch]
  __int64 v30; // [rsp+30h] [rbp-48h]
  char *v31; // [rsp+38h] [rbp-40h]
  char v32[56]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v34; // [rsp+80h] [rbp+8h]
  char v35; // [rsp+90h] [rbp+18h] BYREF
  char v36; // [rsp+98h] [rbp+20h] BYREF

  v30 = -2LL;
  v27 = 0LL;
  v2 = CreateStreamOverRandomAccessStream(a2, &GUID_0000000c_0000_0000_c000_000000000046, &v27);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64, char *))(*v27 + 24))(v27, &v28, 8LL, &v35);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v9 = 4 * v28 * v29;
      v10 = (char *)operator new[](v9);
      v31 = v10;
      v34 = 4 * v28;
      v16 = v29;
      v15 = &v10[4 * v28 * (v29 - 1)];
      while ( 1 )
      {
        v11 = *v27;
        if ( !v16 )
          break;
        v12 = (*(__int64 (__fastcall **)(__int64 *, char *, _QWORD, char *))(v11 + 24))(v27, v15, v34, &v35);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            222LL,
            (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v12);
          if ( v10 )
            operator delete[](v10);
          v14 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
          }
          return v13;
        }
        v15 -= v34;
        --v16;
      }
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, char *))(v11 + 40))(v27, 8LL, 0LL, v32);
      v18 = v17;
      if ( v17 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64 *, char *, _QWORD, char *))(*v27 + 32))(v27, v10, v9, &v36);
        v21 = v20;
        if ( v20 >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v27 + 64))(v27, 0LL);
          v24 = v23;
          if ( v23 >= 0 )
          {
            if ( v10 )
              operator delete[](v10);
            v26 = v27;
            if ( v27 )
            {
              v27 = 0LL;
              (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
            }
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_HrPreRelease(
              retaddr,
              240LL,
              (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v23);
            if ( v10 )
              operator delete[](v10);
            v25 = v27;
            if ( v27 )
            {
              v27 = 0LL;
              (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
            }
            return v24;
          }
        }
        else
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            237LL,
            (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v20);
          if ( v10 )
            operator delete[](v10);
          v22 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
          }
          return v21;
        }
      }
      else
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          234LL,
          (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v17);
        if ( v10 )
          operator delete[](v10);
        v19 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64 *))(*v19 + 16))(v19);
        }
        return v18;
      }
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        201LL,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v6);
      v8 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      }
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      197LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v2);
    v4 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v4 + 16))(v4);
    }
    return v3;
  }
}
