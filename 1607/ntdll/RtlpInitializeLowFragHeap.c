/*
 * XREFs of RtlpInitializeLowFragHeap @ 0x180029DFC
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInitializeLowFragHeap(__int64 a1, char a2, _QWORD *a3)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r9d
  __int16 *v6; // r10
  _BYTE *v7; // rcx
  unsigned __int16 v8; // ax
  __int64 result; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx

  *a3 = 0LL;
  a3[2] = a3 + 1;
  a3[1] = a3 + 1;
  v3 = a3 + 15;
  a3[3] = a1;
  v4 = 12LL;
  do
  {
    *(v3 - 1) = 0;
    *v3 = 6;
    v3 += 12;
    --v4;
  }
  while ( v4 );
  v5 = 0;
  v6 = RtlpBucketBlockSizes;
  v7 = (char *)a3 + 679;
  do
  {
    v8 = *v6++;
    *(v7 - 1) = v5;
    *(_WORD *)(v7 - 3) = (v8 >> 4) + 1;
    ++v5;
    *v7 ^= (*v7 ^ (2 * dword_180150BCC)) & 6;
    v7 += 4;
  }
  while ( v5 < 0x81 );
  if ( (a2 & 1) != 0 )
  {
    result = 1LL;
  }
  else
  {
    result = (unsigned int)RtlpAffinityState;
    if ( !RtlpAffinityState )
      return result;
  }
  v10 = a3 + 411;
  v11 = (unsigned int)result;
  do
  {
    *v10 = a3;
    v10 += 6;
    --v11;
  }
  while ( v11 );
  return result;
}
