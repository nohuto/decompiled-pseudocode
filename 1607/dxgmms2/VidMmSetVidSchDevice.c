/*
 * XREFs of VidMmSetVidSchDevice @ 0x1C00150B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmSetVidSchDevice(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 32) = a2;
}
