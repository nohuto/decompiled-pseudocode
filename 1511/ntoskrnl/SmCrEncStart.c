/*
 * XREFs of SmCrEncStart @ 0x14065BF44
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400F9550 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     SmAlloc @ 0x1400F85A0 (SmAlloc.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmCrGenRandom @ 0x14020A9A4 (SmCrGenRandom.c)
 *     BCryptGetProperty @ 0x14052234C (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405223CC (BCryptOpenAlgorithmProvider.c)
 *     BCryptGenerateSymmetricKey @ 0x14064D530 (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x14064D5C4 (BCryptSetProperty.c)
 */

int __fastcall SmCrEncStart(__int64 a1, const void *a2, unsigned int a3, ULONG a4)
{
  size_t v4; // rsi
  int result; // eax
  ULONG v8; // r9d
  _DWORD *v9; // rdi
  PVOID v10; // rax
  SIZE_T v11; // rcx
  PVOID v12; // rax
  ULONG v13; // r9d
  PVOID v14; // rax
  LPCWSTR v15; // rdx
  ULONG v16; // r9d
  ULONG pcbResult; // [rsp+20h] [rbp-38h]
  ULONG cbSecret; // [rsp+28h] [rbp-30h]
  ULONG cbSecreta; // [rsp+28h] [rbp-30h]
  ULONG v20; // [rsp+30h] [rbp-28h]
  ULONG dwFlags; // [rsp+60h] [rbp+8h] BYREF
  ULONG pbOutput; // [rsp+78h] [rbp+20h] BYREF

  pbOutput = a4;
  v4 = a3;
  result = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)a1, L"AES", 0LL, 1u);
  if ( result >= 0 )
  {
    v9 = (_DWORD *)(a1 + 8);
    result = BCryptGetProperty(*(BCRYPT_HANDLE *)a1, L"BlockLength", (PUCHAR)(a1 + 8), v8, &dwFlags, cbSecret);
    if ( result >= 0 )
    {
      if ( !*v9 || ((*v9 - 1) & *v9) != 0 )
      {
        return -1073741453;
      }
      else
      {
        v10 = SmAlloc((unsigned int)v4, 0x52436D73u);
        *(_QWORD *)(a1 + 16) = v10;
        if ( !v10 )
          return -1073741670;
        if ( a2 )
        {
          memmove(v10, a2, v4);
        }
        else
        {
          result = SmCrGenRandom((__int64)v10, v4);
          if ( result < 0 )
            return result;
        }
        v11 = (unsigned int)*v9;
        *(_DWORD *)(a1 + 24) = v4;
        v12 = SmAlloc(v11, 0x52436D73u);
        *(_QWORD *)(a1 + 48) = v12;
        if ( !v12 )
          return -1073741670;
        memset(v12, 0, (unsigned int)*v9);
        result = BCryptGetProperty(*(BCRYPT_HANDLE *)a1, L"ObjectLength", (PUCHAR)&pbOutput, v13, &dwFlags, cbSecreta);
        if ( result >= 0 )
        {
          v14 = SmAlloc(pbOutput, 0x52436D73u);
          *(_QWORD *)(a1 + 40) = v14;
          if ( !v14 )
            return -1073741670;
          memset(v14, 0, pbOutput);
          result = BCryptSetProperty(*(BCRYPT_HANDLE *)a1, v15, (PUCHAR)L"ChainingModeCCM", v16, pcbResult);
          if ( result >= 0 )
          {
            result = BCryptGenerateSymmetricKey(
                       *(BCRYPT_ALG_HANDLE *)a1,
                       (BCRYPT_KEY_HANDLE *)(a1 + 32),
                       *(PUCHAR *)(a1 + 40),
                       pbOutput,
                       *(PUCHAR *)(a1 + 16),
                       *(_DWORD *)(a1 + 24),
                       v20);
            if ( result >= 0 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}
