/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C0016378
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B670 (ndisFOidRequestCompleteInternal.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisReferenceRefNoCheck @ 0x1C00167B8 (ndisReferenceRefNoCheck.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C004EBD8 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(_LIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  _LIST_ENTRY *v5; // r12
  __int64 v6; // r13
  unsigned int v8; // ebp
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v10; // r15
  __int64 v11; // rdx
  KSPIN_LOCK *p_Blink; // r13
  char v13; // r14
  KIRQL v14; // cl
  unsigned __int16 Flink; // ax
  _LIST_ENTRY *Blink; // rdi
  _WORD *v17; // r8
  KIRQL v18; // dl
  KIRQL v19; // r14
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY **v21; // rax
  _LIST_ENTRY *j; // rcx
  _LIST_ENTRY *v23; // rcx
  KIRQL v24; // di
  KIRQL v26; // di
  __int64 v27; // rdi
  _WORD *v28; // r8
  bool v29; // zf
  KIRQL v30; // al
  __int64 v31; // r8
  KIRQL v32; // r13
  _QWORD *v33; // rdi
  char v34; // dl
  _QWORD *v35; // rax
  _QWORD *i; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // r11
  unsigned __int8 v39; // cl
  unsigned __int8 v40; // r10
  unsigned __int8 v41; // r9
  _BYTE *v42; // rdx
  unsigned __int8 v43; // dl
  _LIST_ENTRY *v44; // r11
  unsigned __int8 v45; // cl
  unsigned __int8 v46; // r10
  unsigned __int8 v47; // r9
  _BYTE *v48; // rdx
  unsigned __int8 v49; // dl
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]
  KIRQL v53; // [rsp+88h] [rbp+20h]
  KIRQL v54; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qLq(18LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a3, a2);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_110;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a3 == 17 )
  {
    v3 = (__int64)a1;
  }
  else
  {
    if ( a3 != 5 )
    {
LABEL_109:
      ExFreePoolWithTag(v10, 0);
LABEL_110:
      if ( (unsigned __int8)byte_1C00895D2 >= 4u )
        WPP_SF_qqd(20LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, v6, v8);
      return v8;
    }
    v5 = a1;
  }
  v10[3].Blink = a1;
  if ( v3 )
  {
    if ( !v6 )
    {
      LOBYTE(v11) = 71;
      ndisReferenceMiniportNoCheck(v3, v11);
      goto LABEL_54;
    }
    p_Blink = (KSPIN_LOCK *)(v3 + 4496);
    v13 = 1;
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 4496));
    v54 = v26;
    if ( !*(_BYTE *)(v3 + 4508) )
    {
      v27 = *(_QWORD *)(v3 + 4952);
      if ( v27 )
      {
        if ( *(_BYTE *)(v27 + 1) )
        {
          if ( *(_BYTE *)(v27 + 1) == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 4552), 1u);
        }
        else
        {
          v28 = 0LL;
          if ( _bittestandset((signed __int32 *)(v27 + 24), 7u) )
          {
            v38 = *(_QWORD *)(v27 + 8);
            v39 = -1;
            if ( !v38 )
              goto LABEL_114;
            v40 = *(_BYTE *)(v27 + 3);
            v41 = 0;
            if ( !v40 )
              goto LABEL_114;
            do
            {
              v42 = (_BYTE *)(v38 + 2LL * v41);
              if ( *v42 == 71 )
              {
                if ( v42[1] != 0xFF )
                {
                  ++v42[1];
                  goto LABEL_39;
                }
              }
              else if ( !v42[1] )
              {
                v28 = (_WORD *)(v38 + 2LL * v41);
              }
              ++v41;
            }
            while ( v41 < v40 );
            if ( v28 )
            {
              *v28 = 327;
            }
            else
            {
LABEL_114:
              if ( !*(_BYTE *)(v27 + 1) )
              {
                v43 = *(_BYTE *)(v27 + 3);
                if ( v43 == 0xFF )
                {
                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v27);
                  *(_BYTE *)(v27 + 1) = 2;
                }
                else
                {
                  if ( (unsigned int)v43 + 2 <= 0xFF )
                    v39 = v43 + 2;
                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v27, v39);
                }
              }
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v27);
            }
          }
        }
      }
LABEL_39:
      v29 = (*(_DWORD *)(v3 + 4504))++ == -1;
      v26 = v54;
      if ( !v29 )
        goto LABEL_40;
      *(_DWORD *)(v3 + 4504) = -1;
    }
    v13 = 0;
LABEL_40:
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_qD(12LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v3, *(unsigned int *)(v3 + 4504));
    v18 = v26;
