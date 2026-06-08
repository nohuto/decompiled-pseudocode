/*
 * XREFs of InitPepPerfStates @ 0x1C0023504
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001B34C (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C001F3A4 (InitPepProcessorDomain.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0023750 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0023804 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rdi
  int FeedbackCounters; // ebx
  unsigned int v4; // ebp
  PIO_WORKITEM WorkItem; // rax
  PVOID PoolWithTag; // rax
  unsigned int *v7; // r14
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // r8d
  int v19; // edx
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 1080) && (v4 = *(_DWORD *)(a1 + 1072)) != 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    *(_QWORD *)(a1 + 1128) = WorkItem;
    if ( WorkItem
      && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 48, 0x72637250u),
          (v2 = (unsigned int *)PoolWithTag) != 0LL) )
    {
      memset(PoolWithTag, 0, 8 * v4 + 48);
      v7 = v2 + 12;
      FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v4, v2 + 12);
      if ( FeedbackCounters >= 0 )
      {
        v8 = 0;
        v9 = -1;
        v10 = -1;
        do
        {
          v11 = *v7;
          if ( (*v7 & 0xFFFFFF80) != 0 )
            goto LABEL_28;
          if ( !v7[1] )
            goto LABEL_28;
          if ( (v11 & 6) > 2 )
            goto LABEL_28;
          v12 = (v11 >> 3) & 0xF;
          if ( v12 > 1 )
            goto LABEL_28;
          if ( !v12 && v10 == -1 )
            v10 = v8;
          if ( v12 == 1 && v9 == -1 )
            v9 = v8;
          ++v8;
          v7 += 2;
        }
        while ( v8 < v4 );
        if ( v10 == -1 )
          goto LABEL_28;
        v2[6] = v2[2 * v10 + 13];
        v2[10] = v10;
        v2[11] = v9;
        FeedbackCounters = PepNotifyQueryPerfCapabilities(
                             a1,
                             (int)v2 + 8,
                             (int)v2 + 12,
                             (int)v2 + 16,
                             (__int64)(v2 + 5),
                             (__int64)&v22,
                             (__int64)&v21);
        if ( FeedbackCounters < 0 )
          goto LABEL_29;
        v13 = v2[2];
        v14 = v2[3];
        if ( v13 < v14 || (v15 = v2[4], v14 < v15) || (v16 = v2[5], v15 < v16) || !v16 )
        {
LABEL_28:
          FeedbackCounters = -1073741811;
          goto LABEL_29;
        }
        v2[7] = 100 * v13 / v14;
        v2[8] = 100 * v15 / v14;
        v17 = 100 * v16;
        v18 = v21;
        v19 = v22;
        v2[9] = v17 / v14;
        FeedbackCounters = InitPepProcessorDomain(a1, v19, v18);
        if ( FeedbackCounters >= 0 )
        {
          *(_QWORD *)(a1 + 1136) = v2;
          FeedbackCounters = 0;
          v2 = 0LL;
          ProcLibTracePepPerfCapabilities(a1, 0);
        }
      }
    }
    else
    {
      FeedbackCounters = -1073741670;
    }
  }
  else
  {
    FeedbackCounters = -1073741823;
  }
LABEL_29:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return (unsigned int)FeedbackCounters;
}
