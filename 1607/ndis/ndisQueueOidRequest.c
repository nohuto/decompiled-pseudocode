/*
 * XREFs of ndisQueueOidRequest @ 0x1C000A860
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C000A750 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000C910 (ndisMOidRequest.c)
 *     ndisLegacyRequest @ 0x1C00459A0 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0047AA0 (ndisProcessRequestAsync.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000B180 (ndisOidTranslateBetweenOids.c)
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisQueueRequestWorkItem @ 0x1C0016378 (ndisQueueRequestWorkItem.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qqqq @ 0x1C0044798 (WPP_SF_qqqq.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C0058FA4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned __int8 *a4)
{
  KSPIN_LOCK *v4; // r12
  char v9; // bl
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned __int8 *v12; // rsi
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rbx
  char v15; // r12
  KIRQL v16; // al
  unsigned __int16 v17; // cx
  KSPIN_LOCK v18; // r13
  _WORD *v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // r13
  KSPIN_LOCK v22; // rbx
  _WORD *v23; // rcx
  KIRQL v24; // al
  unsigned int v25; // ebx
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rcx
  unsigned __int8 **v28; // rcx
  KIRQL v29; // al
  ULONG_PTR v30; // r8
  KIRQL v31; // si
  __int64 v32; // r9
  unsigned __int8 v33; // r10
  unsigned __int8 v34; // cl
  _BYTE *v35; // rdx
  bool v36; // zf
  char v38; // r12
  KIRQL v39; // r13
  __int64 v40; // rbx
  _WORD *v41; // rcx
  KIRQL v42; // al
  KIRQL v43; // r13
  char v44; // dl
  unsigned __int8 *v45; // rax
  unsigned __int8 *v46; // rcx
  unsigned __int8 **v47; // rcx
  char v48; // si
  KIRQL v49; // al
  ULONG_PTR v50; // r8
  KIRQL v51; // r12
  __int64 v52; // r10
  unsigned __int8 v53; // r9
  unsigned __int8 v54; // cl
  _BYTE *v55; // rdx
  unsigned __int8 *v56; // r14
  KIRQL v57; // al
  unsigned __int16 v58; // cx
  struct _NDIS_REFCOUNT_BLOCK *v59; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v60; // rdx
  KIRQL v61; // al
  ULONG_PTR v62; // r8
  KIRQL v63; // r13
  __int64 v64; // r10
  unsigned __int8 v65; // r9
  unsigned __int8 v66; // cl
  _BYTE *v67; // rdx
  __int64 v68; // r10
  unsigned __int8 v69; // r9
  unsigned __int8 v70; // r8
  _BYTE *v71; // rdx
  __int64 v72; // r9
  unsigned __int8 v73; // r10
  unsigned __int8 v74; // r8
  _BYTE *v75; // rdx
  __int64 v76; // r10
  unsigned __int8 v77; // r9
  unsigned __int8 v78; // r8
  _BYTE *v79; // rdx
  unsigned __int8 v80; // dl
  unsigned __int8 v81; // dl
  unsigned __int8 v82; // dl
  unsigned __int8 v83; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r11
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v86; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v87; // r8
  unsigned __int8 v88; // dl
  unsigned __int8 v89; // dl
  ULONG_PTR v90; // r13
  unsigned int v91; // edx
  KIRQL v92; // bl
  ULONG_PTR v93; // r13
  unsigned int v94; // edx
  unsigned __int8 v95; // dl
  unsigned __int8 v96; // dl
  ULONG_PTR v97; // r13
  unsigned int v98; // edx
  struct _KEVENT *v99; // rcx
  KIRQL v100; // [rsp+30h] [rbp-D0h]
  KIRQL v101; // [rsp+30h] [rbp-D0h]
  KIRQL v102; // [rsp+31h] [rbp-CFh]
  char v103; // [rsp+31h] [rbp-CFh]
  KIRQL v104; // [rsp+31h] [rbp-CFh]
  KIRQL v105; // [rsp+32h] [rbp-CEh]
  struct _NDIS_REFCOUNT_BLOCK *v106; // [rsp+38h] [rbp-C8h] BYREF
  KSPIN_LOCK *v107; // [rsp+40h] [rbp-C0h]
  _BYTE v108[248]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0LL;
  v107 = 0LL;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqq(55LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3, a4);
  v9 = 0;
  memset(v108, 0, sizeof(v108));
  LODWORD(v106) = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(230LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1);
  v11 = *(_DWORD *)(a1 + 32);
  v12 = (unsigned __int8 *)(a1 + 72);
  if ( v11 > 0x10207 || v11 < 0x10106 )
    goto LABEL_6;
  if ( v11 <= 0x10107 || v11 == 65812 )
  {
LABEL_115:
    v9 = 1;
    goto LABEL_7;
  }
  if ( v11 != 66055 )
  {
LABEL_6:
    if ( (*(_DWORD *)(a1 + 88) & 0x100000) == 0 )
      goto LABEL_7;
    goto LABEL_115;
  }
  if ( a2[32] < 6u )
  {
    memset(v108, 0, sizeof(v108));
    *(_DWORD *)&v108[88] |= 8u;
    *(_QWORD *)&v108[104] = &ndisIntReqNsi;
    *(_QWORD *)&v108[40] = &v106;
    *(_DWORD *)v108 = 15466902;
    *(_DWORD *)&v108[32] = 65799;
    *(_QWORD *)&v108[4] = 2LL;
    *(_DWORD *)&v108[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v108, 0LL, 0LL);
    memset(v108, 0, sizeof(v108));
    *(_DWORD *)&v108[88] |= 8u;
    *(_QWORD *)&v108[104] = &ndisIntReqNsi;
    *(_QWORD *)&v108[40] = &v106;
    *(_DWORD *)v108 = 15466902;
    *(_DWORD *)&v108[32] = 65812;
    *(_QWORD *)&v108[4] = 2LL;
    *(_DWORD *)&v108[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v108, 0LL, 0LL);
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(231LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1);
  if ( v9 )
  {
    v14 = (KSPIN_LOCK *)a2;
    goto LABEL_24;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 12);
  *((_QWORD *)a2 + 65) = KeGetCurrentThread();
  v105 = v13;
  *((_DWORD *)a2 + 464) = 2297642;
  if ( a3 )
    v14 = *(KSPIN_LOCK **)(a3 + 416);
  else
    v14 = (KSPIN_LOCK *)*((_QWORD *)a2 + 326);
  if ( a4 )
  {
    v56 = a4 + 312;
    v103 = 0;
    v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 39);
    v101 = v57;
    if ( a4[322] )
      goto LABEL_98;
    v58 = *((_WORD *)a4 + 160);
    if ( v58 >= 0xFFEBu )
      goto LABEL_98;
    *((_WORD *)a4 + 160) = v58 + 1;
    v59 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)a4 + 41);
    v106 = v59;
    if ( v59 )
    {
      if ( v59->Type )
      {
        if ( v59->Type != 1 )
          goto LABEL_97;
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)v59[15].RefWithStack[0].Block.References, 1u);
      }
      else
      {
        v60 = 0LL;
        if ( !_bittestandset((signed __int32 *)v59->TaggedRefCounts.RefMask, 0x11u) )
          goto LABEL_97;
        Tags = v59->TaggedRefCounts.Tags;
        if ( !Tags )
          goto LABEL_254;
        NumOverflowTaggedEntries = v59->NumOverflowTaggedEntries;
        v86 = 0;
        if ( !NumOverflowTaggedEntries )
          goto LABEL_254;
        do
        {
          v87 = &Tags[v86];
          if ( v87->Tag == 17 )
          {
            if ( v87->RefCount != 0xFF )
            {
              ++v87->RefCount;
              goto LABEL_192;
            }
          }
          else if ( !v87->RefCount )
          {
            v60 = &Tags[v86];
          }
          ++v86;
        }
        while ( v86 < NumOverflowTaggedEntries );
        if ( v60 )
        {
          *v60 = (_NDIS_REFCOUNT_TAGGED_ENTRY)273;
        }
        else
        {
LABEL_254:
          if ( !v59->Type )
          {
            v88 = v59->NumOverflowTaggedEntries;
            if ( v88 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory(v59);
              v59 = v106;
              v106->Type = 2;
            }
            else
            {
              if ( (unsigned int)v88 + 2 <= 0xFF )
                v89 = v88 + 2;
              else
                v89 = -1;
              ndisResizeRefCountBlockTagged(v59, v89);
              v59 = v106;
            }
          }
          NdisReferenceWithTag(v59);
        }
      }
LABEL_192:
      v57 = v101;
    }
LABEL_97:
    v103 = 1;
LABEL_98:
    KeReleaseSpinLock((PKSPIN_LOCK)a4 + 39, v57);
    if ( v103 )
    {
      if ( *(_QWORD *)(*((_QWORD *)a4 + 2) + 248LL) )
      {
        v14 = (KSPIN_LOCK *)a4;
      }
      else if ( *((_QWORD *)a4 + 52) )
      {
        v14 = (KSPIN_LOCK *)*((_QWORD *)a4 + 52);
      }
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 39);
      v62 = *((_QWORD *)a4 + 41);
      v63 = v61;
      v104 = v61;
      if ( v62 )
      {
        if ( *(_BYTE *)(v62 + 1) )
        {
          if ( *(_BYTE *)(v62 + 1) == 1 )
          {
            v90 = v62 + 1096;
            v91 = *(_DWORD *)(v62 + 1152);
            if ( v91 >> 17 < 0x3FFE && (unsigned __int16)v91 >> 1 == (v91 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v62 + 1096));
              *(_DWORD *)(v90 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v91 & 0xFFFE) == 0 && (v91 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v62, 0x11uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v62 + 1096), 0);
            }
            v63 = v104;
          }
        }
        else
        {
          v64 = *(_QWORD *)(v62 + 8);
          if ( v64 && (v65 = *(_BYTE *)(v62 + 3), v66 = 0, v65) )
          {
            while ( 1 )
            {
              v67 = (_BYTE *)(v64 + 2LL * v66);
              if ( *v67 == 17 )
              {
                if ( v67[1] )
                  break;
              }
              if ( ++v66 >= v65 )
                goto LABEL_108;
            }
            --v67[1];
          }
          else
          {
LABEL_108:
            if ( !_bittestandreset((signed __int32 *)(v62 + 16), 0x11u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v62, 0x11uLL);
          }
        }
      }
      v36 = (*((_WORD *)v56 + 4))-- == 1;
      if ( v36 && !v56[11] )
      {
        NdisFreeRefCount(*((PVOID *)v56 + 2));
        *((_QWORD *)v56 + 2) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v56, v63);
    }
    v13 = v105;
  }
  if ( *(_BYTE *)v14 != 5 )
    goto LABEL_23;
  while ( 1 )
  {
    v107 = v14;
    v15 = 0;
    v16 = KeAcquireSpinLockRaiseToDpc(v14 + 39);
    v100 = v16;
    if ( !*((_BYTE *)v14 + 322) )
    {
      v17 = *((_WORD *)v14 + 160);
      if ( v17 < 0xFFEBu )
      {
        v18 = v14[41];
        *((_WORD *)v14 + 160) = v17 + 1;
        if ( v18 )
        {
          if ( *(_BYTE *)(v18 + 1) )
          {
            if ( *(_BYTE *)(v18 + 1) != 1 )
              goto LABEL_19;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v18 + 968), 1u);
          }
          else
          {
            v19 = 0LL;
            if ( !_bittestandset((signed __int32 *)(v18 + 16), 0xFu) )
              goto LABEL_19;
            v76 = *(_QWORD *)(v18 + 8);
            if ( v76 )
            {
              v77 = *(_BYTE *)(v18 + 3);
              v78 = 0;
              if ( v77 )
              {
                do
                {
                  v79 = (_BYTE *)(v76 + 2LL * v78);
                  if ( *v79 == 15 )
                  {
                    if ( v79[1] != 0xFF )
                    {
                      ++v79[1];
                      goto LABEL_153;
                    }
                  }
                  else if ( !v79[1] )
                  {
                    v19 = (_WORD *)(v76 + 2LL * v78);
                  }
                  ++v78;
                }
                while ( v78 < v77 );
                if ( !v19 )
                  goto LABEL_157;
                *v19 = 271;
                goto LABEL_19;
              }
            }
LABEL_157:
            if ( !*(_BYTE *)(v18 + 1) )
            {
              v80 = *(_BYTE *)(v18 + 3);
              if ( v80 == 0xFF )
              {
                ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v18);
                *(_BYTE *)(v18 + 1) = 2;
              }
              else
              {
                if ( (unsigned int)v80 + 2 > 0xFF )
                  v81 = -1;
                else
                  v81 = v80 + 2;
                ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v18, v81);
              }
            }
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v18);
          }
LABEL_153:
          v16 = v100;
        }
LABEL_19:
        v15 = 1;
      }
    }
    KeReleaseSpinLock(v14 + 39, v16);
    if ( v15 )
      break;
    v14 = (KSPIN_LOCK *)v14[52];
    v4 = 0LL;
    v107 = 0LL;
    if ( *(_BYTE *)v14 != 5 )
      goto LABEL_22;
  }
  v4 = v14;
LABEL_22:
  v13 = v105;
  v12 = (unsigned __int8 *)(a1 + 72);
LABEL_23:
  *((_QWORD *)a2 + 65) = 0LL;
  *((_DWORD *)a2 + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a2 + 12, v13);
LABEL_24:
  if ( *(_BYTE *)v14 == 17 )
    ndisOidTranslateBetweenOids(a2, v10, a1);
  if ( KeGetCurrentIrql() )
  {
    v25 = ndisQueueRequestWorkItem(v14, a1, *(unsigned __int8 *)v14);
    goto LABEL_50;
  }
  if ( v4 )
  {
    v20 = KeAcquireSpinLockRaiseToDpc(v4 + 39);
    ++*((_WORD *)v4 + 160);
    v21 = v20;
    v22 = v4[41];
    if ( v22 )
    {
      if ( *(_BYTE *)(v22 + 1) )
      {
        if ( *(_BYTE *)(v22 + 1) == 1 )
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 840), 1u);
      }
      else
      {
        v23 = 0LL;
        if ( _bittestandset((signed __int32 *)(v22 + 16), 0xDu) )
        {
          v68 = *(_QWORD *)(v22 + 8);
          if ( !v68 )
            goto LABEL_255;
          v69 = *(_BYTE *)(v22 + 3);
          v70 = 0;
          if ( !v69 )
            goto LABEL_255;
          do
          {
            v71 = (_BYTE *)(v68 + 2LL * v70);
            if ( *v71 == 13 )
            {
              if ( v71[1] != 0xFF )
              {
                ++v71[1];
                goto LABEL_31;
              }
            }
            else if ( !v71[1] )
            {
              v23 = (_WORD *)(v68 + 2LL * v70);
            }
            ++v70;
          }
          while ( v70 < v69 );
          if ( v23 )
          {
            *v23 = 269;
          }
          else
          {
LABEL_255:
            if ( !*(_BYTE *)(v22 + 1) )
            {
              v82 = *(_BYTE *)(v22 + 3);
              if ( v82 == 0xFF )
              {
                ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v22);
                *(_BYTE *)(v22 + 1) = 2;
              }
              else
              {
                if ( (unsigned int)v82 + 2 > 0xFF )
                  v83 = -1;
                else
                  v83 = v82 + 2;
                ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v22, v83);
              }
            }
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v22);
          }
        }
      }
    }
LABEL_31:
    KeReleaseSpinLock(v4 + 39, v21);
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 12);
    *((_QWORD *)a2 + 65) = KeGetCurrentThread();
    v102 = v24;
    *((_DWORD *)a2 + 464) = 2297719;
    KeAcquireSpinLockAtDpcLevel(v4 + 18);
    v4[19] = (KSPIN_LOCK)KeGetCurrentThread();
    v25 = -1073741823;
    *((_DWORD *)v4 + 40) = 2297720;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    if ( (*(_DWORD *)(v4[4] + 124) & 0x100) == 0 )
    {
      v26 = (unsigned __int8 *)(v4 + 21);
      v27 = (unsigned __int8 *)v4[21];
      if ( v27 == (unsigned __int8 *)(v4 + 21) )
      {
LABEL_33:
        v28 = (unsigned __int8 **)v4[22];
        v25 = 0;
        if ( *v28 != v26 )
          __fastfail(3u);
        *(_QWORD *)v12 = v26;
        *((_QWORD *)v12 + 1) = v28;
        *v28 = v12;
        v4[22] = (KSPIN_LOCK)v12;
      }
      else
      {
        while ( v27 != v12 )
        {
          v27 = *(unsigned __int8 **)v27;
          if ( v27 == v26 )
            goto LABEL_33;
        }
      }
    }
    v4[19] = 0LL;
    *((_DWORD *)v4 + 40) = 0;
    KeReleaseSpinLockFromDpcLevel(v4 + 18);
    *((_QWORD *)a2 + 65) = 0LL;
    *((_DWORD *)a2 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a2 + 12, v102);
    if ( !v25 )
    {
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v4, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        v92 = KeAcquireSpinLockRaiseToDpc(v4 + 18);
        v4[19] = (KSPIN_LOCK)KeGetCurrentThread();
        *((_DWORD *)v4 + 40) = 2297348;
        *((_BYTE *)v4 + 232) = 1;
        ndisQueueStackExpansionFallbackWorkItem(v4);
        v4[19] = 0LL;
        *((_DWORD *)v4 + 40) = 0;
        KeReleaseSpinLock(v4 + 18, v92);
      }
      v25 = 259;
    }
    v29 = KeAcquireSpinLockRaiseToDpc(v4 + 39);
    v30 = v4[41];
    v31 = v29;
    if ( v30 )
    {
      if ( *(_BYTE *)(v30 + 1) )
      {
        if ( *(_BYTE *)(v30 + 1) == 1 )
        {
          v93 = v30 + 840;
          v94 = *(_DWORD *)(v30 + 896);
          if ( v94 >> 17 < 0x3FFE && (unsigned __int16)v94 >> 1 == (v94 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v30 + 840));
            *(_DWORD *)(v93 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v94 & 0xFFFE) == 0 && (v94 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v30, 0xDuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v30 + 840), 0);
          }
        }
      }
      else
      {
        v32 = *(_QWORD *)(v30 + 8);
        if ( v32 && (v33 = *(_BYTE *)(v30 + 3), v34 = 0, v33) )
        {
          while ( 1 )
          {
            v35 = (_BYTE *)(v32 + 2LL * v34);
            if ( *v35 == 13 )
            {
              if ( v35[1] )
                break;
            }
            if ( ++v34 >= v33 )
              goto LABEL_45;
          }
          --v35[1];
        }
        else
        {
LABEL_45:
          if ( !_bittestandreset((signed __int32 *)(v30 + 16), 0xDu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v30, 0xDuLL);
        }
      }
    }
    v36 = (*((_WORD *)v4 + 160))-- == 1;
    if ( v36 && !*((_BYTE *)v4 + 323) )
    {
      NdisFreeRefCount((PVOID)v4[41]);
      v4[41] = 0LL;
    }
    KeReleaseSpinLock(v4 + 39, v31);
    goto LABEL_50;
  }
  v38 = 1;
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 562);
  if ( a2[4508] )
    goto LABEL_234;
  v40 = *((_QWORD *)a2 + 619);
  if ( v40 )
  {
    if ( *(_BYTE *)(v40 + 1) )
    {
      if ( *(_BYTE *)(v40 + 1) == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v40 + 4616), 1u);
    }
    else
    {
      v41 = 0LL;
      if ( _bittestandset((signed __int32 *)(v40 + 24), 8u) )
      {
        v72 = *(_QWORD *)(v40 + 8);
        if ( v72 && (v73 = *(_BYTE *)(v40 + 3), v74 = 0, v73) )
        {
          do
          {
            v75 = (_BYTE *)(v72 + 2LL * v74);
            if ( *v75 == 72 )
            {
              if ( v75[1] != 0xFF )
              {
                ++v75[1];
                goto LABEL_58;
              }
            }
            else if ( !v75[1] )
            {
              v41 = (_WORD *)(v72 + 2LL * v74);
            }
            ++v74;
          }
          while ( v74 < v73 );
          if ( !v41 )
            goto LABEL_225;
          *v41 = 328;
        }
        else
        {
LABEL_225:
          if ( !*(_BYTE *)(v40 + 1) )
          {
            v95 = *(_BYTE *)(v40 + 3);
            if ( v95 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v40);
              *(_BYTE *)(v40 + 1) = 2;
            }
            else
            {
              if ( (unsigned int)v95 + 2 <= 0xFF )
                v96 = v95 + 2;
              else
                v96 = -1;
              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v40, v96);
            }
          }
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v40);
        }
      }
    }
  }
LABEL_58:
  v36 = (*((_DWORD *)a2 + 1126))++ == -1;
  if ( v36 )
  {
    *((_DWORD *)a2 + 1126) = -1;
LABEL_234:
    v38 = 0;
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(12LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a2, *((unsigned int *)a2 + 1126));
  KeReleaseSpinLock((PKSPIN_LOCK)a2 + 562, v39);
  if ( v38 )
  {
    v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 12);
    v25 = -1073741823;
    *((_QWORD *)a2 + 65) = KeGetCurrentThread();
    v43 = v42;
    *((_DWORD *)a2 + 464) = 2297741;
    v44 = byte_1C00895D2;
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    {
      WPP_SF_qq(21LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a2, a1);
      v44 = byte_1C00895D2;
    }
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    if ( (*((_DWORD *)a2 + 31) & 0x100) == 0 )
    {
      v45 = a2 + 2200;
      v46 = (unsigned __int8 *)*((_QWORD *)a2 + 275);
      if ( v46 == a2 + 2200 )
      {
LABEL_66:
        v47 = (unsigned __int8 **)*((_QWORD *)a2 + 276);
        v25 = 0;
        if ( *v47 != v45 )
          __fastfail(3u);
        *(_QWORD *)v12 = v45;
        *((_QWORD *)v12 + 1) = v47;
        *v47 = v12;
        *((_QWORD *)a2 + 276) = v12;
      }
      else
      {
        while ( v46 != v12 )
        {
          v46 = *(unsigned __int8 **)v46;
          if ( v46 == v45 )
            goto LABEL_66;
        }
      }
    }
    if ( (unsigned __int8)v44 >= 4u )
      WPP_SF_qqd(22LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a2, a1, v25);
    *((_QWORD *)a2 + 65) = 0LL;
    *((_DWORD *)a2 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a2 + 12, v43);
    if ( !v25 )
    {
      ndisMDoOidRequest(a2);
      v25 = 259;
    }
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a2);
    v48 = 0;
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2 + 562);
    v50 = *((_QWORD *)a2 + 619);
    v51 = v49;
    if ( v50 )
    {
      if ( *(_BYTE *)(v50 + 1) )
      {
        if ( *(_BYTE *)(v50 + 1) == 1 )
        {
          v97 = v50 + 4616;
          v98 = *(_DWORD *)(v50 + 4672);
          if ( v98 >> 17 < 0x3FFE && (unsigned __int16)v98 >> 1 == (v98 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v50 + 4616));
            *(_DWORD *)(v97 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v98 & 0xFFFE) == 0 && (v98 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v50, 0x48uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v50 + 4616), 0);
          }
        }
      }
      else
      {
        v52 = *(_QWORD *)(v50 + 8);
        if ( v52 && (v53 = *(_BYTE *)(v50 + 3), v54 = 0, v53) )
        {
          while ( 1 )
          {
            v55 = (_BYTE *)(v52 + 2LL * v54);
            if ( *v55 == 72 )
            {
              if ( v55[1] )
                break;
            }
            if ( ++v54 >= v53 )
              goto LABEL_80;
          }
          --v55[1];
        }
        else
        {
LABEL_80:
          if ( !_bittestandreset((signed __int32 *)(v50 + 24), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v50, 0x48uLL);
        }
      }
    }
    v36 = (*((_DWORD *)a2 + 1126))-- == 1;
    if ( v36 )
      v48 = 1;
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a2, *((unsigned int *)a2 + 1126));
    KeReleaseSpinLock((PKSPIN_LOCK)a2 + 562, v51);
    if ( v48 )
    {
      v99 = (struct _KEVENT *)*((_QWORD *)a2 + 201);
      if ( v99 )
        KeSetEvent(v99, 0, 0);
    }
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a2);
    v4 = v107;
LABEL_50:
    if ( v25 != 259 && v4 )
      ndisDereferenceRef(v4 + 39);
  }
  else
  {
    v25 = -1073741823;
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(56LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, v25);
  return v25;
}
