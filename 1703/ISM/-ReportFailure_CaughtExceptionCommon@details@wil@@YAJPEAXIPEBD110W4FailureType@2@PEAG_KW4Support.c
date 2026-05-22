/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800098D4
 * Callers:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800099C4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18006ED9C (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002E3C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _WORD *a8,
        __int64 a9,
        char a10)
{
  __int64 v11; // rax
  char v14; // r10
  signed int v15; // ebx
  signed int v16; // eax
  int v17; // ecx
  char v18; // al

  a10 = 0;
  v11 = -1LL;
  v14 = 0;
  do
    ++v11;
  while ( a8[v11] );
  v15 = 0;
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v16 = ((__int64 (__fastcall *)(_WORD *, __int64, char *))g_pfnResultFromCaughtExceptionInternal)(
            &a8[v11],
            2048 - v11,
            &a10);
    v14 = a10;
    v15 = v16;
  }
  if ( v15 < 0 )
  {
    v17 = a7;
  }
  else
  {
    v15 = -2147024322;
    v17 = 3;
  }
  v18 = 1;
  if ( v14 )
    v18 = 5;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, v17, v15, a8, v18);
  return (unsigned int)v15;
}
