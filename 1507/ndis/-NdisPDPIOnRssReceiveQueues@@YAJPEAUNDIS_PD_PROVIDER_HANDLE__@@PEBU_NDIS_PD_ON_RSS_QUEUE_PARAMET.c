/*
 * XREFs of ?NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DF540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C00240FC (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_SF_qddS @ 0x1C006D728 (WPP_SF_qddS.c)
 *     WPP_SF_qddd @ 0x1C006D7EC (WPP_SF_qddd_ea_1C006D7EC.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00B3E94 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00DDECC (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00E0614 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00E07A8 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwGetRssInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00E1120 (-ndisPcwGetRssInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00E11E4 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00E1290 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIOnRssReceiveQueues(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_ON_RSS_QUEUE_PARAMETERS *a2,
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
  int RssInstanceName; // ebx
  __int64 v17; // rax
  KLockHolder *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  _LIST_ENTRY **v21; // rax
  char *v22; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v24; // rsi
  _QWORD *v25; // rax
  int NextPDCounterId; // eax
  unsigned int v27; // edx
  NDIS_PD_QUEUE_TRACKER *v28; // rax
  struct NDIS_PD_QUEUE_TRACKER *v29; // rcx
  struct NDIS_PD_COUNTER *v31; // [rsp+20h] [rbp-71h]
  char v32[8]; // [rsp+28h] [rbp-69h]
  char v33; // [rsp+40h] [rbp-51h]
  unsigned int v34; // [rsp+44h] [rbp-4Dh]
  int v35; // [rsp+48h] [rbp-49h]
  int v36; // [rsp+4Ch] [rbp-45h]
  struct _LIST_ENTRY v37; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v38; // [rsp+60h] [rbp-31h]
  KLockHolder v39; // [rsp+68h] [rbp-29h] BYREF
  KLockHolder v40; // [rsp+80h] [rbp-11h] BYREF
  struct _NDIS_PD_QUEUE **v41; // [rsp+F0h] [rbp+5Fh]

  v41 = a3;
  v8 = 0;
  v33 = 0;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    v12 = *a4;
    v13 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 96) )
      v13 = L" ";
    WPP_SF_qddS(0x26u, (__int64)a2, (__int64)a1, v12, *a6, v13);
  }
  if ( *((_BYTE *)a1 + 96) )
  {
    RssInstanceName = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ON_RSS_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 11) + 24LL))(
                        *((_QWORD *)a1 + 10),
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7);
    if ( RssInstanceName < 0 )
      goto LABEL_52;
    v14 = 0LL;
    if ( *a4 )
    {
      do
      {
        *(_QWORD *)(*(_QWORD *)((char *)a5 + (unsigned int)v14 * *a7 + 48) + 48LL) = a1;
        v17 = (unsigned int)v14;
        v14 = (unsigned int)(v14 + 1);
        v15 = (__int64)v41[v17];
        *(_QWORD *)(*(_QWORD *)(v15 + 24) + 48LL) = a1;
      }
      while ( (unsigned int)v14 < *a4 );
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    goto LABEL_46;
  }
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v39,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  v18 = &v39;
  if ( !*((_BYTE *)a1 + 97) )
  {
    *((_BYTE *)a1 + 97) = 1;
    v33 = 1;
    KLockHolder::~KLockHolder(&v39);
    if ( *(_BYTE *)a2 == 0x80
      && *((_BYTE *)a2 + 1) == 1
      && *((_WORD *)a2 + 1) >= 8u
      && (*((_DWORD *)a2 + 1) & 0xFFFFFFFE) == 0 )
    {
      RssInstanceName = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ON_RSS_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 11) + 24LL))(
                          *((_QWORD *)a1 + 10),
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7);
      if ( RssInstanceName < 0 )
      {
LABEL_50:
        KLockThisExclusive::KLockThisExclusive(
          (KLockThisExclusive *)&v40,
          (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
        v18 = &v40;
        *((_BYTE *)a1 + 97) = 0;
        goto LABEL_51;
      }
      v19 = *a7;
      v14 = *a4;
      v38 = *a4;
      v36 = v19;
      if ( (unsigned int)v19 >= 0x38 && (v19 & 0xFFFFFFFFFFFFFFF8uLL) == (unsigned int)v19 )
      {
        v20 = (unsigned int)v19 * (unsigned __int64)(unsigned int)v14;
        v15 = 0xFFFFFFFFLL;
        if ( v20 <= 0xFFFFFFFF && (unsigned int)v20 <= *a6 )
        {
          v34 = 0;
          RssInstanceName = 0;
          if ( !(_DWORD)v14 )
            goto LABEL_52;
          v21 = (_LIST_ENTRY **)v41;
          LODWORD(v15) = 0;
          v35 = 0;
          while ( 1 )
          {
            v22 = (char *)a5 + (unsigned int)v15;
            v37.Flink = *v21;
            if ( *v22 != (char)0x80
              || v22[1] != 1
              || *((_WORD *)v22 + 1) < 0x38u
              || (*((_DWORD *)v22 + 1) & 0xFFFFFFFE) != 0
              || *((_DWORD *)v22 + 2) != 1
              || !*((_QWORD *)v22 + 6) )
            {
              break;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x6E41444Eu);
            v24 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag[5] = 0LL;
              PoolWithTag[6] = 0LL;
              PoolWithTag[7] = 0LL;
              *((_DWORD *)PoolWithTag + 16) = 0;
              *((_BYTE *)PoolWithTag + 68) = 0;
              PoolWithTag[9] = 0LL;
              PoolWithTag[2] = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[4] = 0LL;
              PoolWithTag[3] = 0LL;
              v25 = PoolWithTag + 10;
              v25[1] = v25;
              *v25 = v25;
              *((_DWORD *)v24 + 24) = 0;
              v24[13] = 0LL;
            }
            else
            {
              v24 = 0LL;
            }
            if ( !v24 )
              goto LABEL_42;
            *((_DWORD *)v24 + 18) = v34;
            NextPDCounterId = ndisGetNextPDCounterId();
            v27 = *((_DWORD *)v24 + 18);
            *((_DWORD *)v24 + 19) = NextPDCounterId;
            RssInstanceName = ndisPcwGetRssInstanceName(
                                *((struct _NDIS_MINIPORT_BLOCK **)a1 + 7),
                                v27,
                                (struct _UNICODE_STRING *)v24 + 6);
            if ( RssInstanceName < 0 )
            {
              NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v24);
LABEL_41:
              v8 = 1;
              goto LABEL_46;
            }
            LOBYTE(v31) = 1;
            ndisSetupPDCounter(v24, *((_QWORD *)v22 + 6), 1LL, a1, (_DWORD)v31);
            *((_QWORD *)v22 + 6) = v24;
            v28 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x7441444Eu);
            v29 = v28 ? NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v28) : 0LL;
            if ( !v29 )
            {
LABEL_42:
              RssInstanceName = -1073741670;
              goto LABEL_48;
            }
            ndisSetupPDQTracker(
              v29,
              (struct _NDIS_PD_QUEUE *)v37.Flink,
              (const struct _NDIS_PD_QUEUE_PARAMETERS *)v22,
              a1,
              (struct NDIS_PD_COUNTER *)v24,
              1,
              *((_BYTE *)a2 + 4) & 1);
            v15 = (unsigned int)(v36 + v35);
            v21 = (_LIST_ENTRY **)(v41 + 1);
            ++v34;
            v35 += v36;
            ++v41;
            if ( v34 >= v38 )
              goto LABEL_41;
          }
        }
      }
      RssInstanceName = -1073741776;
      goto LABEL_48;
    }
    RssInstanceName = -1073741811;
LABEL_46:
    if ( RssInstanceName >= 0 )
      goto LABEL_52;
    if ( !v8 )
    {
LABEL_49:
      if ( !v33 )
        goto LABEL_52;
      goto LABEL_50;
    }
LABEL_48:
    v39.m_Lock = (KPushLockBase *)&v39;
    *(_QWORD *)&v39.m_State = &v39;
    v37.Blink = &v37;
    v37.Flink = &v37;
    ndisCleanupPDRSSObjects(a1, (struct _LIST_ENTRY *)&v39, &v37);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 11) + 32LL))(*((_QWORD *)a1 + 10));
    ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v39, &v37);
    goto LABEL_49;
  }
  RssInstanceName = -1073741808;
LABEL_51:
  KLockHolder::~KLockHolder(v18);
LABEL_52:
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    *(_DWORD *)v32 = RssInstanceName;
    LODWORD(v31) = *a6;
    WPP_SF_qddd(v15, v14, (__int64)a1, *a4, v31, *(_QWORD *)v32);
  }
  return (unsigned int)RssInstanceName;
}
