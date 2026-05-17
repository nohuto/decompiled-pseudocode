/*
 * XREFs of WerpCreateCompletionEvent @ 0x180006BEC
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A6D20 (ZwCreateEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  _OWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(v3[0]) = 0;
  memset((char *)v3 + 8, 0, 0x28uLL);
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  *((_QWORD *)&v3[0] + 1) = 0LL;
  *(_QWORD *)&v3[1] = 0LL;
  LODWORD(v3[0]) = 48;
  DWORD2(v3[1]) = 2;
  v3[2] = 0LL;
  return ZwCreateEvent(a1, 2031619LL, v3, 0LL, 0);
}
