/*
 * XREFs of RtlStringCbPrintfExW @ 0x14001AFBC
 * Callers:
 *     RtlQueryPackageClaims @ 0x14001ADB0 (RtlQueryPackageClaims.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     WmipGenerateBinaryMofNotification @ 0x1405BC498 (WmipGenerateBinaryMofNotification.c)
 *     EtwpQueryPsmKey @ 0x1406E25C8 (EtwpQueryPsmKey.c)
 *     ConvertDevpropcompkeyToString @ 0x14071D79C (ConvertDevpropcompkeyToString.c)
 *     ConvertDevpropertyToString @ 0x14071D904 (ConvertDevpropertyToString.c)
 * Callees:
 *     sub_140019D00 @ 0x140019D00 (sub_140019D00.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_14026E0B8 @ 0x14026E0B8 (sub_14026E0B8.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v10; // ebx
  NTSTRSAFE_PWSTR v11; // r13
  const wchar_t *v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rcx
  size_t v16; // r8
  NTSTRSAFE_PWSTR v17; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v18[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v7 = cbDest >> 1;
  v10 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
  }
  else
  {
    v17 = pszDest;
    v11 = pszDest;
    v18[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&word_140196B30;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v10 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *pszDest = 0;
    }
    else if ( v7 )
    {
      v18[0] = 0LL;
      v13 = sub_140019D00(pszDest, v7, v18, v12, va);
      v14 = v18[0];
      v10 = v13;
      v7 -= v18[0];
      v18[0] = v7;
      v11 = &pszDest[v14];
      v17 = v11;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 )
        {
          v16 = (cbDest & 1) + 2 * v7;
          if ( v16 > 2 )
            memset(v11 + 1, (unsigned __int8)dwFlags, v16 - 2);
        }
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v10;
      }
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      sub_14026E0B8(pszDest, cbDest, ppszDestEnd, &v17, v18, dwFlags);
      v11 = v17;
      v7 = v18[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_11;
  }
  return v10;
}
