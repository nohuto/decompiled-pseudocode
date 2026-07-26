/*
 * XREFs of ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00E11E4
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00DEE20 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 *     ?NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DF540 (-NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMET.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisSetupPDCounter(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  struct KPushLockBase *v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  KLockHolder v12; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 56) = a2;
  v7 = *(struct KPushLockBase **)&qword_1C0085808;
  *(_BYTE *)(a1 + 68) = a5;
  *(_DWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v12, v7 + 1);
  v8 = *(_QWORD **)(a4 + 112);
  v9 = a1 + 8;
  *(_QWORD *)(a1 + 8) = a4 + 104;
  *(_QWORD *)(a1 + 16) = v8;
  if ( *v8 != a4 + 104 )
    __fastfail(3u);
  *v8 = v9;
  *(_QWORD *)(a4 + 112) = v9;
  if ( a5 )
  {
    v10 = *(_QWORD **)(a4 + 128);
    v11 = a1 + 24;
    *(_QWORD *)(a1 + 24) = a4 + 120;
    *(_QWORD *)(a1 + 32) = v10;
    if ( *v10 != a4 + 120 )
      __fastfail(3u);
    *v10 = v11;
    *(_QWORD *)(a4 + 128) = v11;
  }
  KLockHolder::~KLockHolder(&v12);
}
