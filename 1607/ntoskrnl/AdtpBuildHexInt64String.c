/*
 * XREFs of AdtpBuildHexInt64String @ 0x1406D0508
 * Callers:
 *     AdtpBuildRegistryValueString @ 0x1406D0B04 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildHexInt64String(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rbx
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rax

  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x26uLL, 0x6B416553u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v11 = *a1;
  *a6 = 1;
  if ( StringCchPrintfW(PoolWithTag, 0x13uLL, L"0x%I64X", v11) >= 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v9[v12] );
    *(_WORD *)(a2 + 2) = 38;
    *(_WORD *)a2 = 2 * v12;
    result = 0LL;
    *(_QWORD *)(a2 + 8) = v9;
  }
  else
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(v9, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  return result;
}
