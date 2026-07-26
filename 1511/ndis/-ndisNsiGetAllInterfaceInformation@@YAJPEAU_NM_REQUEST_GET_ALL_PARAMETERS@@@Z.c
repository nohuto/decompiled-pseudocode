/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
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
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00956F0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00959C0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095F04 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0096420 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  _LIST_ENTRY *v1; // rsi
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v2; // rdi
  __int64 v3; // r13
  struct _KTHREAD *CurrentThread; // r15
  _LIST_ENTRY *v5; // rbx
  int *ThreadProperty; // rax
  int v7; // r12d
  PACCESS_TOKEN v8; // rax
  void *v9; // r14
  NTSTATUS v10; // edi
  unsigned int ThreadSessionId; // edi
  int v12; // r14d
  KIRQL v13; // al
  int v14; // ecx
  KIRQL v15; // r15
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *Blink; // rbx
  KIRQL v19; // di
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  char v24; // r15
  KIRQL v25; // r13
  unsigned __int16 v26; // cx
  KIRQL v27; // r15
  ULONG_PTR v28; // r8
  __int64 v29; // rdx
  bool v30; // zf
  struct _KEVENT *v31; // rcx
  char v32; // r15
  KIRQL v33; // al
  ULONG_PTR v34; // r8
  KIRQL v35; // r12
  int v36; // ecx
  __int64 v37; // r10
  unsigned __int8 v38; // r9
  _BYTE *v39; // rdx
  int v40; // r12d
  __int64 v41; // rax
  KIRQL v42; // r15
  __int64 v43; // rbx
  KIRQL v44; // al
  ULONG_PTR v45; // r8
  KIRQL v46; // di
  int v47; // ecx
  __int64 v48; // r10
  unsigned __int8 v49; // r9
  _BYTE *v50; // rdx
  ULONG_PTR v51; // r8
  int v52; // ecx
  __int64 v53; // r9
  unsigned __int8 v54; // dl
  _BYTE *v55; // r10
  ULONG_PTR v56; // r8
  int v57; // ecx
  __int64 v58; // rdx
  unsigned __int8 v59; // r9
  _BYTE *v60; // r10
  __int64 v62; // rax
  __int64 v63; // rbx
  KSPIN_LOCK *v64; // rdi
  __int64 v65; // r14
  char v66; // r15
  KIRQL v67; // r13
  unsigned __int16 v68; // cx
  KIRQL v69; // r15
  ULONG_PTR v70; // r8
  __int64 v71; // rdx
  struct _KEVENT *v72; // rcx
  char v73; // r15
  KIRQL v74; // al
  ULONG_PTR v75; // r8
  KIRQL v76; // r12
  int v77; // ecx
  __int64 v78; // r10
  unsigned __int8 v79; // r9
  _BYTE *v80; // rdx
  KIRQL v81; // al
  ULONG_PTR v82; // r8
  KIRQL v83; // bl
  __int64 v84; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v87; // rcx
  unsigned __int8 v88; // r10
  unsigned __int8 v89; // cl
  _BYTE *v90; // r9
  unsigned __int8 v91; // r10
  unsigned __int8 v92; // cl
  _BYTE *v93; // r9
  unsigned __int8 v94; // r10
  unsigned __int8 v95; // dl
  _BYTE *v96; // r9
  KIRQL v97; // r8
  ULONG_PTR v98; // r14
  unsigned int v99; // edx
  ULONG_PTR v100; // r14
  unsigned int v101; // edx
  struct _KEVENT *v102; // rcx
  ULONG_PTR v103; // rdi
  unsigned int v104; // edx
  _LIST_ENTRY *v105; // rax
  struct _KEVENT *v106; // rcx
  ULONG_PTR v107; // r14
  unsigned int v108; // edx
  ULONG_PTR v109; // r14
  unsigned int v110; // edx
  struct _KEVENT *v111; // rcx
  ULONG_PTR v112; // r14
  unsigned int v113; // edx
  ULONG_PTR v114; // rbx
  unsigned int v115; // edx
  int v116; // ebx
  __int64 v117; // rdx
  _QWORD *v118; // rcx
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  __int64 v121; // rdx
  _QWORD *v122; // rcx
  unsigned int v123; // ecx
  void *v124; // rcx
  void *v125; // rcx
  void *v126; // rcx
  struct _KEVENT *v127; // rcx
  ULONG_PTR v128; // rbx
  unsigned int v129; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v131; // rdx
  _LIST_ENTRY *v132; // rcx
  _LIST_ENTRY *v133; // rdx
  _LIST_ENTRY *v134; // rcx
  _LIST_ENTRY *v135; // rdx
  _LIST_ENTRY *v136; // rcx
  unsigned int v137; // ecx
  _LIST_ENTRY *v138; // rcx
  _LIST_ENTRY *v139; // rcx
  _LIST_ENTRY *v140; // rcx
  struct _KEVENT *v141; // rcx
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+34h] [rbp-35h] BYREF
  PVOID TokenInformation; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v144[9]; // [rsp+40h] [rbp-29h] BYREF
  KIRQL v146; // [rsp+D8h] [rbp+6Fh]
  BOOLEAN EffectiveOnly; // [rsp+E0h] [rbp+77h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v2 = a1;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(80LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  memset(v144, 0, 0x40uLL);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 )
  {
    v40 = -1073741808;
    goto LABEL_71;
  }
  CurrentThread = KeGetCurrentThread();
  v5 = (_LIST_ENTRY *)**((_QWORD **)v2 + 2);
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x734E774EuLL, 0);
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    v7 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
    if ( v12 )
      goto LABEL_15;
  }
  else
  {
    v7 = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    goto LABEL_142;
  }
  v8 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v9 = v8;
  if ( !v8
    || (v10 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v9),
        v10 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_142:
    ThreadSessionId = CurrentProcessSessionId;
    goto LABEL_10;
  }
  ThreadSessionId = (unsigned int)TokenInformation;
