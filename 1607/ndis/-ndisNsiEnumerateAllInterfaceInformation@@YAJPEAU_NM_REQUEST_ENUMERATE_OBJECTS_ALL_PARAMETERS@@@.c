/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40
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
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00650DC (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099200 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099450 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r13d
  unsigned int v2; // r12d
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int *ThreadProperty; // rax
  unsigned int *v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  unsigned int v11; // r14d
  KIRQL v12; // al
  _LIST_ENTRY *v13; // rcx
  KIRQL v14; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v16; // edx
  KIRQL v17; // bl
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rdx
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v20; // rsi
  void *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r10d
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  _LIST_ENTRY *v28; // r10
  unsigned int v29; // r8d
  _LIST_ENTRY *v30; // rcx
  _LIST_ENTRY *v31; // r15
  _LIST_ENTRY *v32; // rbx
  _WORD *v33; // rcx
  __int64 v34; // r13
  _LIST_ENTRY *v35; // rbx
  KIRQL v36; // di
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rsi
  char v41; // di
  KIRQL v42; // r14
  unsigned __int16 v43; // cx
  __int64 v44; // rdi
  _WORD *v45; // rdx
  KIRQL v46; // di
  ULONG_PTR v47; // r10
  int v48; // ecx
  __int64 v49; // r9
  unsigned __int8 v50; // r8
  _BYTE *v51; // rdx
  bool v52; // zf
  struct _KEVENT *v53; // rcx
  char v54; // si
  KIRQL v55; // al
  ULONG_PTR v56; // r10
  KIRQL v57; // r14
  int v58; // ecx
  __int64 v59; // r9
  unsigned __int8 v60; // r8
  _BYTE *v61; // rdx
  __int64 v62; // rbx
  _WORD *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rbx
  __int64 v66; // rbx
  KIRQL v67; // al
  ULONG_PTR v68; // r8
  KIRQL v69; // si
  int v70; // ecx
  __int64 v71; // r10
  unsigned __int8 v72; // r9
  _BYTE *v73; // rdx
  ULONG_PTR v74; // r8
  int v75; // ecx
  __int64 v76; // r10
  unsigned __int8 v77; // r9
  _BYTE *v78; // rdx
  ULONG_PTR v79; // r8
  int v80; // ecx
  __int64 v81; // r10
  unsigned __int8 v82; // r9
  _BYTE *v83; // rdx
  __int64 v84; // rbx
  _LIST_ENTRY *v85; // rsi
  _WORD *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rsi
  char v90; // di
  KIRQL v91; // r14
  unsigned __int16 v92; // cx
  __int64 v93; // rdi
  _WORD *v94; // rcx
  KIRQL v95; // di
  ULONG_PTR v96; // r8
  __int64 v97; // r10
  struct _KEVENT *v98; // rcx
  char v99; // si
  KIRQL v100; // al
  ULONG_PTR v101; // r10
  KIRQL v102; // r14
  int v103; // ecx
  __int64 v104; // r9
  unsigned __int8 v105; // r8
  _BYTE *v106; // rdx
  KIRQL v107; // al
  KIRQL v108; // di
  ULONG_PTR v109; // r8
  __int64 v110; // rcx
  unsigned __int8 v111; // r9
  unsigned __int8 v112; // cl
  _BYTE *v113; // rdx
  NTSTATUS v114; // ebx
  unsigned __int8 v115; // r10
  unsigned __int8 v116; // dl
  _BYTE *v117; // r9
  __int64 v118; // r10
  unsigned __int8 v119; // r9
  unsigned __int8 v120; // r8
  _BYTE *v121; // rcx
  __int64 v122; // r10
  unsigned __int8 v123; // r9
  unsigned __int8 v124; // r8
  _BYTE *v125; // rdx
  __int64 v126; // r10
  unsigned __int8 v127; // r9
  unsigned __int8 v128; // r8
  _BYTE *v129; // rdx
  _LIST_ENTRY *v130; // r9
  unsigned __int8 v131; // r10
  unsigned __int8 v132; // r8
  _BYTE *v133; // rdx
  unsigned __int8 v134; // dl
  unsigned __int8 v135; // dl
  KIRQL v136; // r8
  unsigned __int64 v137; // r8
  unsigned __int64 v138; // rdx
  _LIST_ENTRY *v139; // r10
  unsigned __int8 v140; // r9
  unsigned __int8 v141; // r8
  _BYTE *v142; // rdx
  unsigned __int8 v143; // dl
  unsigned __int8 v144; // dl
  unsigned __int8 v145; // dl
  unsigned __int8 v146; // dl
  ULONG_PTR v147; // rbx
  unsigned int v148; // edx
  ULONG_PTR v149; // rbx
  unsigned int v150; // edx
  struct _KEVENT *v151; // rcx
  ULONG_PTR v152; // rbx
  unsigned int v153; // edx
  _LIST_ENTRY *v154; // rax
  struct _KEVENT *v155; // rcx
  unsigned __int8 v156; // dl
  unsigned __int8 v157; // dl
  ULONG_PTR v158; // rbx
  unsigned int v159; // edx
  ULONG_PTR v160; // rbx
  unsigned int v161; // edx
  struct _KEVENT *v162; // rcx
  unsigned __int8 v163; // dl
  unsigned __int8 v164; // dl
  ULONG_PTR v165; // rdi
  unsigned int v166; // edx
  ULONG_PTR v167; // rbx
  unsigned int v168; // edx
  int v169; // ebx
  __int64 v170; // rdx
  _QWORD *v171; // rcx
  __int64 v172; // rdx
  _QWORD *v173; // rcx
  __int64 v174; // rdx
  _QWORD *v175; // rcx
  unsigned int v176; // ecx
  void *v177; // rcx
  void *v178; // rcx
  void *v179; // rcx
  struct _KEVENT *v180; // rcx
  ULONG_PTR v181; // rbx
  unsigned int v182; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v184; // rdx
  _LIST_ENTRY *v185; // rcx
  _LIST_ENTRY *v186; // rdx
  _LIST_ENTRY *v187; // rcx
  _LIST_ENTRY *v188; // rdx
  _LIST_ENTRY *v189; // rcx
  unsigned int v190; // ecx
  _LIST_ENTRY *v191; // rcx
  _LIST_ENTRY *v192; // rcx
  _LIST_ENTRY *v193; // rcx
  struct _KEVENT *v194; // rcx
  KIRQL v195; // [rsp+30h] [rbp-99h]
  _LIST_ENTRY *v196; // [rsp+38h] [rbp-91h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-89h] BYREF
  BOOLEAN CopyOnOpen[3]; // [rsp+41h] [rbp-88h] BYREF
  unsigned int v199; // [rsp+44h] [rbp-85h]
  unsigned int v200; // [rsp+48h] [rbp-81h]
  int v201; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v202; // [rsp+50h] [rbp-79h]
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v203; // [rsp+58h] [rbp-71h]
  size_t Size; // [rsp+60h] [rbp-69h]
  _LIST_ENTRY *v205; // [rsp+68h] [rbp-61h]
  void *v206; // [rsp+70h] [rbp-59h]
  __int64 v207; // [rsp+78h] [rbp-51h]
  __int64 v208; // [rsp+80h] [rbp-49h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+88h] [rbp-41h] BYREF
  PVOID TokenInformation; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v211[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v212; // [rsp+E0h] [rbp+17h]
  __int128 v213; // [rsp+E8h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 22);
  v2 = 0;
  v3 = 0;
  v203 = a1;
  v202 = v1;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(84LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v212 = 0LL;
  v213 = 0uLL;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v6 = ThreadProperty;
  if ( ThreadProperty )
  {
    v11 = *ThreadProperty;
    LODWORD(v212) = ThreadProperty[1];
    HIDWORD(v212) = v11;
    ObfDereferenceObject(ThreadProperty);
    if ( v11 )
      goto LABEL_14;
  }
  else
  {
    LODWORD(v212) = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
  }
  else
  {
    v7 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v8 = v7;
    if ( v7 )
    {
      v114 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v8);
      if ( v114 >= 0 )
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
    v11 = 0;
    v136 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v11 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v136);
    if ( !v11 )
      v11 = 1;
  }
  else
  {
    v11 = 1;
  }
  HIDWORD(v212) = v11;
LABEL_14:
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v13 = 0LL;
  v14 = v12;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v16 = (unsigned int)Flink[1].Flink;
      if ( v16 == v11 )
        break;
      if ( v16 <= v11 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_17;
    }
    v13 = Flink;
  }
LABEL_17:
  v213 = *(__int128 *)((char *)&v13[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v14);
  v195 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = v195;
  if ( !v1 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Blink = i[9].Blink;
      if ( v11 == LODWORD(Blink[1].Flink) )
        goto LABEL_20;
      if ( (_DWORD)v212 == -1 )
      {
        v137 = v213 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v213 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
          v137 = *((_QWORD *)&v213 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
        if ( !v137 )
          goto LABEL_20;
      }
      if ( ((__int64)Blink[105].Flink & 2) == 0 && v11 == 1 )
LABEL_20:
        ++v3;
    }
    v20 = v203;
    *((_DWORD *)v203 + 22) = v3;
    if ( v3 )
      v2 = 261;
    goto LABEL_24;
  }
  v20 = v203;
  v22 = (void *)*((_QWORD *)v203 + 2);
  v23 = *((_QWORD *)v203 + 7);
  v24 = *((_QWORD *)v203 + 9);
  v25 = *((_DWORD *)v203 + 6);
  v26 = *((_DWORD *)v203 + 16);
  v27 = *((_DWORD *)v203 + 20);
  LODWORD(Size) = v25;
  v199 = v26;
  v200 = v27;
  v206 = v22;
  v207 = v23;
  v208 = v24;
  if ( v22 && v25 != 8 || *((_QWORD *)v203 + 5) || *((_DWORD *)v203 + 12) || v23 && v26 < 0x28C || v24 && v27 < 0x238 )
  {
    v2 = -1073741306;
    goto LABEL_24;
  }
  memset(v211, 0, sizeof(v211));
  v28 = ndisIfList.Flink;
  HIDWORD(v211[6]) = 0;
  v29 = 0;
  v196 = ndisIfList.Flink;
  while ( v28 != &ndisIfList )
  {
    v30 = v28[9].Blink;
    v31 = v28 - 77;
    v205 = v28 - 77;
    if ( v11 == LODWORD(v30[1].Flink) )
      goto LABEL_36;
    if ( (_DWORD)v212 == -1 )
    {
      v138 = v213 - *(unsigned __int64 *)((char *)&v30[105].Flink + 4);
      if ( (_LIST_ENTRY *)v213 == *(_LIST_ENTRY **)((char *)&v30[105].Flink + 4) )
        v138 = *((_QWORD *)&v213 + 1) - *(unsigned __int64 *)((char *)&v30[105].Blink + 4);
      if ( !v138 )
        goto LABEL_36;
    }
    if ( ((__int64)v30[105].Flink & 2) == 0 && v11 == 1 )
    {
LABEL_36:
      v201 = ++v29;
      if ( v29 <= v1 )
      {
        v32 = v31[90].Flink;
        if ( v32 )
        {
          if ( BYTE1(v32->Flink) )
          {
            if ( BYTE1(v32->Flink) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v32[24].Blink, 1u);
          }
          else
          {
            v33 = 0LL;
            if ( _bittestandset((signed __int32 *)&v32[1], 6u) )
            {
              v130 = v32->Blink;
              if ( v130 && (v131 = BYTE3(v32->Flink), v132 = 0, v131) )
              {
                do
                {
                  v133 = (char *)v130 + 2 * v132;
                  if ( *v133 == 6 )
                  {
                    if ( v133[1] != 0xFF )
                    {
                      ++v133[1];
                      goto LABEL_40;
                    }
                  }
                  else if ( !v133[1] )
                  {
                    v33 = (_WORD *)v130 + v132;
                  }
                  ++v132;
                }
                while ( v132 < v131 );
                if ( !v33 )
                  goto LABEL_232;
                *v33 = 262;
              }
              else
              {
LABEL_232:
                if ( !BYTE1(v32->Flink) )
                {
                  v134 = BYTE3(v32->Flink);
                  if ( v134 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v32);
                    BYTE1(v32->Flink) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v134 + 2 > 0xFF )
                      v135 = -1;
                    else
                      v135 = v134 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v32, v135);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32);
              }
            }
          }
        }
LABEL_40:
        ++LODWORD(v31[81].Blink);
        v34 = 0LL;
        if ( !BYTE1(v31[87].Blink) || *((_QWORD *)v20 + 1) >= 2uLL )
          goto LABEL_88;
        v35 = 0LL;
        v36 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        if ( BYTE3(v31[87].Blink) )
        {
          v85 = v31[90].Blink;
          v35 = v31[88].Blink;
          if ( v85 )
          {
            if ( BYTE1(v85->Flink) )
            {
              if ( BYTE1(v85->Flink) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v85[12].Blink, 1u);
            }
            else
            {
              v86 = 0LL;
              if ( _bittestandset((signed __int32 *)&v85[1], 3u) )
              {
                v139 = v85->Blink;
                if ( !v139 )
                  goto LABEL_447;
                v140 = BYTE3(v85->Flink);
                v141 = 0;
                if ( !v140 )
                  goto LABEL_447;
                do
                {
                  v142 = (char *)v139 + 2 * v141;
                  if ( *v142 == 3 )
                  {
                    if ( v142[1] != 0xFF )
                    {
                      ++v142[1];
                      goto LABEL_137;
                    }
                  }
                  else if ( !v142[1] )
                  {
                    v86 = (_WORD *)v139 + v141;
                  }
                  ++v141;
                }
                while ( v141 < v140 );
                if ( v86 )
                {
                  *v86 = 259;
                }
                else
                {
LABEL_447:
                  if ( !BYTE1(v85->Flink) )
                  {
                    v143 = BYTE3(v85->Flink);
                    if ( v143 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v85);
                      BYTE1(v85->Flink) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v143 + 2 <= 0xFF )
                        v144 = v143 + 2;
                      else
                        v144 = -1;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v85, v144);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v85);
                }
              }
            }
          }
LABEL_137:
          ++HIDWORD(v31[87].Blink);
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v36);
        if ( !v35 )
        {
          if ( BYTE2(v31[87].Blink) )
          {
            v38 = ndisReferenceTopMiniportByNameForNsi(v31[88].Blink[2].Flink, 0, v37, 0, 2, 60);
            v39 = v38;
            if ( v38 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v38 + 96));
              v40 = *(_QWORD *)(v39 + 2056);
              *(_QWORD *)(v39 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v39 + 1856) = 2234915;
              if ( v40 )
              {
                while ( 1 )
                {
                  v41 = 0;
                  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 312));
                  if ( !*(_BYTE *)(v40 + 322) )
                  {
                    v43 = *(_WORD *)(v40 + 320);
                    if ( v43 < 0xFFEBu )
                    {
                      v44 = *(_QWORD *)(v40 + 328);
                      *(_WORD *)(v40 + 320) = v43 + 1;
                      if ( v44 )
                      {
                        if ( *(_BYTE *)(v44 + 1) )
                        {
                          if ( *(_BYTE *)(v44 + 1) == 1 )
                            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v44 + 712), 1u);
                        }
                        else
                        {
                          v45 = 0LL;
                          if ( _bittestandset((signed __int32 *)(v44 + 16), 0xBu) )
                          {
                            v118 = *(_QWORD *)(v44 + 8);
                            if ( !v118 )
                              goto LABEL_448;
                            v119 = *(_BYTE *)(v44 + 3);
                            v120 = 0;
                            if ( !v119 )
                              goto LABEL_448;
                            do
                            {
                              v121 = (_BYTE *)(v118 + 2LL * v120);
                              if ( *v121 == 11 )
                              {
                                if ( v121[1] != 0xFF )
                                {
                                  ++v121[1];
                                  goto LABEL_52;
                                }
                              }
                              else if ( !v121[1] )
                              {
                                v45 = (_WORD *)(v118 + 2LL * v120);
                              }
                              ++v120;
                            }
                            while ( v120 < v119 );
                            if ( v45 )
                            {
                              *v45 = 267;
                            }
                            else
                            {
LABEL_448:
                              if ( !*(_BYTE *)(v44 + 1) )
                              {
                                v156 = *(_BYTE *)(v44 + 3);
                                if ( v156 == 0xFF )
                                {
                                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v44);
                                  *(_BYTE *)(v44 + 1) = 2;
                                }
                                else
                                {
                                  if ( (unsigned int)v156 + 2 <= 0xFF )
                                    v157 = v156 + 2;
                                  else
                                    v157 = -1;
                                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v44, v157);
                                }
                              }
                              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v44);
                            }
                          }
                        }
                      }
