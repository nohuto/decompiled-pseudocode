/*
 * XREFs of InitPepPerfStates @ 0x1C001C3EC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00147C8 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C001C6B8 (PepNotifyQueryFeedbackCounters.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  _DWORD *v2; // rdi
  int FeedbackCounters; // ebx
  unsigned int v4; // ebp
  PIO_WORKITEM WorkItem; // rax
  PVOID v6; // rax
  unsigned int *v7; // r14
  unsigned int v8; // r9d
  int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ebp
  int v16; // r14d
  unsigned int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  _DWORD *PoolWithTag; // rax
  int v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+38h] [rbp-30h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 1080) && (v4 = *(_DWORD *)(a1 + 1072)) != 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    *(_QWORD *)(a1 + 1128) = WorkItem;
    if ( WorkItem && (v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 48, 0x72637250u), (v2 = v6) != 0LL) )
    {
      memset(v6, 0, 8 * v4 + 48);
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
            goto LABEL_31;
          if ( !v7[1] )
            goto LABEL_31;
          if ( (v11 & 6) > 2 )
            goto LABEL_31;
          v12 = (v11 >> 3) & 0xF;
          if ( v12 > 1 )
            goto LABEL_31;
          if ( !v12 && v10 == -1 )
            v10 = v8;
          if ( v12 == 1 && v9 == -1 )
            v9 = v8;
          ++v8;
          v7 += 2;
        }
        while ( v8 < v4 );
        if ( v10 == -1 )
          goto LABEL_31;
        v13 = v2[2 * v10 + 13];
        v2[10] = v10;
        v2[11] = v9;
        v2[6] = v13;
        v14 = *(_QWORD *)(a1 + 1064);
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        FeedbackCounters = PoFxProcessorNotification(v14, 11LL, &v24);
        if ( FeedbackCounters < 0 )
        {
          v16 = v23;
          v15 = v23;
        }
        else
        {
          v15 = v26;
          v16 = HIDWORD(v26);
          *((_QWORD *)v2 + 1) = v24;
          *((_QWORD *)v2 + 2) = v25;
        }
        if ( FeedbackCounters < 0 )
          goto LABEL_32;
        v17 = v2[2];
        v18 = v2[3];
        if ( v17 < v18 || (v19 = v2[4], v18 < v19) || (v20 = v2[5], v19 < v20) || !v20 )
        {
LABEL_31:
          FeedbackCounters = -1073741811;
          goto LABEL_32;
        }
        v2[7] = 100 * v17 / v18;
        v2[8] = 100 * v19 / v18;
        v2[9] = 100 * v20 / v18;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
        if ( !PoolWithTag )
          goto LABEL_5;
        *PoolWithTag = 1;
        PoolWithTag[2] = 0;
        PoolWithTag[1] = 5;
        PoolWithTag[3] = v15;
        PoolWithTag[4] = 1;
        PoolWithTag[5] = v16;
        *(_QWORD *)(a1 + 1152) = PoolWithTag;
        *(_QWORD *)(a1 + 1136) = v2;
        FeedbackCounters = 0;
        v2 = 0LL;
        ProcLibTracePepPerfCapabilities(a1, 0);
      }
    }
    else
    {
LABEL_5:
      FeedbackCounters = -1073741670;
    }
  }
  else
  {
    FeedbackCounters = -1073741823;
  }
LABEL_32:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return (unsigned int)FeedbackCounters;
}
