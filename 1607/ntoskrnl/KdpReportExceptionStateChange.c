/*
 * XREFs of KdpReportExceptionStateChange @ 0x1406F4050
 * Callers:
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 *     KdpReport @ 0x1400F4360 (KdpReport.c)
 *     KdpSwitchProcessor @ 0x1401D16CC (KdpSwitchProcessor.c)
 * Callees:
 *     KdpSetCommonState @ 0x1400841C8 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdpQuickMoveMemory @ 0x1406F23B8 (KdpQuickMoveMemory.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x1406F2C74 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(char *a1, __int64 a2, char a3)
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
    KdpQuickMoveMemory((__int64)v11, a1, 152);
    v12 = a3 == 0;
    KdpSetContextState((__int64)v10, a2);
    v9[0] = 0;
    v8 = v10;
    v7 = 240;
    result = KdpSendWaitContinue(240LL, (__int64)&v7, (__int64)v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
