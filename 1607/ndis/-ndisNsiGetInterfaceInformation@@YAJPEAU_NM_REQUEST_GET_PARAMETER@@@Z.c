/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisIfDeleteStackEntries @ 0x1C0012370 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0012AA4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015C58 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0040754 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
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

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // rsi
  struct _NDIS_IF_BLOCK *TopIfBlockFromMiniport; // r13
  int v3; // r12d
  struct _NM_REQUEST_GET_PARAMETER *v4; // r14
  union _NET_LUID_LH *v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  union _NET_LUID_LH v7; // rbx
  unsigned int *ThreadProperty; // rcx
  unsigned int v9; // edi
  PACCESS_TOKEN v10; // rax
  void *v11; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // r14d
  KIRQL v14; // al
  _LIST_ENTRY *v15; // rdx
  KIRQL v16; // r8
  _LIST_ENTRY *i; // rax
  unsigned int Flink; // ecx
  KIRQL v19; // al
  int v20; // ecx
  KIRQL v21; // r15
  _LIST_ENTRY *j; // rax
  _LIST_ENTRY *v23; // rdx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rdx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  _WORD *v26; // rdx
  char v27; // bl
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v29; // r14
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // rbx
  _WORD *v31; // rdx
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rdi
  KSPIN_LOCK *v35; // r12
  __int64 v36; // r13
  KIRQL v37; // r15
  unsigned __int16 v38; // cx
  __int64 v39; // rbx
  _WORD *v40; // rdx
  KIRQL v41; // r14
  ULONG_PTR v42; // r8
  __int64 v43; // rcx
  unsigned __int8 v44; // r9
  unsigned __int8 v45; // dl
  bool v46; // zf
  struct _KEVENT *v47; // rcx
  KIRQL v48; // al
  ULONG_PTR v49; // r8
  KIRQL v50; // r15
  __int64 v51; // rcx
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // dl
  KIRQL v54; // al
  ULONG_PTR v55; // r8
  KIRQL v56; // di
  __int64 v57; // rax
  NDIS_REFCOUNT_HANDLE__ *v58; // rbx
  _WORD *v59; // rdx
  __int64 v60; // rax
  int v61; // eax
  int InterfaceRodInformation; // eax
  KIRQL v63; // r15
  __int64 p_DeferredContext; // rbx
  KIRQL v65; // al
  ULONG_PTR v66; // r8
  KIRQL v67; // r14
  __int64 v68; // rax
  unsigned __int8 v69; // r9
  unsigned __int8 v70; // dl
  ULONG_PTR v71; // r8
  __int64 v72; // rax
  unsigned __int8 v73; // r9
  unsigned __int8 v74; // dl
  ULONG_PTR v75; // r8
  int v76; // ecx
  __int64 v77; // rax
  unsigned __int8 v78; // r9
  unsigned __int8 v79; // dl
  NTSTATUS v81; // edi
  __int64 v82; // r10
  unsigned __int8 v83; // r9
  unsigned __int8 v84; // r8
  _BYTE *v85; // rcx
  unsigned __int8 v86; // r9
  unsigned __int8 v87; // dl
  __int64 v88; // r10
  unsigned __int8 v89; // r9
  unsigned __int8 v90; // r8
  _BYTE *v91; // rcx
  __int64 v92; // r10
  unsigned __int8 v93; // r9
  unsigned __int8 v94; // r8
  _BYTE *v95; // rcx
  unsigned __int8 v96; // dl
  unsigned __int8 v97; // dl
  unsigned __int8 v98; // dl
  unsigned __int8 v99; // dl
  unsigned __int8 v100; // dl
  unsigned __int8 v101; // dl
  int v102; // eax
  unsigned int v103; // eax
  KIRQL v104; // r8
  int v105; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v107; // rcx
  __int64 v108; // r10
  unsigned __int8 v109; // r9
  unsigned __int8 v110; // r8
  _BYTE *v111; // rcx
  unsigned __int8 v112; // dl
  unsigned __int8 v113; // dl
  ULONG_PTR v114; // rbx
  unsigned int v115; // edx
  ULONG_PTR v116; // rbx
  unsigned int v117; // edx
  struct _KEVENT *v118; // rcx
  ULONG_PTR v119; // rbx
  unsigned int v120; // edx
  _NDIS_MINIPORT_BLOCK *v121; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  ULONG_PTR v123; // rdi
  unsigned int v124; // edx
  ULONG_PTR v125; // rbx
  unsigned int v126; // edx
  unsigned int ifIndex; // ebx
  _LIST_ENTRY *v128; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v130; // rdx
  _LIST_ENTRY *v131; // rcx
  _LIST_ENTRY *v132; // rdx
  _LIST_ENTRY *v133; // rcx
  __int64 v134; // rcx
  NDIS_REFCOUNT_HANDLE__ *v135; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v139; // rbx
  unsigned int v140; // edx
  unsigned int v141; // ebx
  _LIST_ENTRY *v142; // rdx
  _LIST_ENTRY *v143; // rcx
  _LIST_ENTRY *v144; // rdx
  _LIST_ENTRY *v145; // rcx
  _LIST_ENTRY *v146; // rdx
  _LIST_ENTRY *v147; // rcx
  __int64 v148; // rcx
  NDIS_REFCOUNT_HANDLE__ *v149; // rcx
  _IF_COUNTED_STRING_LH *v150; // rcx
  _NDIS_IF_RCV_ADDRESS *v151; // rcx
  struct _KEVENT *v152; // rcx
  KIRQL v153; // [rsp+30h] [rbp-40h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-3Fh] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+32h] [rbp-3Eh] BYREF
  int v156; // [rsp+34h] [rbp-3Ch]
  struct _NM_REQUEST_GET_PARAMETER *v157; // [rsp+38h] [rbp-38h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-28h] BYREF
  __int64 v160; // [rsp+50h] [rbp-20h] BYREF
  __int128 v161; // [rsp+58h] [rbp-18h]

  v157 = a1;
  v1 = 0LL;
  v156 = 0;
  TopIfBlockFromMiniport = 0LL;
  v3 = 0;
  v4 = a1;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(72LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v4 + 6) != 8 || !*((_DWORD *)v4 + 12) || !*((_QWORD *)v4 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_104;
  }
  v5 = (union _NET_LUID_LH *)*((_QWORD *)v4 + 2);
  CurrentThread = KeGetCurrentThread();
  v160 = 0LL;
  v161 = 0uLL;
  v7.Value = v5->Value;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    v103 = ThreadProperty[1];
    HIDWORD(v160) = *ThreadProperty;
    LODWORD(v160) = v103;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v9 = 0;
    v160 = 0LL;
  }
  if ( !v9 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v10 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v11 = v10;
      if ( v10 )
      {
        v81 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v11);
        if ( v81 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_13;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_13:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v9 = 0;
      v104 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v9 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v104);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v9 = 1;
    }
    v4 = v157;
    HIDWORD(v160) = v9;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = 0LL;
  v16 = v14;
  for ( i = ndisIfCompartmentList.Flink; i != &ndisIfCompartmentList; i = i->Flink )
  {
    Flink = (unsigned int)i[1].Flink;
    if ( Flink == v9 )
    {
      v15 = i;
      break;
    }
    if ( Flink > v9 )
      break;
  }
  v161 = *(__int128 *)((char *)&v15[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v16);
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = *((_DWORD *)v4 + 14);
  v21 = v19;
  v153 = v19;
  if ( v20 )
  {
    v105 = v20 - 1;
    if ( v105 )
    {
      if ( v105 == 1 )
        goto LABEL_226;
      v3 = -1073741808;
    }
    else
    {
      v7.Value = 0LL;
LABEL_226:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v7);
        v1 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v7.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(NextInterfaceByNetLuid->Compartment, &v160, 0LL) )
          goto LABEL_32;
      }
    }
  }
  else
  {
    for ( j = ndisIfList.Flink; j != &ndisIfList; j = j->Flink )
    {
      v23 = j[5].Flink;
      if ( v23 == (_LIST_ENTRY *)v7.Value )
      {
        v1 = (struct _NDIS_IF_BLOCK *)&j[-77];
        break;
      }
      if ( (unsigned __int64)v23 > v7.Value )
        break;
    }
    if ( v1 )
    {
      Compartment = v1->Compartment;
      if ( v9 != Compartment->CompartmentId )
      {
        v107 = v161 - *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1;
        if ( (_QWORD)v161 == *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1 )
          v107 = *((_QWORD *)&v161 + 1) - *(_QWORD *)Compartment->LoopbackInfo.NamespaceGuid.Data4;
        if ( v107 && ((Compartment->LoopbackInfo.Flags & 2) != 0 || v9 != 1) )
          v1 = 0LL;
      }
LABEL_32:
      if ( v1 )
      {
        RefCountTracker = v1->RefCountTracker;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 18), 1u);
          }
          else
          {
            v26 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 1u) )
            {
              v88 = *((_QWORD *)RefCountTracker + 1);
              if ( v88 && (v89 = *((_BYTE *)RefCountTracker + 3), v90 = 0, v89) )
              {
                do
                {
                  v91 = (_BYTE *)(v88 + 2LL * v90);
                  if ( *v91 == 1 )
                  {
                    if ( v91[1] != 0xFF )
                    {
                      ++v91[1];
                      goto LABEL_36;
                    }
                  }
                  else if ( !v91[1] )
                  {
                    v26 = (_WORD *)(v88 + 2LL * v90);
                  }
                  ++v90;
                }
                while ( v90 < v89 );
                if ( !v26 )
                  goto LABEL_200;
                *v26 = 257;
              }
              else
              {
LABEL_200:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v100 = *((_BYTE *)RefCountTracker + 3);
                  if ( v100 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v100 + 2 > 0xFF )
                      v101 = -1;
                    else
                      v101 = v100 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v101);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_36:
        ++v1->Ref;
        v27 = 0;
        if ( !v1->bNdisIsProvider || *((_QWORD *)v4 + 1) >= 2uLL )
          goto LABEL_95;
        Miniport = 0LL;
        v29 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        if ( v1->MiniportAvailable )
        {
          MpRefCountTracker = v1->MpRefCountTracker;
          Miniport = v1->Miniport;
          if ( MpRefCountTracker )
          {
            if ( *((_BYTE *)MpRefCountTracker + 1) )
            {
              if ( *((_BYTE *)MpRefCountTracker + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 50), 1u);
            }
            else
            {
              v31 = 0LL;
              if ( _bittestandset((signed __int32 *)MpRefCountTracker + 4, 3u) )
              {
                v108 = *((_QWORD *)MpRefCountTracker + 1);
                if ( !v108 )
                  goto LABEL_368;
                v109 = *((_BYTE *)MpRefCountTracker + 3);
                v110 = 0;
                if ( !v109 )
                  goto LABEL_368;
                do
                {
                  v111 = (_BYTE *)(v108 + 2LL * v110);
                  if ( *v111 == 3 )
                  {
                    if ( v111[1] != 0xFF )
                    {
                      ++v111[1];
                      goto LABEL_42;
                    }
                  }
                  else if ( !v111[1] )
                  {
                    v31 = (_WORD *)(v108 + 2LL * v110);
                  }
                  ++v110;
                }
                while ( v110 < v109 );
                if ( v31 )
                {
                  *v31 = 259;
                }
                else
                {
LABEL_368:
                  if ( !*((_BYTE *)MpRefCountTracker + 1) )
                  {
                    v112 = *((_BYTE *)MpRefCountTracker + 3);
                    if ( v112 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)MpRefCountTracker);
                      *((_BYTE *)MpRefCountTracker + 1) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v112 + 2 <= 0xFF )
                        v113 = v112 + 2;
                      else
                        v113 = -1;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)MpRefCountTracker, v113);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MpRefCountTracker);
                }
              }
            }
          }
