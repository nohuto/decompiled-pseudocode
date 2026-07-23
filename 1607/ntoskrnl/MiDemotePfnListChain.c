/*
 * XREFs of MiDemotePfnListChain @ 0x1406626E0
 * Callers:
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 * Callees:
 *     MiWriteNewContainingFrame @ 0x1401F5EE0 (MiWriteNewContainingFrame.c)
 */

unsigned __int64 __fastcall MiDemotePfnListChain(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 *v3; // rbx
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // [rsp+60h] [rbp+8h]
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp+10h]
  __int64 v10; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  if ( !*a1 )
  {
    do
      v1 = (unsigned int)(v1 - 1);
    while ( !a1[v1] );
  }
  v3 = (unsigned __int64 *)a1[v1];
  result = *v3;
  a1[v1] = *v3;
  if ( (_DWORD)v1 != 1 )
  {
    v5 = (unsigned int)(v1 + 1);
    v6 = (unsigned int)(1 - v1);
    do
    {
      v8 = MiLargePageContainingFrames[v5];
      v10 = MiLargePageSizes[v5];
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v7 = 512LL;
      do
      {
        *v3 = a1[v5];
        a1[v5] = v3;
        MiWriteNewContainingFrame((__int64)v3, v8);
        v3 += 6 * v10;
        --v7;
      }
      while ( v7 );
      __writecr8(CurrentIrql);
      v5 = (unsigned int)(v5 + 1);
      v3 -= 3072 * v10;
      result = 0x140000000uLL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