LABEL_10:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v12 = 0;
    v97 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v12 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v97);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  v2 = a1;
LABEL_15:
  v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v14 = *((_DWORD *)v2 + 8);
  v15 = v13;
  v146 = v13;
  switch ( v14 )
  {
    case 2:
      goto LABEL_16;
    case 0:
      Flink = ndisIfList.Flink;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( 1 )
        {
          v87 = Flink[5].Flink;
          if ( v87 == v5 )
            break;
          if ( v87 <= v5 )
          {
            Flink = Flink->Flink;
            if ( Flink != &ndisIfList )
              continue;
          }
          goto LABEL_24;
        }
        v1 = Flink - 77;
      }
LABEL_24:
      if ( v1 )
      {
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[90].Flink);
        ++LODWORD(v1[81].Blink);
        if ( !BYTE1(v1[87].Blink) || *((_QWORD *)v2 + 1) >= 2uLL )
          goto LABEL_65;
        Blink = 0LL;
        v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        if ( BYTE3(v1[87].Blink) )
        {
          Blink = v1[88].Blink;
          ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[90].Blink);
          ++HIDWORD(v1[87].Blink);
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v19);
        if ( Blink )
        {
          v62 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Blink, 0, v20, 0, 2, 58);
          v63 = v62;
          if ( v62 )
          {
            v64 = (KSPIN_LOCK *)(v62 + 96);
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v62 + 96));
            v65 = *(_QWORD *)(v63 + 2056);
            *(_QWORD *)(v63 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v63 + 1856) = 2234889;
            if ( v65 )
            {
              do
              {
                v66 = 0;
                v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v65 + 312));
                if ( !*(_BYTE *)(v65 + 322) )
                {
                  v68 = *(_WORD *)(v65 + 320);
                  if ( v68 < 0xFFEBu )
                  {
                    *(_WORD *)(v65 + 320) = v68 + 1;
                    ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v65 + 328));
                    v66 = 1;
                  }
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v65 + 312), v67);
                if ( v66 )
                {
                  v3 = *(_QWORD *)(v65 + 832);
                  v64 = (KSPIN_LOCK *)(v63 + 96);
                  goto LABEL_112;
                }
                v65 = *(_QWORD *)(v65 + 112);
              }
              while ( v65 );
              v64 = (KSPIN_LOCK *)(v63 + 96);
            }
            v3 = *(_QWORD *)(v63 + 4096);
