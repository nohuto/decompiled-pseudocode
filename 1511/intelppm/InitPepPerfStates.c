/*
 * XREFs of InitPepPerfStates @ 0x1C0021800
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001A40C (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C001DFA4 (InitPepProcessorDomain.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0021A3C (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0021AF0 (PepNotifyQueryPerfCapabilities.c)
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
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // edx
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 1064) && (v4 = *(_DWORD *)(a1 + 1056)) != 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    *(_QWORD *)(a1 + 1112) = WorkItem;
    if ( WorkItem
      && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 40, 0x72637250u),
          (v2 = (unsigned int *)PoolWithTag) != 0LL) )
    {
      memset(PoolWithTag, 0, 8 * v4 + 40);
      v7 = v2 + 10;
      FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v4, v2 + 10);
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
        v2[4] = v2[2 * v10 + 11];
        v2[8] = v10;
        v2[9] = v9;
        FeedbackCounters = PepNotifyQueryPerfCapabilities(
                             a1,
                             (_DWORD)v2,
                             (int)v2 + 4,
                             (int)v2 + 8,
                             (__int64)(v2 + 3),
                             (__int64)&v21,
                             (__int64)&v20);
        if ( FeedbackCounters < 0 )
          goto LABEL_29;
        v13 = v2[1];
        if ( *v2 < v13 || (v14 = v2[2], v13 < v14) || (v15 = v2[3], v14 < v15) || !v15 )
        {
LABEL_28:
          FeedbackCounters = -1073741811;
          goto LABEL_29;
        }
        v2[5] = 100 * *v2 / v13;
        v2[6] = 100 * v14 / v13;
        v16 = 100 * v15;
        v17 = v20;
        v18 = v21;
        v2[7] = v16 / v13;
        FeedbackCounters = InitPepProcessorDomain(a1, v18, v17);
        if ( FeedbackCounters >= 0 )
        {
          *(_QWORD *)(a1 + 1120) = v2;
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
