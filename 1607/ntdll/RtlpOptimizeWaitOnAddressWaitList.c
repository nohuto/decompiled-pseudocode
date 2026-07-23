/*
 * XREFs of RtlpOptimizeWaitOnAddressWaitList @ 0x180066B14
 * Callers:
 *     RtlpAddWaitBlockToWaitList @ 0x1800669CC (RtlpAddWaitBlockToWaitList.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpOptimizeWaitOnAddressWaitList(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  char v6; // cl
  signed __int64 v7; // rtt

  v1 = *a1;
  do
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)v4[2];
        v4[3] = v5;
      }
      while ( !v4[4] );
    }
    *(_QWORD *)(v3 + 32) = v4[4];
    if ( (v1 & 1) != 0 )
    {
      v6 = 1;
      v3 = 0LL;
    }
    else
    {
      v6 = 0;
    }
    v7 = v1;
    v1 = _InterlockedCompareExchange64(a1, v3, v1);
  }
  while ( v7 != v1 );
  if ( v6 )
    LODWORD(v1) = RtlpWaitOnAddressWakeEntireList(v1);
  return v1;
}
