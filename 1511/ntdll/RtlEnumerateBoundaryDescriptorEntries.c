/*
 * XREFs of RtlEnumerateBoundaryDescriptorEntries @ 0x180062B90
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180062C6C (RtlAddSIDToBoundaryDescriptorEx.c)
 * Callees:
 *     RtlpValidateSidBuffer @ 0x180062D7C (RtlpValidateSidBuffer.c)
 */

__int64 __fastcall RtlEnumerateBoundaryDescriptorEntries(_DWORD *a1)
{
  unsigned __int64 v2; // rdi
  _DWORD *v3; // rcx
  int v4; // r15d
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // r9
  char *v8; // rsi

  if ( a1[2] < 0x10u )
    return 3221225485LL;
  if ( *a1 != 1 )
    return 3221225485LL;
  v2 = (unsigned __int64)a1 + (unsigned int)a1[2];
  if ( v2 < (unsigned __int64)a1 )
    return 3221225485LL;
  v3 = a1 + 4;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)(v3 + 2) >= v2 )
      return v6 != a1[1] ? 0xC000000D : 0;
    v7 = (unsigned int)v3[1];
    ++v6;
    if ( (unsigned int)v7 < 8 )
      return 3221225485LL;
    v8 = (char *)v3 + v7;
    if ( (_DWORD *)((char *)v3 + v7) < v3 || (unsigned __int64)v8 > v2 )
      return 3221225485LL;
    if ( *v3 != 1 )
      break;
    if ( (unsigned int)++v5 > 1 )
      return 3221225661LL;
LABEL_7:
    v3 = (_DWORD *)((unsigned __int64)(v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( *v3 == 2 )
    goto LABEL_6;
  if ( *v3 != 3 )
    return 3221225485LL;
  if ( (unsigned int)++v4 <= 1 )
  {
LABEL_6:
    if ( !(unsigned __int8)RtlpValidateSidBuffer(v3 + 2) )
      return 3221225485LL;
    goto LABEL_7;
  }
  return 3221226026LL;
}
