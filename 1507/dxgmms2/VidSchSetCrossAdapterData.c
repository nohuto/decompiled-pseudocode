/*
 * XREFs of VidSchSetCrossAdapterData @ 0x1C0045000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetCrossAdapterData(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1864) = a2;
}