LABEL_52:
                      v41 = 1;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 312), v42);
                  if ( v41 )
                    break;
                  v40 = *(_QWORD *)(v40 + 112);
                  if ( !v40 )
                    goto LABEL_344;
                }
                v34 = *(_QWORD *)(v40 + 832);
              }
              else
              {
LABEL_344:
                v34 = *(_QWORD *)(v39 + 4096);
              }
              *(_QWORD *)(v39 + 520) = 0LL;
              *(_DWORD *)(v39 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v39 + 96));
              v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 96));
              v47 = *(_QWORD *)(v39 + 4960);
              *(_QWORD *)(v39 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v39 + 1856) = 71776;
              if ( v47 )
              {
                v48 = *(unsigned __int8 *)(v47 + 1);
                if ( *(_BYTE *)(v47 + 1) )
                {
                  if ( v48 == 1 )
                  {
                    v158 = v47 + 136;
                    v159 = *(_DWORD *)(v47 + 192);
                    if ( v159 >> 17 < 0x3FFE && (unsigned __int16)v159 >> 1 == (v159 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 136));
                      *(_DWORD *)(v158 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v159 & 0xFFFE) == 0 && (v159 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v47, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 136), 0);
                    }
                  }
                }
                else
                {
                  v49 = *(_QWORD *)(v47 + 8);
                  if ( v49 && (v50 = *(_BYTE *)(v47 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v51 = (_BYTE *)(v49 + 2LL * (unsigned __int8)v48);
                      if ( *v51 == 2 )
                      {
                        if ( v51[1] )
                          break;
                      }
                      LOBYTE(v48) = v48 + 1;
                      if ( (unsigned __int8)v48 >= v50 )
                        goto LABEL_61;
                    }
                    --v51[1];
                  }
                  else
                  {
LABEL_61:
                    if ( !_bittestandreset((signed __int32 *)(v47 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v47, 2uLL);
                  }
                }
              }
              v52 = (*(_DWORD *)(v39 + 3164))-- == 1;
              if ( v52 )
              {
                v53 = *(struct _KEVENT **)(v39 + 3176);
                if ( v53 )
                  KeSetEvent(v53, 0, 0);
              }
              *(_QWORD *)(v39 + 520) = 0LL;
              *(_DWORD *)(v39 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 96), v46);
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v39);
              v54 = 0;
              v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 4496));
              v56 = *(_QWORD *)(v39 + 4952);
              v57 = v55;
              if ( v56 )
              {
                v58 = *(unsigned __int8 *)(v56 + 1);
                if ( *(_BYTE *)(v56 + 1) )
                {
                  if ( v58 == 1 )
                  {
                    v160 = v56 + 3848;
                    v161 = *(_DWORD *)(v56 + 3904);
                    if ( v161 >> 17 < 0x3FFE && (unsigned __int16)v161 >> 1 == (v161 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 3848));
                      *(_DWORD *)(v160 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v161 & 0xFFFE) == 0 && (v161 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v39 + 4952), 0x3CuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v59 = *(_QWORD *)(v56 + 8);
                  if ( v59 && (v60 = *(_BYTE *)(v56 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v61 = (_BYTE *)(v59 + 2LL * (unsigned __int8)v58);
                      if ( *v61 == 60 )
                      {
                        if ( v61[1] )
                          break;
                      }
                      LOBYTE(v58) = v58 + 1;
                      if ( (unsigned __int8)v58 >= v60 )
                        goto LABEL_73;
                    }
                    --v61[1];
                  }
                  else
                  {
LABEL_73:
                    if ( !_bittestandreset((signed __int32 *)(v56 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v56, 0x3CuLL);
                  }
                }
              }
              v52 = (*(_DWORD *)(v39 + 4504))-- == 1;
              if ( v52 )
                v54 = 1;
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v39, *(unsigned int *)(v39 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 4496), v57);
              if ( v54 )
              {
                v162 = *(struct _KEVENT **)(v39 + 1608);
                if ( v162 )
                  KeSetEvent(v162, 0, 0);
              }
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v39);
              v11 = HIDWORD(v212);
              v31 = v205;
              goto LABEL_82;
            }
            v31 = v205;
          }
