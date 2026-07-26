/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfDeleteStackEntries @ 0x1C0012370 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0012AA4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00650DC (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099200 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099450 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099A90 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099D60 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C009A5E0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  _LIST_ENTRY *v1; // rsi
  __int64 v2; // r13
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v3; // rdi
  _LIST_ENTRY **v4; // rbx
  struct _KTHREAD *CurrentThread; // r15
  _LIST_ENTRY *v6; // rbx
  unsigned int *ThreadProperty; // rax
  __int64 v8; // rcx
  unsigned int v9; // r12d
  PACCESS_TOKEN v10; // rax
  void *v11; // r14
  NTSTATUS v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // r14d
  KIRQL v15; // al
  _LIST_ENTRY *v16; // rcx
  KIRQL v17; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v19; // edx
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // r11
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v25; // rbx
  _WORD *v26; // rcx
  _LIST_ENTRY *v27; // rbx
  KIRQL v28; // di
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  char v33; // r15
  KIRQL v34; // r12
  unsigned __int16 v35; // cx
  __int64 v36; // r15
  _WORD *v37; // rcx
  KIRQL v38; // r15
  ULONG_PTR v39; // r8
  __int64 v40; // r9
  bool v41; // zf
  struct _KEVENT *v42; // rcx
  char v43; // r15
  KIRQL v44; // al
  ULONG_PTR v45; // r8
  KIRQL v46; // r12
  int v47; // ecx
  __int64 v48; // r10
  unsigned __int8 v49; // r9
  _BYTE *v50; // rdx
  __int64 v51; // rbx
  _WORD *v52; // rcx
  int v53; // r12d
  __int64 v54; // rax
  KIRQL v55; // r15
  __int64 v56; // rbx
  KIRQL v57; // al
  ULONG_PTR v58; // r8
  KIRQL v59; // di
  int v60; // ecx
  __int64 v61; // r10
  unsigned __int8 v62; // r9
  _BYTE *v63; // rdx
  ULONG_PTR v64; // r8
  int v65; // ecx
  __int64 v66; // r9
  unsigned __int8 v67; // dl
  _BYTE *v68; // r10
  ULONG_PTR v69; // r8
  int v70; // ecx
  __int64 v71; // rdx
  unsigned __int8 v72; // r9
  _BYTE *v73; // r10
  __int64 v75; // rax
  __int64 v76; // rbx
  KSPIN_LOCK *v77; // rdi
  __int64 v78; // r15
  char v79; // r14
  KIRQL v80; // r12
  unsigned __int16 v81; // cx
  __int64 v82; // r14
  _WORD *v83; // rcx
  char v84; // r15
  KIRQL v85; // r14
  ULONG_PTR v86; // r8
  __int64 v87; // rdx
  struct _KEVENT *v88; // rcx
  KIRQL v89; // al
  ULONG_PTR v90; // r8
  KIRQL v91; // r12
  int v92; // ecx
  __int64 v93; // r10
  unsigned __int8 v94; // r9
  _BYTE *v95; // rdx
  KIRQL v96; // al
  ULONG_PTR v97; // r8
  KIRQL v98; // bl
  __int64 v99; // rcx
  _LIST_ENTRY *v100; // r14
  _WORD *v101; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _LIST_ENTRY *v103; // rax
  _LIST_ENTRY *v104; // rcx
  unsigned __int8 v105; // dl
  unsigned __int8 v106; // cl
  _BYTE *v107; // r10
  _LIST_ENTRY *v108; // rcx
  unsigned __int8 v109; // r10
  unsigned __int8 v110; // cl
  _BYTE *v111; // r9
  unsigned __int8 v112; // r9
  unsigned __int8 v113; // dl
  _BYTE *v114; // r10
  __int64 v115; // r9
  unsigned __int8 v116; // r10
  unsigned __int8 v117; // r8
  _BYTE *v118; // rdx
  __int64 v119; // r9
  unsigned __int8 v120; // r10
  unsigned __int8 v121; // r8
  _BYTE *v122; // rdx
  _LIST_ENTRY *v123; // r9
  unsigned __int8 v124; // r10
  unsigned __int8 v125; // r8
  _BYTE *v126; // rdx
  __int64 v127; // r10
  unsigned __int8 v128; // r9
  unsigned __int8 v129; // r8
  _BYTE *v130; // rdx
  unsigned int ThreadSessionId; // eax
  KIRQL v132; // dl
  unsigned __int64 v133; // rdx
  unsigned __int64 v134; // r8
  unsigned __int8 v135; // dl
  unsigned __int8 v136; // dl
  _LIST_ENTRY *v137; // r10
  unsigned __int8 v138; // r9
  unsigned __int8 v139; // r8
  _BYTE *v140; // rdx
  unsigned __int8 v141; // dl
  unsigned __int8 v142; // dl
  unsigned __int8 v143; // dl
  unsigned __int8 v144; // dl
  ULONG_PTR v145; // rdi
  unsigned int v146; // edx
  ULONG_PTR v147; // rdi
  unsigned int v148; // edx
  struct _KEVENT *v149; // rcx
  ULONG_PTR v150; // rdi
  unsigned int v151; // edx
  _LIST_ENTRY *v152; // rax
  struct _KEVENT *v153; // rcx
  unsigned __int8 v154; // dl
  unsigned __int8 v155; // dl
  ULONG_PTR v156; // rdi
  unsigned int v157; // edx
  ULONG_PTR v158; // r14
  unsigned int v159; // edx
  struct _KEVENT *v160; // rcx
  unsigned __int8 v161; // dl
  unsigned __int8 v162; // dl
  ULONG_PTR v163; // r14
  unsigned int v164; // edx
  ULONG_PTR v165; // rbx
  unsigned int v166; // edx
  int v167; // ebx
  __int64 v168; // rdx
  _QWORD *v169; // rcx
  __int64 v170; // rdx
  _QWORD *v171; // rcx
  __int64 v172; // rdx
  _QWORD *v173; // rcx
  unsigned int v174; // ecx
  void *v175; // rcx
  void *v176; // rcx
  void *v177; // rcx
  struct _KEVENT *v178; // rcx
  ULONG_PTR v179; // rbx
  unsigned int v180; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v182; // rdx
  _LIST_ENTRY *v183; // rcx
  _LIST_ENTRY *v184; // rdx
  _LIST_ENTRY *v185; // rcx
  _LIST_ENTRY *v186; // rdx
  _LIST_ENTRY *v187; // rcx
  unsigned int v188; // ecx
  _LIST_ENTRY *v189; // rcx
  _LIST_ENTRY *v190; // rcx
  _LIST_ENTRY *v191; // rcx
  struct _KEVENT *v192; // rcx
  KIRQL v193; // [rsp+30h] [rbp-59h]
  BOOLEAN EffectiveOnly; // [rsp+38h] [rbp-51h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+39h] [rbp-50h] BYREF
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v196; // [rsp+40h] [rbp-49h]
  _QWORD v197[8]; // [rsp+50h] [rbp-39h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+90h] [rbp+7h] BYREF
  PVOID TokenInformation; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v200; // [rsp+A0h] [rbp+17h]
  __int128 v201; // [rsp+A8h] [rbp+1Fh]

  v1 = 0LL;
  v196 = a1;
  v2 = 0LL;
  v3 = a1;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(80LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  memset(v197, 0, sizeof(v197));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v53 = -1073741808;
    goto LABEL_79;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)v3 + 2);
  CurrentThread = KeGetCurrentThread();
  v200 = 0LL;
  v201 = 0uLL;
  v6 = *v4;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v9 = ThreadProperty[1];
    v14 = *ThreadProperty;
    LODWORD(v200) = v9;
    ObfDereferenceObject(ThreadProperty);
    if ( v14 )
      goto LABEL_15;
  }
  else
  {
    v9 = 0;
    LODWORD(v200) = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    goto LABEL_161;
  }
  v10 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v11 = v10;
  if ( !v10
    || (v12 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v11),
        v12 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_161:
    v13 = CurrentProcessSessionId;
    goto LABEL_10;
  }
  v13 = (unsigned int)TokenInformation;
