/*
 * XREFs of TR_WdfEvtIoExamineIrpForForwardProgress @ 0x1C0029100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_WdfEvtIoExamineIrpForForwardProgress(__int64 a1, __int64 a2)
{
  return (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 32LL) & 0x10) != 0) + 1;
}