LABEL_42:
          ++v1->MiniportLinkReference;
          v27 = 0;
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v29);
        if ( Miniport )
        {
          v33 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Miniport, 0, v32, 0, 2, 60);
          v34 = v33;
          if ( v33 )
          {
            v35 = (KSPIN_LOCK *)(v33 + 96);
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v33 + 96));
            v36 = *(_QWORD *)(v34 + 2056);
            *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v34 + 1856) = 2234915;
            if ( !v36 )
              goto LABEL_145;
            while ( 1 )
            {
              v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 312));
              if ( !*(_BYTE *)(v36 + 322) )
              {
                v38 = *(_WORD *)(v36 + 320);
                if ( v38 < 0xFFEBu )
                {
                  v39 = *(_QWORD *)(v36 + 328);
                  *(_WORD *)(v36 + 320) = v38 + 1;
                  if ( v39 )
                  {
                    if ( *(_BYTE *)(v39 + 1) )
                    {
                      if ( *(_BYTE *)(v39 + 1) == 1 )
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v39 + 712), 1u);
                    }
                    else
                    {
                      v40 = 0LL;
                      if ( _bittestandset((signed __int32 *)(v39 + 16), 0xBu) )
                      {
                        v82 = *(_QWORD *)(v39 + 8);
                        if ( v82 && (v83 = *(_BYTE *)(v39 + 3), v84 = 0, v83) )
                        {
                          do
                          {
                            v85 = (_BYTE *)(v82 + 2LL * v84);
                            if ( *v85 == 11 )
                            {
                              if ( v85[1] != 0xFF )
                              {
                                ++v85[1];
                                goto LABEL_51;
                              }
                            }
                            else if ( !v85[1] )
                            {
                              v40 = (_WORD *)(v82 + 2LL * v84);
                            }
                            ++v84;
                          }
                          while ( v84 < v83 );
                          if ( !v40 )
                            goto LABEL_188;
                          *v40 = 267;
                        }
                        else
                        {
LABEL_188:
                          if ( !*(_BYTE *)(v39 + 1) )
                          {
                            v96 = *(_BYTE *)(v39 + 3);
                            if ( v96 == 0xFF )
                            {
                              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v39);
                              *(_BYTE *)(v39 + 1) = 2;
                            }
                            else
                            {
                              if ( (unsigned int)v96 + 2 > 0xFF )
                                v97 = -1;
                              else
                                v97 = v96 + 2;
                              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v39, v97);
                            }
                          }
                          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v39);
                        }
                      }
                    }
                  }
