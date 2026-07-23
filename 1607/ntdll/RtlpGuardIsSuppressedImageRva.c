/*
 * XREFs of RtlpGuardIsSuppressedImageRva @ 0x1800EFBC0
 * Callers:
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     bsearch_s @ 0x18009CC7C (bsearch_s.c)
 */

char __fastcall RtlpGuardIsSuppressedImageRva(__int64 a1, int a2)
{
  const void *v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // eax
  _BYTE *v6; // rax
  _BYTE v8[13]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v9; // [rsp+3Dh] [rbp-1Bh]
  char v10; // [rsp+3Fh] [rbp-19h]

  memset(v8, 0, sizeof(v8));
  v3 = *(const void **)(a1 + 128);
  v9 = 0;
  v10 = 0;
  v4 = *(_DWORD *)(a1 + 144);
  if ( (v4 & 0x400) != 0
    && v3
    && (v5 = (v4 >> 28) + 4, v5 > 4)
    && (*(_DWORD *)v8 = a2,
        (v6 = bsearch_s(
                v8,
                v3,
                *(unsigned int *)(a1 + 136),
                v5,
                (_CoreCrtSecureSearchSortCompareFunction)RtlpTargetCompare,
                0LL)) != 0LL) )
  {
    return v6[4] & 1;
  }
  else
  {
    return 0;
  }
}
