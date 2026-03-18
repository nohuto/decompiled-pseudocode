/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C0083C30
 * Callers:
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0083BC0 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1910 (NtGdiGetCertificateSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData_unsigned_long_(_DWORD *a1, _DWORD *a2)
{
  ProbeForWrite(a1, 4uLL, 1u);
  *a1 = *a2;
  return 0LL;
}
