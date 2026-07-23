/*
 * XREFs of EtwpInitLoggerContext @ 0x1800769B4
 * Callers:
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     EtwpFreeStreamIndexMap @ 0x180009688 (EtwpFreeStreamIndexMap.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlQueryPerformanceCounter @ 0x180059550 (RtlQueryPerformanceCounter.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180076CEC (EtwpAddInstanceIdToLogFileName.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1800F4224 (EtwpFillProcessorStreamIndexMap.c)
 */

char *__fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v9; // r14
  LARGE_INTEGER v10; // rax
  char *Heap; // rbx
  PVOID v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  char *result; // rax
  unsigned __int16 v17; // r8
  unsigned int i; // ecx
  PVOID v19; // rax
  void *v20; // rax
  __int128 v21; // xmm0
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // r8
  void *v25; // r8
  __int128 v26; // [rsp+30h] [rbp-20h]
  __int128 v27; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+30h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v17 = 0;
    v9 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v9;
      v17 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v17;
  }
  *(_QWORD *)&v26 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v10.QuadPart = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v10.QuadPart = __rdtsc();
  }
  else
  {
    PerformanceCounter.QuadPart = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v10 = PerformanceCounter;
  }
  *((LARGE_INTEGER *)&v26 + 1) = v10;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 544);
  if ( !Heap )
    return 0LL;
  v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *((_QWORD *)Heap + 66) = v12;
  if ( v12 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v9, a4, a5) )
        goto LABEL_44;
      v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 12 * (unsigned int)v9);
      *((_QWORD *)Heap + 65) = v19;
      if ( !v19 )
        goto LABEL_44;
    }
    else
    {
      v13 = 0;
      if ( a3 )
      {
        v14 = 0LL;
        do
        {
          *(_WORD *)(v14 + *((_QWORD *)Heap + 66)) = 0;
          v14 += 4LL;
          *(_WORD *)(v14 + *((_QWORD *)Heap + 66) - 2) = v13++;
        }
        while ( v13 < a3 );
      }
    }
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( *(_DWORD *)(a1 + 48) > 0x4000u )
        *(_DWORD *)(a1 + 48) = 0x4000;
      *((_DWORD *)Heap + 52) = *(_DWORD *)(a1 + 48) << 10;
    }
    else
    {
      *((_DWORD *)Heap + 52) = 4096;
    }
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Heap + 152), *(PCWSTR *)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v27) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v20 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_16;
        v20 = Heap + 416;
      }
      *((_QWORD *)Heap + 51) = v20;
LABEL_16:
      *((_DWORD *)Heap + 5) = a2;
      *((_DWORD *)Heap + 51) = a3;
      *((_DWORD *)Heap + 83) = 2048;
      *((_DWORD *)Heap + 13) = 0xFFFF;
      *((_DWORD *)Heap + 12) = -1072889856;
      *((_DWORD *)Heap + 11) = -1072496640;
      v15 = *(_DWORD *)(a1 + 64);
      if ( (v15 & 0x400) != 0 )
      {
        *((_DWORD *)Heap + 83) = 3072;
      }
      else
      {
        if ( (v15 & 2) != 0 )
        {
          *((_DWORD *)Heap + 83) = 2050;
        }
        else
        {
          if ( (v15 & 8) != 0 )
          {
            v21 = v27;
            *((_DWORD *)Heap + 83) = 2056;
            *(_OWORD *)(Heap + 184) = v21;
            goto LABEL_20;
          }
          if ( (v15 & 1) == 0 )
            goto LABEL_20;
          *((_DWORD *)Heap + 83) = 2049;
        }
        *(_OWORD *)(Heap + 168) = v27;
      }
LABEL_20:
      *((_DWORD *)Heap + 83) |= *(_DWORD *)(a1 + 64) & 0x34133024;
      *((_DWORD *)Heap + 100) = *(_DWORD *)(a1 + 108);
      *((_DWORD *)Heap + 58) = *((_DWORD *)Heap + 57);
      *(_OWORD *)(Heap + 56) = *(_OWORD *)(a1 + 24);
      *((_DWORD *)Heap + 82) = *(_DWORD *)(a1 + 60);
      *((_DWORD *)Heap + 55) = *(_DWORD *)(a1 + 56);
      *((_DWORD *)Heap + 56) = *(_DWORD *)(a1 + 52);
      *((_QWORD *)Heap + 31) = Heap + 240;
      *((_QWORD *)Heap + 30) = Heap + 240;
      *((_QWORD *)Heap + 34) = 0LL;
      *((_QWORD *)Heap + 32) = Heap + 272;
      *((_QWORD *)Heap + 33) = Heap + 272;
      *((_QWORD *)Heap + 37) = 0LL;
      *((_QWORD *)Heap + 35) = Heap + 296;
      *((_QWORD *)Heap + 36) = Heap + 296;
      *((_QWORD *)Heap + 40) = 0LL;
      *((_QWORD *)Heap + 38) = Heap + 320;
      *((_QWORD *)Heap + 39) = Heap + 320;
      *((_QWORD *)Heap + 60) = Heap + 472;
      *((_QWORD *)Heap + 59) = Heap + 472;
      *((_QWORD *)Heap + 62) = Heap + 488;
      *((_QWORD *)Heap + 61) = Heap + 488;
      *((_DWORD *)Heap + 4) = *(_DWORD *)(a1 + 40);
      *((_DWORD *)Heap + 18) = *(_DWORD *)(a1 + 96);
      *((_DWORD *)Heap + 94) = *(_DWORD *)(a1 + 76);
      if ( ZwCreateEvent((PHANDLE)Heap + 16, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0
        && ZwCreateEvent((PHANDLE)Heap + 17, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
      {
        RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(Heap + 88), 0, 0);
        *((_QWORD *)Heap + 10) = 0LL;
        result = Heap;
        *((_DWORD *)Heap + 84) = 1;
        *(_OWORD *)Heap = v26;
        return result;
      }
    }
  }
LABEL_44:
  v22 = (void *)*((_QWORD *)Heap + 17);
  if ( v22 )
  {
    NtClose(v22);
    *((_QWORD *)Heap + 17) = 0LL;
  }
  v23 = (void *)*((_QWORD *)Heap + 16);
  if ( v23 )
  {
    NtClose(v23);
    *((_QWORD *)Heap + 16) = 0LL;
  }
  v24 = (void *)*((_QWORD *)Heap + 65);
  if ( v24 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
  v25 = (void *)*((_QWORD *)Heap + 66);
  if ( v25 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
  EtwpFreeStreamIndexMap((__int64)Heap);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 184));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
