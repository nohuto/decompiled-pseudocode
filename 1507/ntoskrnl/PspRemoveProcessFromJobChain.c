/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x140505F18
 * Callers:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspTerminateProcessesJobCallback @ 0x1404F6020 (PspTerminateProcessesJobCallback.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspUnlinkJobProcess @ 0x140505D9C (PspUnlinkJobProcess.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140506568 (PspFoldProcessAccountingIntoJob.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x1406C55D8 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x1406E3B44 (EtwTraceJobRemoveProcess.c)
 */

void __fastcall PspRemoveProcessFromJobChain(
        volatile signed __int32 *Object,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r13d
  struct _KTHREAD *CurrentThread; // rbx
  bool v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r11
  char v12; // r15
  __int64 v13; // rsi
  int v14; // ebx
  int v15; // ecx
  __int64 *v16; // rax
  int v17; // ecx
  __int64 *v18; // rax
  int v19; // ecx
  __int64 *v20; // rax
  int v21; // ecx
  __int64 *v22; // rax
  __int16 v23; // ax
  __int16 v24; // ax
  _QWORD *v25; // rax
  signed __int32 v26; // eax
  signed __int32 v27; // edx
  int v28; // ecx
  __int64 *v29; // rax
  __int64 *v30; // rax
  int v31; // r10d
  __int16 v32; // ax
  char v33; // [rsp+28h] [rbp-59h]
  __int64 v34; // [rsp+30h] [rbp-51h]
  __int64 v35; // [rsp+38h] [rbp-49h] BYREF
  __int64 v36; // [rsp+40h] [rbp-41h]
  int v37; // [rsp+48h] [rbp-39h]
  struct _KTHREAD *v38; // [rsp+50h] [rbp-31h]
  _BYTE v39[128]; // [rsp+58h] [rbp-29h] BYREF
  char v41; // [rsp+F8h] [rbp+77h]

  v41 = a3;
  v4 = a3;
  memset(v39, 0, 0x50uLL);
  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  v8 = !_interlockedbittestandset(Object + 192, 0);
  v33 = 0;
  if ( (v4 & 2) != 0 && (Object[193] & 0x4000000) != 0 && (Object[429] & 0x100) == 0 )
  {
    PsTerminateProcess(Object, a4);
    v33 = 1;
  }
  v34 = *((_QWORD *)Object + 118);
  v37 = 1;
  v36 = *(_QWORD *)(v34 + 1072);
  v9 = v36;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
    if ( v34 == *((_QWORD *)Object + 118) && v36 == *(_QWORD *)(v34 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v36 + 56));
    if ( CurrentThread )
    {
      v32 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v34 = *((_QWORD *)Object + 118);
    v36 = *(_QWORD *)(v34 + 1072);
    v9 = v36;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
  }
  v10 = v34;
  v35 = v36;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobRemoveProcess(Object, v4, a4);
  if ( (v4 & 4) == 0 || _interlockedbittestandset(Object + 192, 1u) )
  {
    v11 = 0LL;
    v12 = 0;
  }
  else
  {
    _InterlockedAnd(Object + 192, 0xFFFFFFDF);
    PsQueryStatisticsProcess(Object, v39);
    v11 = 0LL;
    v12 = 1;
  }
  v13 = v34;
  if ( v34 )
  {
    v14 = v37;
    do
    {
      v15 = v11;
      v16 = &v35;
      while ( v13 != *v16 )
      {
        ++v15;
        ++v16;
        if ( v15 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
          v11 = 0LL;
          break;
        }
      }
      if ( v8 )
      {
        --*(_DWORD *)(v13 + 216);
        if ( (*((_DWORD *)Object + 429) & 0x80u) != 0 )
          --*(_DWORD *)(v13 + 1196);
      }
      if ( (v4 & 8) != 0 && v8 )
        ++*(_DWORD *)(v13 + 220);
      if ( a2 && (!*a2 || *a2 == v13) && *(_QWORD *)(v13 + 456) != v11 && ((1 << a2[1]) & *(_DWORD *)(v13 + 884)) != 0 )
      {
        PspSendJobNotification(v13, a2[1], a2[2], 0);
        v11 = 0LL;
      }
      if ( v12 )
      {
        PspFoldProcessAccountingIntoJob(v13, Object, v39);
        if ( v13 == *((_QWORD *)Object + 118) )
        {
          v11 = 0LL;
          if ( *(_DWORD *)(v13 + 1200) != PspEnforcementSequenceNumber )
            v14 = 0;
        }
        else
        {
          v11 = 0LL;
        }
        if ( v14 == 1 )
        {
          v25 = (_QWORD *)(v13 + 1112);
          if ( v13 + 1112 < (unsigned __int64)(v13 + 1192) )
          {
            while ( !*v25 )
            {
              if ( (unsigned __int64)++v25 >= v13 + 1192 )
                goto LABEL_20;
            }
            PspSubtractAccountingValues(v13 + 1112, v39);
            v14 = 2;
          }
        }
      }
LABEL_20:
      v17 = v11;
      v18 = &v35;
      while ( v13 != *v18 )
      {
        ++v17;
        ++v18;
        if ( v17 )
        {
          ExReleaseResourceLite((PERESOURCE)(v13 + 56));
          v11 = 0LL;
          break;
        }
      }
      v13 = *(_QWORD *)(v13 + 1064);
    }
    while ( v13 );
    CurrentThread = v38;
    v10 = v34;
    LOBYTE(v4) = v41;
  }
  if ( (v4 & 1) != 0 )
  {
    v28 = v11;
    v29 = &v35;
    while ( v10 != *v29 )
    {
      ++v28;
      ++v29;
      if ( v28 )
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 56), 1u);
        break;
      }
    }
    PspUnlinkJobProcess(v10, (__int64)Object);
    v30 = &v35;
    v31 = v11;
    while ( v10 != *v30 )
    {
      ++v31;
      ++v30;
      if ( v31 )
      {
        ExReleaseResourceLite((PERESOURCE)(v10 + 56));
        LODWORD(v11) = 0;
        break;
      }
    }
  }
  v19 = v11;
  v20 = &v35;
  while ( v10 != *v20 )
  {
    ++v19;
    ++v20;
    if ( v19 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 56), 1u);
      LODWORD(v11) = 0;
      break;
    }
  }
  if ( v8 && (Object[192] & 4) != 0 && v33 == (_BYTE)v11 )
  {
    v26 = *((_DWORD *)Object + 192);
    do
    {
      v27 = v26;
      v26 = _InterlockedCompareExchange(Object + 192, v26 & 0xCFFFFFFF, v26);
    }
    while ( v26 != v27 );
  }
  v21 = v11;
  v22 = &v35;
  while ( v10 != *v22 )
  {
    ++v21;
    ++v22;
    if ( v21 )
    {
      ExReleaseResourceLite((PERESOURCE)(v10 + 56));
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)(v35 + 56));
  if ( CurrentThread )
  {
    v23 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState((PVOID)Object);
  v24 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