LABEL_87:
          v20 = v203;
LABEL_88:
          KeReleaseSpinLock(&ndisIfListLock, v195);
          if ( *((_QWORD *)v20 + 2) )
          {
            v64 = (unsigned int)Size;
            memmove(v206, &v31[82], (unsigned int)Size);
            v206 = (char *)v206 + v64;
          }
          if ( *((_QWORD *)v20 + 7) )
          {
            v84 = v207;
            v211[5] = v207;
            LODWORD(v211[4]) = 1;
            LODWORD(v211[6]) = v199;
            ndisNsiGetInterfaceRodEnumObject(
              (struct _NDIS_IF_BLOCK *)v31,
              (struct _NDIS_IF_BLOCK *)v34,
              (struct _NM_REQUEST_GET_PARAMETER *)v211);
            v207 = v199 + v84;
          }
          if ( *((_QWORD *)v20 + 9) )
          {
            v65 = v208;
            v211[5] = v208;
            LODWORD(v211[4]) = 2;
            LODWORD(v211[6]) = v200;
            ndisNsiGetInterfaceRosEnumObject(
              (struct _NDIS_IF_BLOCK *)v31,
              (struct _NDIS_IF_BLOCK *)v34,
              (struct _NM_REQUEST_GET_PARAMETER *)v211);
            v208 = v200 + v65;
          }
          v195 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          v17 = v195;
          if ( v34 )
          {
            if ( *(_BYTE *)(v34 + 1402) )
            {
              v66 = *(_QWORD *)(v34 + 1416) + 312LL;
              v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v66);
              v68 = *(_QWORD *)(v66 + 16);
              v69 = v67;
              if ( v68 )
              {
                v70 = *(unsigned __int8 *)(v68 + 1);
                if ( *(_BYTE *)(v68 + 1) )
                {
                  if ( v70 == 1 )
                  {
                    v165 = v68 + 712;
                    v166 = *(_DWORD *)(v68 + 768);
                    if ( v166 >> 17 < 0x3FFE && (unsigned __int16)v166 >> 1 == (v166 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v68 + 712));
                      *(_DWORD *)(v165 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v166 & 0xFFFE) == 0 && (v166 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v68, 0xBuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v68 + 712), 0);
                    }
                  }
                }
                else
                {
                  v71 = *(_QWORD *)(v68 + 8);
                  if ( v71 && (v72 = *(_BYTE *)(v68 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v73 = (_BYTE *)(v71 + 2LL * (unsigned __int8)v70);
                      if ( *v73 == 11 )
                      {
                        if ( v73[1] )
                          break;
                      }
                      LOBYTE(v70) = v70 + 1;
                      if ( (unsigned __int8)v70 >= v72 )
                        goto LABEL_103;
                    }
                    --v73[1];
                  }
                  else
                  {
LABEL_103:
                    if ( !_bittestandreset((signed __int32 *)(v68 + 16), 0xBu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v68, 0xBuLL);
                  }
                }
              }
              v52 = (*(_WORD *)(v66 + 8))-- == 1;
              if ( v52 && !*(_BYTE *)(v66 + 11) )
              {
                NdisFreeRefCount(*(PVOID *)(v66 + 16));
                *(_QWORD *)(v66 + 16) = 0LL;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v66, v69);
              v20 = v203;
            }
            v74 = *(_QWORD *)(v34 + 1440);
            if ( v74 )
            {
              v75 = *(unsigned __int8 *)(v74 + 1);
              if ( *(_BYTE *)(v74 + 1) )
              {
                if ( v75 == 1 )
                {
                  v167 = v74 + 456;
                  v168 = *(_DWORD *)(v74 + 512);
                  if ( v168 >> 17 < 0x3FFE && (unsigned __int16)v168 >> 1 == (v168 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v74 + 456));
                    *(_DWORD *)(v167 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v168 & 0xFFFE) == 0 && (v168 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v74, 7uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v74 + 456), 0);
                  }
                }
              }
              else
              {
                v76 = *(_QWORD *)(v74 + 8);
                if ( v76 && (v77 = *(_BYTE *)(v74 + 3)) != 0 )
                {
                  while ( 1 )
                  {
                    v78 = (_BYTE *)(v76 + 2LL * (unsigned __int8)v75);
                    if ( *v78 == 7 )
                    {
                      if ( v78[1] )
                        break;
                    }
                    LOBYTE(v75) = v75 + 1;
                    if ( (unsigned __int8)v75 >= v77 )
                      goto LABEL_114;
                  }
                  --v78[1];
                }
                else
                {
LABEL_114:
                  if ( !_bittestandreset((signed __int32 *)(v74 + 16), 7u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v74, 7uLL);
                }
              }
            }
            v52 = (*(_DWORD *)(v34 + 1304))-- == 1;
            if ( v52 )
            {
              v169 = *(_DWORD *)(v34 + 4);
              KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
              ndisIfDeleteStackEntries(v34);
              *(_QWORD *)(v34 + 1296) = 0LL;
              KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
              v170 = *(_QWORD *)(v34 + 1232);
              v171 = *(_QWORD **)(v34 + 1240);
              if ( *(_QWORD *)(v170 + 8) != v34 + 1232 || *v171 != v34 + 1232 )
                __fastfail(3u);
              *v171 = v170;
              *(_QWORD *)(v170 + 8) = v171;
              v172 = *(_QWORD *)(v34 + 1248);
              v173 = *(_QWORD **)(v34 + 1256);
              if ( *(_QWORD *)(v172 + 8) != v34 + 1248 || *v173 != v34 + 1248 )
                __fastfail(3u);
              *v173 = v172;
              *(_QWORD *)(v172 + 8) = v173;
              v174 = *(_QWORD *)(v34 + 1264);
              v175 = *(_QWORD **)(v34 + 1272);
              if ( *(_QWORD *)(v174 + 8) != v34 + 1264 || *v175 != v34 + 1264 )
                __fastfail(3u);
              *v175 = v174;
              *(_QWORD *)(v174 + 8) = v175;
              NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v34 + 1376));
              v176 = (unsigned int)(v169 - 1) >> 3;
              if ( IfUsedIfIndicesLength >= v176 + 1 )
                *((_BYTE *)IfUsedIfIndicesData + v176) &= ~(1 << ((v169 - 1) & 7));
              v177 = *(void **)(v34 + 1440);
              --ndisInterfaceCount;
              NdisFreeRefCount(v177);
              v178 = *(void **)(v34 + 1432);
              *(_QWORD *)(v34 + 1440) = 0LL;
              if ( v178 )
              {
                ExFreePoolWithTag(v178, 0);
                *(_QWORD *)(v34 + 1432) = 0LL;
              }
              v179 = *(void **)(v34 + 1280);
              if ( v179 )
              {
                ExFreePoolWithTag(v179, 0);
                *(_QWORD *)(v34 + 1280) = 0LL;
                *(_QWORD *)(v34 + 1288) = 0LL;
              }
              v180 = *(struct _KEVENT **)(v34 + 1392);
              if ( v180 )
                KeSetEvent(v180, 0, 0);
              ExFreePoolWithTag((PVOID)v34, 0);
            }
            v17 = v195;
          }
          v79 = (ULONG_PTR)v31[90].Flink;
          v28 = v196->Flink;
          v196 = v196->Flink;
          if ( v79 )
          {
            v80 = *(unsigned __int8 *)(v79 + 1);
            if ( *(_BYTE *)(v79 + 1) )
            {
              if ( v80 == 1 )
              {
                v181 = v79 + 392;
                v182 = *(_DWORD *)(v79 + 448);
                if ( v182 >> 17 < 0x3FFE && (unsigned __int16)v182 >> 1 == (v182 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v79 + 392));
                  *(_DWORD *)(v181 + 56) &= 0x10001u;
                  v17 = v195;
                }
                else
                {
                  if ( (v182 & 0xFFFE) == 0 && (v182 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v79, 6uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v79 + 392), 0);
                  v17 = v195;
                }
                goto LABEL_124;
              }
            }
            else
            {
              v81 = *(_QWORD *)(v79 + 8);
              if ( v81 && (v82 = *(_BYTE *)(v79 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v83 = (_BYTE *)(v81 + 2LL * (unsigned __int8)v80);
                  if ( *v83 == 6 )
                  {
                    if ( v83[1] )
                      break;
                  }
                  LOBYTE(v80) = v80 + 1;
                  if ( (unsigned __int8)v80 >= v82 )
                    goto LABEL_123;
                }
                --v83[1];
              }
              else
              {
LABEL_123:
                if ( !_bittestandreset((signed __int32 *)(v79 + 16), 6u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v79, 6uLL);
              }
LABEL_124:
              v28 = v196;
            }
          }
          v52 = LODWORD(v31[81].Blink)-- == 1;
          if ( v52 )
          {
            Flink_high = HIDWORD(v31->Flink);
            KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
            ndisIfDeleteStackEntries(v31);
            v31[81].Flink = 0LL;
            KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
            v184 = v31[77].Flink;
            v185 = v31[77].Blink;
            if ( v184->Blink != &v31[77] || v185->Flink != &v31[77] )
              __fastfail(3u);
            v185->Flink = v184;
            v184->Blink = v185;
            v186 = v31[78].Flink;
            v187 = v31[78].Blink;
            if ( v186->Blink != &v31[78] || v187->Flink != &v31[78] )
              __fastfail(3u);
            v187->Flink = v186;
            v186->Blink = v187;
            v188 = v31[79].Flink;
            v189 = v31[79].Blink;
            if ( v188->Blink != &v31[79] || v189->Flink != &v31[79] )
              __fastfail(3u);
            v189->Flink = v188;
            v188->Blink = v189;
            NETWORKBLOCK_DECREMENT_REF(v31[86].Flink);
            v190 = (unsigned int)(Flink_high - 1) >> 3;
            if ( IfUsedIfIndicesLength >= v190 + 1 )
              *((_BYTE *)IfUsedIfIndicesData + v190) &= ~(1 << ((Flink_high - 1) & 7));
            v191 = v31[90].Flink;
            --ndisInterfaceCount;
            NdisFreeRefCount(v191);
            v192 = v31[89].Blink;
            v31[90].Flink = 0LL;
            if ( v192 )
            {
              ExFreePoolWithTag(v192, 0);
              v31[89].Blink = 0LL;
            }
            v193 = v31[80].Flink;
            if ( v193 )
            {
              ExFreePoolWithTag(v193, 0);
              v31[80].Flink = 0LL;
              v31[80].Blink = 0LL;
            }
            v194 = (struct _KEVENT *)v31[87].Flink;
            if ( v194 )
              KeSetEvent(v194, 0, 0);
            ExFreePoolWithTag(v31, 0);
            v28 = v196;
            v17 = v195;
          }
          v1 = v202;
          v29 = v201;
          continue;
        }
        v87 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v35, 0, v37, 0, 2, 60);
        v88 = v87;
        if ( v87 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v87 + 96));
          v89 = *(_QWORD *)(v88 + 2056);
          *(_QWORD *)(v88 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v88 + 1856) = 2234915;
          if ( v89 )
          {
            while ( 1 )
            {
              v90 = 0;
              v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v89 + 312));
              if ( !*(_BYTE *)(v89 + 322) )
              {
                v92 = *(_WORD *)(v89 + 320);
                if ( v92 < 0xFFEBu )
                {
                  v93 = *(_QWORD *)(v89 + 328);
                  *(_WORD *)(v89 + 320) = v92 + 1;
                  if ( v93 )
                  {
                    if ( *(_BYTE *)(v93 + 1) )
                    {
                      if ( *(_BYTE *)(v93 + 1) == 1 )
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v93 + 712), 1u);
                    }
                    else
                    {
                      v94 = 0LL;
                      if ( _bittestandset((signed __int32 *)(v93 + 16), 0xBu) )
                      {
                        v126 = *(_QWORD *)(v93 + 8);
                        if ( !v126 )
                          goto LABEL_449;
                        v127 = *(_BYTE *)(v93 + 3);
                        v128 = 0;
                        if ( !v127 )
                          goto LABEL_449;
                        do
                        {
                          v129 = (_BYTE *)(v126 + 2LL * v128);
                          if ( *v129 == 11 )
                          {
                            if ( v129[1] != 0xFF )
                            {
                              ++v129[1];
                              goto LABEL_145;
                            }
                          }
                          else if ( !v129[1] )
                          {
                            v94 = (_WORD *)(v126 + 2LL * v128);
                          }
                          ++v128;
                        }
                        while ( v128 < v127 );
                        if ( v94 )
                        {
                          *v94 = 267;
                        }
                        else
                        {
LABEL_449:
                          if ( !*(_BYTE *)(v93 + 1) )
                          {
                            v145 = *(_BYTE *)(v93 + 3);
                            if ( v145 == 0xFF )
                            {
                              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v93);
                              *(_BYTE *)(v93 + 1) = 2;
                            }
                            else
                            {
                              if ( (unsigned int)v145 + 2 <= 0xFF )
                                v146 = v145 + 2;
                              else
                                v146 = -1;
                              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v93, v146);
                            }
                          }
                          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v93);
                        }
                      }
                    }
                  }
