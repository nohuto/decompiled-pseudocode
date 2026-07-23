/*
 * XREFs of KiUmsExit @ 0x140171240
 * Callers:
 *     NtContinue @ 0x14015E110 (NtContinue.c)
 *     NtRaiseException @ 0x14015E510 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140162530 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x140166C50 (KxStartUserThread.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401709C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
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
