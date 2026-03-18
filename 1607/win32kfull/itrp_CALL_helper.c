/*
 * XREFs of itrp_CALL_helper @ 0x1C02E0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall itrp_CALL_helper(__int64 a1)
{
  InvokeInterpreter(dword_1C0329518, *(_QWORD *)a1, *(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 8));
}
