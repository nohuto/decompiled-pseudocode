/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x1800632A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     NtSetInformationProcess @ 0x180093AC0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  char *v20; // rdx
  unsigned int v21; // ebp
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *i; // rax
  __int64 **v28; // rax
  char *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  void *v36; // rcx
  char *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  char *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  void *v43; // rcx
  char *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ecx
  int v48; // ecx
  unsigned __int64 v49; // [rsp+20h] [rbp-28h] BYREF
  char v50; // [rsp+28h] [rbp-20h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (int)result >= 0 )
  {
    if ( !qword_1801572F0 )
      goto LABEL_25;
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v10, v11, v12);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v13 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    if ( qword_1801572F0 )
      ProcessHeap = (void *)LdrpMrdataHeap;
    else
LABEL_25:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 88LL);
    v19 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 16) = a2;
      *(_DWORD *)(Heap + 84) = a3;
      ZwQuerySystemTime(Heap + 24);
      *(_QWORD *)(v19 + 32) = a5;
      *(_QWORD *)(v19 + 40) = a6;
      *(_QWORD *)(v19 + 48) = a5;
      *(_DWORD *)(v19 + 80) = 3;
      v49 = v19;
      v50 = 0;
      v21 = NtSetInformationProcess(-1LL, 53LL, &v49);
      if ( (v21 & 0x80000000) != 0 )
      {
        if ( qword_1801572F0 )
          v36 = (void *)LdrpMrdataHeap;
        else
          v36 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v36, 0, v19);
        if ( !qword_1801572F0 )
          return v21;
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v37, v38, v39);
        v35 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
      }
      else
      {
        LdrProtectMrdata(0, v20, v22, v23);
        RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v24, v25, v26);
        for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
        {
          if ( a5 < i[5] && a6 > i[4] )
          {
            if ( i[4] != a5 || i[5] != a6 )
            {
              RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
              LdrProtectMrdata(1, v40, v41, v42);
              v50 = 1;
              NtSetInformationProcess(-1LL, 53LL, &v49);
              if ( qword_1801572F0 )
                v43 = (void *)LdrpMrdataHeap;
              else
                v43 = NtCurrentPeb()->ProcessHeap;
              RtlFreeHeap((__int64)v43, 0, v19);
              if ( qword_1801572F0 )
              {
                RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v44, v45, v46);
                v47 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
                {
                  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                  __fastfail(0xEu);
                }
                *(_DWORD *)LdrpMrdataHeapUnprotected = v47 - 1;
                if ( v47 == 1 )
                  RtlProtectHeap(LdrpMrdataHeap, 1);
                RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
              }
              return 3221225496LL;
            }
            break;
          }
        }
        v28 = (__int64 **)qword_180157270;
        *(_QWORD *)v19 = &RtlpDynamicFunctionTable;
        *(_QWORD *)(v19 + 8) = v28;
        if ( *v28 != &RtlpDynamicFunctionTable )
          __fastfail(3u);
        *v28 = (__int64 *)v19;
        qword_180157270 = v19;
        RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
        LdrProtectMrdata(1, v29, v30, v31);
        *a1 = v19;
        if ( !qword_1801572F0 )
          return v21;
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v32, v33, v34);
        v35 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v35 - 1;
      if ( v35 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return v21;
    }
    if ( qword_1801572F0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v16, v17, v18);
      v48 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v48 - 1;
      if ( v48 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 3221225626LL;
  }
  return result;
}