LABEL_10:
  if ( v13 == -1 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    v9 = v200;
    v13 = ThreadSessionId;
  }
  if ( v13 < ndisCmSessionCount )
  {
    v14 = 0;
    v132 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( v13 < ndisCmSessionCount )
      v14 = *((_DWORD *)ndisCmSession + 6 * v13);
    KeReleaseSpinLock(&ndisCmSessionLock, v132);
    if ( !v14 )
      v14 = 1;
  }
  else
  {
    v14 = 1;
  }
  v3 = v196;
LABEL_15:
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v19 = (unsigned int)Flink[1].Flink;
      if ( v19 == v14 )
        break;
      if ( v19 <= v14 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_18;
    }
    v16 = Flink;
  }
LABEL_18:
  v201 = *(__int128 *)((char *)&v16[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = *((_DWORD *)v3 + 8);
  v22 = v20;
  v193 = v20;
  if ( v21 == 2 )
    goto LABEL_19;
  if ( v21 )
  {
    if ( v21 != 1 )
    {
      v53 = -1073741811;
      goto LABEL_74;
    }
    v6 = 0LL;
    while ( 1 )
    {
LABEL_19:
      v1 = 0LL;
      v23 = ndisIfList.Flink;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( v23[5].Flink <= v6 )
        {
          v23 = v23->Flink;
          if ( v23 == &ndisIfList )
            goto LABEL_24;
        }
        v1 = v23 - 77;
      }
LABEL_24:
      if ( !v1 )
        break;
      Blink = v1[86].Blink;
      v6 = v1[82].Flink;
      if ( v14 == LODWORD(Blink[1].Flink) )
        goto LABEL_26;
      if ( v9 == -1 )
      {
        v134 = v201 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v201 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
          v134 = *((_QWORD *)&v201 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
        if ( !v134 )
          goto LABEL_26;
      }
      if ( ((__int64)Blink[105].Flink & 2) == 0 && v14 == 1 )
        goto LABEL_26;
    }
LABEL_187:
    v53 = 0;
    goto LABEL_74;
  }
  v103 = ndisIfList.Flink;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( 1 )
    {
      v104 = v103[5].Flink;
      if ( v104 == v6 )
        break;
      if ( v104 <= v6 )
      {
        v103 = v103->Flink;
        if ( v103 != &ndisIfList )
          continue;
      }
      goto LABEL_173;
    }
    v1 = v103 - 77;
  }
LABEL_173:
  if ( !v1 )
    goto LABEL_187;
  v108 = v1[86].Blink;
  if ( v14 == LODWORD(v108[1].Flink) )
    goto LABEL_26;
  v133 = v201 - *(unsigned __int64 *)((char *)&v108[105].Flink + 4);
  if ( (_LIST_ENTRY *)v201 == *(_LIST_ENTRY **)((char *)&v108[105].Flink + 4) )
    v133 = *((_QWORD *)&v201 + 1) - *(unsigned __int64 *)((char *)&v108[105].Blink + 4);
  if ( !v133 || ((__int64)v108[105].Flink & 2) == 0 && v14 == 1 )
  {
LABEL_26:
    v25 = v1[90].Flink;
    if ( !v25 )
      goto LABEL_29;
    if ( BYTE1(v25->Flink) )
    {
      if ( BYTE1(v25->Flink) != 1 )
        goto LABEL_29;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v25[12].Blink, 1u);
    }
    else
    {
      v26 = 0LL;
      if ( !_bittestandset((signed __int32 *)&v25[1], 3u) )
        goto LABEL_29;
      v123 = v25->Blink;
      if ( v123 )
      {
        v124 = BYTE3(v25->Flink);
        v125 = 0;
        if ( v124 )
        {
          do
          {
            v126 = (char *)v123 + 2 * v125;
            if ( *v126 == 3 )
            {
              if ( v126[1] != 0xFF )
              {
                ++v126[1];
                goto LABEL_29;
              }
            }
            else if ( !v126[1] )
            {
              v26 = (_WORD *)v123 + v125;
            }
            ++v125;
          }
          while ( v125 < v124 );
          if ( !v26 )
            goto LABEL_261;
          *v26 = 259;
LABEL_29:
          ++LODWORD(v1[81].Blink);
          if ( !BYTE1(v1[87].Blink) || *((_QWORD *)v3 + 1) >= 2uLL )
            goto LABEL_73;
          v27 = 0LL;
          v28 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          if ( BYTE3(v1[87].Blink) )
          {
            v100 = v1[90].Blink;
            v27 = v1[88].Blink;
            if ( v100 )
            {
              if ( BYTE1(v100->Flink) )
              {
                if ( BYTE1(v100->Flink) == 1 )
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v100[12].Blink, 1u);
              }
              else
              {
                v101 = 0LL;
                if ( _bittestandset((signed __int32 *)&v100[1], 3u) )
                {
                  v137 = v100->Blink;
                  if ( !v137 )
                    goto LABEL_450;
                  v138 = BYTE3(v100->Flink);
                  v139 = 0;
                  if ( !v138 )
                    goto LABEL_450;
                  do
                  {
                    v140 = (char *)v137 + 2 * v139;
                    if ( *v140 == 3 )
                    {
                      if ( v140[1] != 0xFF )
                      {
                        ++v140[1];
                        goto LABEL_157;
                      }
                    }
                    else if ( !v140[1] )
                    {
                      v101 = (_WORD *)v137 + v139;
                    }
                    ++v139;
                  }
                  while ( v139 < v138 );
                  if ( v101 )
                  {
                    *v101 = 259;
                  }
                  else
                  {
LABEL_450:
                    if ( !BYTE1(v100->Flink) )
                    {
                      v141 = BYTE3(v100->Flink);
                      if ( v141 == 0xFF )
                      {
                        ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v100);
                        BYTE1(v100->Flink) = 2;
                      }
                      else
                      {
                        if ( (unsigned int)v141 + 2 <= 0xFF )
                          v142 = v141 + 2;
                        else
                          v142 = -1;
                        ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v100, v142);
                      }
                    }
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v100);
                  }
                }
              }
            }
LABEL_157:
            ++HIDWORD(v1[87].Blink);
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v28);
          if ( v27 )
          {
            v75 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v27, 0, v29, 0, 2, 60);
            v76 = v75;
            if ( v75 )
            {
              v77 = (KSPIN_LOCK *)(v75 + 96);
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v75 + 96));
              v78 = *(_QWORD *)(v76 + 2056);
              *(_QWORD *)(v76 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v76 + 1856) = 2234915;
              if ( v78 )
              {
                do
                {
                  v79 = 0;
                  v80 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v78 + 312));
                  if ( !*(_BYTE *)(v78 + 322) )
                  {
                    v81 = *(_WORD *)(v78 + 320);
                    if ( v81 < 0xFFEBu )
                    {
                      v82 = *(_QWORD *)(v78 + 328);
                      *(_WORD *)(v78 + 320) = v81 + 1;
                      if ( v82 )
                      {
                        if ( *(_BYTE *)(v82 + 1) )
                        {
                          if ( *(_BYTE *)(v82 + 1) == 1 )
                            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v82 + 712), 1u);
                        }
                        else
                        {
                          v83 = 0LL;
                          if ( _bittestandset((signed __int32 *)(v82 + 16), 0xBu) )
                          {
                            v115 = *(_QWORD *)(v82 + 8);
                            if ( !v115 )
                              goto LABEL_451;
                            v116 = *(_BYTE *)(v82 + 3);
                            v117 = 0;
                            if ( !v116 )
                              goto LABEL_451;
                            do
                            {
                              v118 = (_BYTE *)(v115 + 2LL * v117);
                              if ( *v118 == 11 )
                              {
                                if ( v118[1] != 0xFF )
                                {
                                  ++v118[1];
                                  goto LABEL_122;
                                }
                              }
                              else if ( !v118[1] )
                              {
                                v83 = (_WORD *)(v115 + 2LL * v117);
                              }
                              ++v117;
                            }
                            while ( v117 < v116 );
                            if ( v83 )
                            {
                              *v83 = 267;
                            }
                            else
                            {
LABEL_451:
                              if ( !*(_BYTE *)(v82 + 1) )
                              {
                                v143 = *(_BYTE *)(v82 + 3);
                                if ( v143 == 0xFF )
                                {
                                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v82);
                                  *(_BYTE *)(v82 + 1) = 2;
                                }
                                else
                                {
                                  if ( (unsigned int)v143 + 2 <= 0xFF )
                                    v144 = v143 + 2;
                                  else
                                    v144 = -1;
                                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v82, v144);
                                }
                              }
                              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v82);
                            }
                          }
                        }
                      }
