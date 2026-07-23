/*
 * XREFs of RtlStringCbCopyNExW @ 0x1400AA68C
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1404E12F0 (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1400AA728 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cbToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  size_t v7; // rbx
  int v9; // r10d
  size_t v11; // r9
  size_t v13; // [rsp+48h] [rbp+10h] BYREF

  v7 = cbDest >> 1;
  v9 = 0;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v9 = -1073741811;
  if ( v9 >= 0 )
  {
    v11 = cbToCopy >> 1;
    if ( v11 >= 0x7FFFFFFF )
    {
      v9 = -1073741811;
      if ( v7 )
        *pszDest = 0;
    }
    else
    {
      v9 = 0;
      if ( !v7 )
      {
        if ( !v11 || !*pszSrc )
          return v9;
        v9 = pszDest != 0LL ? -2147483643 : -1073741811;
        goto LABEL_14;
      }
      v9 = RtlStringCopyWorkerW(pszDest, cbDest >> 1, &v13, pszSrc, v11);
      if ( v9 < 0 )
      {
LABEL_14:
        if ( cbDest && v7 )
          *pszDest = 0;
        return v9;
      }
    }
    if ( v9 >= 0 )
      return v9;
    goto LABEL_14;
  }
  return v9;
}
