/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dds @ 0x14022F14C
 * Callers:
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1401A0304 (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1401D6724 (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_dds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  _UNKNOWN **result; // rax
  const char *v12; // rbx
  __int64 v13; // rdi
  __int64 v17; // rsi
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rcx
  int v22; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v12 = a11;
  v13 = -1LL;
  v17 = 5LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a11[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a11;
    if ( !a11 )
      v21 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
                            a7,
                            &a9,
                            4LL,
                            &a10,
                            4LL,
                            v21,
                            v20,
                            0LL);
  }
  if ( a3 )
  {
    v18 = v12 == 0LL;
    if ( v12 )
    {
      do
        ++v13;
      while ( v12[v13] );
      v17 = v13 + 1;
      v18 = v12 == 0LL;
    }
    if ( v18 )
      v12 = "NULL";
    LOWORD(v22) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
                          v22,
                          &a9,
                          4LL,
                          &a10,
                          4LL,
                          v12,
                          v17,
                          0LL);
  }
  return result;
}