LABEL_122:
                      v79 = 1;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v78 + 312), v80);
                  if ( v79 )
                  {
                    v2 = *(_QWORD *)(v78 + 832);
                    v77 = (KSPIN_LOCK *)(v76 + 96);
                    goto LABEL_125;
                  }
                  v78 = *(_QWORD *)(v78 + 112);
                }
                while ( v78 );
                v77 = (KSPIN_LOCK *)(v76 + 96);
              }
              v2 = *(_QWORD *)(v76 + 4096);
LABEL_125:
              v84 = 0;
              *(_QWORD *)(v76 + 520) = 0LL;
              *(_DWORD *)(v76 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel(v77);
              v85 = KeAcquireSpinLockRaiseToDpc(v77);
              v86 = *(_QWORD *)(v76 + 4960);
              *(_QWORD *)(v76 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v76 + 1856) = 71776;
              if ( v86 )
              {
                if ( *(_BYTE *)(v86 + 1) )
                {
                  if ( *(_BYTE *)(v86 + 1) == 1 )
                  {
                    v145 = v86 + 136;
                    v146 = *(_DWORD *)(v86 + 192);
                    if ( v146 >> 17 < 0x3FFE && (unsigned __int16)v146 >> 1 == (v146 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v86 + 136));
                      *(_DWORD *)(v145 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v146 & 0xFFFE) == 0 && (v146 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v86, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v86 + 136), 0);
                    }
                    v77 = (KSPIN_LOCK *)(v76 + 96);
                  }
                }
                else
                {
                  v87 = *(_QWORD *)(v86 + 8);
                  if ( v87 && (v109 = *(_BYTE *)(v86 + 3), v110 = 0, v109) )
                  {
                    while ( 1 )
                    {
                      v111 = (_BYTE *)(v87 + 2LL * v110);
                      if ( *v111 == 2 )
                      {
                        if ( v111[1] )
                          break;
                      }
                      if ( ++v110 >= v109 )
                        goto LABEL_128;
                    }
                    --v111[1];
                  }
                  else
                  {
LABEL_128:
                    if ( !_bittestandreset((signed __int32 *)(v86 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v86, 2uLL);
                  }
                }
              }
              v41 = (*(_DWORD *)(v76 + 3164))-- == 1;
              if ( v41 )
              {
                v88 = *(struct _KEVENT **)(v76 + 3176);
                if ( v88 )
                  KeSetEvent(v88, 0, 0);
              }
              *(_QWORD *)(v76 + 520) = 0LL;
              *(_DWORD *)(v76 + 1856) = 0;
              KeReleaseSpinLock(v77, v85);
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v76);
              v89 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v76 + 4496));
              v90 = *(_QWORD *)(v76 + 4952);
              v91 = v89;
              if ( v90 )
              {
                v92 = *(unsigned __int8 *)(v90 + 1);
                if ( *(_BYTE *)(v90 + 1) )
                {
                  if ( v92 == 1 )
                  {
                    v147 = v90 + 3848;
                    v148 = *(_DWORD *)(v90 + 3904);
                    if ( v148 >> 17 < 0x3FFE && (unsigned __int16)v148 >> 1 == (v148 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v90 + 3848));
                      *(_DWORD *)(v147 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v148 & 0xFFFE) == 0 && (v148 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v90, 0x3CuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v90 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v93 = *(_QWORD *)(v90 + 8);
                  if ( v93 && (v94 = *(_BYTE *)(v90 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v95 = (_BYTE *)(v93 + 2LL * (unsigned __int8)v92);
                      if ( *v95 == 60 )
                      {
                        if ( v95[1] )
                          break;
                      }
                      LOBYTE(v92) = v92 + 1;
                      if ( (unsigned __int8)v92 >= v94 )
                        goto LABEL_140;
                    }
                    --v95[1];
                  }
                  else
                  {
LABEL_140:
                    if ( !_bittestandreset((signed __int32 *)(v90 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v90, 0x3CuLL);
                  }
                }
              }
              v41 = (*(_DWORD *)(v76 + 4504))-- == 1;
              if ( v41 )
                v84 = 1;
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v76, *(unsigned int *)(v76 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(v76 + 4496), v91);
              if ( v84 )
              {
                v149 = *(struct _KEVENT **)(v76 + 1608);
                if ( v149 )
                  KeSetEvent(v149, 0, 0);
              }
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v76);
            }
            v96 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
            v97 = (ULONG_PTR)v1[90].Blink;
            v98 = v96;
            if ( v97 )
            {
              if ( *(_BYTE *)(v97 + 1) )
              {
                if ( *(_BYTE *)(v97 + 1) == 1 )
                {
                  v150 = v97 + 200;
                  v151 = *(_DWORD *)(v97 + 256);
                  if ( v151 >> 17 < 0x3FFE && (unsigned __int16)v151 >> 1 == (v151 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v97 + 200));
                    *(_DWORD *)(v150 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v151 & 0xFFFE) == 0 && (v151 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v97, 3uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v97 + 200), 0);
                  }
                }
              }
              else
              {
                v99 = *(_QWORD *)(v97 + 8);
                if ( v99 && (v112 = *(_BYTE *)(v97 + 3), v113 = 0, v112) )
                {
                  while ( 1 )
                  {
                    v114 = (_BYTE *)(v99 + 2LL * v113);
                    if ( *v114 == 3 )
                    {
                      if ( v114[1] )
                        break;
                    }
                    if ( ++v113 >= v112 )
                      goto LABEL_151;
                  }
                  --v114[1];
                }
                else
                {
LABEL_151:
                  if ( !_bittestandreset((signed __int32 *)(v97 + 16), 3u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v97, 3uLL);
                }
              }
            }
            v41 = HIDWORD(v1[87].Blink)-- == 1;
            if ( v41 )
            {
              v152 = v1[88].Blink;
              if ( v152 )
              {
                v153 = (struct _KEVENT *)v152[256].Blink;
                if ( v153 )
                  KeSetEvent(v153, 0, 0);
              }
            }
            KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v98);
          }
          else
          {
            if ( !BYTE2(v1[87].Blink)
              || (v30 = ndisReferenceTopMiniportByNameForNsi(v1[88].Blink[2].Flink, 0, v29, 0, 2, 60), (v31 = v30) == 0) )
            {
LABEL_72:
              v3 = v196;
              v22 = v193;
LABEL_73:
              v53 = 0;
              **((_QWORD **)v3 + 2) = v1[82].Flink;
              goto LABEL_74;
            }
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 96));
            v32 = *(_QWORD *)(v31 + 2056);
            *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v31 + 1856) = 2234915;
            if ( v32 )
            {
              while ( 1 )
              {
                v33 = 0;
                v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v32 + 312));
                if ( !*(_BYTE *)(v32 + 322) )
                {
                  v35 = *(_WORD *)(v32 + 320);
                  if ( v35 < 0xFFEBu )
                  {
                    v36 = *(_QWORD *)(v32 + 328);
                    *(_WORD *)(v32 + 320) = v35 + 1;
                    if ( v36 )
                    {
                      if ( *(_BYTE *)(v36 + 1) )
                      {
                        if ( *(_BYTE *)(v36 + 1) == 1 )
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v36 + 712), 1u);
                      }
                      else
                      {
                        v37 = 0LL;
                        if ( _bittestandset((signed __int32 *)(v36 + 16), 0xBu) )
                        {
                          v127 = *(_QWORD *)(v36 + 8);
                          if ( !v127 )
                            goto LABEL_452;
                          v128 = *(_BYTE *)(v36 + 3);
                          v129 = 0;
                          if ( !v128 )
                            goto LABEL_452;
                          do
                          {
                            v130 = (_BYTE *)(v127 + 2LL * v129);
                            if ( *v130 == 11 )
                            {
                              if ( v130[1] != 0xFF )
                              {
                                ++v130[1];
                                goto LABEL_41;
                              }
                            }
                            else if ( !v130[1] )
                            {
                              v37 = (_WORD *)(v127 + 2LL * v129);
                            }
                            ++v129;
                          }
                          while ( v129 < v128 );
                          if ( v37 )
                          {
                            *v37 = 267;
                          }
                          else
                          {
LABEL_452:
                            if ( !*(_BYTE *)(v36 + 1) )
                            {
                              v154 = *(_BYTE *)(v36 + 3);
                              if ( v154 == 0xFF )
                              {
                                ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v36);
                                *(_BYTE *)(v36 + 1) = 2;
                              }
                              else
                              {
                                if ( (unsigned int)v154 + 2 <= 0xFF )
                                  v155 = v154 + 2;
                                else
                                  v155 = -1;
                                ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v36, v155);
                              }
                            }
                            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v36);
                          }
                        }
                      }
                    }
