/*
 * XREFs of RtlpNlsGetLcidIndex @ 0x18004304C
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003E290 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetLcidIndex(int a1)
{
  int v1; // r9d
  int v2; // r8d
  __int64 v3; // r10
  __int64 result; // rax

  v1 = 0;
  v2 = *(unsigned __int16 *)(pTblPtrs + 12) - 1;
  if ( v2 < 0 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(pTblPtrs + 24);
  while ( 1 )
  {
    result = (unsigned int)((v2 + v1) / 2);
    if ( a1 == *(_DWORD *)(v3 + 8LL * (int)result) )
      break;
    if ( a1 - *(_DWORD *)(v3 + 8LL * (int)result) >= 0 )
      v1 = result + 1;
    else
      v2 = result - 1;
    if ( v1 > v2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