LABEL_112:
            *(_QWORD *)(v63 + 520) = 0LL;
            *(_DWORD *)(v63 + 1856) = 0;
            KeReleaseSpinLockFromDpcLevel(v64);
            v69 = KeAcquireSpinLockRaiseToDpc(v64);
            v70 = *(_QWORD *)(v63 + 4960);
            *(_QWORD *)(v63 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v63 + 1856) = 71717;
            if ( v70 )
            {
              if ( *(_BYTE *)(v70 + 1) )
              {
                if ( *(_BYTE *)(v70 + 1) == 1 )
                {
                  v98 = v70 + 136;
                  v99 = *(_DWORD *)(v70 + 192);
                  if ( v99 >> 17 < 0x3FFE && (unsigned __int16)v99 >> 1 == (v99 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v70 + 136));
                    *(_DWORD *)(v98 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v99 & 0xFFFE) == 0 && (v99 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v70, 2uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v70 + 136), 0);
                  }
                }
              }
              else
              {
                v71 = *(_QWORD *)(v70 + 8);
                if ( v71 && (v91 = *(_BYTE *)(v70 + 3), v92 = 0, v91) )
                {
                  while ( 1 )
                  {
                    v93 = (_BYTE *)(v71 + 2LL * v92);
                    if ( *v93 == 2 )
                    {
                      if ( v93[1] )
                        break;
                    }
                    if ( ++v92 >= v91 )
                      goto LABEL_115;
                  }
                  --v93[1];
                }
                else
                {
LABEL_115:
                  if ( !_bittestandreset((signed __int32 *)(v70 + 16), 2u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v70, 2uLL);
                }
              }
            }
            v30 = (*(_DWORD *)(v63 + 3164))-- == 1;
            if ( v30 )
            {
              v72 = *(struct _KEVENT **)(v63 + 3176);
              if ( v72 )
                KeSetEvent(v72, 0, 0);
            }
            *(_QWORD *)(v63 + 520) = 0LL;
            *(_DWORD *)(v63 + 1856) = 0;
            KeReleaseSpinLock(v64, v69);
            if ( (unsigned __int8)byte_1C008371B >= 4u )
              WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v63);
            v73 = 0;
            v74 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v63 + 4496));
            v75 = *(_QWORD *)(v63 + 4952);
            v76 = v74;
            if ( v75 )
            {
              v77 = *(unsigned __int8 *)(v75 + 1);
              if ( *(_BYTE *)(v75 + 1) )
              {
                if ( v77 == 1 )
                {
                  v100 = v75 + 3720;
                  v101 = *(_DWORD *)(v75 + 3776);
                  if ( v101 >> 17 < 0x3FFE && (unsigned __int16)v101 >> 1 == (v101 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v75 + 3720));
                    *(_DWORD *)(v100 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v101 & 0xFFFE) == 0 && (v101 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v75, 0x3AuLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v75 + 3720), 0);
                  }
                }
              }
              else
              {
                v78 = *(_QWORD *)(v75 + 8);
                if ( v78 && (v79 = *(_BYTE *)(v75 + 3)) != 0 )
                {
                  while ( 1 )
                  {
                    v80 = (_BYTE *)(v78 + 2LL * (unsigned __int8)v77);
                    if ( *v80 == 58 )
                    {
                      if ( v80[1] )
                        break;
                    }
                    LOBYTE(v77) = v77 + 1;
                    if ( (unsigned __int8)v77 >= v79 )
                      goto LABEL_127;
                  }
                  --v80[1];
                }
                else
                {
LABEL_127:
                  if ( !_bittestandreset((signed __int32 *)(v75 + 20), 0x1Au) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v75, 0x3AuLL);
                }
              }
            }
            v30 = (*(_DWORD *)(v63 + 4504))-- == 1;
            if ( v30 )
              v73 = 1;
            if ( (unsigned __int8)byte_1C008371B >= 4u )
              WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v63, *(unsigned int *)(v63 + 4504));
            KeReleaseSpinLock((PKSPIN_LOCK)(v63 + 4496), v76);
            if ( v73 )
            {
              v102 = *(struct _KEVENT **)(v63 + 1608);
              if ( v102 )
                KeSetEvent(v102, 0, 0);
            }
            if ( (unsigned __int8)byte_1C008371B >= 4u )
              WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v63);
          }
          v81 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          v82 = (ULONG_PTR)v1[90].Blink;
          v83 = v81;
          if ( v82 )
          {
            if ( *(_BYTE *)(v82 + 1) )
            {
              if ( *(_BYTE *)(v82 + 1) == 1 )
              {
                v103 = v82 + 200;
                v104 = *(_DWORD *)(v82 + 256);
                if ( v104 >> 17 < 0x3FFE && (unsigned __int16)v104 >> 1 == (v104 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v82 + 200));
                  *(_DWORD *)(v103 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v104 & 0xFFFE) == 0 && (v104 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v82, 3uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v82 + 200), 0);
                }
              }
            }
            else
            {
              v84 = *(_QWORD *)(v82 + 8);
              if ( v84 && (v94 = *(_BYTE *)(v82 + 3), v95 = 0, v94) )
              {
                while ( 1 )
                {
                  v96 = (_BYTE *)(v84 + 2LL * v95);
                  if ( *v96 == 3 )
                  {
                    if ( v96[1] )
                      break;
                  }
                  if ( ++v95 >= v94 )
                    goto LABEL_138;
                }
                --v96[1];
              }
              else
              {
LABEL_138:
                if ( !_bittestandreset((signed __int32 *)(v82 + 16), 3u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v82, 3uLL);
              }
            }
          }
          v30 = HIDWORD(v1[87].Blink)-- == 1;
          if ( v30 )
          {
            v105 = v1[88].Blink;
            if ( v105 )
            {
              v106 = (struct _KEVENT *)v105[256].Blink;
              if ( v106 )
                KeSetEvent(v106, 0, 0);
            }
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v83);
        }
        else
        {
          if ( !BYTE2(v1[87].Blink)
            || (v21 = ndisReferenceTopMiniportByNameForNsi(v1[88].Blink[2].Flink, 0, v20, 0, 2, 58), (v22 = v21) == 0) )
          {
LABEL_64:
            v2 = a1;
LABEL_65:
            v40 = 0;
            **((_QWORD **)v2 + 2) = v1[82].Flink;
            goto LABEL_66;
          }
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 96));
          v23 = *(_QWORD *)(v22 + 2056);
          *(_QWORD *)(v22 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v22 + 1856) = 2234889;
          if ( v23 )
          {
            while ( 1 )
            {
              v24 = 0;
              v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 312));
              if ( !*(_BYTE *)(v23 + 322) )
              {
                v26 = *(_WORD *)(v23 + 320);
                if ( v26 < 0xFFEBu )
                {
                  *(_WORD *)(v23 + 320) = v26 + 1;
                  ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v23 + 328));
                  v24 = 1;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 312), v25);
              if ( v24 )
                break;
              v23 = *(_QWORD *)(v23 + 112);
              if ( !v23 )
                goto LABEL_226;
            }
            v3 = *(_QWORD *)(v23 + 832);
          }
          else
          {
LABEL_226:
            v3 = *(_QWORD *)(v22 + 4096);
          }
          *(_QWORD *)(v22 + 520) = 0LL;
          *(_DWORD *)(v22 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v22 + 96));
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 96));
          v28 = *(_QWORD *)(v22 + 4960);
          *(_QWORD *)(v22 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v22 + 1856) = 71717;
          if ( v28 )
          {
            if ( *(_BYTE *)(v28 + 1) )
            {
              if ( *(_BYTE *)(v28 + 1) == 1 )
              {
                v107 = v28 + 136;
                v108 = *(_DWORD *)(v28 + 192);
                if ( v108 >> 17 < 0x3FFE && (unsigned __int16)v108 >> 1 == (v108 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 136));
                  *(_DWORD *)(v107 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v108 & 0xFFFE) == 0 && (v108 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v28, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 136), 0);
                }
              }
            }
            else
            {
              v29 = *(_QWORD *)(v28 + 8);
              if ( v29 && (v88 = *(_BYTE *)(v28 + 3), v89 = 0, v88) )
              {
                while ( 1 )
                {
                  v90 = (_BYTE *)(v29 + 2LL * v89);
                  if ( *v90 == 2 )
                  {
                    if ( v90[1] )
                      break;
                  }
                  if ( ++v89 >= v88 )
                    goto LABEL_41;
                }
                --v90[1];
              }
              else
              {
LABEL_41:
                if ( !_bittestandreset((signed __int32 *)(v28 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v28, 2uLL);
              }
            }
          }
          v30 = (*(_DWORD *)(v22 + 3164))-- == 1;
          if ( v30 )
          {
            v31 = *(struct _KEVENT **)(v22 + 3176);
            if ( v31 )
              KeSetEvent(v31, 0, 0);
          }
          *(_QWORD *)(v22 + 520) = 0LL;
          *(_DWORD *)(v22 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 96), v27);
          if ( (unsigned __int8)byte_1C008371B >= 4u )
            WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v22);
          v32 = 0;
          v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4496));
          v34 = *(_QWORD *)(v22 + 4952);
          v35 = v33;
          if ( v34 )
          {
            v36 = *(unsigned __int8 *)(v34 + 1);
            if ( *(_BYTE *)(v34 + 1) )
            {
              if ( v36 == 1 )
              {
                v109 = v34 + 3720;
                v110 = *(_DWORD *)(v34 + 3776);
                if ( v110 >> 17 < 0x3FFE && (unsigned __int16)v110 >> 1 == (v110 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v34 + 3720));
                  *(_DWORD *)(v109 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v110 & 0xFFFE) == 0 && (v110 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v34, 0x3AuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v34 + 3720), 0);
                }
              }
            }
            else
            {
              v37 = *(_QWORD *)(v34 + 8);
              if ( v37 && (v38 = *(_BYTE *)(v34 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v39 = (_BYTE *)(v37 + 2LL * (unsigned __int8)v36);
                  if ( *v39 == 58 )
                  {
                    if ( v39[1] )
                      break;
                  }
                  LOBYTE(v36) = v36 + 1;
                  if ( (unsigned __int8)v36 >= v38 )
                    goto LABEL_53;
                }
                --v39[1];
              }
              else
              {
LABEL_53:
                if ( !_bittestandreset((signed __int32 *)(v34 + 20), 0x1Au) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v34, 0x3AuLL);
              }
            }
          }
          v30 = (*(_DWORD *)(v22 + 4504))-- == 1;
          if ( v30 )
            v32 = 1;
          if ( (unsigned __int8)byte_1C008371B >= 4u )
            WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v22, *(unsigned int *)(v22 + 4504));
          KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 4496), v35);
          if ( v32 )
          {
            v111 = *(struct _KEVENT **)(v22 + 1608);
            if ( v111 )
              KeSetEvent(v111, 0, 0);
          }
          if ( (unsigned __int8)byte_1C008371B >= 4u )
            WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v22);
        }
        if ( v3 )
        {
          ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v3 + 1440));
          ++*(_DWORD *)(v3 + 1304);
        }
        v15 = v146;
        goto LABEL_64;
      }
      goto LABEL_165;
    case 1:
      v5 = 0LL;
      while ( 1 )
      {
LABEL_16:
        v1 = 0LL;
        v16 = ndisIfList.Flink;
        if ( ndisIfList.Flink != &ndisIfList )
        {
          while ( v16[5].Flink <= v5 )
          {
            v16 = v16->Flink;
            if ( v16 == &ndisIfList )
              goto LABEL_21;
          }
          v1 = v16 - 77;
        }
LABEL_21:
        if ( !v1 )
          break;
        v17 = v1[86].Blink;
        v5 = v1[82].Flink;
        if ( ((__int64)v17[105].Flink & 2) == 0 && (v12 == 1 || v7 == -1 || v12 == LODWORD(v17[1].Flink)) )
          goto LABEL_24;
      }
