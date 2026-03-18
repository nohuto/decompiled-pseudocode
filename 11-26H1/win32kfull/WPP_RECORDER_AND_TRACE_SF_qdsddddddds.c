/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdsddddddds @ 0x14015D6F4
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E4E4 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        __int64 a19)
{
  _UNKNOWN **result; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  const char *v22; // rsi
  __int64 v25; // r14
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+1Fh] BYREF

  result = &retaddr;
  v20 = a19;
  v21 = -1LL;
  v22 = a11;
  v25 = 5LL;
  if ( a2 )
  {
    if ( a19 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *(_BYTE *)(a19 + v28) );
    }
    if ( a11 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( a11[v29] );
    }
    v30 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  if ( a3 )
  {
    if ( v20 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( *(_BYTE *)(v20 + v26) );
    }
    v27 = v22 == 0LL;
    if ( v22 )
    {
      do
        ++v21;
      while ( v22[v21] );
      v25 = v21 + 1;
      v27 = v22 == 0LL;
    }
    if ( v27 )
      v22 = "NULL";
    LOWORD(v30) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          7LL,
                          &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                          (_DWORD)v30,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
                          v22,
                          v25,
                          &a12,
                          4LL,
                          &a13,
                          4LL,
                          &a14);
  }
  return result;
}
