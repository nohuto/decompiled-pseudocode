/*
 * XREFs of PnpGetMultiSzLength @ 0x1404A2DC0
 * Callers:
 *     PnpAllocateMultiSZ @ 0x1404C72CC (PnpAllocateMultiSZ.c)
 *     PnpCompareMultiSz @ 0x14062D5E4 (PnpCompareMultiSz.c)
 *     PiSwStartCreate @ 0x140645984 (PiSwStartCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C4760 (RtlStringCchLengthW.c)
 */

NTSTATUS __fastcall PnpGetMultiSzLength(__int64 a1, __int64 a2, size_t *a3)
{
  size_t *v3; // r11
  NTSTATUS result; // eax
  size_t v7; // rdx
  size_t v8; // rcx
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = a3;
  do
  {
    result = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 2 * *v3), a2 - *v3, &pcchLength);
    if ( result < 0 )
      break;
    v7 = pcchLength;
    v8 = *v3 + pcchLength;
    if ( v8 < *v3 || (*v3 = v8, v8 + 1 < v8) )
    {
      *v3 = -1LL;
      return -1073741675;
    }
    *v3 = v8 + 1;
    result = 0;
  }
  while ( v7 );
  return result;
}
