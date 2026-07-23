/*
 * XREFs of MiDrainZeroLookasides @ 0x14010D810
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebp
  int v6; // edi
  _QWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // esi
  _WORD *v11; // r13
  PSLIST_ENTRY v12; // rbx
  _SLIST_ENTRY *Next; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned int v15; // r15d
  unsigned int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  _WORD *v18; // [rsp+30h] [rbp-58h]
  _QWORD *v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+98h] [rbp+10h]
  unsigned int v23; // [rsp+A0h] [rbp+18h]

  v16 = a4;
  if ( a2 )
  {
    v5 = a4 + 1;
  }
  else
  {
    v5 = dword_14034EBBC;
    a4 = 0;
    v16 = 0;
  }
  v22 = v5;
  v6 = 1;
  v21 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 1488);
  v8 = 2LL;
  v19 = result;
  v20 = 2LL;
  do
  {
    v9 = *result;
    v10 = a4;
    v17 = *result;
    v23 = a4;
    if ( a4 < v5 )
    {
      v11 = (_WORD *)(v9 + 16LL * a4);
      v18 = v11;
      do
      {
        if ( *v11 )
        {
          v12 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v9 + 16LL * v10));
          if ( v12 )
          {
            do
            {
              Next = v12->Next;
              if ( a2 && ((unsigned __int64)v12 < a2 || (unsigned __int64)v12 >= v21) )
                v6 &= ~0x40u;
              else
                v6 |= 0x40u;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v15 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&v12[1].Next + 2, 0x3FuLL) )
              {
                do
                {
                  if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v15);
                }
                while ( ((unsigned __int64)*(&v12[1].Next + 1) & 0x8000000000000000uLL) != 0
                     || _interlockedbittestandset64((volatile signed __int32 *)&v12[1].Next + 2, 0x3FuLL) );
              }
              MiInsertPageInFreeOrZeroedList((__int64)&v12[0x5800000000LL] / 48, v6);
              _InterlockedAnd64((volatile signed __int64 *)&v12[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              v12 = Next;
            }
            while ( Next );
            v11 = v18;
            v10 = v23;
            v5 = v22;
          }
          v9 = v17;
        }
        ++v10;
        v11 += 8;
        v23 = v10;
        v18 = v11;
      }
      while ( v10 < v5 );
      a4 = v16;
      result = v19;
      v8 = v20;
    }
    ++result;
    v6 = 2;
    --v8;
    v19 = result;
    v20 = v8;
  }
  while ( v8 );
  return result;
}
