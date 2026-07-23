/*
 * XREFs of MiDrainZeroLookasides @ 0x1400C05E0
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  _QWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r13d
  _WORD *v11; // r12
  PSLIST_ENTRY v12; // rbx
  __int64 v13; // r8
  unsigned __int64 v14; // r12
  _SLIST_ENTRY *Next; // r15
  __int64 v16; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+24h] [rbp-64h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  _WORD *v21; // [rsp+30h] [rbp-58h]
  _QWORD *v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]
  unsigned int v25; // [rsp+98h] [rbp+10h]
  unsigned int v26; // [rsp+A0h] [rbp+18h]

  v18 = a4;
  if ( a2 )
  {
    v5 = a4 + 1;
  }
  else
  {
    v5 = dword_1402FE70C;
    a4 = 0;
    v18 = 0;
  }
  v25 = v5;
  v6 = 1;
  v24 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 1616);
  v8 = 2LL;
  v23 = 2LL;
  v22 = result;
  do
  {
    v9 = *result;
    v10 = a4;
    v20 = *result;
    v26 = a4;
    if ( a4 < v5 )
    {
      v11 = (_WORD *)(v9 + 16LL * a4);
      v21 = v11;
      do
      {
        if ( *v11 )
        {
          v12 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v9 + 16LL * v10));
          if ( v12 )
          {
            v14 = v24;
            do
            {
              Next = v12->Next;
              v16 = (unsigned __int128)((__int64)&v12[0x5800000000LL] * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
              if ( a2 && ((unsigned __int64)v12 < a2 || (unsigned __int64)v12 >= v14) )
                v6 &= ~0x40u;
              else
                v6 |= 0x40u;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v19 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&v12[1].Next + 2, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v19, v16, v13);
                while ( ((unsigned __int64)*(&v12[1].Next + 1) & 0x8000000000000000uLL) != 0 );
              }
              MiInsertPageInFreeOrZeroedList((__int64)&v12[0x5800000000LL] / 48, v6);
              _InterlockedAnd64((volatile signed __int64 *)&v12[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              v12 = Next;
            }
            while ( Next );
            v11 = v21;
            v10 = v26;
            v5 = v25;
          }
          v9 = v20;
        }
        ++v10;
        v11 += 8;
        v26 = v10;
        v21 = v11;
      }
      while ( v10 < v5 );
      a4 = v18;
      result = v22;
      v8 = v23;
    }
    ++result;
    v6 = 2;
    --v8;
    v22 = result;
    v23 = v8;
  }
  while ( v8 );
  return result;
}
