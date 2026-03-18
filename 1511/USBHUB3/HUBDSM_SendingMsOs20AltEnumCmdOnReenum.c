/*
 * XREFs of HUBDSM_SendingMsOs20AltEnumCmdOnReenum @ 0x1C0018B10
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0020984 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SendingMsOs20AltEnumCmdOnReenum(__int64 a1)
{
  HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
