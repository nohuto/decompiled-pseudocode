/*
 * XREFs of sub_1C00823AC @ 0x1C00823AC
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0082330 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00823AC(_OWORD *a1, _OWORD *a2)
{
  ProbeForWrite(a1, 0x10uLL, 1u);
  *a1 = *a2;
  return 0LL;
}
