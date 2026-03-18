/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ds @ 0x1402E0904
 * Callers:
 *     ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x140257D80 (-SessionInitialize@DesktopRecalc@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_ds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  bool v19; // zf
  int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-18h]
  __int64 v22; // [rsp+58h] [rbp-10h]

  v10 = a10;
  v11 = -1LL;
  v15 = 5LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a10;
    if ( !a10 )
      v18 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      155LL,
      &a9,
      4LL,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    v19 = v10 == 0LL;
    if ( v10 )
    {
      do
        ++v11;
      while ( v10[v11] );
      v15 = v11 + 1;
      v19 = v10 == 0LL;
    }
    if ( v19 )
      v10 = "NULL";
    LOWORD(v20) = 155;
    WppAutoLogTrace(
      a4,
      4LL,
      7LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v20,
      &a9,
      4LL,
      v10,
      v15,
      0LL,
      v21,
      v22);
  }
}
