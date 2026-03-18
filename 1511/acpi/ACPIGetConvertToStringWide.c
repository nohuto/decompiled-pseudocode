/*
 * XREFs of ACPIGetConvertToStringWide @ 0x1C003BF84
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0003910 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C003BE64 (ACPIGetConvertToSerialIDWide.c)
 *     ACPIGetConvertToString @ 0x1C003BF24 (ACPIGetConvertToString.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0004184 (ACPIAnsiStringToWideHelper.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToStringWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // rsi

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v8) );
  v9 = (unsigned int)(v8 + 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                          2 * v9,
                          0x53706341u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 2 * v9);
  RtlStringCchPrintfA(v11, (unsigned int)v9, "%s", *(const char **)(a3 + 32));
  ACPIAnsiStringToWideHelper(v11, 2 * v9);
  *a5 = v11;
  if ( a6 )
    *a6 = 2 * v9;
  return 0LL;
}
