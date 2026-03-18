/*
 * XREFs of RtlStringCchCopyNExW @ 0x1C00207D4
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C001FFB8 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C00204E0 (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     sub_1C000B690 @ 0x1C000B690 (sub_1C000B690.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTRSAFE_PWSTR v7; // rdi
  NTSTATUS v8; // edx
  size_t v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = cchDest;
  v7 = pszDest;
  if ( cchToCopy < 0x7FFFFFFF )
  {
    v10 = 0LL;
    v8 = sub_1C000B690(pszDest, 260LL, &v10, (__int64)pszSrc, cchToCopy);
    pszDest = &v7[v10];
    if ( v8 < 0 )
    {
LABEL_5:
      *v7 = 0;
      pszDest = v7;
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147483643 )
        return v8;
      goto LABEL_7;
    }
  }
  else
  {
    v8 = -1073741811;
    *pszDest = 0;
  }
  if ( v8 < 0 )
    goto LABEL_5;
LABEL_7:
  if ( ppszDestEnd )
    *ppszDestEnd = pszDest;
  return v8;
}
