/*
 * XREFs of ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180054CA8
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x180054FD0 (s_sndevtResolveSoundAlias.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18008F830 (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 * Callees:
 *     memset @ 0x180036D30 (memset.c)
 *     StringCopyWorkerW_1 @ 0x180054E8C (StringCopyWorkerW_1.c)
 *     StringExHandleOtherFlagsW @ 0x180054F04 (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall StringCbCopyExW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        STRSAFE_PCNZWCH pszSrc,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD a6)
{
  DWORD dwFlags; // r15d
  size_t v8; // rdi
  HRESULT v11; // ebx
  STRSAFE_LPWSTR v12; // rbp
  const wchar_t *v13; // rax
  size_t v14; // r8
  size_t *pcchRemaining; // [rsp+20h] [rbp-48h]
  size_t v17[2]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+78h] [rbp+10h] BYREF

  dwFlags = a6;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnd = pszDest;
    v12 = pszDest;
    v17[0] = cbDest >> 1;
    if ( (a6 & 0x100) != 0 )
    {
      v13 = &pwsz;
      if ( pszSrc )
        v13 = pszSrc;
      pszSrc = v13;
    }
    v11 = 0;
    if ( (a6 & 0xFFFFE000) != 0 )
    {
      v11 = -2147024809;
      if ( v8 )
        *pszDest = 0;
    }
    else if ( v8 )
    {
      ppszDestEnd = 0LL;
      v11 = StringCopyWorkerW_1(pszDest, v8, (size_t *)&ppszDestEnd, pszSrc, (size_t)pcchRemaining);
      v8 -= (unsigned __int64)ppszDestEnd;
      v17[0] = v8;
      v12 = &pszDest[(_QWORD)ppszDestEnd];
      ppszDestEnd = v12;
      if ( v11 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 )
        {
          v14 = (cbDest & 1) + 2 * v8;
          if ( v14 > 2 )
            memset(v12 + 1, (unsigned __int8)dwFlags, v14 - 2);
        }
        goto LABEL_21;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_21:
        if ( a4 )
          *a4 = v12;
        if ( a5 )
          *a5 = (cbDest & 1) + 2 * v8;
        return (unsigned int)v11;
      }
      v11 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(pszDest, cbDest, (size_t)pszSrc, &ppszDestEnd, v17, dwFlags);
      v12 = ppszDestEnd;
      v8 = v17[0];
    }
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147024774 )
      goto LABEL_21;
  }
  return (unsigned int)v11;
}
