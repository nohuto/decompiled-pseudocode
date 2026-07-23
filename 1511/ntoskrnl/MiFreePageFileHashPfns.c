/*
 * XREFs of MiFreePageFileHashPfns @ 0x1400135E8
 * Callers:
 *     MiScanPagefiles @ 0x1400135C0 (MiScanPagefiles.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbp
  _SLIST_HEADER **v3; // r15
  __int64 v4; // r12
  _SLIST_HEADER *v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 5720);
  v2 = 0LL;
  if ( (_DWORD)result )
  {
    v3 = (_SLIST_HEADER **)(a1 + 5728);
    v11 = *(unsigned int *)(a1 + 5720);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 5;
      if ( LOWORD(v5->Alignment) )
      {
        result = (__int64)RtlpInterlockedFlushSList(v5);
        v6 = result;
        if ( result )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = (unsigned __int8)MiLockPageInline(v6);
            v9 = 48 * ((v6 + 0x58000000000LL) / 48) - 0x58000000000LL;
            *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
            *(_WORD *)(v9 + 32) = 0;
            MiInsertPageInFreeOrZeroedList((v6 + 0x58000000000LL) / 48);
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v8);
            ++v2;
            v6 = v7;
          }
          while ( v7 );
          v4 = v11;
        }
      }
      ++v3;
      v11 = --v4;
    }
    while ( v4 );
    if ( v2 )
    {
      if ( (int *)a1 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v2);
        _InterlockedExchangeAdd64(&qword_1402FF468, v2);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), v2);
      }
      result = MiReturnCommit(a1, v2);
      _InterlockedExchangeAdd64(&qword_1402FFB88, -(__int64)v2);
    }
  }
  return result;
}
