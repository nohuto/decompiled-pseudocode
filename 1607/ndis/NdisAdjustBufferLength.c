/*
 * XREFs of NdisAdjustBufferLength @ 0x1C00502A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisAdjustBufferLength(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
}
