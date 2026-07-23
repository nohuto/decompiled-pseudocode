/*
 * XREFs of RtlEnumerateBoundaryDescriptorEntries @ 0x180052C28
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C (RtlAddSIDToBoundaryDescriptorEx.c)
 * Callees:
 *     RtlpValidateSidBuffer @ 0x1800528D8 (RtlpValidateSidBuffer.c)
 */

__int64 __fastcall RtlEnumerateBoundaryDescriptorEntries(_DWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  int v4; // r15d
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // r9
  unsigned __int64 v8; // rsi

  if ( a1[2] < 0x10u )
    return 3221225485LL;
  if ( *a1 != 1 )
    return 3221225485LL;
  v2 = (unsigned __int64)a1 + (unsigned int)a1[2];
  if ( v2 < (unsigned __int64)a1 )
    return 3221225485LL;
  v3 = (unsigned __int64)(a1 + 4);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v3 + 8 >= v2 )
      return v6 != a1[1] ? 0xC000000D : 0;
    v7 = *(unsigned int *)(v3 + 4);
    ++v6;
    if ( (unsigned int)v7 < 8 )
      return 3221225485LL;
    v8 = v3 + v7;
    if ( v3 + v7 < v3 || v8 > v2 )
      return 3221225485LL;
    if ( *(_DWORD *)v3 != 1 )
      break;
    if ( (unsigned int)++v5 > 1 )
      return 3221225661LL;
LABEL_7:
    v3 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  if ( *(_DWORD *)v3 == 2 )
    goto LABEL_6;
  if ( *(_DWORD *)v3 != 3 )
    return 3221225485LL;
  if ( (unsigned int)++v4 <= 1 )
  {
LABEL_6:
    if ( !RtlpValidateSidBuffer((unsigned __int8 *)(v3 + 8), v7 - 8) )
      return 3221225485LL;
    goto LABEL_7;
  }
  return 3221226026LL;
}
