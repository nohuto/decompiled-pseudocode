/*
 * XREFs of ?ResolveTriggerTaskName@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800469C8
 * Callers:
 *     ?GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046CD8 (-GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Micro.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800136E0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180038088 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerTaskName(HSTRING *a1, int a2)
{
  wchar_t **v3; // r8
  unsigned int v4; // eax
  HSTRING v5; // rax
  __int64 v6; // r9
  const WCHAR *v7; // rsi
  unsigned __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF

  v3 = (wchar_t **)&unk_1800F3390;
  while ( *(_DWORD *)v3 != a2 )
  {
    v3 += 3;
    if ( v3 == &off_1800F33F0 )
    {
      v4 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)v4);
      __debugbreak();
    }
  }
  v5 = 0LL;
  string = 0LL;
  v6 = 2147500035LL;
  v7 = v3[1];
  if ( v7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    if ( v8 <= 0xFFFFFFFF )
    {
      WindowsDeleteString(0LL);
      string = 0LL;
      v6 = (unsigned int)WindowsCreateString(v7, v8, &string);
      v5 = string;
    }
    else
    {
      v6 = 2147942934LL;
    }
  }
  if ( (int)v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)v6);
    __debugbreak();
  }
  *a1 = v5;
  string = 0LL;
  WindowsDeleteString(0LL);
  return a1;
}
