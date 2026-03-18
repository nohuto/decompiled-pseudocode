/*
 * XREFs of RtlStringCchCopyNA @ 0x1C0024278
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003718 (ACPIGetConvertToHardwareIDWide.c)
 *     LoadDDB @ 0x1C0007080 (LoadDDB.c)
 *     ACPIGetProcessorIDWide @ 0x1C00242F8 (ACPIGetProcessorIDWide.c)
 *     DumpObject @ 0x1C005D364 (DumpObject.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1C00A68A8 (AMLILoadDDB.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToCopy)
{
  NTSTATUS v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  char v7; // al

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
  }
  else if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = 0;
    if ( !cchDest )
      goto LABEL_14;
    v5 = cchToCopy - cchDest;
    v6 = pszSrc - pszDest;
    do
    {
      if ( !(v5 + cchDest) )
        break;
      v7 = pszDest[v6];
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_14:
      --pszDest;
      v4 = -2147483643;
    }
  }
  *pszDest = 0;
  return v4;
}
