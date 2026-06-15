/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180004910 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18000AD80 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000DDF4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180011610 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x180017140 (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?Initialize@CAppStateChangedWorkItem@@QEAAJPEBG@Z @ 0x180020A90 (-Initialize@CAppStateChangedWorkItem@@QEAAJPEBG@Z.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z @ 0x1800216B4 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z.c)
 *     ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x1800219AC (-Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x180021B3C (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x180021CE0 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180022928 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180010C00 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int16 **a6)
{
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned __int16 *v10; // rax
  unsigned __int16 **v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+30h] [rbp-18h]

  v6 = a4 + 1;
  v7 = 0;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && (*a6 = 0LL, is_mul_ok(v6, 2uLL)) )
  {
    v10 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
    *a6 = v10;
    if ( v10 )
      StringCchCopyNExW(v10, v6, a3, a4, v12, v13, v14);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v7;
}
