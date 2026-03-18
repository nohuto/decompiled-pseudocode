/*
 * XREFs of KiUmsExit @ 0x140170D40
 * Callers:
 *     NtContinue @ 0x14015DBA0 (NtContinue.c)
 *     NtRaiseException @ 0x14015DFA0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140161FC0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401666E0 (KxStartUserThread.c)
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016A900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C340 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14016D680 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401704C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x1401DC264 (KiParkUmsThread.c)
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
