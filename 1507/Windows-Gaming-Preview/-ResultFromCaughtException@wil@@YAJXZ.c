/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180007B20
 * Callers:
 *     __lambda_1bb9c5925967af19482f691dd21001c0_::operator()_::_1_::catch$0 @ 0x180027451 (__lambda_1bb9c5925967af19482f691dd21001c0_--operator()_--_1_--catch$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::catch$0 @ 0x180027757 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027757.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InvertDesktopPixelData_::_1_::catch$0 @ 0x180027B22 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InvertDesktopPix_ea_180027B22.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     _CxxThrowException_0 @ 0x1800269DC (_CxxThrowException_0.c)
 */

int __fastcall wil::ResultFromCaughtException(wil *this)
{
  _QWORD *v2; // rbp
  int (*v3)(void); // rbx
  int v4; // eax
  _QWORD *v5; // rdx
  __int64 v6; // r8
  wil::details::in1diag3 *v7; // rcx
  _QWORD v8[5]; // [rsp+0h] [rbp-38h] BYREF
  const wil::ResultException *v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+40h] [rbp+8h]

  v8[4] = -2LL;
  if ( !wil::details::g_pfnResultFromCaughtException_WinRt )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v9 )
    {
      return *((_DWORD *)v9 + 1);
    }
    catch ( std::bad_alloc )
    {
      return -2147024882;
    }
    catch ( ... )
    {
      v5 = v8;
      v2 = v5;
      v3 = wil::g_pfnResultFromCaughtException;
      if ( wil::g_pfnResultFromCaughtException && (v4 = ((__int64 (__fastcall *)(int (*)(void)))v3)(v3), v4 < 0) )
      {
        *((_DWORD *)v2 + 16) = v4;
      }
      else
      {
        v7 = (wil::details::in1diag3 *)v2[7];
        if ( wil::g_fResultFailFastUnknownExceptions )
        {
          wil::details::in1diag3::_FailFast_Hr(v7, v5, v6, (const char *)0x8007023ELL);
          __debugbreak();
        }
        *((_DWORD *)v2 + 16) = -2147024322;
      }
      return v10;
    }
  }
  return wil::details::g_pfnResultFromCaughtException_WinRt();
}
