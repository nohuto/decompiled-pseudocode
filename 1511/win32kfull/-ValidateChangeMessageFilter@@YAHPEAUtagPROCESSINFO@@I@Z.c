/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00923E0
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C0092050 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0092274 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, int a2)
{
  if ( *((_DWORD *)a1 + 208) <= 0x1000u )
  {
    UserSetLastError(5);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    if ( !HIWORD(a2) )
      return 1LL;
    UserSetLastError(87);
  }
  return 0LL;
}
