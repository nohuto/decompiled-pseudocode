/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x1404567D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetAvailablePagesBelowPriority @ 0x140025FA4 (MmGetAvailablePagesBelowPriority.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfSnCleanupPrefetchHeader @ 0x14042D1C0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnLogAsyncWorker @ 0x140456A30 (PfSnLogAsyncWorker.c)
 *     PfSnAsyncContextCleanup @ 0x140456AA8 (PfSnAsyncContextCleanup.c)
 *     PfSnAsyncPrefetchStep @ 0x140456B0C (PfSnAsyncPrefetchStep.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchSharedStart @ 0x140458AC8 (PfpPrefetchSharedStart.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140458C1C (PfSnPreallocatePrefetchHeader.c)
 *     PfSnInitializePrefetchHeader @ 0x140458D84 (PfSnInitializePrefetchHeader.c)
 *     PfSnPowerBoost @ 0x140458E08 (PfSnPowerBoost.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  __int64 v1; // rsi
  int v3; // r15d
  int v4; // r14d
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  struct _EX_RUNDOWN_REF *v11; // rdx
  unsigned __int64 v12; // rtt
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // r8
  unsigned __int64 v17; // rtt
  unsigned int v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[200]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+100h] [rbp+0h]
  unsigned int v22; // [rsp+104h] [rbp+4h]
  __int64 v23; // [rsp+108h] [rbp+8h]
  __int64 v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  _BYTE v26[48]; // [rsp+120h] [rbp+20h] BYREF

  v1 = *((_QWORD *)P + 26);
  v3 = 0;
  v4 = 0;
  PfSnInitializePrefetchHeader(&v19);
  v5 = *((_DWORD *)P + 59);
  v19 = v1;
  PfSnLogAsyncWorker(v1, &PfSnEvt_AsyncWorker_Start);
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0, (__int64)v26);
  v6 = MmGetDefaultPagePriority() - 1;
  if ( v5 <= v6 )
  {
    v21 = v5;
    v22 = v5;
  }
  else
  {
    v21 = v6;
    v22 = v6 + 1;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(&v19) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(v22 + 1);
    v8 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v23 = v8;
    if ( v8 )
    {
      if ( (int)PfpPrefetchSharedStart(v20) >= 0 && (int)PfSnOpenVolumesForPrefetch(&v19, v18) >= 0 )
      {
        v9 = v18[0];
        if ( *(_DWORD *)(v1 + 80) == 1 )
        {
          v9 = v18[0] | 1;
          v18[0] |= 1u;
        }
        if ( (dword_1403534A0 & 4) != 0 )
        {
          v10 = 0;
          v13 = v9 & 0xFFFFFFFD;
          v18[0] = v13;
        }
        else
        {
          if ( (v9 & 1) != 0 )
            v10 = *(_DWORD *)(v1 + 124);
          else
            v10 = 1;
          if ( 1 << v10 != 1 && (int)PfSnAsyncPrefetchStep(P, &v19, (unsigned int)((1 << v10) - 1)) < 0 )
            goto LABEL_22;
          v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 4);
          _m_prefetchw(v11);
          v12 = v11->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v12 - 2, v12) )
            ExfReleaseRundownProtection(v11);
          v3 = 1;
          PfSnLogAsyncWorker(v1, &PfSnEvt_SyncPrefetchingDone_Info);
          LOBYTE(v13) = v18[0];
        }
        if ( v10 < *(_DWORD *)(v1 + 124) && (v13 & 2) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1808LL), 5000);
          while ( v10 < *(_DWORD *)(v1 + 124) && (int)PfSnAsyncPrefetchStep(P, &v19, (unsigned int)(1 << v10)) >= 0 )
            ++v10;
        }
      }
    }
  }
LABEL_22:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1808LL), 0);
  v14 = *((_QWORD *)P + 28);
  if ( v14 )
  {
    *(_QWORD *)(v14 + 472) = v24;
    v15 = *((_QWORD *)P + 28);
    v24 = 0LL;
    *(_DWORD *)(v15 + 480) = v25;
  }
  PfSnCleanupPrefetchHeader((__int64)&v19);
  _InterlockedDecrement(&dword_1403536A0);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
  if ( !v3 )
  {
    v16 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 4);
    _m_prefetchw(v16);
    v17 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v17 - 2, v17) )
      ExfReleaseRundownProtection(v16);
    PfSnLogAsyncWorker(v1, &PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, &PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
