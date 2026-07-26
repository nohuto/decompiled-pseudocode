/*
 * XREFs of ndisQueueOidRequest @ 0x1C0007420
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C00068D0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000A1C0 (ndisMOidRequest.c)
 *     ndisLegacyRequest @ 0x1C0041EA0 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0044560 (ndisProcessRequestAsync.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C00092E8 (ndisOidTranslateBetweenOids.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qqqq @ 0x1C0040CB0 (WPP_SF_qqqq.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00548B8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v7; // r13
  unsigned __int8 *v8; // r12
  char v9; // bl
  unsigned int v10; // eax
  unsigned __int8 *v11; // r14
  KSPIN_LOCK *v12; // r13
  KIRQL v13; // al
  unsigned __int8 *v14; // rsi
  char v15; // r15
  KIRQL v16; // r12
  unsigned __int16 v17; // cx
  KIRQL v18; // al
  struct _NDIS_REFCOUNT_BLOCK *v19; // rcx
  KIRQL v20; // bl
  KIRQL v21; // al
  unsigned int v22; // esi
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rcx
  unsigned __int8 **v25; // rcx
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // bl
  __int64 v29; // r9
  unsigned __int8 v30; // r10
  unsigned __int8 v31; // cl
  _BYTE *v32; // rdx
  bool v33; // zf
  char v35; // si
  KIRQL v36; // r15
  struct _NDIS_REFCOUNT_BLOCK *v37; // rcx
  KIRQL v38; // al
  KIRQL v39; // r13
  char v40; // dl
  unsigned __int8 *v41; // rax
  unsigned __int8 *v42; // rcx
  unsigned __int8 **v43; // rcx
  char v44; // r14
  KIRQL v45; // al
  ULONG_PTR v46; // r8
  KIRQL v47; // r15
  __int64 v48; // r10
  unsigned __int8 v49; // r9
  unsigned __int8 v50; // al
  _BYTE *v51; // rdx
  unsigned __int8 *v52; // rbx
  KIRQL v53; // al
  unsigned __int16 v54; // cx
  KIRQL v55; // al
  ULONG_PTR v56; // r8
  KIRQL v57; // r15
  __int64 v58; // r10
  unsigned __int8 v59; // r9
  unsigned __int8 v60; // cl
  _BYTE *v61; // rdx
  ULONG_PTR v62; // r15
  unsigned int v63; // edx
  KIRQL v64; // bl
  ULONG_PTR v65; // r14
  unsigned int v66; // edx
  ULONG_PTR v67; // r13
  unsigned int v68; // edx
  struct _KEVENT *v69; // rcx
  char v70; // [rsp+30h] [rbp-D0h]
  KIRQL v71; // [rsp+30h] [rbp-D0h]
  KIRQL v72; // [rsp+31h] [rbp-CFh]
  KIRQL v73; // [rsp+31h] [rbp-CFh]
  KIRQL v74; // [rsp+32h] [rbp-CEh]
  _DWORD v76[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v77[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = a1;
  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqqq(55LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, a3, a4);
  v9 = 0;
  memset(v77, 0, sizeof(v77));
  v76[0] = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(230LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v7);
  v10 = *(_DWORD *)(v7 + 32);
  v11 = (unsigned __int8 *)(v7 + 72);
  if ( v10 > 0x10207 || v10 < 0x10106 )
    goto LABEL_6;
  if ( v10 <= 0x10107 || v10 == 65812 )
  {
LABEL_105:
    v9 = 1;
    goto LABEL_7;
  }
  if ( v10 != 66055 )
  {
LABEL_6:
    if ( (*(_DWORD *)(v7 + 88) & 0x100000) == 0 )
      goto LABEL_7;
    goto LABEL_105;
  }
  if ( a2[32] < 6u )
  {
    memset(v77, 0, sizeof(v77));
    *(_DWORD *)&v77[88] |= 8u;
    *(_QWORD *)&v77[104] = &ndisIntReqNsi;
    *(_DWORD *)v77 = 15466902;
    *(_QWORD *)&v77[40] = v76;
    *(_DWORD *)&v77[32] = 65799;
    *(_QWORD *)&v77[4] = 2LL;
    *(_DWORD *)&v77[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v77, 0LL, 0LL);
    memset(v77, 0, sizeof(v77));
    *(_DWORD *)&v77[88] |= 8u;
    *(_QWORD *)&v77[104] = &ndisIntReqNsi;
    *(_DWORD *)v77 = 15466902;
    *(_QWORD *)&v77[40] = v76;
    *(_DWORD *)&v77[32] = 65812;
    *(_QWORD *)&v77[4] = 2LL;
    *(_DWORD *)&v77[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v77, 0LL, 0LL);
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(231LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v7);
  if ( v9 )
  {
    v14 = a2;
  }
  else
  {
    v12 = (KSPIN_LOCK *)(a2 + 96);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 12);
    *((_QWORD *)a2 + 65) = KeGetCurrentThread();
    v74 = v13;
    *((_DWORD *)a2 + 464) = 2297640;
    if ( a3 )
      v14 = *(unsigned __int8 **)(a3 + 416);
    else
      v14 = (unsigned __int8 *)*((_QWORD *)a2 + 326);
    if ( a4 )
    {
      v52 = a4 + 312;
      v70 = 0;
      v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 39);
      v73 = v53;
      if ( !a4[322] )
      {
        v54 = *((_WORD *)a4 + 160);
        if ( v54 < 0xFFEBu )
        {
          *((_WORD *)a4 + 160) = v54 + 1;
          ndisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)a4 + 41));
          v53 = v73;
          v70 = 1;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)a4 + 39, v53);
      if ( v70 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a4 + 2) + 248LL) )
        {
          v14 = a4;
        }
        else if ( *((_QWORD *)a4 + 52) )
        {
          v14 = (unsigned __int8 *)*((_QWORD *)a4 + 52);
        }
        v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 39);
        v56 = *((_QWORD *)a4 + 41);
        v57 = v55;
        v71 = v55;
        if ( v56 )
        {
          if ( *(_BYTE *)(v56 + 1) )
          {
            if ( *(_BYTE *)(v56 + 1) == 1 )
            {
              v62 = v56 + 1096;
              v63 = *(_DWORD *)(v56 + 1152);
              if ( v63 >> 17 < 0x3FFE && (unsigned __int16)v63 >> 1 == (v63 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 1096));
                *(_DWORD *)(v62 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v63 & 0xFFFE) == 0 && (v63 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v56, 0x11uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 1096), 0);
              }
              v57 = v71;
            }
          }
          else
          {
            v58 = *(_QWORD *)(v56 + 8);
            if ( v58 && (v59 = *(_BYTE *)(v56 + 3), v60 = 0, v59) )
            {
              while ( 1 )
              {
                v61 = (_BYTE *)(v58 + 2LL * v60);
                if ( *v61 == 17 )
                {
                  if ( v61[1] )
                    break;
                }
                if ( ++v60 >= v59 )
                  goto LABEL_98;
              }
              --v61[1];
            }
            else
            {
LABEL_98:
              if ( !_bittestandreset((signed __int32 *)(v56 + 16), 0x11u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v56, 0x11uLL);
            }
          }
        }
        v33 = (*((_WORD *)v52 + 4))-- == 1;
        if ( v33 && !v52[11] )
        {
          ndisFreeRefCount(*((PVOID *)v52 + 2));
          *((_QWORD *)v52 + 2) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v52, v57);
      }
      v13 = v74;
    }
    if ( *v14 == 5 )
    {
      while ( 1 )
      {
        v15 = 0;
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14 + 39);
        if ( !v14[322] )
        {
          v17 = *((_WORD *)v14 + 160);
          if ( v17 < 0xFFEBu )
          {
            *((_WORD *)v14 + 160) = v17 + 1;
            ndisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v14 + 41));
            v15 = 1;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v14 + 39, v16);
        if ( v15 )
          break;
        v14 = (unsigned __int8 *)*((_QWORD *)v14 + 52);
        v8 = 0LL;
        if ( *v14 != 5 )
          goto LABEL_19;
      }
      v8 = v14;
LABEL_19:
      v13 = v74;
      v12 = (KSPIN_LOCK *)(a2 + 96);
    }
    *((_QWORD *)a2 + 65) = 0LL;
    *((_DWORD *)a2 + 464) = 0;
    KeReleaseSpinLock(v12, v13);
    v7 = a1;
  }
  if ( *v14 == 17 )
    ndisOidTranslateBetweenOids(a2, a2, v7);
  if ( KeGetCurrentIrql() )
  {
    v22 = ndisQueueRequestWorkItem(v14, v7, *v14);
    goto LABEL_45;
  }
  if ( !v8 )
  {
    v35 = 1;
    v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 562);
    if ( !a2[4508] )
    {
      v37 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)a2 + 619);
      if ( v37 )
        ndisReferenceWithTag(v37);
      v33 = (*((_DWORD *)a2 + 1126))++ == -1;
      if ( !v33 )
        goto LABEL_53;
      *((_DWORD *)a2 + 1126) = -1;
    }
    v35 = 0;
LABEL_53:
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_qD(12LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a2, *((unsigned int *)a2 + 1126));
    KeReleaseSpinLock((PKSPIN_LOCK)a2 + 562, v36);
    if ( !v35 )
    {
      v22 = -1073741823;
      goto LABEL_46;
    }
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 12);
    v22 = -1073741823;
    *((_QWORD *)a2 + 65) = KeGetCurrentThread();
    v39 = v38;
    *((_DWORD *)a2 + 464) = 2297739;
    v40 = byte_1C0083712;
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
    {
      WPP_SF_qq(21LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a2, a1);
      v40 = byte_1C0083712;
    }
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    if ( (*((_DWORD *)a2 + 31) & 0x100) == 0 )
    {
      v41 = a2 + 2200;
      v42 = (unsigned __int8 *)*((_QWORD *)a2 + 275);
      if ( v42 == a2 + 2200 )
      {
LABEL_60:
        v43 = (unsigned __int8 **)*((_QWORD *)a2 + 276);
        v22 = 0;
        *(_QWORD *)v11 = v41;
        *((_QWORD *)v11 + 1) = v43;
        if ( *v43 != v41 )
          __fastfail(3u);
        *v43 = v11;
        *((_QWORD *)a2 + 276) = v11;
      }
      else
      {
        while ( v42 != v11 )
        {
          v42 = *(unsigned __int8 **)v42;
          if ( v42 == v41 )
            goto LABEL_60;
        }
      }
    }
    if ( (unsigned __int8)v40 >= 4u )
      WPP_SF_qqd(22LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a2, a1, v22);
    *((_QWORD *)a2 + 65) = 0LL;
    *((_DWORD *)a2 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a2 + 12, v39);
    if ( !v22 )
    {
      ndisMDoOidRequest(a2);
      v22 = 259;
    }
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a2);
    v44 = 0;
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 562);
    v46 = *((_QWORD *)a2 + 619);
    v47 = v45;
    if ( v46 )
    {
      if ( *(_BYTE *)(v46 + 1) )
      {
        if ( *(_BYTE *)(v46 + 1) == 1 )
        {
          v67 = v46 + 4488;
          v68 = *(_DWORD *)(v46 + 4544);
          if ( v68 >> 17 < 0x3FFE && (unsigned __int16)v68 >> 1 == (v68 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v46 + 4488));
            *(_DWORD *)(v67 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v68 & 0xFFFE) == 0 && (v68 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v46, 0x46uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v46 + 4488), 0);
          }
        }
      }
      else
      {
        v48 = *(_QWORD *)(v46 + 8);
        if ( v48 && (v49 = *(_BYTE *)(v46 + 3), v50 = 0, v49) )
        {
          while ( 1 )
          {
            v51 = (_BYTE *)(v48 + 2LL * v50);
            if ( *v51 == 70 )
            {
              if ( v51[1] )
                break;
            }
            if ( ++v50 >= v49 )
              goto LABEL_74;
          }
          --v51[1];
        }
        else
        {
LABEL_74:
          if ( !_bittestandreset((signed __int32 *)(v46 + 24), 6u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v46, 0x46uLL);
        }
      }
    }
    v33 = (*((_DWORD *)a2 + 1126))-- == 1;
    if ( v33 )
      v44 = 1;
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a2, *((unsigned int *)a2 + 1126));
    KeReleaseSpinLock((PKSPIN_LOCK)a2 + 562, v47);
    if ( v44 )
    {
      v69 = (struct _KEVENT *)*((_QWORD *)a2 + 201);
      if ( v69 )
        KeSetEvent(v69, 0, 0);
    }
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a2);
    goto LABEL_44;
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 39);
  v19 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v8 + 41);
  ++*((_WORD *)v8 + 160);
  v20 = v18;
  ndisReferenceWithTag(v19);
  KeReleaseSpinLock((PKSPIN_LOCK)v8 + 39, v20);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 12);
  *((_QWORD *)a2 + 65) = KeGetCurrentThread();
  v72 = v21;
  *((_DWORD *)a2 + 464) = 2297717;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v8 + 18);
  *((_QWORD *)v8 + 19) = KeGetCurrentThread();
  v22 = -1073741823;
  *((_DWORD *)v8 + 40) = 2297718;
  *(_QWORD *)v11 = 0LL;
  *((_QWORD *)v11 + 1) = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)v8 + 4) + 124LL) & 0x100) == 0 )
  {
    v23 = v8 + 168;
    v24 = (unsigned __int8 *)*((_QWORD *)v8 + 21);
    if ( v24 == v8 + 168 )
    {
LABEL_27:
      v25 = (unsigned __int8 **)*((_QWORD *)v8 + 22);
      v22 = 0;
      *(_QWORD *)v11 = v23;
      *((_QWORD *)v11 + 1) = v25;
      if ( *v25 != v23 )
        __fastfail(3u);
      *v25 = v11;
      *((_QWORD *)v8 + 22) = v11;
    }
    else
    {
      while ( v24 != v11 )
      {
        v24 = *(unsigned __int8 **)v24;
        if ( v24 == v23 )
          goto LABEL_27;
      }
    }
  }
  *((_QWORD *)v8 + 19) = 0LL;
  *((_DWORD *)v8 + 40) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v8 + 18);
  *((_QWORD *)a2 + 65) = 0LL;
  *((_DWORD *)a2 + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a2 + 12, v72);
  if ( !v22 )
  {
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v8, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 18);
      *((_QWORD *)v8 + 19) = KeGetCurrentThread();
      *((_DWORD *)v8 + 40) = 2297346;
      v8[232] = 1;
      ndisQueueStackExpansionFallbackWorkItem(v8);
      *((_QWORD *)v8 + 19) = 0LL;
      *((_DWORD *)v8 + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 18, v64);
    }
    v22 = 259;
  }
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 39);
  v27 = *((_QWORD *)v8 + 41);
  v28 = v26;
  if ( v27 )
  {
    if ( *(_BYTE *)(v27 + 1) )
    {
      if ( *(_BYTE *)(v27 + 1) == 1 )
      {
        v65 = v27 + 840;
        v66 = *(_DWORD *)(v27 + 896);
        if ( v66 >> 17 < 0x3FFE && (unsigned __int16)v66 >> 1 == (v66 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 840));
          *(_DWORD *)(v65 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v66 & 0xFFFE) == 0 && (v66 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v27, 0xDuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 840), 0);
        }
      }
    }
    else
    {
      v29 = *(_QWORD *)(v27 + 8);
      if ( v29 && (v30 = *(_BYTE *)(v27 + 3), v31 = 0, v30) )
      {
        while ( 1 )
        {
          v32 = (_BYTE *)(v29 + 2LL * v31);
          if ( *v32 == 13 )
          {
            if ( v32[1] )
              break;
          }
          if ( ++v31 >= v30 )
            goto LABEL_39;
        }
        --v32[1];
      }
      else
      {
LABEL_39:
        if ( !_bittestandreset((signed __int32 *)(v27 + 16), 0xDu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v27, 0xDuLL);
      }
    }
  }
  v33 = (*((_WORD *)v8 + 160))-- == 1;
  if ( v33 && !v8[323] )
  {
    ndisFreeRefCount(*((PVOID *)v8 + 41));
    *((_QWORD *)v8 + 41) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v8 + 39, v28);
LABEL_44:
  v7 = a1;
LABEL_45:
  if ( v22 != 259 && v8 )
    ndisDereferenceRef((PKSPIN_LOCK)v8 + 39);
LABEL_46:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(56LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v7, a2, v22);
  return v22;
}