LABEL_51:
                  v27 = 1;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 312), v37);
              if ( v27 )
                break;
              v36 = *(_QWORD *)(v36 + 112);
              v27 = 0;
              if ( !v36 )
                goto LABEL_54;
            }
            v27 = 0;
LABEL_54:
            v35 = (KSPIN_LOCK *)(v34 + 96);
            if ( v36 )
              TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v36 + 832);
            else
LABEL_145:
              TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v34 + 4096);
            *(_QWORD *)(v34 + 520) = 0LL;
            *(_DWORD *)(v34 + 1856) = 0;
            KeReleaseSpinLockFromDpcLevel(v35);
            v41 = KeAcquireSpinLockRaiseToDpc(v35);
            v42 = *(_QWORD *)(v34 + 4960);
            *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v34 + 1856) = 71776;
            if ( v42 )
            {
              if ( *(_BYTE *)(v42 + 1) )
              {
                if ( *(_BYTE *)(v42 + 1) == 1 )
                {
                  v114 = v42 + 136;
                  v115 = *(_DWORD *)(v42 + 192);
                  if ( v115 >> 17 < 0x3FFE && (unsigned __int16)v115 >> 1 == (v115 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v42 + 136));
                    *(_DWORD *)(v114 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v115 & 0xFFFE) == 0 && (v115 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v42, 2uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v42 + 136), 0);
                  }
                  v27 = 0;
                }
              }
              else
              {
                v43 = *(_QWORD *)(v42 + 8);
                if ( v43 && (v44 = *(_BYTE *)(v42 + 3), v45 = 0, v44) )
                {
                  while ( *(_BYTE *)(v43 + 2LL * v45) != 2 || !*(_BYTE *)(v43 + 2LL * v45 + 1) )
                  {
                    if ( ++v45 >= v44 )
                      goto LABEL_62;
                  }
                  --*(_BYTE *)(v43 + 2LL * v45 + 1);
                }
                else
                {
LABEL_62:
                  if ( !_bittestandreset((signed __int32 *)(v42 + 16), 2u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v42, 2uLL);
                }
              }
            }
            v46 = (*(_DWORD *)(v34 + 3164))-- == 1;
            if ( v46 )
            {
              v47 = *(struct _KEVENT **)(v34 + 3176);
              if ( v47 )
                KeSetEvent(v47, 0, 0);
            }
            *(_QWORD *)(v34 + 520) = 0LL;
            *(_DWORD *)(v34 + 1856) = 0;
            KeReleaseSpinLock(v35, v41);
            if ( (unsigned __int8)byte_1C00895DB >= 4u )
              WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v34);
            v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 4496));
            v49 = *(_QWORD *)(v34 + 4952);
            v50 = v48;
            if ( v49 )
            {
              if ( *(_BYTE *)(v49 + 1) )
              {
                if ( *(_BYTE *)(v49 + 1) == 1 )
                {
                  v116 = v49 + 3848;
                  v117 = *(_DWORD *)(v49 + 3904);
                  if ( v117 >> 17 < 0x3FFE && (unsigned __int16)v117 >> 1 == (v117 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 3848));
                    *(_DWORD *)(v116 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v117 & 0xFFFE) == 0 && (v117 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v49, 0x3CuLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 3848), 0);
                  }
                  v27 = 0;
                }
              }
              else
              {
                v51 = *(_QWORD *)(v49 + 8);
                if ( v51 && (v52 = *(_BYTE *)(v49 + 3), v53 = 0, v52) )
                {
                  while ( *(_BYTE *)(v51 + 2LL * v53) != 60 || !*(_BYTE *)(v51 + 2LL * v53 + 1) )
                  {
                    if ( ++v53 >= v52 )
                      goto LABEL_74;
                  }
                  --*(_BYTE *)(v51 + 2LL * v53 + 1);
                }
                else
                {
LABEL_74:
                  if ( !_bittestandreset((signed __int32 *)(v49 + 20), 0x1Cu) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v49, 0x3CuLL);
                }
              }
            }
            v46 = (*(_DWORD *)(v34 + 4504))-- == 1;
            if ( v46 )
              v27 = 1;
            if ( (unsigned __int8)byte_1C00895DB >= 4u )
              WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v34, *(unsigned int *)(v34 + 4504));
            KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 4496), v50);
            if ( v27 )
            {
              v118 = *(struct _KEVENT **)(v34 + 1608);
              if ( v118 )
                KeSetEvent(v118, 0, 0);
            }
            if ( (unsigned __int8)byte_1C00895DB >= 4u )
              WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v34);
            v3 = v156;
            v21 = v153;
          }
          else
          {
            TopIfBlockFromMiniport = 0LL;
          }
          v54 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          v55 = (ULONG_PTR)v1->MpRefCountTracker;
          v56 = v54;
          if ( v55 )
          {
            if ( *(_BYTE *)(v55 + 1) )
            {
              if ( *(_BYTE *)(v55 + 1) == 1 )
              {
                v119 = v55 + 200;
                v120 = *(_DWORD *)(v55 + 256);
                if ( v120 >> 17 < 0x3FFE && (unsigned __int16)v120 >> 1 == (v120 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 200));
                  *(_DWORD *)(v119 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v120 & 0xFFFE) == 0 && (v120 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v55, 3uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 200), 0);
                }
              }
            }
            else
            {
              v57 = *(_QWORD *)(v55 + 8);
              if ( v57 && (v86 = *(_BYTE *)(v55 + 3), v87 = 0, v86) )
              {
                while ( *(_BYTE *)(v57 + 2LL * v87) != 3 || !*(_BYTE *)(v57 + 2LL * v87 + 1) )
                {
                  if ( ++v87 >= v86 )
                    goto LABEL_86;
                }
                --*(_BYTE *)(v57 + 2LL * v87 + 1);
              }
              else
              {
LABEL_86:
                if ( !_bittestandreset((signed __int32 *)(v55 + 16), 3u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v55, 3uLL);
              }
            }
          }
          v46 = v1->MiniportLinkReference-- == 1;
          if ( v46 )
          {
            v121 = v1->Miniport;
            if ( v121 )
            {
              IfBlockPointerRefZeroEvent = v121->IfBlockPointerRefZeroEvent;
              if ( IfBlockPointerRefZeroEvent )
                KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
            }
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v56);
        }
        else
        {
          if ( !v1->IsNdisFilter )
          {
LABEL_94:
            v4 = v157;
LABEL_95:
            **((_QWORD **)v4 + 2) = v1->NetLuid.Value;
            goto LABEL_96;
          }
          TopIfBlockFromMiniport = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v1->Miniport->Reserved4.Length);
        }
        if ( TopIfBlockFromMiniport )
        {
          v58 = TopIfBlockFromMiniport->RefCountTracker;
          if ( v58 )
          {
            if ( *((_BYTE *)v58 + 1) )
            {
              if ( *((_BYTE *)v58 + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v58 + 34), 1u);
            }
            else
            {
              v59 = 0LL;
              if ( _bittestandset((signed __int32 *)v58 + 4, 2u) )
              {
                v92 = *((_QWORD *)v58 + 1);
                if ( v92 && (v93 = *((_BYTE *)v58 + 3), v94 = 0, v93) )
                {
                  do
                  {
                    v95 = (_BYTE *)(v92 + 2LL * v94);
                    if ( *v95 == 2 )
                    {
                      if ( v95[1] != 0xFF )
                      {
                        ++v95[1];
                        goto LABEL_93;
                      }
                    }
                    else if ( !v95[1] )
                    {
                      v59 = (_WORD *)(v92 + 2LL * v94);
                    }
                    ++v94;
                  }
                  while ( v94 < v93 );
                  if ( !v59 )
                    goto LABEL_194;
                  *v59 = 258;
                }
                else
                {
LABEL_194:
                  if ( !*((_BYTE *)v58 + 1) )
                  {
                    v98 = *((_BYTE *)v58 + 3);
                    if ( v98 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v58);
                      *((_BYTE *)v58 + 1) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v98 + 2 > 0xFF )
                        v99 = -1;
                      else
                        v99 = v98 + 2;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v58, v99);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v58);
                }
              }
            }
          }
