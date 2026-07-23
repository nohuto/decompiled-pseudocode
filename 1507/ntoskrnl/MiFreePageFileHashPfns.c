/*
 * XREFs of MiFreePageFileHashPfns @ 0x1400129B4
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  unsigned __int64 v2; // rbx
  _SLIST_HEADER **v3; // r14
  __int64 v4; // r15
  _SLIST_HEADER *v5; // rcx
  PSLIST_ENTRY v6; // rsi
  _SLIST_ENTRY *Next; // r13
  unsigned int v8; // ebp
  __int64 v9; // rax
  _SLIST_HEADER **v11; // [rsp+78h] [rbp+10h]
  __int64 v12; // [rsp+80h] [rbp+18h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp+20h]

  result = (PSLIST_ENTRY)*(unsigned int *)(a1 + 5336);
  v2 = 0LL;
  if ( (_DWORD)result )
  {
    v3 = (_SLIST_HEADER **)(a1 + 5344);
    v12 = *(unsigned int *)(a1 + 5336);
    v11 = (_SLIST_HEADER **)(a1 + 5344);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 6;
      if ( LOWORD(v5->Alignment) )
      {
        result = RtlpInterlockedFlushSList(v5);
        v6 = result;
        if ( result )
        {
          do
          {
            Next = v6->Next;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v8 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v6[1].Next + 2, 0x3FuLL) )
            {
              do
              {
                if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v8);
              }
              while ( *((__int64 *)&v6[1].Next + 1) < 0 );
            }
            v9 = 48 * ((__int64)&v6[0x5800000000LL] / 48) - 0x58000000000LL;
            *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
            *(_WORD *)(v9 + 32) = 0;
            MiInsertPageInFreeOrZeroedList((__int64)&v6[0x5800000000LL] / 48);
            _InterlockedAnd64((volatile signed __int64 *)&v6[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
            result = (PSLIST_ENTRY)CurrentIrql;
            __writecr8(CurrentIrql);
            ++v2;
            v6 = Next;
          }
          while ( Next );
          v3 = v11;
          v4 = v12;
        }
      }
      ++v3;
      --v4;
      v11 = v3;
      v12 = v4;
    }
    while ( v4 );
    if ( v2 )
    {
      if ( (__int16 *)a1 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v2);
        _InterlockedExchangeAdd64(&qword_14034F8E8, v2);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), v2);
      }
      result = (PSLIST_ENTRY)MiReturnCommit(a1, v2);
      _InterlockedExchangeAdd64(&qword_140350050, -(__int64)v2);
    }
  }
  return result;
}
