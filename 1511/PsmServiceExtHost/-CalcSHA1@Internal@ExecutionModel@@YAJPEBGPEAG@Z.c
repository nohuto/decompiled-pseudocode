/*
 * XREFs of ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x18001C7A0 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180049390 (-GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x180049400 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x18004B700 (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180007280 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Cleanup_CalcSHA1@Internal@ExecutionModel@@YAX_K0@Z @ 0x1800201DC (-Cleanup_CalcSHA1@Internal@ExecutionModel@@YAX_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::CalcSHA1(
        ExecutionModel::Internal *this,
        wchar_t *a2,
        unsigned __int16 *a3)
{
  ExecutionModel::Internal *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  DWORD v8; // r12d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  wchar_t *v11; // rbx
  signed int v12; // ebp
  wchar_t *v13; // rax
  unsigned __int64 v14; // rdx
  char *v15; // rsi
  wchar_t v16; // cx
  __int64 v17; // rdi
  unsigned __int64 v18; // r8
  __int64 v20; // rdi
  signed int LastError; // eax
  HCRYPTHASH phHash; // [rsp+30h] [rbp-68h] BYREF
  HCRYPTPROV phProv; // [rsp+38h] [rbp-60h] BYREF
  DWORD pdwDataLen; // [rsp+40h] [rbp-58h] BYREF
  BYTE pbData; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+49h] [rbp-4Fh]
  __int64 v27; // [rsp+51h] [rbp-47h]
  __int16 v28; // [rsp+59h] [rbp-3Fh]
  char v29; // [rsp+5Bh] [rbp-3Dh]

  if ( !this )
    return (unsigned int)-2147024809;
  v5 = this;
  v6 = 0x7FFFFFFFLL;
  v7 = 0;
  while ( *(_WORD *)v5 )
  {
    v5 = (ExecutionModel::Internal *)((char *)v5 + 2);
    if ( !--v6 )
    {
      v7 = -2147024809;
      v20 = 0LL;
      goto LABEL_7;
    }
  }
  v20 = 0x7FFFFFFF - v6;
LABEL_7:
  if ( v7 < 0 )
    return (unsigned int)v7;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v8 = 2 * v20;
  v9 = v20 + 1;
  pbData = 0;
  v10 = 2 * v9;
  pdwDataLen = 20;
  if ( !is_mul_ok(v9, 2uLL) )
    v10 = -1LL;
  v11 = (wchar_t *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = 0;
    if ( v9 - 1 > 0x7FFFFFFE )
      v12 = -2147024809;
    if ( v12 < 0 )
    {
      if ( v9 )
        *v11 = 0;
    }
    else
    {
      v13 = v11;
      v12 = 0;
      if ( v9 )
      {
        v14 = 2147483646 - v9;
        v15 = (char *)(this - (ExecutionModel::Internal *)v11);
        while ( v14 + v9 )
        {
          v16 = *(wchar_t *)((char *)v13 + (_QWORD)v15);
          if ( !v16 )
            break;
          *v13++ = v16;
          if ( !--v9 )
            goto LABEL_35;
        }
      }
      else
      {
LABEL_35:
        --v13;
        v12 = -2147024774;
      }
      *v13 = 0;
    }
    if ( v12 >= 0 )
    {
      _wcslwr(v11);
      phProv = 0LL;
      phHash = 0LL;
      if ( CryptAcquireContextW(&phProv, 0LL, 0LL, 1u, 0xF0000000)
        && CryptCreateHash(phProv, 0x8004u, 0LL, 0, &phHash)
        && CryptHashData(phHash, (const BYTE *)v11, v8, 0)
        && CryptGetHashParam(phHash, 2u, &pbData, &pdwDataLen, 0) )
      {
        v17 = 0LL;
        while ( 1 )
        {
          v12 = StringCchPrintfW(a2, 3uLL, L"%02x", *(&pbData + v17));
          if ( v12 < 0 )
            break;
          a2 += 2;
          if ( (unsigned __int64)++v17 >= 0x14 )
          {
            *a2 = 0;
            break;
          }
        }
      }
      else
      {
        LastError = GetLastError();
        v12 = LastError;
        if ( LastError > 0 )
          v12 = (unsigned __int16)LastError | 0x80070000;
      }
      ExecutionModel::Internal::Cleanup_CalcSHA1(phProv, phHash, v18);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  operator delete(v11);
  return (unsigned int)v12;
}
