/*
 * XREFs of EtwpLogMemInfoWs @ 0x1406612D8
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x140661A94 (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x14066558C (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x140657844 (SmProcessQueryStoreStats.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406617E8 (EtwpLogSessionWorkingSetInfo.c)
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
  int v10; // ecx
  unsigned __int64 v11; // rax
  bool v12; // zf
  PEPROCESS NextProcess; // rdi
  __int64 v14; // r14
  int DirectoryTableBase_high; // eax
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int *v18; // rax
  unsigned int *v19; // r14
  unsigned __int64 v20; // rcx
  bool v21; // cf
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  unsigned __int64 v25; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-61h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-59h]
  unsigned int *v28; // [rsp+50h] [rbp-51h]
  _QWORD SystemInformation[8]; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v30[4]; // [rsp+98h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp+7h] BYREF
  _DWORD *v32; // [rsp+B8h] [rbp+17h]
  int v33; // [rsp+C0h] [rbp+1Fh]
  int v34; // [rsp+C4h] [rbp+23h]

  v28 = a1;
  v30[0] = 81;
  v30[1] = 119;
  v30[2] = 120;
  EtwpLogSessionWorkingSetInfo();
  LODWORD(v25) = -1;
  v3 = 4356;
  v4 = 64;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1104uLL, 0x74777445u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v7 = (__int64)(PoolWithTag + 1);
    v8 = 0;
    v27 = PoolWithTag + 1089;
    v9 = v30;
    do
    {
      LODWORD(v26) = *v9;
      if ( ZwQuerySystemInformation((SYSTEM_INFORMATION_CLASS)v26, SystemInformation, 0x40u, 0LL) )
        goto LABEL_35;
      v10 = v25;
      *(_DWORD *)v7 = v25;
      v11 = SystemInformation[0] >> 12;
      v12 = (_DWORD)v26 == 119;
      *(_QWORD *)(v7 + 4) = SystemInformation[0] >> 12;
      *(_QWORD *)(v7 + 28) = v11;
      *(_QWORD *)(v7 + 12) = v11;
      *(_QWORD *)(v7 + 60) = 0LL;
      *(_QWORD *)(v7 + 20) = v11;
      *(_QWORD *)(v7 + 44) = 0LL;
      *(_QWORD *)(v7 + 36) = 0LL;
      *(_QWORD *)(v7 + 52) = 0LL;
      if ( v12 && a2 > v11 )
      {
        *(_QWORD *)(v7 + 12) = a2;
        *(_QWORD *)(v7 + 20) = a2;
      }
      ++*v6;
      v7 += 68LL;
      LODWORD(v25) = v10 - 1;
      ++v8;
      ++v9;
    }
    while ( v8 < 3 );
    NextProcess = (PEPROCESS)PsIdleProcess;
    if ( PsIdleProcess )
    {
      v14 = (__int64)v27;
      do
      {
        DirectoryTableBase_high = HIDWORD(NextProcess[1].DirectoryTableBase);
        if ( (DirectoryTableBase_high & 0x4000000) != 0
          && ((DirectoryTableBase_high & 4) == 0
           || !NextProcess->Header.SignalState
           || NextProcess[1].ThreadSeed[0]
           || NextProcess->ThreadListHead.Flink != &NextProcess->ThreadListHead) )
        {
          if ( v7 == v14 )
          {
            v16 = 68 * v4;
            v17 = v3;
            v4 *= 2;
            v3 += v16;
            v18 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x74777445u);
            v19 = v18;
            if ( !v18 )
            {
              ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
              goto LABEL_35;
            }
            memmove(v18, v6, v17);
            ExFreePoolWithTag(v6, 0);
            v6 = v19;
            v7 = (__int64)&v19[17 * *v19 + 1];
            v14 = (__int64)&v19[17 * v4 + 1];
          }
          *(_DWORD *)v7 = NextProcess[1].Header.WaitListHead.Blink;
          *(_QWORD *)(v7 + 4) = *(_QWORD *)&NextProcess[1].Spare2[15];
          *(_QWORD *)(v7 + 28) = *(_QWORD *)&NextProcess[1].Spare2[23];
          *(_QWORD *)(v7 + 12) = *(_QWORD *)&NextProcess[1].IdealNode[4];
          *(_QWORD *)(v7 + 60) = NextProcess[2].ActiveProcessors.Bitmap[19];
          *(_QWORD *)(v7 + 20) = NextProcess[1].Affinity.Bitmap[1] >> 12;
          v20 = *(_QWORD *)(v7 + 20);
          v21 = *(_QWORD *)(v7 + 12) < v20;
          *(_QWORD *)(v7 + 36) = 0LL;
          if ( v21 )
            v20 = *(_QWORD *)(v7 + 12);
          *(_QWORD *)(v7 + 12) = v20;
          v22 = *(_QWORD *)(v7 + 4);
          v21 = *(_QWORD *)(v7 + 28) < v22;
          *(_QWORD *)(v7 + 44) = 0LL;
          if ( v21 )
            v22 = *(_QWORD *)(v7 + 28);
          *(_QWORD *)(v7 + 28) = v22;
          v23 = (__int64)NextProcess;
          *(_QWORD *)(v7 + 52) = NextProcess[2].ThreadListHead.Flink;
          if ( NextProcess == PsInitialSystemProcess )
            v23 = 0LL;
          if ( (int)SmProcessQueryStoreStats(v23, &v26, &v25) >= 0 )
          {
            *(_QWORD *)(v7 + 36) = v26 >> 12;
            *(_QWORD *)(v7 + 44) = v25 >> 12;
          }
          v7 += 68LL;
          ++*v6;
        }
        if ( NextProcess == PsIdleProcess )
          NextProcess = 0LL;
        NextProcess = (PEPROCESS)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
    }
    UserData.Ptr = (ULONGLONG)v6;
    *(_QWORD *)&UserData.Size = 4LL;
    v24 = 68 * *v6;
    v32 = v6 + 1;
    v34 = 0;
    v33 = v24;
    if ( v28 )
    {
      EtwpLogKernelEvent((__int64)&UserData, *v28, 2LL, 0x27Du, 0x401804u);
    }
    else
    {
      EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 0x27Du, 4200452);
      if ( (dword_1402D84A4 & 0x800000) != 0 )
        EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_WS, 0LL, 2u, &UserData);
    }
LABEL_35:
    ExFreePoolWithTag(v6, 0);
  }
}
