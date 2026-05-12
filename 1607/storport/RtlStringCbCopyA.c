/*
 * XREFs of RtlStringCbCopyA @ 0x1C002C590
 * Callers:
 *     RaidAddATADeviceIdMapping @ 0x1C002C0CC (RaidAddATADeviceIdMapping.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  char v6; // al

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !cbDest )
      goto LABEL_10;
    v4 = 2147483646 - cbDest;
    v5 = pszSrc - pszDest;
    do
    {
      if ( !(v4 + cbDest) )
        break;
      v6 = pszDest[v5];
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cbDest;
    }
    while ( cbDest );
    if ( !cbDest )
    {
LABEL_10:
      --pszDest;
      v3 = -2147483643;
    }
    goto LABEL_12;
  }
  if ( cbDest )
LABEL_12:
    *pszDest = 0;
  return v3;
}
