/*
 * XREFs of _VerifyTHQBlob @ 0x1C01D5F50
 * Callers:
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01C6128 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 * Callees:
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1C01D46FC (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 */

_BOOL8 __fastcall VerifyTHQBlob(__int16 a1, __int64 a2, UCHAR *a3, UCHAR *a4)
{
  BOOL v6; // ebx
  PUCHAR pbHash; // [rsp+40h] [rbp-20h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-18h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+50h] [rbp-10h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+58h] [rbp-8h] BYREF
  UCHAR v12; // [rsp+80h] [rbp+20h] BYREF
  char v13; // [rsp+81h] [rbp+21h]
  __int16 v14; // [rsp+82h] [rbp+22h]
  ULONG cbHash; // [rsp+88h] [rbp+28h] BYREF

  phAlgorithm = 0LL;
  phKey = 0LL;
  v14 = a1;
  v12 = a2;
  v6 = 0;
  pbHash = 0LL;
  cbHash = 0;
  LOWORD(a2) = BYTE1(a2);
  pPaddingInfo = 0LL;
  v13 = a2;
  if ( (unsigned int)_HashTHQAText(&v12, a2, &pbHash, &cbHash)
    && BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0) >= 0
    && BCryptImportKeyPair(phAlgorithm, 0LL, L"RSAPUBLICBLOB", &phKey, a4, 0x11Bu, 0) >= 0 )
  {
    pPaddingInfo = L"SHA256";
    v6 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, a3, 0x100u, 2u) >= 0;
  }
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbHash )
    Win32FreePool(pbHash);
  return v6;
}
