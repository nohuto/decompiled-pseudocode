/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00E239C
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00E2010 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00E2230 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
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
