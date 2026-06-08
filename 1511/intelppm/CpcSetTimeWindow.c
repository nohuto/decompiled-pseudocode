/*
 * XREFs of CpcSetTimeWindow @ 0x1C0004410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcSetTimeWindow(__int64 a1, unsigned int a2)
{
  WriteGenAddr((_BYTE *)(*(_QWORD *)(a1 + 96) + 116LL), a2);
}
