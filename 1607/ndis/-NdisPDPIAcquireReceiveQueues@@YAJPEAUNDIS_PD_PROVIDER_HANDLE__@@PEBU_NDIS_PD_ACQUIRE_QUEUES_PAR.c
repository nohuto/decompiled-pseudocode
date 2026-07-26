/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DE710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C0027BAC (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_SF_qddS @ 0x1C007177C (WPP_SF_qddS.c)
 *     WPP_SF_qddd @ 0x1C0071820 (WPP_SF_qddd_ea_1C0071820.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00B34B4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00DD6AC (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00DFF68 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00E00FC (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00E0BAC (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00E0DB8 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00E0E64 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAcquireReceiveQueues(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3,
        unsigned int *a4,
        struct _NDIS_PD_QUEUE_PARAMETERS *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  char v8; // si
  int v12; // r9d
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rax
  KLockThisExclusive *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  _LIST_ENTRY **v21; // rax
  _QWORD *v22; // rsi
  char *v23; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v25; // rax
  NDIS_PD_QUEUE_TRACKER *v26; // rax
  NDIS_PD_QUEUE_TRACKER *v27; // rcx
  struct NDIS_PD_COUNTER *v29; // [rsp+20h] [rbp-71h]
  unsigned __int8 v30[8]; // [rsp+28h] [rbp-69h]
  char v31; // [rsp+40h] [rbp-51h]
  int v32; // [rsp+44h] [rbp-4Dh]
  int v33; // [rsp+48h] [rbp-49h]
  int v34; // [rsp+4Ch] [rbp-45h]
  unsigned int v35; // [rsp+50h] [rbp-41h]
  struct _LIST_ENTRY v36; // [rsp+58h] [rbp-39h] BYREF
  KLockThisExclusive v37; // [rsp+68h] [rbp-29h] BYREF
  KLockThisExclusive v38; // [rsp+80h] [rbp-11h] BYREF
  struct _NDIS_PD_QUEUE **v39; // [rsp+F0h] [rbp+5Fh]

  v39 = a3;
  v8 = 0;
  v31 = 0;
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
  {
    v12 = *a4;
    v13 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 96) )
      v13 = L" ";
    WPP_SF_qddS(0x26u, (__int64)a2, (__int64)a1, v12, *a6, v13);
  }
  if ( *((_BYTE *)a1 + 96) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 11) + 24LL))(
            *((_QWORD *)a1 + 10),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( v16 < 0 )
      goto LABEL_53;
    v14 = 0LL;
    if ( *a4 )
    {
      do
      {
        *(_QWORD *)(*(_QWORD *)((char *)a5 + (unsigned int)v14 * *a7 + 48) + 48LL) = a1;
        v17 = (unsigned int)v14;
        v14 = (unsigned int)(v14 + 1);
        v15 = (__int64)v39[v17];
        *(_QWORD *)(*(_QWORD *)(v15 + 24) + 48LL) = a1;
      }
      while ( (unsigned int)v14 < *a4 );
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    goto LABEL_47;
  }
  KLockThisExclusive::KLockThisExclusive(&v37, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v18 = &v37;
  if ( !*((_BYTE *)a1 + 97) )
  {
    *((_BYTE *)a1 + 97) = 1;
    v31 = 1;
    KLockHolder::~KLockHolder(&v37);
    if ( *(_BYTE *)a2 == 0x80
      && *((_BYTE *)a2 + 1) == 1
      && *((_WORD *)a2 + 1) >= 8u
      && (*((_DWORD *)a2 + 1) & 0xFFFFFFFE) == 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 11) + 24LL))(
              *((_QWORD *)a1 + 10),
              a2,
              a3,
              a4,
              a5,
              a6,
              a7);
      if ( v16 < 0 )
      {
LABEL_51:
        KLockThisExclusive::KLockThisExclusive(&v38, (struct KPushLockBase *)(qword_1C0089668 + 8));
        v18 = &v38;
        *((_BYTE *)a1 + 97) = 0;
        goto LABEL_52;
      }
      v19 = *a7;
      v14 = *a4;
      v35 = *a4;
      v34 = v19;
      if ( (unsigned int)v19 >= 0x38 && (v19 & 0xFFFFFFFFFFFFFFF8uLL) == (unsigned int)v19 )
      {
        v20 = (unsigned int)v19 * (unsigned __int64)(unsigned int)v14;
        v15 = 0xFFFFFFFFLL;
        if ( v20 <= 0xFFFFFFFF && (unsigned int)v20 <= *a6 )
        {
          v32 = 0;
          v16 = 0;
          if ( !(_DWORD)v14 )
            goto LABEL_53;
          v21 = (_LIST_ENTRY **)v39;
          LODWORD(v14) = 0;
          v33 = 0;
          while ( 1 )
          {
            v22 = 0LL;
            v23 = (char *)a5 + (unsigned int)v14;
            v36.Flink = *v21;
            if ( *v23 != (char)0x80
              || v23[1] != 1
              || *((_WORD *)v23 + 1) < 0x38u
              || (*((_DWORD *)v23 + 1) & 0xFFFFFFFE) != 0
              || *((_DWORD *)v23 + 2) != 1 )
            {
              break;
            }
            if ( *((_QWORD *)v23 + 6) )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6E41444Eu);
              v22 = PoolWithTag;
              if ( PoolWithTag )
              {
                PoolWithTag[5] = 0LL;
                PoolWithTag[6] = 0LL;
                PoolWithTag[7] = 0LL;
                *((_DWORD *)PoolWithTag + 16) = 0;
                *((_BYTE *)PoolWithTag + 68) = 0;
                PoolWithTag[9] = 0LL;
                *((_DWORD *)PoolWithTag + 24) = 0;
                PoolWithTag[2] = 0LL;
                PoolWithTag[1] = 0LL;
                PoolWithTag[4] = 0LL;
                PoolWithTag[3] = 0LL;
                v25 = PoolWithTag + 10;
                v25[1] = v25;
                *v25 = v25;
                *((_DWORD *)v22 + 26) = 0;
                v22[14] = 0LL;
                *((_DWORD *)v22 + 30) = 0;
                v22[16] = 0LL;
              }
              else
              {
                v22 = 0LL;
              }
              if ( !v22 )
              {
LABEL_43:
                v16 = -1073741670;
                goto LABEL_49;
              }
              *((_DWORD *)v22 + 18) = v32;
              *((_DWORD *)v22 + 19) = ndisGetNextPDCounterId();
              v16 = ndisPcwSetRssInstanceSuffix((struct NDIS_PD_COUNTER *)v22);
              if ( v16 < 0 )
              {
                NDIS_PD_COUNTER::`scalar deleting destructor'((char *)v22);
LABEL_42:
                v8 = 1;
                goto LABEL_47;
              }
              LOBYTE(v29) = 1;
              ndisSetupPDCounter(v22, *((_QWORD *)v23 + 6), 1LL, a1, (_DWORD)v29);
              *((_QWORD *)v23 + 6) = v22;
            }
            v26 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x7441444Eu);
            if ( v26 )
              v27 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v26);
            else
              v27 = 0LL;
            if ( !v27 )
              goto LABEL_43;
            ndisSetupPDQTracker(
              v27,
              (struct _NDIS_PD_QUEUE *)v36.Flink,
              (const struct _NDIS_PD_QUEUE_PARAMETERS *)v23,
              a1,
              (struct NDIS_PD_COUNTER *)v22,
              1u,
              *((_BYTE *)a2 + 4) & 1);
            v15 = (unsigned int)(v32 + 1);
            v14 = (unsigned int)(v34 + v33);
            v21 = (_LIST_ENTRY **)(v39 + 1);
            v32 = v15;
            v33 += v34;
            ++v39;
            if ( (unsigned int)v15 >= v35 )
              goto LABEL_42;
          }
        }
      }
      v16 = -1073741776;
      goto LABEL_49;
    }
    v16 = -1073741811;
LABEL_47:
    if ( v16 >= 0 )
      goto LABEL_53;
    if ( !v8 )
    {
LABEL_50:
      if ( !v31 )
        goto LABEL_53;
      goto LABEL_51;
    }
LABEL_49:
    v37.m_Lock = (KPushLockBase *)&v37;
    *(_QWORD *)&v37.m_State = &v37;
    v36.Blink = &v36;
    v36.Flink = &v36;
    ndisCleanupPDRSSObjects(a1, (struct _LIST_ENTRY *)&v37, &v36);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 11) + 32LL))(*((_QWORD *)a1 + 10));
    ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v37, &v36);
    goto LABEL_50;
  }
  v16 = -1073741808;
LABEL_52:
  KLockHolder::~KLockHolder(v18);
LABEL_53:
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
  {
    *(_DWORD *)v30 = v16;
    LODWORD(v29) = *a6;
    WPP_SF_qddd(v15, v14, (__int64)a1, *a4, v29, *(_QWORD *)v30);
  }
  return (unsigned int)v16;
}
