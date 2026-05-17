/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1800362F0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800336A0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     RtlLookupFunctionEntry @ 0x180035FA0 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x180037670 (RtlPcToFileHeader.c)
 *     LdrpInitializeExceptionTable @ 0x1800D25A4 (LdrpInitializeExceptionTable.c)
 *     RtlLookupFunctionTable @ 0x1800DBBB0 (RtlLookupFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316C4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlBackoff @ 0x180063170 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AD8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076174 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 UniqueThread, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  bool v5; // zf
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // r10d
  int v10; // r9d
  int v11; // eax
  char *v12; // r8
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v17; // rbx
  bool v18; // r15
  unsigned __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rax
  _QWORD *v33; // rax
  __int64 i; // rdx
  __int64 v35; // [rsp+20h] [rbp-60h]
  unsigned __int64 v36; // [rsp+38h] [rbp-48h] BYREF
  int v37; // [rsp+40h] [rbp-40h]
  int v38; // [rsp+48h] [rbp-38h]
  unsigned __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 *v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h]
  unsigned __int64 v42; // [rsp+68h] [rbp-18h]
  int v43; // [rsp+70h] [rbp-10h]
  signed __int32 v44[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v45; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v46; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+58h] BYREF

  v4 = a2;
  v5 = LdrInitState == 3;
  v6 = UniqueThread;
  v7 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v5 )
  {
    v45 = 0;
    v8 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !v8 )
    {
LABEL_3:
      if ( LdrpInvertedFunctionTable[0] != 1 )
      {
        v9 = 1;
        v10 = LdrpInvertedFunctionTable[0] - 1;
        while ( v10 >= v9 )
        {
          v11 = (v10 + v9) >> 1;
          v12 = (char *)&xmmword_180163430 + 24 * v11;
          v13 = *((_QWORD *)v12 + 1);
          if ( v6 < v13 )
          {
            if ( !v11 )
              break;
            v10 = v11 - 1;
          }
          else
          {
            if ( v6 < v13 + *((unsigned int *)v12 + 4) )
            {
              *(_OWORD *)v4 = *(_OWORD *)v12;
              *((_QWORD *)v4 + 2) = *((_QWORD *)v12 + 2);
              v7 = *(_QWORD *)v4;
              break;
            }
            v9 = v11 + 1;
          }
        }
      }
      v14 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      v15 = v14;
      if ( v14 != 17 )
      {
        if ( (v14 & 1) == 0 )
          RtlRaiseStatus(3221226084LL);
        if ( (v14 & 2) != 0 )
        {
LABEL_44:
          if ( (v15 & 8) != 0 )
          {
            v33 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v33[1] )
              v33 = (_QWORD *)*v33;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v27 = -9LL;
          }
          else
          {
            v27 = -1LL;
          }
          while ( 1 )
          {
            v28 = (v15 & 6) == 2 ? v27 + 4 : v27;
            v29 = v28 + v15;
            v30 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v28 + v15, v15);
            if ( v15 == v30 )
              break;
            v15 = v30;
          }
          if ( (v15 & 6) == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v29, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v25 = v15 - 16;
          if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v25 = 0LL;
          v26 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v25, v15);
          v5 = v15 == v26;
          v15 = v26;
          if ( v5 )
            break;
          if ( (v26 & 2) != 0 )
            goto LABEL_44;
        }
      }
LABEL_14:
      if ( v7 || !byte_18016342C )
        return v7;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( (v8 & 1) != 0 && (((v8 >> 1) & 1) != 0 || (v8 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, a2, a3, a4, v35) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v42 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v44[0] = 2;
        v41 = 0LL;
        if ( ((v8 >> 1) & 1) != 0 )
        {
          v40 = 0LL;
          v43 = -1;
          v39 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (char *)((unsigned __int64)&v39 | v8 & 8 | 7);
          LOBYTE(UniqueThread) = (v8 & 4) == 0;
        }
        else
        {
          v43 = -2;
          v40 = &v39;
          a2 = (char *)&v39 + 3;
        }
        v31 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, (signed __int64)a2, v8);
        v5 = v8 == v31;
        v8 = v31;
        if ( !v5 )
          goto LABEL_58;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v44[0] & 2) == 0 )
                break;
              _mm_pause();
              v5 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v5 );
          }
        }
        if ( _interlockedbittestandreset(v44, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v44[0] & 4) == 0 );
        }
      }
      else
      {
        v24 = v8 | 1;
        if ( (v8 & 2) == 0 )
          v24 += 16LL;
        if ( v8 == _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v24, v8) )
          goto LABEL_3;
LABEL_58:
        RtlBackoff(&v45);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        v8 = LdrpInvertedFunctionTableSRWLock;
      }
    }
  }
LABEL_16:
  if ( (int)ZwQueryVirtualMemory(-1LL, v6, 6LL, &v36) >= 0 )
  {
    v17 = v36;
    if ( v36 )
    {
      if ( (v38 & 2) == 0 && (v38 & 1) == 0 && v6 >= v36 )
      {
        v46 = 0LL;
        v18 = 1;
        v47 = 0LL;
        v19 = v36;
        v7 = 0LL;
        if ( (v36 & 3) != 0 )
        {
          v18 = (v36 & 1) == 0;
          v19 = v36 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        v20 = RtlImageNtHeaderEx(1, v19, 0LL, &v46);
        v21 = v46;
        if ( v46 )
        {
          v22 = *(_WORD *)(v46 + 24);
          if ( v22 != 267 )
          {
            if ( v22 == 523 && *(_DWORD *)(v46 + 132) > 3u )
            {
              v23 = *(unsigned int *)(v46 + 160);
              if ( (_DWORD)v23 )
              {
                *((_DWORD *)v4 + 5) = *(_DWORD *)(v46 + 164);
                if ( !v18 && (unsigned int)v23 >= *(_DWORD *)(v21 + 84) )
                {
                  v7 = RtlAddressInSectionTable(v21, v19, (unsigned int)v23);
                  if ( v7 )
                    goto LABEL_30;
                  goto LABEL_79;
                }
                v7 = v19 + v23;
LABEL_30:
                *((_DWORD *)v4 + 4) = v37;
                *(_QWORD *)v4 = v7;
                *((_QWORD *)v4 + 1) = v17;
                return v7;
              }
            }
LABEL_79:
            v7 = 0LL;
            goto LABEL_30;
          }
          v20 = RtlpImageDirectoryEntryToData32(v19, v18, 3u, (_DWORD *)v4 + 5, v46, &v47);
          v7 = v47;
        }
        if ( v20 >= 0 )
          goto LABEL_30;
        goto LABEL_79;
      }
    }
  }
  return v7;
}
