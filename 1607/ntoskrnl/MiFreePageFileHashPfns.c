/*
 * XREFs of MiFreePageFileHashPfns @ 0x1400BE8F8
 * Callers:
 *     MiScanPagefiles @ 0x1400BE8D0 (MiScanPagefiles.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiDeletePagefile @ 0x14065AE08 (MiDeletePagefile.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     RtlpInterlockedFlushSList @ 0x140166E80 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rbp
  union _SLIST_HEADER **v3; // r15
  __int64 v4; // r12
  union _SLIST_HEADER *v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v11; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 6296);
  v2 = 0LL;
  if ( (_DWORD)result )
  {
    v3 = (union _SLIST_HEADER **)(a1 + 6304);
    v11 = *(unsigned int *)(a1 + 6296);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 5;
      if ( LOWORD(v5->Alignment) )
      {
        result = (unsigned __int64)RtlpInterlockedFlushSList(v5);
        v6 = result;
        if ( result )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = (unsigned __int8)MiLockPageInline(v6);
            v9 = 6 * ((v6 + 0x58000000000LL) / 48);
            *(_WORD *)(8 * v9 - 0x58000000000LL + 32) = 0;
            *(_QWORD *)(8 * v9 - 0x58000000000LL + 24) &= 0xC000000000000000uLL;
            MiInsertPageInFreeOrZeroedList((v6 + 0x58000000000LL) / 48, 2);
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
      if ( (int *)a1 == MiSystemPartition )
        MiReturnResidentAvailable(v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), v2);
      result = MiReturnCommit(a1, v2);
      _InterlockedExchangeAdd64(&qword_140327D88, -(__int64)v2);
    }
  }
  return result;
}
