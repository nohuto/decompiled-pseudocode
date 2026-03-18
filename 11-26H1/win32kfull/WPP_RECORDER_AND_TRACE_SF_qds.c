/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qds @ 0x1402E0C84
 * Callers:
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402DEDD4 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rbx
  __int64 v12; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  bool v20; // zf
  int v21; // [rsp+20h] [rbp-58h]

  v11 = a11;
  v12 = -1LL;
  v16 = 5LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      a7,
      &a9,
      8LL,
      &a10,
      4LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    v20 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
      v16 = v12 + 1;
      v20 = v11 == 0LL;
    }
    if ( v20 )
      v11 = "NULL";
    LOWORD(v21) = a7;
    WppAutoLogTrace(
      a4,
      a5,
      7LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v21,
      &a9,
      8LL,
      &a10,
      4LL,
      v11,
      v16,
      0LL);
  }
}
