/*
 * XREFs of AdtpBuildGuidString @ 0x1406D03E0
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x1406D1C48 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildGuidString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rbp
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+38h] [rbp-60h]
  int v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-50h]
  int v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-30h]

  if ( !a2 )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v20 = *((unsigned __int8 *)a1 + 15);
  v19 = *((unsigned __int8 *)a1 + 14);
  v18 = *((unsigned __int8 *)a1 + 13);
  v17 = *((unsigned __int8 *)a1 + 12);
  v16 = *((unsigned __int8 *)a1 + 11);
  v10 = *a1;
  v15 = *((unsigned __int8 *)a1 + 10);
  v14 = *((unsigned __int8 *)a1 + 9);
  v13 = *((unsigned __int8 *)a1 + 8);
  v12 = *((unsigned __int16 *)a1 + 3);
  v11 = *((unsigned __int16 *)a1 + 2);
  *a6 = 1;
  if ( StringCchPrintfW(
         (STRSAFE_LPWSTR)PoolWithTag,
         0x27uLL,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19,
         v20) < 0 )
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  *(_DWORD *)a2 = 5111884;
  result = 0LL;
  *(_QWORD *)(a2 + 8) = PoolWithTag;
  return result;
}
