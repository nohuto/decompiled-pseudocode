/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x18006F760
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlAvlInsertNodeEx @ 0x18006F960 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A6F60 (ZwQuerySystemTime.c)
 *     RtlpFreeReadOnlyHeap @ 0x1800F762C (RtlpFreeReadOnlyHeap.c)
 *     RtlpProtectInvertedFunctionTable @ 0x1800F765C (RtlpProtectInvertedFunctionTable.c)
 *     RtlpProtectReadOnlyHeap @ 0x1800F7668 (RtlpProtectReadOnlyHeap.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  char v10; // bl
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v13; // rdi
  int v14; // esi
  char *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  char v26; // [rsp+28h] [rbp-20h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  v10 = 0;
  if ( (int)result < 0 )
    return result;
  RtlpProtectReadOnlyHeap(0LL);
  if ( qword_180163310 )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 0x88uLL);
  v13 = Heap;
  if ( !Heap )
  {
    v14 = -1073741670;
    goto LABEL_11;
  }
  *(_QWORD *)(Heap + 16) = a2;
  *(_DWORD *)(Heap + 84) = a3;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v13 + 40) = a6;
  *(_QWORD *)(v13 + 32) = a5;
  *(_QWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 80) = 3;
  v25 = v13;
  v26 = 0;
  v14 = NtSetInformationProcess(-1LL, 53LL, &v25, 16LL);
  if ( v14 < 0 )
  {
    RtlpFreeReadOnlyHeap(v13);
    goto LABEL_11;
  }
  RtlpProtectInvertedFunctionTable(0LL);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v15, v16, v17);
  v18 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v19) = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 32) < *(v18 - 7) )
      {
        v20 = (_QWORD *)*v18;
        if ( !*v18 )
        {
          LOBYTE(v19) = 0;
          break;
        }
      }
      else
      {
        v20 = (_QWORD *)v18[1];
        if ( !v20 )
        {
          LOBYTE(v19) = 1;
          break;
        }
      }
      v18 = v20;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v18, v19, v13 + 88);
  v22 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_24;
  while ( *(_QWORD *)(v13 + 40) < *(v22 - 10) )
  {
    v23 = (_QWORD *)*v22;
    if ( !*v22 )
      goto LABEL_24;
LABEL_27:
    v22 = v23;
  }
  v23 = (_QWORD *)v22[1];
  if ( v23 )
    goto LABEL_27;
  v10 = 1;
LABEL_24:
  LOBYTE(v21) = v10;
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v22, v21, v13 + 112);
  v24 = (__int64 *)qword_180163280;
  if ( *(__int64 **)qword_180163280 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v13 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v13 + 8) = v24;
  *v24 = v13;
  qword_180163280 = v13;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlpProtectInvertedFunctionTable(1LL);
  *a1 = v13;
LABEL_11:
  RtlpProtectReadOnlyHeap(1LL);
  return (unsigned int)v14;
}
