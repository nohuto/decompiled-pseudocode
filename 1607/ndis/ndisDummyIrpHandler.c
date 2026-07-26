/*
 * XREFs of ndisDummyIrpHandler @ 0x1C009C110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisDummyIrpHandler(__int64 a1, __int64 a2)
{
  return ndisDummyHandler(a1, *(_QWORD *)(a1 + 64), a2);
}
