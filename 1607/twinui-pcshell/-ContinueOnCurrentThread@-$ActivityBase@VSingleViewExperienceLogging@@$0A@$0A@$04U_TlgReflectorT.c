/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18002796C
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180027B70 (-Run@-$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800225AC (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     memset @ 0x18002F32C (memset.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  const struct _TlgProvider_t *v4; // rsi
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  if ( **((_DWORD **)a1 + 6) == 1 )
  {
    v4 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v9 = 4LL;
      TlgWrite(v4, &unk_180044A09, (LPCGUID)(*((_QWORD *)a1 + 6) + 8LL), 0LL, 3u, &pData);
    }
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(*((_QWORD *)a1 + 6) + 40LL));
  }
  else
  {
    memset(this, 0, 0x20uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
