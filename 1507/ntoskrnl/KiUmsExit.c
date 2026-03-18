/*
 * XREFs of KiUmsExit @ 0x140195200
 * Callers:
 *     NtContinue @ 0x140182DD0 (NtContinue.c)
 *     NtRaiseException @ 0x1401831C0 (NtRaiseException.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x14018AD30 (KxStartUserThread.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018F3C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140192100 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401949C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
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
