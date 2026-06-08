/*
 * XREFs of InitPepPerfStates @ 0x1C0021480
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001A088 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C001DEA4 (InitPepProcessorDomain.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C00216A8 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002175C (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rdi
  int FeedbackCounters; // ebx
  unsigned int v4; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // r14
  unsigned int v7; // r8d
  int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // eax
  int v16; // r8d
  int v17; // edx
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 1072) && (v4 = *(_DWORD *)(a1 + 1064)) != 0 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 40, 0x72637250u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v4 + 40);
      v6 = v2 + 10;
      FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v4, v2 + 10);
      if ( FeedbackCounters >= 0 )
      {
        v7 = 0;
        v8 = -1;
        v9 = -1;
        do
        {
          v10 = *v6;
          if ( (*v6 & 0xFFFFFF80) != 0 )
            goto LABEL_27;
          if ( !v6[1] )
            goto LABEL_27;
          if ( (v10 & 6) > 2 )
            goto LABEL_27;
          v11 = (v10 >> 3) & 0xF;
          if ( v11 > 1 )
            goto LABEL_27;
          if ( !v11 && v9 == -1 )
            v9 = v7;
          if ( v11 == 1 && v8 == -1 )
            v8 = v7;
          ++v7;
          v6 += 2;
        }
        while ( v7 < v4 );
        if ( v9 == -1 )
          goto LABEL_27;
        v2[4] = v2[2 * v9 + 11];
        v2[8] = v9;
        v2[9] = v8;
        FeedbackCounters = PepNotifyQueryPerfCapabilities(
                             a1,
                             (_DWORD)v2,
                             (int)v2 + 4,
                             (int)v2 + 8,
                             (__int64)(v2 + 3),
                             (__int64)&v20,
                             (__int64)&v19);
        if ( FeedbackCounters < 0 )
          goto LABEL_28;
        v12 = v2[1];
        if ( *v2 < v12 || (v13 = v2[2], v12 < v13) || (v14 = v2[3], v13 < v14) || !v14 )
        {
LABEL_27:
          FeedbackCounters = -1073741811;
          goto LABEL_28;
        }
        v2[5] = 100 * *v2 / v12;
        v2[6] = 100 * v13 / v12;
        v15 = 100 * v14;
        v16 = v19;
        v17 = v20;
        v2[7] = v15 / v12;
        FeedbackCounters = InitPepProcessorDomain(a1, v17, v16);
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
LABEL_28:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return (unsigned int)FeedbackCounters;
}
