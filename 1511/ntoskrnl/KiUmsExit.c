/*
 * XREFs of KiUmsExit @ 0x140166840
 * Callers:
 *     NtContinue @ 0x140154450 (NtContinue.c)
 *     NtRaiseException @ 0x1401546F0 (NtRaiseException.c)
 *     KiApcInterrupt @ 0x1401575F0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x14015B3A0 (KxStartUserThread.c)
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14015FFC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140163700 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140165E80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140166140 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 */

__int64 __fastcall KiUmsExit(char a1)
{
  __int64 v1; // rbp
  _BYTE v3[80]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+50h] [rbp-158h]
  char *v5; // [rsp+58h] [rbp-150h]
  char v6; // [rsp+70h] [rbp-138h] BYREF

  _enable();
  v3[72] = a1;
  v5 = &v6;
  v4 = v1 - 128;
  return KiParkUmsThread(v3);
}
