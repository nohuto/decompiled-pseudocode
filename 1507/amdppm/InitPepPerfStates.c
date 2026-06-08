/*
 * XREFs of InitPepPerfStates @ 0x1C001BF6C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00144D8 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C001C238 (PepNotifyQueryFeedbackCounters.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rdi
  int FeedbackCounters; // ebx
  unsigned int v4; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // r15
  unsigned int v7; // r9d
  int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // r14d
  int v14; // r15d
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  _DWORD *v18; // rax
  int v20; // [rsp+20h] [rbp-30h]
  unsigned int v21; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+2Ch] [rbp-24h]
  unsigned int v23; // [rsp+30h] [rbp-20h]
  unsigned int v24; // [rsp+34h] [rbp-1Ch]
  int v25; // [rsp+38h] [rbp-18h]
  int v26; // [rsp+3Ch] [rbp-14h]

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
            goto LABEL_30;
          if ( !v6[1] )
            goto LABEL_30;
          if ( (v10 & 6) > 2 )
            goto LABEL_30;
          v11 = (v10 >> 3) & 0xF;
          if ( v11 > 1 )
            goto LABEL_30;
          if ( !v11 && v9 == -1 )
            v9 = v7;
          if ( v11 == 1 && v8 == -1 )
            v8 = v7;
          ++v7;
          v6 += 2;
        }
        while ( v7 < v4 );
        if ( v9 == -1 )
          goto LABEL_30;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v12 = v2[2 * v9 + 11];
        v2[8] = v9;
        v2[9] = v8;
        v2[4] = v12;
        FeedbackCounters = PoFxProcessorNotification(*(_QWORD *)(a1 + 1056), 11LL, &v21);
        if ( FeedbackCounters < 0 )
        {
          v14 = v20;
          v13 = v20;
        }
        else
        {
          v13 = v25;
          v14 = v26;
          *v2 = v21;
          v2[1] = v22;
          v2[2] = v23;
          v2[3] = v24;
        }
        if ( FeedbackCounters < 0 )
          goto LABEL_31;
        v15 = v2[1];
        if ( *v2 < v15 || (v16 = v2[2], v15 < v16) || (v17 = v2[3], v16 < v17) || !v17 )
        {
LABEL_30:
          FeedbackCounters = -1073741811;
          goto LABEL_31;
        }
        v2[5] = 100 * *v2 / v15;
        v2[6] = 100 * v16 / v15;
        v2[7] = 100 * v17 / v15;
        v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
        if ( !v18 )
          goto LABEL_5;
        *v18 = 1;
        v18[2] = 0;
        v18[1] = 5;
        v18[3] = v13;
        v18[4] = 1;
        v18[5] = v14;
        *(_QWORD *)(a1 + 1136) = v18;
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
LABEL_31:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return (unsigned int)FeedbackCounters;
}
