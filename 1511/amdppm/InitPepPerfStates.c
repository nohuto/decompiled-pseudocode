/*
 * XREFs of InitPepPerfStates @ 0x1C001BF68
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00144E8 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C001C248 (PepNotifyQueryFeedbackCounters.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rdi
  int FeedbackCounters; // ebx
  unsigned int v4; // r14d
  PIO_WORKITEM WorkItem; // rax
  PVOID v6; // rax
  unsigned int *v7; // r15
  unsigned int v8; // r9d
  int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // r14d
  int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  _DWORD *PoolWithTag; // rax
  int v21; // [rsp+20h] [rbp-30h]
  unsigned int v22; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+2Ch] [rbp-24h]
  unsigned int v24; // [rsp+30h] [rbp-20h]
  unsigned int v25; // [rsp+34h] [rbp-1Ch]
  int v26; // [rsp+38h] [rbp-18h]
  int v27; // [rsp+3Ch] [rbp-14h]

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
      && (v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 40, 0x72637250u), (v2 = (unsigned int *)v6) != 0LL) )
    {
      memset(v6, 0, 8 * v4 + 40);
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
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v13 = v2[2 * v10 + 11];
        v2[8] = v10;
        v2[9] = v9;
        v2[4] = v13;
        FeedbackCounters = PoFxProcessorNotification(*(_QWORD *)(a1 + 1048), 11LL, &v22);
        if ( FeedbackCounters < 0 )
        {
          v15 = v21;
          v14 = v21;
        }
        else
        {
          v14 = v26;
          v15 = v27;
          *v2 = v22;
          v2[1] = v23;
          v2[2] = v24;
          v2[3] = v25;
        }
        if ( FeedbackCounters < 0 )
          goto LABEL_32;
        v16 = v2[1];
        if ( *v2 < v16 || (v17 = v2[2], v16 < v17) || (v18 = v2[3], v17 < v18) || !v18 )
        {
LABEL_31:
          FeedbackCounters = -1073741811;
          goto LABEL_32;
        }
        v2[5] = 100 * *v2 / v16;
        v2[6] = 100 * v17 / v16;
        v2[7] = 100 * v18 / v16;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
        if ( !PoolWithTag )
          goto LABEL_5;
        *PoolWithTag = 1;
        PoolWithTag[2] = 0;
        PoolWithTag[1] = 5;
        PoolWithTag[3] = v14;
        PoolWithTag[4] = 1;
        PoolWithTag[5] = v15;
        *(_QWORD *)(a1 + 1136) = PoolWithTag;
        *(_QWORD *)(a1 + 1120) = v2;
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