LABEL_165:
      v40 = 0;
      goto LABEL_66;
  }
  v40 = -1073741811;
LABEL_66:
  KeReleaseSpinLock(&ndisIfListLock, v15);
  if ( v40 < 0 )
    goto LABEL_71;
  if ( v1 )
  {
    v41 = *((_QWORD *)v2 + 1);
    HIDWORD(v144[6]) = 0;
    switch ( v41 )
    {
      case 0LL:
LABEL_69:
        v144[5] = *((_QWORD *)v2 + 5);
        LODWORD(v144[6]) = *((_DWORD *)v2 + 12);
        LODWORD(v144[4]) = 0;
        ndisNsiGetInterfaceRwInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v144);
        *((_DWORD *)v2 + 12) = v144[6];
        LODWORD(v144[4]) = 1;
        v144[5] = *((_QWORD *)v2 + 7);
        LODWORD(v144[6]) = *((_DWORD *)v2 + 16);
        ndisNsiGetInterfaceRodInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v144);
        *((_DWORD *)v2 + 16) = v144[6];
        v144[5] = *((_QWORD *)v2 + 9);
        LODWORD(v144[6]) = *((_DWORD *)v2 + 20);
        LODWORD(v144[4]) = 2;
        ndisNsiGetInterfaceRosInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v144);
