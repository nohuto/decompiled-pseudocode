/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C00CDD90
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C006F3C0 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C007F890 (RIMConfigurePointerDevice.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00CD874 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     tracePointerFlags @ 0x1C00D9530 (tracePointerFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6)
{
  const char *v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 v10; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rbx
  int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v20; // [rsp+48h] [rbp-10h]
  __int64 v21; // [rsp+50h] [rbp-8h]

  v6 = "NULL";
  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 3u )
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
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v15,
      v14,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v16 = v8 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 3LL, a3, a5, v18, v6, v16, 0LL, v19, v20, v21);
}
