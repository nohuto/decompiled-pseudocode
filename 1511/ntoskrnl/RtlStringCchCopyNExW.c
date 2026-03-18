/*
 * XREFs of RtlStringCchCopyNExW @ 0x14008FF64
 * Callers:
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043E634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1404561C8 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405112BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     punycode_encode @ 0x14064AA38 (punycode_encode.c)
 * Callees:
 *     sub_1400900A0 @ 0x1400900A0 (sub_1400900A0.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_14021EC90 @ 0x14021EC90 (sub_14021EC90.c)
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
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  NTSTRSAFE_PWSTR v15; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return v9;
  }
  v15 = pszDest;
  v10 = pszDest;
  v16[0] = cchDest;
  v11 = cchDest;
  if ( cchToCopy >= 0x7FFFFFFF )
  {
    v9 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
LABEL_11:
    if ( v9 >= 0 )
    {
LABEL_12:
      if ( ppszDestEnd )
        *ppszDestEnd = v10;
      if ( pcchRemaining )
        *pcchRemaining = v11;
      return v9;
    }
    goto LABEL_27;
  }
  if ( (dwFlags & 0x100) != 0 && !pszSrc )
  {
    pszSrc = (STRSAFE_PCNZWCH)&word_140167200;
    cchToCopy = 0LL;
  }
  v9 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v9 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else if ( cchDest )
  {
    v16[0] = 0LL;
    v12 = sub_1400900A0((_DWORD)pszDest, cchDest, (unsigned int)v16, (_DWORD)pszSrc, cchToCopy);
    v13 = v16[0];
    v9 = v12;
    v11 = cchDest - v16[0];
    v16[0] = cchDest - v16[0];
    v10 = &pszDest[v13];
    v15 = v10;
    if ( v12 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v11 > 1 )
      {
        pszSrc = (STRSAFE_PCNZWCH)(2 * v11);
        if ( 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, (size_t)(pszSrc - 1));
      }
      goto LABEL_11;
    }
  }
  else
  {
    if ( !cchToCopy || !*pszSrc )
      goto LABEL_12;
    v9 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
LABEL_27:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    sub_14021EC90(pszDest, 2 * cchDest, pszSrc, &v15, v16, dwFlags);
    v10 = v15;
    v11 = v16[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_12;
  return v9;
}