LABEL_145:
                  v90 = 1;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v89 + 312), v91);
              if ( v90 )
                break;
              v89 = *(_QWORD *)(v89 + 112);
              if ( !v89 )
                goto LABEL_241;
            }
            v34 = *(_QWORD *)(v89 + 832);
          }
          else
          {
LABEL_241:
            v34 = *(_QWORD *)(v88 + 4096);
          }
          *(_QWORD *)(v88 + 520) = 0LL;
          *(_DWORD *)(v88 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v88 + 96));
          v95 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v88 + 96));
          v96 = *(_QWORD *)(v88 + 4960);
          *(_QWORD *)(v88 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v88 + 1856) = 71776;
          if ( v96 )
          {
            if ( *(_BYTE *)(v96 + 1) )
            {
              if ( *(_BYTE *)(v96 + 1) == 1 )
              {
                v147 = v96 + 136;
                v148 = *(_DWORD *)(v96 + 192);
                if ( v148 >> 17 < 0x3FFE && (unsigned __int16)v148 >> 1 == (v148 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v96 + 136));
                  *(_DWORD *)(v147 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v148 & 0xFFFE) == 0 && (v148 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v96, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v96 + 136), 0);
                }
              }
            }
            else
            {
              v97 = *(_QWORD *)(v96 + 8);
              if ( v97 && (v111 = *(_BYTE *)(v96 + 3), v112 = 0, v111) )
              {
                while ( 1 )
                {
                  v113 = (_BYTE *)(v97 + 2LL * v112);
                  if ( *v113 == 2 )
                  {
                    if ( v113[1] )
                      break;
                  }
                  if ( ++v112 >= v111 )
                    goto LABEL_151;
                }
                --v113[1];
              }
              else
              {
LABEL_151:
                if ( !_bittestandreset((signed __int32 *)(v96 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v96, 2uLL);
              }
            }
          }
          v52 = (*(_DWORD *)(v88 + 3164))-- == 1;
          if ( v52 )
          {
            v98 = *(struct _KEVENT **)(v88 + 3176);
            if ( v98 )
              KeSetEvent(v98, 0, 0);
          }
          *(_QWORD *)(v88 + 520) = 0LL;
          *(_DWORD *)(v88 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v88 + 96), v95);
          if ( (unsigned __int8)byte_1C00895DB >= 4u )
            WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v88);
          v99 = 0;
          v100 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v88 + 4496));
          v101 = *(_QWORD *)(v88 + 4952);
          v102 = v100;
          if ( v101 )
          {
            v103 = *(unsigned __int8 *)(v101 + 1);
            if ( *(_BYTE *)(v101 + 1) )
            {
              if ( v103 == 1 )
              {
                v149 = v101 + 3848;
                v150 = *(_DWORD *)(v101 + 3904);
                if ( v150 >> 17 < 0x3FFE && (unsigned __int16)v150 >> 1 == (v150 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v101 + 3848));
                  *(_DWORD *)(v149 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v150 & 0xFFFE) == 0 && (v150 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v88 + 4952), 0x3CuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v101 + 3848), 0);
                }
              }
            }
            else
            {
              v104 = *(_QWORD *)(v101 + 8);
              if ( v104 && (v105 = *(_BYTE *)(v101 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v106 = (_BYTE *)(v104 + 2LL * (unsigned __int8)v103);
                  if ( *v106 == 60 )
                  {
                    if ( v106[1] )
                      break;
                  }
                  LOBYTE(v103) = v103 + 1;
                  if ( (unsigned __int8)v103 >= v105 )
                    goto LABEL_163;
                }
                --v106[1];
              }
              else
              {
LABEL_163:
                if ( !_bittestandreset((signed __int32 *)(v101 + 20), 0x1Cu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v101, 0x3CuLL);
              }
            }
          }
          v52 = (*(_DWORD *)(v88 + 4504))-- == 1;
          if ( v52 )
            v99 = 1;
          if ( (unsigned __int8)byte_1C00895DB >= 4u )
            WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v88, *(unsigned int *)(v88 + 4504));
          KeReleaseSpinLock((PKSPIN_LOCK)(v88 + 4496), v102);
          if ( v99 )
          {
            v151 = *(struct _KEVENT **)(v88 + 1608);
            if ( v151 )
              KeSetEvent(v151, 0, 0);
          }
          if ( (unsigned __int8)byte_1C00895DB >= 4u )
            WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v88);
          v11 = HIDWORD(v212);
        }
        v107 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        v31 = v205;
        v108 = v107;
        v109 = (ULONG_PTR)v205[90].Blink;
        if ( v109 )
        {
          if ( *(_BYTE *)(v109 + 1) )
          {
            if ( *(_BYTE *)(v109 + 1) == 1 )
            {
              v152 = v109 + 200;
              v153 = *(_DWORD *)(v109 + 256);
              if ( v153 >> 17 < 0x3FFE && (unsigned __int16)v153 >> 1 == (v153 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v109 + 200));
                *(_DWORD *)(v152 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v153 & 0xFFFE) == 0 && (v153 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v109, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v109 + 200), 0);
              }
            }
          }
          else
          {
            v110 = *(_QWORD *)(v109 + 8);
            if ( v110 && (v115 = *(_BYTE *)(v109 + 3), v116 = 0, v115) )
            {
              while ( 1 )
              {
                v117 = (_BYTE *)(v110 + 2LL * v116);
                if ( *v117 == 3 )
                {
                  if ( v117[1] )
                    break;
                }
                if ( ++v116 >= v115 )
                  goto LABEL_175;
              }
              --v117[1];
            }
            else
            {
LABEL_175:
              if ( !_bittestandreset((signed __int32 *)(v109 + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v109, 3uLL);
            }
          }
        }
        v52 = HIDWORD(v31[87].Blink)-- == 1;
        if ( v52 )
        {
          v154 = v31[88].Blink;
          if ( v154 )
          {
            v155 = (struct _KEVENT *)v154[256].Blink;
            if ( v155 )
              KeSetEvent(v155, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v108);
LABEL_82:
        if ( !v34 )
        {
          v2 = 0;
          goto LABEL_87;
        }
        v62 = *(_QWORD *)(v34 + 1440);
        if ( v62 )
        {
          if ( !*(_BYTE *)(v62 + 1) )
          {
            v2 = 0;
            v63 = 0LL;
            if ( _bittestandset((signed __int32 *)(v62 + 16), 7u) )
            {
              v122 = *(_QWORD *)(v62 + 8);
              if ( !v122 )
                goto LABEL_450;
              v123 = *(_BYTE *)(v62 + 3);
              v124 = 0;
              if ( !v123 )
                goto LABEL_450;
              do
              {
                v125 = (_BYTE *)(v122 + 2LL * v124);
                if ( *v125 == 7 )
                {
                  if ( v125[1] != 0xFF )
                  {
                    ++v125[1];
                    goto LABEL_86;
                  }
                }
                else if ( !v125[1] )
                {
                  v63 = (_WORD *)(v122 + 2LL * v124);
                }
                ++v124;
              }
              while ( v124 < v123 );
              if ( v63 )
              {
                *v63 = 263;
              }
              else
              {
LABEL_450:
                if ( !*(_BYTE *)(v62 + 1) )
                {
                  v163 = *(_BYTE *)(v62 + 3);
                  if ( v163 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v62);
                    *(_BYTE *)(v62 + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v163 + 2 <= 0xFF )
                      v164 = v163 + 2;
                    else
                      v164 = -1;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v62, v164);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v62);
              }
            }
            goto LABEL_86;
          }
          if ( *(_BYTE *)(v62 + 1) == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v62 + 456), 1u);
        }
        v2 = 0;
LABEL_86:
        ++*(_DWORD *)(v34 + 1304);
        goto LABEL_87;
      }
      v28 = v28->Flink;
      v17 = v195;
      v196 = v28;
    }
    else
    {
      v28 = v28->Flink;
      v17 = v195;
      v196 = v28;
    }
  }
  *((_DWORD *)v20 + 22) = v29;
  if ( v29 > v1 )
    v2 = 261;
LABEL_24:
  KeReleaseSpinLock(&ndisIfListLock, v17);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(85LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v20, v2);
  return v2;
}
