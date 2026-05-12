/*
 * XREFs of RaUnitAdapterSurpriseRemove @ 0x1C0013440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitAdapterSurpriseRemove(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  result = 0LL;
  *(_BYTE *)(a1 + 144) &= ~4u;
  return result;
}
