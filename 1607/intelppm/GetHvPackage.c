/*
 * XREFs of GetHvPackage @ 0x1C001D0A0
 * Callers:
 *     RegisterHvPackage @ 0x1C001DC70 (RegisterHvPackage.c)
 * Callees:
 *     memset @ 0x1C0002DC0 (memset.c)
 */

_DWORD *__fastcall GetHvPackage(int a1)
{
  _DWORD *v2; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v4; // rsi
  _DWORD *v5; // rax
  __int64 v6; // rdi
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 0;
  if ( (int)HvlQueryStartedProcessors(&v8, 0LL) >= 0 )
  {
    dword_1C000F420 = v8;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x72637250u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)HvlQueryStartedProcessors(&v8, PoolWithTag) >= 0 )
      {
        v5 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x72637250u);
        v2 = v5;
        if ( v5 )
        {
          memset(v5, 0, 0x30uLL);
          v2[8] = a1;
          v6 = 0LL;
          *((_QWORD *)v2 + 3) = v2 + 4;
          for ( *((_QWORD *)v2 + 2) = v2 + 4; (unsigned int)v6 < v8; v6 = (unsigned int)(v6 + 1) )
          {
            if ( (int)HvlQueryProcessorTopology(v4[v6], 0LL, &v9, 0LL) >= 0 && a1 == v9 )
              ++v2[9];
          }
        }
      }
      ExFreePoolWithTag(v4, 0x72637250u);
    }
  }
  return v2;
}
