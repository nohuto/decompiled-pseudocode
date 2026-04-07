/*
 * XREFs of ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18006E4AC
 * Callers:
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x18006E1B4 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18006E4AC (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 * Callees:
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18006E4AC (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

bool __fastcall wil::details::ThreadFailureCallbackHolder::GetThreadContext(
        struct wil::FailureInfo *a1,
        struct wil::details::ThreadFailureCallbackHolder **a2,
        char *a3,
        unsigned __int64 a4)
{
  bool result; // al
  struct wil::details::ThreadFailureCallbackHolder *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // rdi
  char *v13; // rbx
  _BYTE *v14; // rbx
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rcx
  size_t v17; // rdi

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, a2[2], a3, a4);
    v9 = a2[4];
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&wil::details::ThreadFailureCallbackHolder::s_telemetryId);
      if ( !*((_DWORD *)a1 + 18) )
      {
        *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)v9;
        *((_QWORD *)a1 + 11) = *((_QWORD *)v9 + 2);
      }
      v10 = -1LL;
      v11 = -1LL;
      *((_OWORD *)a1 + 6) = *(_OWORD *)v9;
      *((_QWORD *)a1 + 14) = *((_QWORD *)v9 + 2);
      v12 = &a3[a4];
      do
        ++v11;
      while ( a3[v11] );
      v13 = &a3[v11];
      if ( v12 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = (_BYTE *)*((_QWORD *)v9 + 1);
        do
          ++v10;
        while ( v15[v10] );
        v16 = v10 + 1;
        v17 = v12 - v14;
        if ( v16 < v17 )
          v17 = v16;
        memcpy_0(v14, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
