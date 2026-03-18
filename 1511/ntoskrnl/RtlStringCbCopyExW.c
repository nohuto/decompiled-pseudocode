/*
 * XREFs of RtlStringCbCopyExW @ 0x140099968
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1404F1C44 (PiCMGetRelatedDeviceInstance.c)
 *     _PnpMultiSzAppend @ 0x1404F9C20 (_PnpMultiSzAppend.c)
 *     PiDqConvertQueryFlagsToString @ 0x140606FFC (PiDqConvertQueryFlagsToString.c)
 *     RtlFormatMessageEx @ 0x140647624 (RtlFormatMessageEx.c)
 *     ConvertDevpropertyToString @ 0x14069D2A8 (ConvertDevpropertyToString.c)
 *     ExpressionConvertToString @ 0x14069D964 (ExpressionConvertToString.c)
 * Callees:
 *     sub_140099A90 @ 0x140099A90 (sub_140099A90.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_14021EC90 @ 0x14021EC90 (sub_14021EC90.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  ULONG v6; // r15d
  size_t v8; // rdi
  NTSTATUS v11; // ebx
  NTSTRSAFE_PWSTR v12; // rbp
  const wchar_t *v13; // rax
  size_t v15; // r8
  size_t v16[2]; // [rsp+30h] [rbp-38h] BYREF
  NTSTRSAFE_PWSTR v17; // [rsp+78h] [rbp+10h] BYREF

  v6 = dwFlags;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -1073741811;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
  }
  else
  {
    v17 = pszDest;
    v12 = pszDest;
    v16[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = (const wchar_t *)&word_140167200;
      if ( pszSrc )
        v13 = pszSrc;
      pszSrc = v13;
    }
    v11 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v11 = -1073741811;
      if ( v8 )
        *pszDest = 0;
    }
    else if ( v8 )
    {
      v17 = 0LL;
      v11 = sub_140099A90(pszDest, v8, &v17, pszSrc);
      v8 -= (unsigned __int64)v17;
      v16[0] = v8;
      v12 = &pszDest[(_QWORD)v17];
      v17 = v12;
      if ( v11 >= 0 )
      {
        if ( (v6 & 0x200) != 0 )
        {
          v15 = (cbDest & 1) + 2 * v8;
          if ( v15 > 2 )
            memset(v12 + 1, (unsigned __int8)v6, v15 - 2);
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v8;
        return v11;
      }
      v11 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (v6 & 0x1C00) != 0 && cbDest )
    {
      sub_14021EC90(pszDest, cbDest, pszSrc, &v17, v16, v6);
      v12 = v17;
      v8 = v16[0];
    }
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      goto LABEL_13;
  }
  return v11;
}
