/*
 * XREFs of sub_1C00821F0 @ 0x1C00821F0
 * Callers:
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0082180 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1060 (NtGdiGetCertificateSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00821F0(_DWORD *a1, _DWORD *a2)
{
  ProbeForWrite(a1, 4uLL, 1u);
  *a1 = *a2;
  return 0LL;
}
