/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x1401A0980
 * Callers:
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1401A0468 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402E5FFC (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_dddddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        const char *a15)
{
  _UNKNOWN **result; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  const char *v23; // rax
  int v24; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+1Fh] BYREF

  result = &retaddr;
  v16 = (__int64)a15;
  v17 = -1LL;
  if ( a2 )
  {
    if ( a15 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a15[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a15;
    if ( !a15 )
      v23 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            a8,
                            a7,
                            &a9,
                            4LL,
                            &a10,
                            4LL,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            &a13,
                            4LL,
                            &a14,
                            4LL,
                            v23,
                            v22,
                            0LL);
  }
  if ( a3 )
  {
    if ( v16 )
    {
      do
        ++v17;
      while ( *(_BYTE *)(v16 + v17) );
    }
    LOWORD(v24) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(a4, a5, a6, a8, v24, &a9, 4LL, &a10, 4LL, &a11, 4LL, &a12, 4LL, &a13, 4LL, &a14);
  }
  return result;
}