LABEL_41:
                    v33 = 1;
                  }
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v32 + 312), v34);
                if ( v33 )
                  break;
                v32 = *(_QWORD *)(v32 + 112);
                if ( !v32 )
                  goto LABEL_351;
              }
              v2 = *(_QWORD *)(v32 + 832);
            }
            else
            {
LABEL_351:
              v2 = *(_QWORD *)(v31 + 4096);
            }
            *(_QWORD *)(v31 + 520) = 0LL;
            *(_DWORD *)(v31 + 1856) = 0;
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v31 + 96));
            v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 96));
            v39 = *(_QWORD *)(v31 + 4960);
            *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v31 + 1856) = 71776;
            if ( v39 )
            {
              if ( *(_BYTE *)(v39 + 1) )
              {
                if ( *(_BYTE *)(v39 + 1) == 1 )
                {
                  v156 = v39 + 136;
                  v157 = *(_DWORD *)(v39 + 192);
                  if ( v157 >> 17 < 0x3FFE && (unsigned __int16)v157 >> 1 == (v157 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v39 + 136));
                    *(_DWORD *)(v156 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v157 & 0xFFFE) == 0 && (v157 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v39, 2uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v39 + 136), 0);
                  }
                }
              }
              else
              {
                v40 = *(_QWORD *)(v39 + 8);
                if ( v40 && (v105 = *(_BYTE *)(v39 + 3), v106 = 0, v105) )
                {
                  while ( 1 )
                  {
                    v107 = (_BYTE *)(v40 + 2LL * v106);
                    if ( *v107 == 2 )
                    {
                      if ( v107[1] )
                        break;
                    }
                    if ( ++v106 >= v105 )
                      goto LABEL_47;
                  }
                  --v107[1];
                }
                else
                {
LABEL_47:
                  if ( !_bittestandreset((signed __int32 *)(v39 + 16), 2u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v39, 2uLL);
                }
              }
            }
            v41 = (*(_DWORD *)(v31 + 3164))-- == 1;
            if ( v41 )
            {
              v42 = *(struct _KEVENT **)(v31 + 3176);
              if ( v42 )
                KeSetEvent(v42, 0, 0);
            }
            *(_QWORD *)(v31 + 520) = 0LL;
            *(_DWORD *)(v31 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 96), v38);
            if ( (unsigned __int8)byte_1C00895DB >= 4u )
              WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v31);
            v43 = 0;
            v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 4496));
            v45 = *(_QWORD *)(v31 + 4952);
            v46 = v44;
            if ( v45 )
            {
              v47 = *(unsigned __int8 *)(v45 + 1);
              if ( *(_BYTE *)(v45 + 1) )
              {
                if ( v47 == 1 )
                {
                  v158 = v45 + 3848;
                  v159 = *(_DWORD *)(v45 + 3904);
                  if ( v159 >> 17 < 0x3FFE && (unsigned __int16)v159 >> 1 == (v159 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v45 + 3848));
                    *(_DWORD *)(v158 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v159 & 0xFFFE) == 0 && (v159 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v45, 0x3CuLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v45 + 3848), 0);
                  }
                }
              }
              else
              {
                v48 = *(_QWORD *)(v45 + 8);
                if ( v48 && (v49 = *(_BYTE *)(v45 + 3)) != 0 )
                {
                  while ( 1 )
                  {
                    v50 = (_BYTE *)(v48 + 2LL * (unsigned __int8)v47);
                    if ( *v50 == 60 )
                    {
                      if ( v50[1] )
                        break;
                    }
                    LOBYTE(v47) = v47 + 1;
                    if ( (unsigned __int8)v47 >= v49 )
                      goto LABEL_59;
                  }
                  --v50[1];
                }
                else
                {
LABEL_59:
                  if ( !_bittestandreset((signed __int32 *)(v45 + 20), 0x1Cu) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v45, 0x3CuLL);
                }
              }
            }
            v41 = (*(_DWORD *)(v31 + 4504))-- == 1;
            if ( v41 )
              v43 = 1;
            if ( (unsigned __int8)byte_1C00895DB >= 4u )
              WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v31, *(unsigned int *)(v31 + 4504));
            KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 4496), v46);
            if ( v43 )
            {
              v160 = *(struct _KEVENT **)(v31 + 1608);
              if ( v160 )
                KeSetEvent(v160, 0, 0);
            }
            if ( (unsigned __int8)byte_1C00895DB >= 4u )
              WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v31);
          }
          if ( v2 )
          {
            v51 = *(_QWORD *)(v2 + 1440);
            if ( v51 )
            {
              if ( *(_BYTE *)(v51 + 1) )
              {
                if ( *(_BYTE *)(v51 + 1) == 1 )
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 264), 1u);
              }
              else
              {
                v52 = 0LL;
                if ( _bittestandset((signed __int32 *)(v51 + 16), 4u) )
                {
                  v119 = *(_QWORD *)(v51 + 8);
                  if ( v119 && (v120 = *(_BYTE *)(v51 + 3), v121 = 0, v120) )
                  {
                    do
                    {
                      v122 = (_BYTE *)(v119 + 2LL * v121);
                      if ( *v122 == 4 )
                      {
                        if ( v122[1] != 0xFF )
                        {
                          ++v122[1];
                          goto LABEL_71;
                        }
                      }
                      else if ( !v122[1] )
                      {
                        v52 = (_WORD *)(v119 + 2LL * v121);
                      }
                      ++v121;
                    }
                    while ( v121 < v120 );
                    if ( !v52 )
                      goto LABEL_376;
                    *v52 = 260;
                  }
                  else
                  {
LABEL_376:
                    if ( !*(_BYTE *)(v51 + 1) )
                    {
                      v161 = *(_BYTE *)(v51 + 3);
                      if ( v161 == 0xFF )
                      {
                        ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v51);
                        *(_BYTE *)(v51 + 1) = 2;
                      }
                      else
                      {
                        if ( (unsigned int)v161 + 2 <= 0xFF )
                          v162 = v161 + 2;
                        else
                          v162 = -1;
                        ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v51, v162);
                      }
                    }
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v51);
                  }
                }
              }
            }
