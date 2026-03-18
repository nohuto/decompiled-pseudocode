/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402F8020
 * Callers:
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_sdddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        char a10,
        char a11,
        char a12,
        char a13,
        __int64 a14)
{
  _UNKNOWN **result; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  const char *v17; // rsi
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  int v27; // [rsp+20h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v15 = a14;
  v16 = -1LL;
  v17 = a9;
  v21 = 5LL;
  if ( a2 )
  {
    if ( a14 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(a14 + v22) );
    }
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
    }
    WORD1(v24) = WORD1(a9);
    if ( !a9 )
      v24 = "NULL";
    HIWORD(v27) = WORD1(v24);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
  }
  if ( a3 )
  {
    if ( v15 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_BYTE *)(v15 + v25) );
    }
    v26 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v16;
      while ( a9[v16] );
      v21 = v16 + 1;
      v26 = a9 == 0LL;
    }
    if ( v26 )
      v17 = "NULL";
    LOWORD(v27) = 64;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v27,
                          v17,
                          v21,
                          &a10,
                          4LL,
                          &a11,
                          4LL,
                          &a12);
  }
  return result;
}
