/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C0025F24
 * Callers:
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sq(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, int a5, const char *a6, ...)
{
  const char *v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 v10; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  int v17; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = "NULL";
  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 2u )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = "NULL";
    if ( a6 )
      v15 = a6;
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      &WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      a4,
      v15,
      v14,
      va,
      8LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 2LL, a3, &WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids, v17, v6);
}