LABEL_93:
          ++TopIfBlockFromMiniport->Ref;
        }
        goto LABEL_94;
      }
    }
  }
LABEL_96:
  KeReleaseSpinLock(&ndisIfListLock, v21);
  if ( v3 < 0 )
    goto LABEL_104;
  if ( v1 )
  {
    v60 = *((_QWORD *)v4 + 1);
    v3 = -1073741811;
    if ( !v60 || v60 == 12 )
    {
      v61 = *((_DWORD *)v4 + 8);
      if ( v61 )
      {
        if ( v61 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v1, TopIfBlockFromMiniport, v4);
        }
        else
        {
          if ( v61 != 2 )
            goto LABEL_104;
          InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v1, TopIfBlockFromMiniport, v4);
        }
      }
      else
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v1, TopIfBlockFromMiniport, v4);
      }
      goto LABEL_103;
    }
    if ( v60 == 1 || v60 == 13 )
    {
      v102 = *((_DWORD *)v4 + 8);
      if ( v102 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v1, TopIfBlockFromMiniport, v4);
        goto LABEL_103;
      }
      if ( v102 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v1, TopIfBlockFromMiniport, v4);
LABEL_103:
        v3 = InterfaceRodInformation;
      }
    }
  }
  else
  {
    v3 = *((_DWORD *)v4 + 14) != 0 ? -2147483622 : -1073741772;
  }
