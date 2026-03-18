/*
 * XREFs of PnpValidateMultiSz @ 0x1404A2F14
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x14048C734 (PiDqQueryValidateQueryData.c)
 *     PiSwValidateCreateData @ 0x1404C7488 (PiSwValidateCreateData.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C4760 (RtlStringCchLengthW.c)
 */

NTSTATUS __fastcall PnpValidateMultiSz(size_t a1, __int64 a2)
{
  size_t v3; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v5; // r11
  size_t v6; // r11
  unsigned __int64 v7; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  result = -1073741811;
  v5 = 0LL;
  while ( a1 )
  {
    result = RtlStringCchLengthW((STRSAFE_PCNZWCH)(v3 + 2 * v5), a2 - v5, &pcchLength);
    if ( result < 0 )
      break;
    a1 = pcchLength;
    v7 = pcchLength + v6;
    if ( pcchLength + v6 < v6 )
      return -1073741675;
    v5 = v7 + 1;
    if ( v7 + 1 < v7 )
      return -1073741675;
    result = 0;
  }
  return result;
}