LABEL_70:
        *((_DWORD *)v2 + 20) = v144[6];
        goto LABEL_71;
      case 1LL:
        goto LABEL_169;
      case 12LL:
        goto LABEL_69;
      case 13LL:
LABEL_169:
        LODWORD(v144[4]) = 1;
        v144[5] = *((_QWORD *)v2 + 7);
        LODWORD(v144[6]) = *((_DWORD *)v2 + 16);
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v144);
        *((_DWORD *)v2 + 16) = v144[6];
        v144[5] = *((_QWORD *)v2 + 9);
        LODWORD(v144[6]) = *((_DWORD *)v2 + 20);
        LODWORD(v144[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v144);
        goto LABEL_70;
    }
    v40 = -1073741811;
  }
  else if ( *((_DWORD *)v2 + 8) )
  {
    v40 = -2147483622;
  }
  else
  {
    v40 = -1073741772;
  }
LABEL_71:
  v42 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 1402) )
    {
      v43 = *(_QWORD *)(v3 + 1416) + 312LL;
      v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v43);
      v45 = *(_QWORD *)(v43 + 16);
      v46 = v44;
      if ( v45 )
      {
        v47 = *(unsigned __int8 *)(v45 + 1);
        if ( *(_BYTE *)(v45 + 1) )
        {
          if ( v47 == 1 )
          {
            v112 = v45 + 712;
            v113 = *(_DWORD *)(v45 + 768);
            if ( v113 >> 17 < 0x3FFE && (unsigned __int16)v113 >> 1 == (v113 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v45 + 712));
              *(_DWORD *)(v112 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v113 & 0xFFFE) == 0 && (v113 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v45, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v45 + 712), 0);
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
              if ( *v50 == 11 )
              {
                if ( v50[1] )
                  break;
              }
              LOBYTE(v47) = v47 + 1;
              if ( (unsigned __int8)v47 >= v49 )
                goto LABEL_80;
            }
            --v50[1];
          }
          else
          {
LABEL_80:
            if ( !_bittestandreset((signed __int32 *)(v45 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v45, 0xBuLL);
          }
        }
      }
      v30 = (*(_WORD *)(v43 + 8))-- == 1;
      if ( v30 && !*(_BYTE *)(v43 + 11) )
      {
        ndisFreeRefCount(*(PVOID *)(v43 + 16));
        *(_QWORD *)(v43 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v43, v46);
      v2 = a1;
    }
    v51 = *(_QWORD *)(v3 + 1440);
    if ( v51 )
    {
      v52 = *(unsigned __int8 *)(v51 + 1);
      if ( *(_BYTE *)(v51 + 1) )
      {
        if ( v52 == 1 )
        {
          v114 = v51 + 264;
          v115 = *(_DWORD *)(v51 + 320);
          if ( v115 >> 17 < 0x3FFE && (unsigned __int16)v115 >> 1 == (v115 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 264));
            *(_DWORD *)(v114 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v115 & 0xFFFE) == 0 && (v115 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v51, 4uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 264), 0);
          }
        }
      }
      else
      {
        v53 = *(_QWORD *)(v51 + 8);
        if ( v53 && (v54 = *(_BYTE *)(v51 + 3)) != 0 )
        {
          while ( 1 )
          {
            v55 = (_BYTE *)(v53 + 2LL * (unsigned __int8)v52);
            if ( *v55 == 4 )
            {
              if ( v55[1] )
                break;
            }
            LOBYTE(v52) = v52 + 1;
            if ( (unsigned __int8)v52 >= v54 )
              goto LABEL_91;
          }
          --v55[1];
        }
        else
        {
LABEL_91:
          if ( !_bittestandreset((signed __int32 *)(v51 + 16), 4u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v51, 4uLL);
        }
      }
    }
    v30 = (*(_DWORD *)(v3 + 1304))-- == 1;
    if ( v30 )
    {
      v116 = *(_DWORD *)(v3 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v3);
      *(_QWORD *)(v3 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v117 = *(_QWORD *)(v3 + 1232);
      v118 = *(_QWORD **)(v3 + 1240);
      if ( *(_QWORD *)(v117 + 8) != v3 + 1232 || *v118 != v3 + 1232 )
        __fastfail(3u);
      *v118 = v117;
      *(_QWORD *)(v117 + 8) = v118;
      v119 = *(_QWORD *)(v3 + 1248);
      v120 = *(_QWORD **)(v3 + 1256);
      if ( *(_QWORD *)(v119 + 8) != v3 + 1248 || *v120 != v3 + 1248 )
        __fastfail(3u);
      *v120 = v119;
      *(_QWORD *)(v119 + 8) = v120;
      v121 = *(_QWORD *)(v3 + 1264);
      v122 = *(_QWORD **)(v3 + 1272);
      if ( *(_QWORD *)(v121 + 8) != v3 + 1264 || *v122 != v3 + 1264 )
        __fastfail(3u);
      *v122 = v121;
      *(_QWORD *)(v121 + 8) = v122;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v3 + 1376));
      v123 = (unsigned int)(v116 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v123 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v123) &= ~(1 << ((v116 - 1) & 7));
      v124 = *(void **)(v3 + 1440);
      --ndisInterfaceCount;
      ndisFreeRefCount(v124);
      v125 = *(void **)(v3 + 1432);
      *(_QWORD *)(v3 + 1440) = 0LL;
      if ( v125 )
      {
        ExFreePoolWithTag(v125, 0);
        *(_QWORD *)(v3 + 1432) = 0LL;
      }
      v126 = *(void **)(v3 + 1280);
      if ( v126 )
      {
        ExFreePoolWithTag(v126, 0);
        *(_QWORD *)(v3 + 1280) = 0LL;
        *(_QWORD *)(v3 + 1288) = 0LL;
      }
      v127 = *(struct _KEVENT **)(v3 + 1392);
      if ( v127 )
        KeSetEvent(v127, 0, 0);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
  }
  if ( v1 )
  {
    v56 = (ULONG_PTR)v1[90].Flink;
    if ( v56 )
    {
      v57 = *(unsigned __int8 *)(v56 + 1);
      if ( *(_BYTE *)(v56 + 1) )
      {
        if ( v57 == 1 )
        {
          v128 = v56 + 200;
          v129 = *(_DWORD *)(v56 + 256);
          if ( v129 >> 17 < 0x3FFE && (unsigned __int16)v129 >> 1 == (v129 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 200));
            *(_DWORD *)(v128 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v129 & 0xFFFE) == 0 && (v129 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v56, 3uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 200), 0);
          }
        }
      }
      else
      {
        v58 = *(_QWORD *)(v56 + 8);
        if ( v58 && (v59 = *(_BYTE *)(v56 + 3)) != 0 )
        {
          while ( 1 )
          {
            v60 = (_BYTE *)(v58 + 2LL * (unsigned __int8)v57);
            if ( *v60 == 3 )
            {
              if ( v60[1] )
                break;
            }
            LOBYTE(v57) = v57 + 1;
            if ( (unsigned __int8)v57 >= v59 )
              goto LABEL_100;
          }
          --v60[1];
        }
        else
        {
LABEL_100:
          if ( !_bittestandreset((signed __int32 *)(v56 + 16), 3u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v56, 3uLL);
        }
      }
    }
    v30 = LODWORD(v1[81].Blink)-- == 1;
    if ( v30 )
    {
      Flink_high = HIDWORD(v1->Flink);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v1);
      v1[81].Flink = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v131 = v1[77].Flink;
      v132 = v1[77].Blink;
      if ( v131->Blink != &v1[77] || v132->Flink != &v1[77] )
        __fastfail(3u);
      v132->Flink = v131;
      v131->Blink = v132;
      v133 = v1[78].Flink;
      v134 = v1[78].Blink;
      if ( v133->Blink != &v1[78] || v134->Flink != &v1[78] )
        __fastfail(3u);
      v134->Flink = v133;
      v133->Blink = v134;
      v135 = v1[79].Flink;
      v136 = v1[79].Blink;
      if ( v135->Blink != &v1[79] || v136->Flink != &v1[79] )
        __fastfail(3u);
      v136->Flink = v135;
      v135->Blink = v136;
      NETWORKBLOCK_DECREMENT_REF(v1[86].Flink);
      v137 = (unsigned int)(Flink_high - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v137 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v137) &= ~(1 << ((Flink_high - 1) & 7));
      v138 = v1[90].Flink;
      --ndisInterfaceCount;
      ndisFreeRefCount(v138);
      v139 = v1[89].Blink;
      v1[90].Flink = 0LL;
      if ( v139 )
      {
        ExFreePoolWithTag(v139, 0);
        v1[89].Blink = 0LL;
      }
      v140 = v1[80].Flink;
      if ( v140 )
      {
        ExFreePoolWithTag(v140, 0);
        v1[80].Flink = 0LL;
        v1[80].Blink = 0LL;
      }
      v141 = (struct _KEVENT *)v1[87].Flink;
      if ( v141 )
        KeSetEvent(v141, 0, 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v42);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(81LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v2, (unsigned int)v40);
  return (unsigned int)v40;
}
