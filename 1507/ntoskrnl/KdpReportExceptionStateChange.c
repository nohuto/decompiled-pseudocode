/*
 * XREFs of KdpReportExceptionStateChange @ 0x14072B6DC
 * Callers:
 *     KdpSwitchProcessor @ 0x1401FE21C (KdpSwitchProcessor.c)
 *     KdpReport @ 0x1401FE4B4 (KdpReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KdpSetCommonState @ 0x1401FDFFC (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x14072D3C0 (KdpSetContextState.c)
 *     KdpQuickMoveMemory @ 0x14072D7A0 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // [rsp+20h] [rbp-138h] BYREF
  _BYTE *v8; // [rsp+28h] [rbp-130h]
  _WORD v9[8]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v11[152]; // [rsp+60h] [rbp-F8h] BYREF
  BOOL v12; // [rsp+F8h] [rbp-60h]

  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(v11, a1, 152LL);
    v12 = a3 == 0;
    KdpSetContextState(v10, a2);
    v9[0] = 0;
    v8 = v10;
    v7 = 240;
    result = KdpSendWaitContinue(240LL, &v7, v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