LABEL_104:
  v63 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( TopIfBlockFromMiniport )
  {
    if ( TopIfBlockFromMiniport->IsNdisFilter )
    {
      p_DeferredContext = (__int64)&TopIfBlockFromMiniport->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
      v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
      v66 = *(_QWORD *)(p_DeferredContext + 16);
      v67 = v65;
      if ( v66 )
      {
        if ( *(_BYTE *)(v66 + 1) )
        {
          if ( *(_BYTE *)(v66 + 1) == 1 )
          {
            v123 = v66 + 712;
            v124 = *(_DWORD *)(v66 + 768);
            if ( v124 >> 17 < 0x3FFE && (unsigned __int16)v124 >> 1 == (v124 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v66 + 712));
              *(_DWORD *)(v123 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v124 & 0xFFFE) == 0 && (v124 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v66 + 712), 0);
            }
          }
        }
        else
        {
          v68 = *(_QWORD *)(v66 + 8);
          if ( v68 && (v69 = *(_BYTE *)(v66 + 3), v70 = 0, v69) )
          {
            while ( *(_BYTE *)(v68 + 2LL * v70) != 11 || !*(_BYTE *)(v68 + 2LL * v70 + 1) )
            {
              if ( ++v70 >= v69 )
                goto LABEL_113;
            }
            --*(_BYTE *)(v68 + 2LL * v70 + 1);
          }
          else
          {
LABEL_113:
            if ( !_bittestandreset((signed __int32 *)(v66 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
          }
        }
      }
      v46 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
      if ( v46 && !*(_BYTE *)(p_DeferredContext + 11) )
      {
        NdisFreeRefCount(*(PVOID *)(p_DeferredContext + 16));
        *(_QWORD *)(p_DeferredContext + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v67);
      v4 = v157;
    }
    v71 = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
    if ( v71 )
    {
      if ( *(_BYTE *)(v71 + 1) )
      {
        if ( *(_BYTE *)(v71 + 1) == 1 )
        {
          v125 = v71 + 136;
          v126 = *(_DWORD *)(v71 + 192);
          if ( v126 >> 17 < 0x3FFE && (unsigned __int16)v126 >> 1 == (v126 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v71 + 136));
            *(_DWORD *)(v125 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v126 & 0xFFFE) == 0 && (v126 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v71, 2uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v71 + 136), 0);
          }
        }
      }
      else
      {
        v72 = *(_QWORD *)(v71 + 8);
        if ( v72 && (v73 = *(_BYTE *)(v71 + 3), v74 = 0, v73) )
        {
          while ( *(_BYTE *)(v72 + 2LL * v74) != 2 || !*(_BYTE *)(v72 + 2LL * v74 + 1) )
          {
            if ( ++v74 >= v73 )
              goto LABEL_124;
          }
          --*(_BYTE *)(v72 + 2LL * v74 + 1);
        }
        else
        {
LABEL_124:
          if ( !_bittestandreset((signed __int32 *)(v71 + 16), 2u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v71, 2uLL);
        }
      }
    }
    v46 = TopIfBlockFromMiniport->Ref-- == 1;
    if ( v46 )
    {
      ifIndex = TopIfBlockFromMiniport->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(TopIfBlockFromMiniport);
      *(_QWORD *)&TopIfBlockFromMiniport->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v128 = TopIfBlockFromMiniport->Link.Flink;
      Blink = TopIfBlockFromMiniport->Link.Blink;
      if ( v128->Blink != &TopIfBlockFromMiniport->Link || Blink->Flink != &TopIfBlockFromMiniport->Link )
        __fastfail(3u);
      Blink->Flink = v128;
      v128->Blink = Blink;
      v130 = TopIfBlockFromMiniport->ProviderLink.Flink;
      v131 = TopIfBlockFromMiniport->ProviderLink.Blink;
      if ( v130->Blink != &TopIfBlockFromMiniport->ProviderLink || v131->Flink != &TopIfBlockFromMiniport->ProviderLink )
        __fastfail(3u);
      v131->Flink = v130;
      v130->Blink = v131;
      v132 = TopIfBlockFromMiniport->NetworkLink.Flink;
      v133 = TopIfBlockFromMiniport->NetworkLink.Blink;
      if ( v132->Blink != &TopIfBlockFromMiniport->NetworkLink || v133->Flink != &TopIfBlockFromMiniport->NetworkLink )
        __fastfail(3u);
      v133->Flink = v132;
      v132->Blink = v133;
      NETWORKBLOCK_DECREMENT_REF(TopIfBlockFromMiniport->Network);
      v134 = (ifIndex - 1) >> 3;
      if ( IfUsedIfIndicesLength >= (int)v134 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v134) = *((_BYTE *)IfUsedIfIndicesData + v134) & ~(1 << ((ifIndex - 1) & 7));
      v135 = TopIfBlockFromMiniport->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v135);
      ifL2NetworkInfo = TopIfBlockFromMiniport->ifL2NetworkInfo;
      TopIfBlockFromMiniport->RefCountTracker = 0LL;
      if ( ifL2NetworkInfo )
      {
        ExFreePoolWithTag(ifL2NetworkInfo, 0);
        TopIfBlockFromMiniport->ifL2NetworkInfo = 0LL;
      }
      ifRcvAddressTable = TopIfBlockFromMiniport->ifRcvAddressTable;
      if ( ifRcvAddressTable )
      {
        ExFreePoolWithTag(ifRcvAddressTable, 0);
        TopIfBlockFromMiniport->ifRcvAddressTable = 0LL;
        *(_QWORD *)&TopIfBlockFromMiniport->ifRcvAddressCount = 0LL;
      }
      AsyncEvent = TopIfBlockFromMiniport->AsyncEvent;
      if ( AsyncEvent )
        KeSetEvent(AsyncEvent, 0, 0);
      ExFreePoolWithTag(TopIfBlockFromMiniport, 0);
    }
  }
  if ( v1 )
  {
    v75 = (ULONG_PTR)v1->RefCountTracker;
    if ( v75 )
    {
      v76 = *(unsigned __int8 *)(v75 + 1);
      if ( *(_BYTE *)(v75 + 1) )
      {
        if ( v76 == 1 )
        {
          v139 = v75 + 72;
          v140 = *(_DWORD *)(v75 + 128);
          if ( v140 >> 17 < 0x3FFE && (unsigned __int16)v140 >> 1 == (v140 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v75 + 72));
            *(_DWORD *)(v139 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v140 & 0xFFFE) == 0 && (v140 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v75, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v75 + 72), 0);
          }
        }
      }
      else
      {
        v77 = *(_QWORD *)(v75 + 8);
        if ( v77 && (v78 = *(_BYTE *)(v75 + 3), v79 = 0, v78) )
        {
          while ( *(_BYTE *)(v77 + 2LL * v79) != (_BYTE)v76 + 1 || !*(_BYTE *)(v77 + 2LL * v79 + 1) )
          {
            v79 += v76 + 1;
            if ( v79 >= v78 )
              goto LABEL_133;
          }
          --*(_BYTE *)(v77 + 2LL * v79 + 1);
        }
        else
        {
LABEL_133:
          if ( !_bittestandreset((signed __int32 *)(v75 + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v75, (unsigned int)(v76 + 1));
        }
      }
    }
    v46 = v1->Ref-- == 1;
    if ( v46 )
    {
      v141 = v1->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v1);
      *(_QWORD *)&v1->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v142 = v1->Link.Flink;
      v143 = v1->Link.Blink;
      if ( v142->Blink != &v1->Link || v143->Flink != &v1->Link )
        __fastfail(3u);
      v143->Flink = v142;
      v142->Blink = v143;
      v144 = v1->ProviderLink.Flink;
      v145 = v1->ProviderLink.Blink;
      if ( v144->Blink != &v1->ProviderLink || v145->Flink != &v1->ProviderLink )
        __fastfail(3u);
      v145->Flink = v144;
      v144->Blink = v145;
      v146 = v1->NetworkLink.Flink;
      v147 = v1->NetworkLink.Blink;
      if ( v146->Blink != &v1->NetworkLink || v147->Flink != &v1->NetworkLink )
        __fastfail(3u);
      v147->Flink = v146;
      v146->Blink = v147;
      NETWORKBLOCK_DECREMENT_REF(v1->Network);
      v148 = (v141 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= (int)v148 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v148) = *((_BYTE *)IfUsedIfIndicesData + v148) & ~(1 << ((v141 - 1) & 7));
      v149 = v1->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v149);
      v150 = v1->ifL2NetworkInfo;
      v1->RefCountTracker = 0LL;
      if ( v150 )
      {
        ExFreePoolWithTag(v150, 0);
        v1->ifL2NetworkInfo = 0LL;
      }
      v151 = v1->ifRcvAddressTable;
      if ( v151 )
      {
        ExFreePoolWithTag(v151, 0);
        v1->ifRcvAddressTable = 0LL;
        *(_QWORD *)&v1->ifRcvAddressCount = 0LL;
      }
      v152 = v1->AsyncEvent;
      if ( v152 )
        KeSetEvent(v152, 0, 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v63);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(73LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v4, (unsigned int)v3);
  return (unsigned int)v3;
}
