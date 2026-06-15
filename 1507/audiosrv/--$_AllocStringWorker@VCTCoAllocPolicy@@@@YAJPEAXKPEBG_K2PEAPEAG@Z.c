/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920
 * Callers:
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x1800039C4 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 *     ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x180003C6C (-Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z @ 0x180011D80 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18002C87C (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18002D2A8 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18002D8FC (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002DAA8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x18006BD90 (-DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180076120 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x18008E3C4 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z @ 0x1800A6DC0 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z.c)
 * Callees:
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        char **a6)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbx
  char *v10; // rax
  char *v11; // r10
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  char *v14; // rdi
  _WORD *v15; // rdx
  int v16; // r8d
  __int64 v17; // r9
  __int16 v18; // cx
  unsigned __int64 v19; // r14

  v6 = a4 + 1;
  v7 = 0;
  v8 = a4;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && (*a6 = 0LL, is_mul_ok(v6, 2uLL)) )
  {
    v10 = (char *)CoTaskMemAlloc(2 * v6);
    *a6 = v10;
    v11 = v10;
    if ( v10 )
    {
      if ( v6 > 0x7FFFFFFF || v8 >= 0x7FFFFFFF )
      {
        if ( v6 )
          *(_WORD *)v10 = 0;
      }
      else
      {
        if ( !a3 )
        {
          a3 = &word_1800B1B90;
          v8 = 0LL;
        }
        if ( v6 )
        {
          v12 = v8 - v6;
          v13 = v6;
          v14 = (char *)((char *)a3 - v11);
          v15 = v11;
          v16 = 0;
          v17 = 0LL;
          while ( v12 + v13 )
          {
            v18 = *(_WORD *)((char *)v15 + (_QWORD)v14);
            if ( !v18 )
              break;
            *v15 = v18;
            ++v17;
            ++v15;
            if ( !--v13 )
            {
              --v15;
              v16 = -2147024774;
              --v17;
              break;
            }
          }
          v19 = v6 - v17;
          *v15 = 0;
          if ( v16 >= 0 && v19 > 1 && 2 * v19 > 2 )
            memset_0(&v11[2 * v17 + 2], 0, 2 * v19 - 2);
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v7;
}
