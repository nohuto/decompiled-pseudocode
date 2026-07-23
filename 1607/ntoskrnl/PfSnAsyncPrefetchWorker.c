/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x1404D7A84
 * Callers:
 *     <none>
 * Callees:
 *     MmGetAvailablePagesBelowPriority @ 0x1400BED10 (MmGetAvailablePagesBelowPriority.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1404B6F94 (PfSnPreallocatePrefetchHeader.c)
 *     PfSnPowerBoost @ 0x1404CCFEC (PfSnPowerBoost.c)
 *     PfpPrefetchSharedInitialize @ 0x1404D7840 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedStart @ 0x1404D7884 (PfpPrefetchSharedStart.c)
 *     PfSnLogAsyncWorker @ 0x1404D7D54 (PfSnLogAsyncWorker.c)
 *     PfSnAsyncContextCleanup @ 0x1404D7DCC (PfSnAsyncContextCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnAsyncPrefetchStep @ 0x1404E9D30 (PfSnAsyncPrefetchStep.c)
 *     PfSnCleanupPrefetchHeader @ 0x1404ED470 (PfSnCleanupPrefetchHeader.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v8; // rax
  PVOID PoolWithTag; // rax
  int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14[4]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v15[16]; // [rsp+38h] [rbp-89h] BYREF
  _BYTE v16[48]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = *((_QWORD *)P + 26);
  v3 = 0;
  v4 = 0;
  memset(v15, 0, sizeof(v15));
  v5 = *((_DWORD *)P + 59);
  v15[4] = (__int64)&v15[3];
  v15[0] = v1;
  v15[3] = (__int64)&v15[3];
  v15[6] = (__int64)&v15[5];
  v15[5] = (__int64)&v15[5];
  PfSnLogAsyncWorker(v1, &PfSnEvt_AsyncWorker_Start);
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5, 1);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0, (__int64)v16);
  v6 = MmGetDefaultPagePriority() - 1;
  if ( v5 <= v6 )
  {
    LODWORD(v15[12]) = v5;
    HIDWORD(v15[12]) = v5;
  }
  else
  {
    LODWORD(v15[12]) = v6;
    HIDWORD(v15[12]) = v6 + 1;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(v15) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(HIDWORD(v15[12]) + 1);
    v8 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v15[13] = v8;
    if ( v8 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
      v15[1] = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        PfpPrefetchSharedInitialize((__int64)PoolWithTag);
        *(_QWORD *)(v15[1] + 32) = v15;
        *(_DWORD *)(v15[1] + 60) = 250;
        *(_DWORD *)(v15[1] + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v15[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v15, v14) >= 0 )
        {
          v10 = v14[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v10 = v14[0] | 1;
            v14[0] |= 1u;
          }
          if ( (dword_140328570 & 4) != 0 )
          {
            v11 = 0;
            v10 &= ~2u;
            v14[0] = v10;
          }
          else
          {
            if ( (v10 & 1) != 0 )
              v11 = *(_DWORD *)(v1 + 124);
            else
              v11 = 1;
            if ( 1 << v11 != 1 && (int)PfSnAsyncPrefetchStep(P, v15, (unsigned int)((1 << v11) - 1)) < 0 )
              goto LABEL_21;
            ExReleaseRundownProtection(*((PEX_RUNDOWN_REF *)P + 4));
            v3 = 1;
            PfSnLogAsyncWorker(v1, &PfSnEvt_SyncPrefetchingDone_Info);
          }
          if ( v11 < *(_DWORD *)(v1 + 124) && (v10 & 2) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1832LL), 5000);
            while ( v11 < *(_DWORD *)(v1 + 124) && (int)PfSnAsyncPrefetchStep(P, v15, (unsigned int)(1 << v11)) >= 0 )
              ++v11;
          }
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1832LL), 0);
  v12 = *((_QWORD *)P + 28);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 472) = v15[14];
    v13 = *((_QWORD *)P + 28);
    v15[14] = 0LL;
    *(_DWORD *)(v13 + 480) = v15[15];
  }
  PfSnCleanupPrefetchHeader(v15);
  _InterlockedDecrement(&dword_140328770);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5, 0);
  KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  if ( !v3 )
  {
    ExReleaseRundownProtection(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v1, &PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, &PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
