/*
 * XREFs of MiIssuePageExtendRequest @ 0x140221B0C
 * Callers:
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406A93C8 (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiQueuePageFileExtension @ 0x140221F24 (MiQueuePageFileExtension.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  LARGE_INTEGER *Timeout; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // rax
  _QWORD **v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // [rsp+48h] [rbp-9h] BYREF
  __int64 v18; // [rsp+50h] [rbp-1h] BYREF
  _QWORD **v19; // [rsp+58h] [rbp+7h]
  __int64 v20; // [rsp+60h] [rbp+Fh]
  __int64 v21; // [rsp+68h] [rbp+17h]
  __int64 v22; // [rsp+70h] [rbp+1Fh]
  __int16 Object; // [rsp+78h] [rbp+27h] BYREF
  char v24; // [rsp+7Ah] [rbp+29h]
  int v25; // [rsp+7Ch] [rbp+2Bh]
  _QWORD v26[2]; // [rsp+80h] [rbp+2Fh] BYREF
  int v27; // [rsp+90h] [rbp+3Fh]
  char v28; // [rsp+94h] [rbp+43h]
  char v29; // [rsp+97h] [rbp+46h]
  __int64 v30; // [rsp+98h] [rbp+47h]
  __int16 v31; // [rsp+A0h] [rbp+4Fh]
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  if ( (void (__fastcall *)(__int16 *))KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == MiDereferenceSegmentThread
    || KeGetCurrentIrql() >= 2u )
  {
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 5336);
  v9 = 0;
  v27 = 1;
  v22 = 0LL;
  v21 = a2;
  v31 = 0;
  v26[1] = v26;
  v26[0] = v26;
  v17 = 0LL;
  v20 = a1;
  v28 = a3;
  v29 = v29 & 0xFC | (2 * (a4 & 1));
  v30 = 0LL;
  Object = 0;
  v24 = 6;
  v25 = 0;
  if ( a3 >= v8 )
  {
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
    v11 = 0;
    if ( v8 )
    {
      v12 = a1 + 5344;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v12 + 164LL) & 0x50) == 0 && **(_QWORD **)v12 < *(_QWORD *)(*(_QWORD *)v12 + 8LL) )
          break;
        ++v11;
        v12 += 8LL;
      }
      while ( v11 < v8 );
    }
    if ( v11 != v8 )
      goto LABEL_12;
    return 0LL;
  }
  Timeout = 0LL;
LABEL_12:
  MiQueuePageFileExtension(&v17, 1LL);
  if ( KeWaitForSingleObject(&Object, Executive, 0, 0, Timeout) == 258 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
    }
    else
    {
      v16 = 0;
      if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
        v16 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
      while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E740 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
        if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v16);
      }
    }
    if ( !v25 )
    {
      if ( v30 )
      {
        *(_QWORD *)(v30 + 80) = 0LL;
      }
      else
      {
        v14 = v18;
        v15 = v19;
        if ( *(__int64 **)(v18 + 8) != &v18 || *v19 != &v18 )
          __fastfail(3u);
        *v19 = (_QWORD *)v18;
        *(_QWORD *)(v14 + 8) = v15;
      }
      v22 = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
    __writecr8(CurrentIrql);
  }
  LOBYTE(v9) = v22 != 0;
  return v9;
}