LABEL_18:
    KeReleaseSpinLock(p_Blink, v18);
    v6 = a2;
    goto LABEL_19;
  }
  if ( !v5 )
    goto LABEL_109;
  if ( v6 )
  {
    p_Blink = (KSPIN_LOCK *)&v5[19].Blink;
    v13 = 0;
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[19].Blink);
    v53 = v14;
    if ( !BYTE2(v5[20].Flink) )
    {
      Flink = (unsigned __int16)v5[20].Flink;
      if ( Flink < 0xFFEBu )
      {
        Blink = v5[20].Blink;
        LOWORD(v5[20].Flink) = Flink + 1;
        if ( Blink )
        {
          if ( BYTE1(Blink->Flink) )
          {
            if ( BYTE1(Blink->Flink) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&Blink[48].Blink, 1u);
          }
          else
          {
            v17 = 0LL;
            if ( _bittestandset((signed __int32 *)&Blink[1], 0xCu) )
            {
              v44 = Blink->Blink;
              v45 = -1;
              if ( !v44 )
                goto LABEL_115;
              v46 = BYTE3(Blink->Flink);
              v47 = 0;
              if ( !v46 )
                goto LABEL_115;
              do
              {
                v48 = (char *)v44 + 2 * v47;
                if ( *v48 == 12 )
                {
                  if ( v48[1] != 0xFF )
                  {
                    ++v48[1];
                    goto LABEL_15;
                  }
                }
                else if ( !v48[1] )
                {
                  v17 = (_WORD *)v44 + v47;
                }
                ++v47;
              }
              while ( v47 < v46 );
              if ( v17 )
              {
                *v17 = 268;
              }
              else
              {
LABEL_115:
                if ( !BYTE1(Blink->Flink) )
                {
                  v49 = BYTE3(Blink->Flink);
                  if ( v49 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)Blink);
                    BYTE1(Blink->Flink) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v49 + 2 <= 0xFF )
                      v45 = v49 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)Blink, v45);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)Blink);
              }
            }
          }
LABEL_15:
          v14 = v53;
        }
        v13 = 1;
      }
    }
    v18 = v14;
    goto LABEL_18;
  }
  LOBYTE(v11) = 12;
  ndisReferenceRefNoCheck(&v5[19].Blink, v11);
LABEL_54:
  v13 = 1;
LABEL_19:
  if ( v13 != 1 )
    goto LABEL_109;
  if ( v6 )
  {
    if ( v3 )
    {
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      v31 = a2;
      v32 = v30;
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2295234;
      v33 = (_QWORD *)(a2 + 72);
      v34 = byte_1C00895D2;
      if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      {
        WPP_SF_qq(21LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, a2);
        v34 = byte_1C00895D2;
        v31 = a2;
      }
      *v33 = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (*(_DWORD *)(v3 + 124) & 0x100) == 0 )
      {
        v35 = (_QWORD *)(v3 + 2200);
        for ( i = *(_QWORD **)(v3 + 2200); i != v35; i = (_QWORD *)*i )
        {
          if ( i == v33 )
            goto LABEL_50;
        }
        v37 = *(_QWORD **)(v3 + 2208);
        v8 = 0;
        if ( (_QWORD *)*v37 != v35 )
          __fastfail(3u);
        *v33 = v35;
        *(_QWORD *)(a2 + 80) = v37;
        *v37 = v33;
        *(_QWORD *)(v3 + 2208) = v33;
      }
LABEL_50:
      if ( (unsigned __int8)v34 >= 4u )
        WPP_SF_qqd(22LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, v31, v8);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v32);
      v6 = a2;
    }
    else
    {
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[2].Flink[6]);
      v5[2].Flink[32].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[2].Flink[116].Flink) = 2295242;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v5[9]);
      v20 = (_LIST_ENTRY *)(v6 + 72);
      v5[9].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[10].Flink) = 2295243;
      *(_QWORD *)(v6 + 72) = 0LL;
      *(_QWORD *)(v6 + 80) = 0LL;
      if ( (HIDWORD(v5[2].Flink[7].Blink) & 0x100) == 0 )
      {
        v21 = &v5[10].Blink;
        for ( j = v5[10].Blink; j != (_LIST_ENTRY *)v21; j = j->Flink )
        {
          if ( j == v20 )
            goto LABEL_27;
        }
        v23 = v5[11].Flink;
        v8 = 0;
        if ( (_LIST_ENTRY **)v23->Flink != v21 )
          __fastfail(3u);
        v20->Flink = (_LIST_ENTRY *)v21;
        *(_QWORD *)(v6 + 80) = v23;
        v23->Flink = v20;
        v5[11].Flink = v20;
      }
LABEL_27:
      v5[9].Blink = 0LL;
      LODWORD(v5[10].Flink) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v5[9]);
      v5[2].Flink[32].Blink = 0LL;
      LODWORD(v5[2].Flink[116].Flink) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)&v5[2].Flink[6], v19);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
  {
    if ( v3 )
      ndisDereferenceMiniport(v3);
    else
      ndisDereferenceRef((PKSPIN_LOCK)&v5[19].Blink, 0xCu);
    goto LABEL_109;
  }
  v10[2].Blink = 0LL;
  v10[2].Flink = retaddr;
  v10->Flink = 0LL;
  v10[1].Flink = (_LIST_ENTRY *)ndisDoOidRequests;
  v10[1].Blink = v10;
  KeInsertQueue(&ndisWorkerQueue, v10);
  _InterlockedAdd(&ndisWorkerQueueItemCount, 1u);
  v24 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !ndisThreadPoolTimerQueued )
  {
    ndisThreadPoolTimerQueued = 1;
    KeSetTimer(&ndisThreadPoolTimer, ndisThreadPoolTimerDueTime, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v24);
  v8 = 259;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qD(19LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v10, 259LL);
    goto LABEL_110;
  }
  return v8;
}