LABEL_71:
            ++*(_DWORD *)(v2 + 1304);
          }
          goto LABEL_72;
        }
      }
LABEL_261:
      if ( !BYTE1(v25->Flink) )
      {
        v135 = BYTE3(v25->Flink);
        if ( v135 == 0xFF )
        {
          ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v25);
          BYTE1(v25->Flink) = 2;
        }
        else
        {
          if ( (unsigned int)v135 + 2 <= 0xFF )
            v136 = v135 + 2;
          else
            v136 = -1;
          ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v25, v136);
        }
      }
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v25);
    }
    v22 = v193;
    goto LABEL_29;
  }
  v1 = 0LL;
  v53 = 0;
LABEL_74:
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( v53 < 0 )
    goto LABEL_79;
  if ( v1 )
  {
    v54 = *((_QWORD *)v3 + 1);
    HIDWORD(v197[6]) = 0;
    switch ( v54 )
    {
      case 0LL:
LABEL_77:
        v197[5] = *((_QWORD *)v3 + 5);
        LODWORD(v197[6]) = *((_DWORD *)v3 + 12);
        LODWORD(v197[4]) = 0;
        ndisNsiGetInterfaceRwInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v197);
        *((_DWORD *)v3 + 12) = v197[6];
        LODWORD(v197[4]) = 1;
        v197[5] = *((_QWORD *)v3 + 7);
        LODWORD(v197[6]) = *((_DWORD *)v3 + 16);
        ndisNsiGetInterfaceRodInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v197);
        *((_DWORD *)v3 + 16) = v197[6];
        v197[5] = *((_QWORD *)v3 + 9);
        LODWORD(v197[6]) = *((_DWORD *)v3 + 20);
        LODWORD(v197[4]) = 2;
        ndisNsiGetInterfaceRosInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v197);
