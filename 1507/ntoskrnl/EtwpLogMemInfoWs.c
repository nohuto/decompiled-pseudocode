/*
 * XREFs of EtwpLogMemInfoWs @ 0x1406E4310
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x1406E4ACC (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x1406E8680 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1406D9B70 (SmProcessQueryStoreStats.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406E4820 (EtwpLogSessionWorkingSetInfo.c)
 */

void __fastcall EtwpLogMemInfoWs(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v3; // r15d
  unsigned int v4; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edi
  _DWORD *v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  unsigned __int64 v13; // rax
  bool v14; // zf
  PEPROCESS NextProcess; // rdi
  __int64 v16; // r14
  int DirectoryTableBase_high; // eax
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int *v20; // rax
  unsigned int *v21; // r14
  unsigned __int64 v22; // rcx
  bool v23; // cf
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  unsigned __int64 v27; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-61h] BYREF
  _DWORD *v29; // [rsp+48h] [rbp-59h]
  unsigned int *v30; // [rsp+50h] [rbp-51h]
  _QWORD SystemInformation[8]; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v32[4]; // [rsp+98h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp+7h] BYREF
  _DWORD *v34; // [rsp+B8h] [rbp+17h]
  int v35; // [rsp+C0h] [rbp+1Fh]
  int v36; // [rsp+C4h] [rbp+23h]

  v30 = a1;
  v32[0] = 81;
  v32[1] = 119;
  v32[2] = 120;
  EtwpLogSessionWorkingSetInfo();
  LODWORD(v27) = -1;
  v3 = 4356;
  v4 = 64;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1104uLL, 0x74777445u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v7 = (__int64)(PoolWithTag + 1);
    v8 = 0;
    v29 = PoolWithTag + 1089;
    v9 = v32;
    do
    {
      LODWORD(v28) = *v9;
      if ( ZwQuerySystemInformation((SYSTEM_INFORMATION_CLASS)v28, SystemInformation, 0x40u, 0LL) )
        goto LABEL_35;
      v12 = v27;
      *(_DWORD *)v7 = v27;
      v13 = SystemInformation[0] >> 12;
      v14 = (_DWORD)v28 == 119;
      *(_QWORD *)(v7 + 4) = SystemInformation[0] >> 12;
      *(_QWORD *)(v7 + 28) = v13;
      *(_QWORD *)(v7 + 12) = v13;
      *(_QWORD *)(v7 + 60) = 0LL;
      *(_QWORD *)(v7 + 20) = v13;
      *(_QWORD *)(v7 + 44) = 0LL;
      *(_QWORD *)(v7 + 36) = 0LL;
      *(_QWORD *)(v7 + 52) = 0LL;
      if ( v14 && a2 > v13 )
      {
        *(_QWORD *)(v7 + 12) = a2;
        *(_QWORD *)(v7 + 20) = a2;
      }
      ++*v6;
      v7 += 68LL;
      LODWORD(v27) = v12 - 1;
      ++v8;
      ++v9;
    }
    while ( v8 < 3 );
    NextProcess = (PEPROCESS)PsIdleProcess;
    if ( PsIdleProcess )
    {
      v16 = (__int64)v29;
      do
      {
        DirectoryTableBase_high = HIDWORD(NextProcess[1].DirectoryTableBase);
        if ( (DirectoryTableBase_high & 0x4000000) != 0
          && ((DirectoryTableBase_high & 4) == 0
           || !NextProcess->Header.SignalState
           || *(_DWORD *)&NextProcess[1].0
           || NextProcess->ThreadListHead.Flink != &NextProcess->ThreadListHead) )
        {
          if ( v7 == v16 )
          {
            v18 = 68 * v4;
            v19 = v3;
            v4 *= 2;
            v3 += v18;
            v20 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x74777445u);
            v21 = v20;
            if ( !v20 )
            {
              ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
              goto LABEL_35;
            }
            memmove(v20, v6, v19);
            ExFreePoolWithTag(v6, 0);
            v6 = v21;
            v7 = (__int64)&v21[17 * *v21 + 1];
            v16 = (__int64)&v21[17 * v4 + 1];
          }
          *(_DWORD *)v7 = NextProcess[1].Header.WaitListHead.Blink;
          *(_QWORD *)(v7 + 4) = *(_QWORD *)&NextProcess[1].Spare2[7];
          *(_QWORD *)(v7 + 28) = *(_QWORD *)&NextProcess[1].Spare2[15];
          *(_QWORD *)(v7 + 12) = *(_QWORD *)NextProcess[1].IdealNode;
          *(_QWORD *)(v7 + 60) = *(_QWORD *)NextProcess[2].ThreadSeed;
          *(_QWORD *)(v7 + 20) = NextProcess[1].Affinity.Bitmap[1] >> 12;
          v22 = *(_QWORD *)(v7 + 20);
          v23 = *(_QWORD *)(v7 + 12) < v22;
          *(_QWORD *)(v7 + 36) = 0LL;
          if ( v23 )
            v22 = *(_QWORD *)(v7 + 12);
          *(_QWORD *)(v7 + 12) = v22;
          v24 = *(_QWORD *)(v7 + 4);
          v23 = *(_QWORD *)(v7 + 28) < v24;
          *(_QWORD *)(v7 + 44) = 0LL;
          if ( v23 )
            v24 = *(_QWORD *)(v7 + 28);
          *(_QWORD *)(v7 + 28) = v24;
          v25 = (__int64)NextProcess;
          *(_QWORD *)(v7 + 52) = NextProcess[2].DirectoryTableBase;
          if ( NextProcess == PsInitialSystemProcess )
            v25 = 0LL;
          if ( (int)SmProcessQueryStoreStats(v25, &v28, &v27) >= 0 )
          {
            *(_QWORD *)(v7 + 36) = v28 >> 12;
            *(_QWORD *)(v7 + 44) = v27 >> 12;
          }
          v7 += 68LL;
          ++*v6;
        }
        if ( NextProcess == PsIdleProcess )
          NextProcess = 0LL;
        NextProcess = (PEPROCESS)PsGetNextProcess(NextProcess, 0LL, v10, v11);
      }
      while ( NextProcess );
    }
    UserData.Ptr = (ULONGLONG)v6;
    *(_QWORD *)&UserData.Size = 4LL;
    v26 = 68 * *v6;
    v34 = v6 + 1;
    v36 = 0;
    v35 = v26;
    if ( v30 )
    {
      EtwpLogKernelEvent((__int64)&UserData, *v30, 2u, 0x27Du, 4200452);
    }
    else
    {
      EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 0x27Du, 4200452);
      if ( (dword_1403277E4 & 0x800000) != 0 )
        EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_WS, 0LL, 2u, &UserData);
    }
LABEL_35:
    ExFreePoolWithTag(v6, 0);
  }
}
