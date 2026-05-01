/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800225AC
 * Callers:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001F040 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18002796C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorT.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800045AC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     _invalid_parameter_noinfo @ 0x18002F2DA (_invalid_parameter_noinfo.c)
 *     memset @ 0x18002F32C (memset.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  _WORD *v5; // rsi
  __int64 v6; // rax
  size_t v7; // rbx
  void *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *Local; // rcx

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  if ( *((_BYTE *)a3 + 24) )
  {
    v5 = (_WORD *)*((_QWORD *)a3 + 2);
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    if ( v6 )
    {
      v7 = 2 * v6 + 2;
      v8 = malloc(v7);
      *((_QWORD *)this + 2) = v8;
      if ( v8 )
      {
        *((_BYTE *)this + 24) = 1;
        if ( v7 )
        {
          if ( v5 )
          {
            memcpy_0(v8, v5, v7);
          }
          else
          {
            memset(v8, 0, v7);
            *(_DWORD *)_o__errno() = 22;
            invalid_parameter_noinfo();
          }
        }
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = *((_QWORD *)a3 + 2);
  }
  v9 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)this,
                        1);
  else
    Local = 0LL;
  *v9 = Local;
  if ( Local )
  {
    *((_QWORD *)this + 6) = *Local;
    *Local = v9;
    *((_DWORD *)this + 14) = GetCurrentThreadId();
  }
  return this;
}