LABEL_78:
        *((_DWORD *)v3 + 20) = v197[6];
        goto LABEL_79;
      case 1LL:
        goto LABEL_191;
      case 12LL:
        goto LABEL_77;
      case 13LL:
LABEL_191:
        LODWORD(v197[4]) = 1;
        v197[5] = *((_QWORD *)v3 + 7);
        LODWORD(v197[6]) = *((_DWORD *)v3 + 16);
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v197);
        *((_DWORD *)v3 + 16) = v197[6];
        v197[5] = *((_QWORD *)v3 + 9);
        LODWORD(v197[6]) = *((_DWORD *)v3 + 20);
        LODWORD(v197[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v197);
        goto LABEL_78;
    }
    v53 = -1073741811;
  }
  else if ( *((_DWORD *)v3 + 8) )
  {
    v53 = -2147483622;
  }
  else
  {
    v53 = -1073741772;
  }
LABEL_79:
  v55 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 1402) )
    {
      v56 = *(_QWORD *)(v2 + 1416) + 312LL;
      v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v56);
      v58 = *(_QWORD *)(v56 + 16);
      v59 = v57;
      if ( v58 )
      {
        v60 = *(unsigned __int8 *)(v58 + 1);
        if ( *(_BYTE *)(v58 + 1) )
        {
          if ( v60 == 1 )
          {
            v163 = v58 + 712;
            v164 = *(_DWORD *)(v58 + 768);
            if ( v164 >> 17 < 0x3FFE && (unsigned __int16)v164 >> 1 == (v164 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v58 + 712));
              *(_DWORD *)(v163 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v164 & 0xFFFE) == 0 && (v164 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v58, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v58 + 712), 0);
            }
          }
        }
        else
        {
          v61 = *(_QWORD *)(v58 + 8);
          if ( v61 && (v62 = *(_BYTE *)(v58 + 3)) != 0 )
          {
            while ( 1 )
            {
              v63 = (_BYTE *)(v61 + 2LL * (unsigned __int8)v60);
              if ( *v63 == 11 )
              {
                if ( v63[1] )
                  break;
              }
              LOBYTE(v60) = v60 + 1;
              if ( (unsigned __int8)v60 >= v62 )
                goto LABEL_88;
            }
            --v63[1];
          }
          else
          {
LABEL_88:
            if ( !_bittestandreset((signed __int32 *)(v58 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v58, 0xBuLL);
          }
        }
      }
      v41 = (*(_WORD *)(v56 + 8))-- == 1;
      if ( v41 && !*(_BYTE *)(v56 + 11) )
      {
        NdisFreeRefCount(*(PVOID *)(v56 + 16));
        *(_QWORD *)(v56 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v56, v59);
      v3 = v196;
    }
    v64 = *(_QWORD *)(v2 + 1440);
    if ( v64 )
    {
      v65 = *(unsigned __int8 *)(v64 + 1);
      if ( *(_BYTE *)(v64 + 1) )
      {
        if ( v65 == 1 )
        {
          v165 = v64 + 264;
          v166 = *(_DWORD *)(v64 + 320);
          if ( v166 >> 17 < 0x3FFE && (unsigned __int16)v166 >> 1 == (v166 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v64 + 264));
            *(_DWORD *)(v165 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v166 & 0xFFFE) == 0 && (v166 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v64, 4uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v64 + 264), 0);
          }
        }
      }
      else
      {
        v66 = *(_QWORD *)(v64 + 8);
        if ( v66 && (v67 = *(_BYTE *)(v64 + 3)) != 0 )
        {
          while ( 1 )
          {
            v68 = (_BYTE *)(v66 + 2LL * (unsigned __int8)v65);
            if ( *v68 == 4 )
            {
              if ( v68[1] )
                break;
            }
            LOBYTE(v65) = v65 + 1;
            if ( (unsigned __int8)v65 >= v67 )
              goto LABEL_99;
          }
          --v68[1];
        }
        else
        {
LABEL_99:
          if ( !_bittestandreset((signed __int32 *)(v64 + 16), 4u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v64, 4uLL);
        }
      }
    }
    v41 = (*(_DWORD *)(v2 + 1304))-- == 1;
    if ( v41 )
    {
      v167 = *(_DWORD *)(v2 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v2);
      *(_QWORD *)(v2 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v168 = *(_QWORD *)(v2 + 1232);
      v169 = *(_QWORD **)(v2 + 1240);
      if ( *(_QWORD *)(v168 + 8) != v2 + 1232 || *v169 != v2 + 1232 )
        __fastfail(3u);
      *v169 = v168;
      *(_QWORD *)(v168 + 8) = v169;
      v170 = *(_QWORD *)(v2 + 1248);
      v171 = *(_QWORD **)(v2 + 1256);
      if ( *(_QWORD *)(v170 + 8) != v2 + 1248 || *v171 != v2 + 1248 )
        __fastfail(3u);
      *v171 = v170;
      *(_QWORD *)(v170 + 8) = v171;
      v172 = *(_QWORD *)(v2 + 1264);
      v173 = *(_QWORD **)(v2 + 1272);
      if ( *(_QWORD *)(v172 + 8) != v2 + 1264 || *v173 != v2 + 1264 )
        __fastfail(3u);
      *v173 = v172;
      *(_QWORD *)(v172 + 8) = v173;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v2 + 1376));
      v174 = (unsigned int)(v167 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v174 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v174) &= ~(1 << ((v167 - 1) & 7));
      v175 = *(void **)(v2 + 1440);
      --ndisInterfaceCount;
      NdisFreeRefCount(v175);
      v176 = *(void **)(v2 + 1432);
      *(_QWORD *)(v2 + 1440) = 0LL;
      if ( v176 )
      {
        ExFreePoolWithTag(v176, 0);
        *(_QWORD *)(v2 + 1432) = 0LL;
      }
      v177 = *(void **)(v2 + 1280);
      if ( v177 )
      {
        ExFreePoolWithTag(v177, 0);
        *(_QWORD *)(v2 + 1280) = 0LL;
        *(_QWORD *)(v2 + 1288) = 0LL;
      }
      v178 = *(struct _KEVENT **)(v2 + 1392);
      if ( v178 )
        KeSetEvent(v178, 0, 0);
      ExFreePoolWithTag((PVOID)v2, 0);
    }
  }
  if ( v1 )
  {
    v69 = (ULONG_PTR)v1[90].Flink;
    if ( v69 )
    {
      v70 = *(unsigned __int8 *)(v69 + 1);
      if ( *(_BYTE *)(v69 + 1) )
      {
        if ( v70 == 1 )
        {
          v179 = v69 + 200;
          v180 = *(_DWORD *)(v69 + 256);
          if ( v180 >> 17 < 0x3FFE && (unsigned __int16)v180 >> 1 == (v180 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v69 + 200));
            *(_DWORD *)(v179 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v180 & 0xFFFE) == 0 && (v180 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v69, 3uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v69 + 200), 0);
          }
        }
      }
      else
      {
        v71 = *(_QWORD *)(v69 + 8);
        if ( v71 && (v72 = *(_BYTE *)(v69 + 3)) != 0 )
        {
          while ( 1 )
          {
            v73 = (_BYTE *)(v71 + 2LL * (unsigned __int8)v70);
            if ( *v73 == 3 )
            {
              if ( v73[1] )
                break;
            }
            LOBYTE(v70) = v70 + 1;
            if ( (unsigned __int8)v70 >= v72 )
              goto LABEL_108;
          }
          --v73[1];
        }
        else
        {
LABEL_108:
          if ( !_bittestandreset((signed __int32 *)(v69 + 16), 3u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v69, 3uLL);
        }
      }
    }
    v41 = LODWORD(v1[81].Blink)-- == 1;
    if ( v41 )
    {
      Flink_high = HIDWORD(v1->Flink);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v1);
      v1[81].Flink = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v182 = v1[77].Flink;
      v183 = v1[77].Blink;
      if ( v182->Blink != &v1[77] || v183->Flink != &v1[77] )
        __fastfail(3u);
      v183->Flink = v182;
      v182->Blink = v183;
      v184 = v1[78].Flink;
      v185 = v1[78].Blink;
      if ( v184->Blink != &v1[78] || v185->Flink != &v1[78] )
        __fastfail(3u);
      v185->Flink = v184;
      v184->Blink = v185;
      v186 = v1[79].Flink;
      v187 = v1[79].Blink;
      if ( v186->Blink != &v1[79] || v187->Flink != &v1[79] )
        __fastfail(3u);
      v187->Flink = v186;
      v186->Blink = v187;
      NETWORKBLOCK_DECREMENT_REF(v1[86].Flink);
      v188 = (unsigned int)(Flink_high - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v188 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v188) &= ~(1 << ((Flink_high - 1) & 7));
      v189 = v1[90].Flink;
      --ndisInterfaceCount;
      NdisFreeRefCount(v189);
      v190 = v1[89].Blink;
      v1[90].Flink = 0LL;
      if ( v190 )
      {
        ExFreePoolWithTag(v190, 0);
        v1[89].Blink = 0LL;
      }
      v191 = v1[80].Flink;
      if ( v191 )
      {
        ExFreePoolWithTag(v191, 0);
        v1[80].Flink = 0LL;
        v1[80].Blink = 0LL;
      }
      v192 = (struct _KEVENT *)v1[87].Flink;
      if ( v192 )
        KeSetEvent(v192, 0, 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v55);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(81LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v3, (unsigned int)v53);
  return (unsigned int)v53;
}
