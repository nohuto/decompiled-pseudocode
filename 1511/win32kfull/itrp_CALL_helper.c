/*
 * XREFs of itrp_CALL_helper @ 0x1C02DCD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall itrp_CALL_helper(__int64 a1)
{
  InvokeInterpreter(dword_1C0323E68, *(_QWORD *)a1, *(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 8));
}
