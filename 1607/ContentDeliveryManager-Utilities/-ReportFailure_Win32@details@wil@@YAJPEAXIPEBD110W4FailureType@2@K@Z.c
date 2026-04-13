/*
 * XREFs of ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18001B630
 * Callers:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001B7B8 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800027A8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // ebx

  v8 = (unsigned __int16)a8 | 0x80070000;
  if ( a8 <= 0 )
    v8 = a8;
  wil::details::ReportFailure(
    a1,
    a2,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\offershealthtracker.h",
    0LL,
    0LL,
    a6,
    2,
    v8,
    0LL,
    0);
  return v8;
}
