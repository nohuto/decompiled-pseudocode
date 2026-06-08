/*
 * XREFs of RtlStringCchCatW @ 0x1C0007270
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C002513C (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0007330 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTRSAFE_PWSTR v3; // rax
  size_t v4; // r9
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = pszDest;
  v4 = 192LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( v4 )
    return RtlStringCopyWorkerW(&pszDest[192 - v4], v4, (size_t *)pszSrc, pszSrc, v6);
  else
    return -1073741811;
}
