/*
 * XREFs of ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x180067964
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800522D0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002CFC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180045584 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     IsOpenStateExplicitPresent @ 0x1800700F8 (IsOpenStateExplicitPresent.c)
 */

__int64 __fastcall GetSoftLandingFolderForUser(void *a1, wchar_t *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const char *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  HRESULT v9; // eax
  unsigned int v10; // edi
  DWORD LastError; // edi
  void *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = a3;
  if ( !(unsigned __int8)IsOpenStateExplicitPresent(a1) || !(unsigned __int8)IsOpenStateExplicitPresent(v4) )
    return 2147942527LL;
  v5 = OpenStateExplicit(0LL, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy");
  v7 = v5;
  if ( !v5 )
  {
    v8 = 23LL;
    goto LABEL_19;
  }
  v17 = 260LL;
  if ( !(unsigned int)GetStateFolder(v5, 1LL, a2, &v17) )
  {
    v8 = 26LL;
    goto LABEL_19;
  }
  v17 = 260LL;
  v9 = PathCchCombine(a2, 0x104uLL, a2, L"Tips");
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( ImpersonateLoggedOnUser(0LL) )
    {
      if ( CreateDirectoryW(a2, 0LL) || (LastError = GetLastError(), LastError == 183) )
      {
        if ( !RevertToSelf() )
        {
          v8 = 44LL;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !RevertToSelf() )
        {
          v8 = 39LL;
          goto LABEL_19;
        }
        if ( LastError )
        {
          v14 = wil::details::in1diag3::Return_Win32(retaddr, v12, v13, (const char *)LastError);
LABEL_20:
          v10 = v14;
          goto LABEL_22;
        }
      }
      v10 = 0;
      goto LABEL_22;
    }
    v8 = 32LL;
LABEL_19:
    v14 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v8,
            (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
            v6);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1E,
    (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  if ( v7 )
    CloseState(v7);
  return v10;
}
