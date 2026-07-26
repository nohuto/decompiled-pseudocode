/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C003E5F4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfDeleteStackEntries @ 0x1C003FBA0 (ndisIfDeleteStackEntries.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0060DC0 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095148 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0096420 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rbx
  int v3; // edi
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v4; // r14
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  int v7; // r15d
  PACCESS_TOKEN v8; // rax
  void *v9; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  int v12; // ebp
  KIRQL v13; // si
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *Flink; // r15
  unsigned int v18; // edx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // r12
  __int64 v21; // r13
  KIRQL v22; // di
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdi
  char v27; // si
  KIRQL v28; // bp
  unsigned __int16 v29; // ax
  struct _NDIS_REFCOUNT_BLOCK *v30; // rcx
  KIRQL v31; // di
  ULONG_PTR v32; // r8
  int v33; // ecx
  __int64 v34; // rdx
  unsigned __int8 v35; // r10
  _BYTE *v36; // r9
  bool v37; // zf
  struct _KEVENT *v38; // rcx
  char v39; // si
  KIRQL v40; // al
  ULONG_PTR v41; // r10
  KIRQL v42; // bp
  int v43; // ecx
  __int64 v44; // r9
  unsigned __int8 v45; // r8
  _BYTE *v46; // rdx
  __int64 v47; // rbx
  KIRQL v48; // al
  ULONG_PTR v49; // r8
  KIRQL v50; // si
  int v51; // ecx
  __int64 v52; // r10
  unsigned __int8 v53; // r9
  _BYTE *v54; // rdx
  ULONG_PTR v55; // r8
  int v56; // ecx
  __int64 v57; // r10
  unsigned __int8 v58; // r9
  _BYTE *v59; // rdx
  ULONG_PTR v60; // r8
  int v61; // ecx
  __int64 v62; // r10
  unsigned __int8 v63; // r9
  _BYTE *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rdi
  char v68; // si
  KIRQL v69; // bp
  unsigned __int16 v70; // cx
  KIRQL v71; // di
  ULONG_PTR v72; // r8
  __int64 v73; // rdx
  struct _KEVENT *v74; // rcx
  char v75; // si
  KIRQL v76; // al
  ULONG_PTR v77; // r10
  KIRQL v78; // bp
  int v79; // ecx
  __int64 v80; // r9
  unsigned __int8 v81; // r8
  _BYTE *v82; // rdx
  KIRQL v83; // al
  ULONG_PTR v84; // r8
  KIRQL v85; // di
  __int64 v86; // rcx
  unsigned __int8 v87; // r10
  unsigned __int8 v88; // cl
  _BYTE *v89; // r9
  unsigned __int8 v90; // r10
  unsigned __int8 v91; // dl
  _BYTE *v92; // r9
  NTSTATUS v93; // ebx
  KIRQL v94; // r8
  ULONG_PTR v95; // rbx
  unsigned int v96; // edx
  ULONG_PTR v97; // rbx
  unsigned int v98; // edx
  struct _KEVENT *v99; // rcx
  ULONG_PTR v100; // rbx
  unsigned int v101; // edx
  _LIST_ENTRY *v102; // rax
  struct _KEVENT *v103; // rcx
  ULONG_PTR v104; // rbx
  unsigned int v105; // edx
  ULONG_PTR v106; // rbx
  unsigned int v107; // edx
  struct _KEVENT *v108; // rcx
  ULONG_PTR v109; // rdi
  unsigned int v110; // edx
  ULONG_PTR v111; // rbx
  unsigned int v112; // edx
  int v113; // ebx
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  __int64 v116; // rdx
  _QWORD *v117; // rcx
  __int64 v118; // rdx
  _QWORD *v119; // rcx
  unsigned int v120; // ecx
  void *v121; // rcx
  void *v122; // rcx
  void *v123; // rcx
  struct _KEVENT *v124; // rcx
  ULONG_PTR v125; // rbx
  unsigned int v126; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v128; // rdx
  _LIST_ENTRY *v129; // rcx
  _LIST_ENTRY *v130; // rdx
  _LIST_ENTRY *v131; // rcx
  _LIST_ENTRY *v132; // rdx
  _LIST_ENTRY *v133; // rcx
  unsigned int v134; // ecx
  _LIST_ENTRY *v135; // rcx
  _LIST_ENTRY *v136; // rcx
  _LIST_ENTRY *v137; // rcx
  struct _KEVENT *v138; // rcx
  int v139; // [rsp+30h] [rbp-D8h]
  int v140; // [rsp+34h] [rbp-D4h]
  unsigned int v141; // [rsp+38h] [rbp-D0h]
  _LIST_ENTRY *v142; // [rsp+40h] [rbp-C8h]
  int v143; // [rsp+48h] [rbp-C0h]
  unsigned int v144; // [rsp+4Ch] [rbp-BCh]
  unsigned int Size; // [rsp+50h] [rbp-B8h]
  unsigned int Size_4; // [rsp+54h] [rbp-B4h]
  char *v147; // [rsp+58h] [rbp-B0h]
  __int64 v148; // [rsp+60h] [rbp-A8h]
  __int64 v149; // [rsp+68h] [rbp-A0h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+70h] [rbp-98h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v152[9]; // [rsp+80h] [rbp-88h] BYREF
  KIRQL v154; // [rsp+118h] [rbp+10h]
  BOOLEAN EffectiveOnly; // [rsp+120h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+128h] [rbp+20h] BYREF

  v1 = *((_DWORD *)a1 + 22);
  v2 = 0LL;
  v3 = 0;
  v141 = v1;
  v4 = a1;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(84LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x734E774EuLL, 0);
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    v7 = ThreadProperty[1];
    v139 = *ThreadProperty;
    v143 = v7;
    ObfDereferenceObject(ThreadProperty);
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    v7 = 0;
    v143 = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  else
  {
    v8 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v9 = v8;
    if ( v8 )
    {
      v93 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v9);
      if ( v93 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_9;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_9:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v12 = 0;
    v94 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v12 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v94);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  v139 = v12;
  v2 = 0LL;
LABEL_14:
  v154 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v13 = v154;
  if ( !v1 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Blink = i[9].Blink;
      if ( ((__int64)Blink[105].Flink & 2) == 0 && (v12 == 1 || v7 == -1 || v12 == LODWORD(Blink[1].Flink)) )
        ++v3;
    }
    *((_DWORD *)v4 + 22) = v3;
    if ( v3 )
      LODWORD(v2) = 261;
    goto LABEL_22;
  }
  Size = *((_DWORD *)v4 + 6);
  Size_4 = *((_DWORD *)v4 + 16);
  v144 = *((_DWORD *)v4 + 20);
  v147 = (char *)*((_QWORD *)v4 + 2);
  v149 = *((_QWORD *)v4 + 7);
  v148 = *((_QWORD *)v4 + 9);
  if ( v147 && *((_DWORD *)v4 + 6) != 8
    || *((_QWORD *)v4 + 5)
    || *((_DWORD *)v4 + 12)
    || *((_QWORD *)v4 + 7) && *((_DWORD *)v4 + 16) < 0x28Cu
    || *((_QWORD *)v4 + 9) && *((_DWORD *)v4 + 20) < 0x238u )
  {
    LODWORD(v2) = -1073741306;
    goto LABEL_22;
  }
  memset(v152, 0, 0x40uLL);
  Flink = ndisIfList.Flink;
  HIDWORD(v152[6]) = 0;
  v18 = 0;
  v142 = ndisIfList.Flink;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( 1 )
    {
      v19 = Flink[9].Blink;
      v20 = Flink - 77;
      if ( ((__int64)v19[105].Flink & 2) == 0 && (v12 == 1 || v143 == -1 || v12 == LODWORD(v19[1].Flink)) )
      {
        v140 = ++v18;
        if ( v18 <= v1 )
          break;
      }
      Flink = Flink->Flink;
      v142 = Flink;
LABEL_117:
      if ( Flink == &ndisIfList )
        goto LABEL_118;
    }
    ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v20[90].Flink, 6u);
    ++LODWORD(v20[81].Blink);
    v21 = 0LL;
    if ( !BYTE1(v20[87].Blink) || *((_QWORD *)v4 + 1) >= 2uLL )
    {
LABEL_79:
      KeReleaseSpinLock(&ndisIfListLock, v13);
      if ( *((_QWORD *)v4 + 2) )
      {
        memmove(v147, &v20[82], Size);
        v147 += Size;
      }
      if ( *((_QWORD *)v4 + 7) )
      {
        v152[5] = v149;
        LODWORD(v152[6]) = Size_4;
        LODWORD(v152[4]) = 1;
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v20,
          (struct _NDIS_IF_BLOCK *)v21,
          (struct _NM_REQUEST_GET_PARAMETER *)v152);
        v149 += Size_4;
      }
      if ( *((_QWORD *)v4 + 9) )
      {
        v152[5] = v148;
        LODWORD(v152[6]) = v144;
        LODWORD(v152[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v20,
          (struct _NDIS_IF_BLOCK *)v21,
          (struct _NM_REQUEST_GET_PARAMETER *)v152);
        v148 += v144;
      }
      v154 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v13 = v154;
      if ( !v21 )
        goto LABEL_107;
      if ( *(_BYTE *)(v21 + 1402) )
      {
        v47 = *(_QWORD *)(v21 + 1416) + 312LL;
        v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v47);
        v49 = *(_QWORD *)(v47 + 16);
        v50 = v48;
        if ( v49 )
        {
          v51 = *(unsigned __int8 *)(v49 + 1);
          if ( *(_BYTE *)(v49 + 1) )
          {
            if ( v51 == 1 )
            {
              v109 = v49 + 712;
              v110 = *(_DWORD *)(v49 + 768);
              if ( v110 >> 17 < 0x3FFE && (unsigned __int16)v110 >> 1 == (v110 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 712));
                *(_DWORD *)(v109 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v110 & 0xFFFE) == 0 && (v110 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v49, 0xBuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 712), 0);
              }
            }
          }
          else
          {
            v52 = *(_QWORD *)(v49 + 8);
            if ( v52 && (v53 = *(_BYTE *)(v49 + 3)) != 0 )
            {
              while ( 1 )
              {
                v54 = (_BYTE *)(v52 + 2LL * (unsigned __int8)v51);
                if ( *v54 == 11 )
                {
                  if ( v54[1] )
                    break;
                }
                LOBYTE(v51) = v51 + 1;
                if ( (unsigned __int8)v51 >= v53 )
                  goto LABEL_94;
              }
              --v54[1];
            }
            else
            {
LABEL_94:
              if ( !_bittestandreset((signed __int32 *)(v49 + 16), 0xBu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v49, 0xBuLL);
            }
          }
        }
        v37 = (*(_WORD *)(v47 + 8))-- == 1;
        if ( v37 && !*(_BYTE *)(v47 + 11) )
        {
          ndisFreeRefCount(*(PVOID *)(v47 + 16));
          *(_QWORD *)(v47 + 16) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v47, v50);
        v13 = v154;
      }
      v55 = *(_QWORD *)(v21 + 1440);
      if ( v55 )
      {
        v56 = *(unsigned __int8 *)(v55 + 1);
        if ( *(_BYTE *)(v55 + 1) )
        {
          if ( v56 == 1 )
          {
            v111 = v55 + 456;
            v112 = *(_DWORD *)(v55 + 512);
            if ( v112 >> 17 < 0x3FFE && (unsigned __int16)v112 >> 1 == (v112 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 456));
              *(_DWORD *)(v111 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v112 & 0xFFFE) == 0 && (v112 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v55, 7uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 456), 0);
            }
          }
        }
        else
        {
          v57 = *(_QWORD *)(v55 + 8);
          if ( v57 && (v58 = *(_BYTE *)(v55 + 3)) != 0 )
          {
            while ( 1 )
            {
              v59 = (_BYTE *)(v57 + 2LL * (unsigned __int8)v56);
              if ( *v59 == 7 )
              {
                if ( v59[1] )
                  break;
              }
              LOBYTE(v56) = v56 + 1;
              if ( (unsigned __int8)v56 >= v58 )
                goto LABEL_105;
            }
            --v59[1];
          }
          else
          {
LABEL_105:
            if ( !_bittestandreset((signed __int32 *)(v55 + 16), 7u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v55, 7uLL);
          }
        }
      }
      v37 = (*(_DWORD *)(v21 + 1304))-- == 1;
      if ( v37 )
      {
        v113 = *(_DWORD *)(v21 + 4);
        KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
        ndisIfDeleteStackEntries(v21);
        *(_QWORD *)(v21 + 1296) = 0LL;
        KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
        v114 = *(_QWORD *)(v21 + 1232);
        v115 = *(_QWORD **)(v21 + 1240);
        if ( *(_QWORD *)(v114 + 8) != v21 + 1232 || *v115 != v21 + 1232 )
          __fastfail(3u);
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        v116 = *(_QWORD *)(v21 + 1248);
        v117 = *(_QWORD **)(v21 + 1256);
        if ( *(_QWORD *)(v116 + 8) != v21 + 1248 || *v117 != v21 + 1248 )
          __fastfail(3u);
        *v117 = v116;
        *(_QWORD *)(v116 + 8) = v117;
        v118 = *(_QWORD *)(v21 + 1264);
        v119 = *(_QWORD **)(v21 + 1272);
        if ( *(_QWORD *)(v118 + 8) != v21 + 1264 || *v119 != v21 + 1264 )
          __fastfail(3u);
        *v119 = v118;
        *(_QWORD *)(v118 + 8) = v119;
        NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v21 + 1376));
        v120 = (unsigned int)(v113 - 1) >> 3;
        if ( IfUsedIfIndicesLength >= v120 + 1 )
          *((_BYTE *)IfUsedIfIndicesData + v120) &= ~(1 << ((v113 - 1) & 7));
        v121 = *(void **)(v21 + 1440);
        --ndisInterfaceCount;
        ndisFreeRefCount(v121);
        v122 = *(void **)(v21 + 1432);
        v2 = 0LL;
        *(_QWORD *)(v21 + 1440) = 0LL;
        if ( v122 )
        {
          ExFreePoolWithTag(v122, 0);
          *(_QWORD *)(v21 + 1432) = 0LL;
        }
        v123 = *(void **)(v21 + 1280);
        if ( v123 )
        {
          ExFreePoolWithTag(v123, 0);
          *(_QWORD *)(v21 + 1280) = 0LL;
          *(_QWORD *)(v21 + 1288) = 0LL;
        }
        v124 = *(struct _KEVENT **)(v21 + 1392);
        if ( v124 )
          KeSetEvent(v124, 0, 0);
        ExFreePoolWithTag((PVOID)v21, 0);
      }
      else
      {
LABEL_107:
        v2 = 0LL;
      }
      v60 = (ULONG_PTR)v20[90].Flink;
      Flink = Flink->Flink;
      v142 = Flink;
      if ( v60 )
      {
        v61 = *(unsigned __int8 *)(v60 + 1);
        if ( *(_BYTE *)(v60 + 1) )
        {
          if ( v61 == 1 )
          {
            v125 = v60 + 392;
            v126 = *(_DWORD *)(v60 + 448);
            if ( v126 >> 17 < 0x3FFE && (unsigned __int16)v126 >> 1 == (v126 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v60 + 392));
              *(_DWORD *)(v125 + 56) &= 0x10001u;
              v2 = 0LL;
            }
            else
            {
              if ( (v126 & 0xFFFE) == 0 && (v126 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v60, 6uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v60 + 392), 0);
              v2 = 0LL;
            }
          }
        }
        else
        {
          v62 = *(_QWORD *)(v60 + 8);
          if ( v62 && (v63 = *(_BYTE *)(v60 + 3)) != 0 )
          {
            while ( 1 )
            {
              v64 = (_BYTE *)(v62 + 2LL * (unsigned __int8)v61);
              if ( *v64 == 6 )
              {
                if ( v64[1] )
                  break;
              }
              LOBYTE(v61) = v61 + 1;
              if ( (unsigned __int8)v61 >= v63 )
                goto LABEL_114;
            }
            --v64[1];
          }
          else
          {
LABEL_114:
            if ( !_bittestandreset((signed __int32 *)(v60 + 16), 6u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v60, 6uLL);
          }
        }
      }
      v37 = LODWORD(v20[81].Blink)-- == 1;
      if ( v37 )
      {
        Flink_high = HIDWORD(v20->Flink);
        KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
        ndisIfDeleteStackEntries(v20);
        v20[81].Flink = 0LL;
        KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
        v128 = v20[77].Flink;
        v129 = v20[77].Blink;
        if ( v128->Blink != &v20[77] || v129->Flink != &v20[77] )
          __fastfail(3u);
        v129->Flink = v128;
        v128->Blink = v129;
        v130 = v20[78].Flink;
        v131 = v20[78].Blink;
        if ( v130->Blink != &v20[78] || v131->Flink != &v20[78] )
          __fastfail(3u);
        v131->Flink = v130;
        v130->Blink = v131;
        v132 = v20[79].Flink;
        v133 = v20[79].Blink;
        if ( v132->Blink != &v20[79] || v133->Flink != &v20[79] )
          __fastfail(3u);
        v133->Flink = v132;
        v132->Blink = v133;
        NETWORKBLOCK_DECREMENT_REF(v20[86].Flink);
        v134 = (unsigned int)(Flink_high - 1) >> 3;
        if ( IfUsedIfIndicesLength >= v134 + 1 )
          *((_BYTE *)IfUsedIfIndicesData + v134) &= ~(1 << ((Flink_high - 1) & 7));
        v135 = v20[90].Flink;
        --ndisInterfaceCount;
        ndisFreeRefCount(v135);
        v136 = v20[89].Blink;
        v2 = 0LL;
        v20[90].Flink = 0LL;
        if ( v136 )
        {
          ExFreePoolWithTag(v136, 0);
          v20[89].Blink = 0LL;
        }
        v137 = v20[80].Flink;
        if ( v137 )
        {
          ExFreePoolWithTag(v137, 0);
          v20[80].Flink = 0LL;
          v20[80].Blink = 0LL;
        }
        v138 = (struct _KEVENT *)v20[87].Flink;
        if ( v138 )
          KeSetEvent(v138, 0, 0);
        ExFreePoolWithTag(v20, 0);
      }
      v1 = v141;
      v18 = v140;
      goto LABEL_117;
    }
    v22 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    if ( BYTE3(v20[87].Blink) )
    {
      v2 = (__int64)v20[88].Blink;
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v20[90].Blink, 3u);
      ++HIDWORD(v20[87].Blink);
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v22);
    if ( v2 )
    {
      v65 = ndisReferenceTopMiniportByNameForNsi(v2, 0, v23, 0, 2u, 0x3Au);
      v66 = v65;
      if ( v65 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v65 + 96));
        v67 = *(_QWORD *)(v66 + 2056);
        *(_QWORD *)(v66 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v66 + 1856) = 2234889;
        if ( v67 )
        {
          while ( 1 )
          {
            v68 = 0;
            v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v67 + 312));
            if ( !*(_BYTE *)(v67 + 322) )
            {
              v70 = *(_WORD *)(v67 + 320);
              if ( v70 < 0xFFEBu )
              {
                *(_WORD *)(v67 + 320) = v70 + 1;
                ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v67 + 328), 0xBu);
                v68 = 1;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v67 + 312), v69);
            if ( v68 )
              break;
            v67 = *(_QWORD *)(v67 + 112);
            if ( !v67 )
              goto LABEL_164;
          }
          v21 = *(_QWORD *)(v67 + 832);
        }
        else
        {
LABEL_164:
          v21 = *(_QWORD *)(v66 + 4096);
        }
        *(_QWORD *)(v66 + 520) = 0LL;
        *(_DWORD *)(v66 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v66 + 96));
        v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v66 + 96));
        v72 = *(_QWORD *)(v66 + 4960);
        *(_QWORD *)(v66 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v66 + 1856) = 71717;
        if ( v72 )
        {
          if ( *(_BYTE *)(v72 + 1) )
          {
            if ( *(_BYTE *)(v72 + 1) == 1 )
            {
              v95 = v72 + 136;
              v96 = *(_DWORD *)(v72 + 192);
              if ( v96 >> 17 < 0x3FFE && (unsigned __int16)v96 >> 1 == (v96 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 136));
                *(_DWORD *)(v95 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v96 & 0xFFFE) == 0 && (v96 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v72, 2uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 136), 0);
              }
            }
          }
          else
          {
            v73 = *(_QWORD *)(v72 + 8);
            if ( v73 && (v87 = *(_BYTE *)(v72 + 3), v88 = 0, v87) )
            {
              while ( 1 )
              {
                v89 = (_BYTE *)(v73 + 2LL * v88);
                if ( *v89 == 2 )
                {
                  if ( v89[1] )
                    break;
                }
                if ( ++v88 >= v87 )
                  goto LABEL_134;
              }
              --v89[1];
            }
            else
            {
LABEL_134:
              if ( !_bittestandreset((signed __int32 *)(v72 + 16), 2u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v72, 2uLL);
            }
          }
        }
        v37 = (*(_DWORD *)(v66 + 3164))-- == 1;
        if ( v37 )
        {
          v74 = *(struct _KEVENT **)(v66 + 3176);
          if ( v74 )
            KeSetEvent(v74, 0, 0);
        }
        *(_QWORD *)(v66 + 520) = 0LL;
        *(_DWORD *)(v66 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 96), v71);
        if ( (unsigned __int8)byte_1C008371B >= 4u )
          WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v66);
        v75 = 0;
        v76 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v66 + 4496));
        v77 = *(_QWORD *)(v66 + 4952);
        v78 = v76;
        if ( v77 )
        {
          v79 = *(unsigned __int8 *)(v77 + 1);
          if ( *(_BYTE *)(v77 + 1) )
          {
            if ( v79 == 1 )
            {
              v97 = v77 + 3720;
              v98 = *(_DWORD *)(v77 + 3776);
              if ( v98 >> 17 < 0x3FFE && (unsigned __int16)v98 >> 1 == (v98 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v77 + 3720));
                *(_DWORD *)(v97 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v98 & 0xFFFE) == 0 && (v98 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v66 + 4952), 0x3AuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v77 + 3720), 0);
              }
            }
          }
          else
          {
            v80 = *(_QWORD *)(v77 + 8);
            if ( v80 && (v81 = *(_BYTE *)(v77 + 3)) != 0 )
            {
              while ( 1 )
              {
                v82 = (_BYTE *)(v80 + 2LL * (unsigned __int8)v79);
                if ( *v82 == 58 )
                {
                  if ( v82[1] )
                    break;
                }
                LOBYTE(v79) = v79 + 1;
                if ( (unsigned __int8)v79 >= v81 )
                  goto LABEL_146;
              }
              --v82[1];
            }
            else
            {
LABEL_146:
              if ( !_bittestandreset((signed __int32 *)(v77 + 20), 0x1Au) )
                ndisBugCheckEx(0x1EuLL, 0LL, v77, 0x3AuLL);
            }
          }
        }
        v37 = (*(_DWORD *)(v66 + 4504))-- == 1;
        if ( v37 )
          v75 = 1;
        if ( (unsigned __int8)byte_1C008371B >= 4u )
          WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v66, *(unsigned int *)(v66 + 4504));
        KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 4496), v78);
        if ( v75 )
        {
          v99 = *(struct _KEVENT **)(v66 + 1608);
          if ( v99 )
            KeSetEvent(v99, 0, 0);
        }
        if ( (unsigned __int8)byte_1C008371B >= 4u )
          WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v66);
      }
      else
      {
        v21 = 0LL;
      }
      v83 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      v84 = (ULONG_PTR)v20[90].Blink;
      v85 = v83;
      if ( v84 )
      {
        if ( *(_BYTE *)(v84 + 1) )
        {
          if ( *(_BYTE *)(v84 + 1) == 1 )
          {
            v100 = v84 + 200;
            v101 = *(_DWORD *)(v84 + 256);
            if ( v101 >> 17 < 0x3FFE && (unsigned __int16)v101 >> 1 == (v101 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v84 + 200));
              *(_DWORD *)(v100 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v101 & 0xFFFE) == 0 && (v101 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v84, 3uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v84 + 200), 0);
            }
          }
        }
        else
        {
          v86 = *(_QWORD *)(v84 + 8);
          if ( v86 && (v90 = *(_BYTE *)(v84 + 3), v91 = 0, v90) )
          {
            while ( 1 )
            {
              v92 = (_BYTE *)(v86 + 2LL * v91);
              if ( *v92 == 3 )
              {
                if ( v92[1] )
                  break;
              }
              if ( ++v91 >= v90 )
                goto LABEL_157;
            }
            --v92[1];
          }
          else
          {
LABEL_157:
            if ( !_bittestandreset((signed __int32 *)(v84 + 16), 3u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v84, 3uLL);
          }
        }
      }
      v37 = HIDWORD(v20[87].Blink)-- == 1;
      if ( v37 )
      {
        v102 = v20[88].Blink;
        if ( v102 )
        {
          v103 = (struct _KEVENT *)v102[256].Blink;
          if ( v103 )
            KeSetEvent(v103, 0, 0);
        }
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v85);
    }
    else
    {
      if ( !BYTE2(v20[87].Blink) )
        goto LABEL_79;
      v24 = ndisReferenceTopMiniportByNameForNsi((__int64)v20[88].Blink[2].Flink, 0, v23, 0, 2u, 0x3Au);
      v25 = v24;
      if ( !v24 )
      {
        v21 = 0LL;
LABEL_78:
        v4 = a1;
        goto LABEL_79;
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v24 + 96));
      v26 = *(_QWORD *)(v25 + 2056);
      *(_QWORD *)(v25 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v25 + 1856) = 2234889;
      if ( v26 )
      {
        while ( 1 )
        {
          v27 = 0;
          v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 312));
          if ( !*(_BYTE *)(v26 + 322) )
          {
            v29 = *(_WORD *)(v26 + 320);
            if ( v29 < 0xFFEBu )
            {
              v30 = *(struct _NDIS_REFCOUNT_BLOCK **)(v26 + 328);
              *(_WORD *)(v26 + 320) = v29 + 1;
              ndisReferenceWithTag(v30, 0xBu);
              v27 = 1;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 312), v28);
          if ( v27 )
            break;
          v26 = *(_QWORD *)(v26 + 112);
          if ( !v26 )
            goto LABEL_222;
        }
        v21 = *(_QWORD *)(v26 + 832);
      }
      else
      {
LABEL_222:
        v21 = *(_QWORD *)(v25 + 4096);
      }
      *(_QWORD *)(v25 + 520) = 0LL;
      *(_DWORD *)(v25 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v25 + 96));
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 96));
      v32 = *(_QWORD *)(v25 + 4960);
      *(_QWORD *)(v25 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v25 + 1856) = 71717;
      if ( v32 )
      {
        v33 = *(unsigned __int8 *)(v32 + 1);
        if ( *(_BYTE *)(v32 + 1) )
        {
          if ( v33 == 1 )
          {
            v104 = v32 + 136;
            v105 = *(_DWORD *)(v32 + 192);
            if ( v105 >> 17 < 0x3FFE && (unsigned __int16)v105 >> 1 == (v105 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v32 + 136));
              *(_DWORD *)(v104 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v105 & 0xFFFE) == 0 && (v105 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v32, 2uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 136), 0);
            }
          }
        }
        else
        {
          v34 = *(_QWORD *)(v32 + 8);
          if ( v34 && (v35 = *(_BYTE *)(v32 + 3)) != 0 )
          {
            while ( 1 )
            {
              v36 = (_BYTE *)(v34 + 2LL * (unsigned __int8)v33);
              if ( *v36 == 2 )
              {
                if ( v36[1] )
                  break;
              }
              LOBYTE(v33) = v33 + 1;
              if ( (unsigned __int8)v33 >= v35 )
                goto LABEL_55;
            }
            --v36[1];
          }
          else
          {
LABEL_55:
            if ( !_bittestandreset((signed __int32 *)(v32 + 16), 2u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v32, 2uLL);
          }
        }
      }
      v37 = (*(_DWORD *)(v25 + 3164))-- == 1;
      if ( v37 )
      {
        v38 = *(struct _KEVENT **)(v25 + 3176);
        if ( v38 )
          KeSetEvent(v38, 0, 0);
      }
      *(_QWORD *)(v25 + 520) = 0LL;
      *(_DWORD *)(v25 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v25 + 96), v31);
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v25);
      v39 = 0;
      v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 4496));
      v41 = *(_QWORD *)(v25 + 4952);
      v42 = v40;
      if ( v41 )
      {
        v43 = *(unsigned __int8 *)(v41 + 1);
        if ( *(_BYTE *)(v41 + 1) )
        {
          if ( v43 == 1 )
          {
            v106 = v41 + 3720;
            v107 = *(_DWORD *)(v41 + 3776);
            if ( v107 >> 17 < 0x3FFE && (unsigned __int16)v107 >> 1 == (v107 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v41 + 3720));
              *(_DWORD *)(v106 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v107 & 0xFFFE) == 0 && (v107 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v25 + 4952), 0x3AuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v41 + 3720), 0);
            }
          }
        }
        else
        {
          v44 = *(_QWORD *)(v41 + 8);
          if ( v44 && (v45 = *(_BYTE *)(v41 + 3)) != 0 )
          {
            while ( 1 )
            {
              v46 = (_BYTE *)(v44 + 2LL * (unsigned __int8)v43);
              if ( *v46 == 58 )
              {
                if ( v46[1] )
                  break;
              }
              LOBYTE(v43) = v43 + 1;
              if ( (unsigned __int8)v43 >= v45 )
                goto LABEL_67;
            }
            --v46[1];
          }
          else
          {
LABEL_67:
            if ( !_bittestandreset((signed __int32 *)(v41 + 20), 0x1Au) )
              ndisBugCheckEx(0x1EuLL, 0LL, v41, 0x3AuLL);
          }
        }
      }
      v37 = (*(_DWORD *)(v25 + 4504))-- == 1;
      if ( v37 )
        v39 = 1;
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v25, *(unsigned int *)(v25 + 4504));
      KeReleaseSpinLock((PKSPIN_LOCK)(v25 + 4496), v42);
      if ( v39 )
      {
        v108 = *(struct _KEVENT **)(v25 + 1608);
        if ( v108 )
          KeSetEvent(v108, 0, 0);
      }
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v25);
    }
    if ( v21 )
    {
      ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v21 + 1440), 7u);
      ++*(_DWORD *)(v21 + 1304);
    }
    v13 = v154;
    Flink = v142;
    v12 = v139;
    goto LABEL_78;
  }
LABEL_118:
  *((_DWORD *)v4 + 22) = v18;
  if ( v18 > v1 )
    LODWORD(v2) = 261;
LABEL_22:
  KeReleaseSpinLock(&ndisIfListLock, v13);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(85LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v4, (unsigned int)v2);
  return (unsigned int)v2;
}
