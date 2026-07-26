/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004170
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C003D564 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfDeleteStackEntries @ 0x1C003E748 (ndisIfDeleteStackEntries.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00977B0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0097BF0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0097EB0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00983E0 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0098630 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v1; // r14
  _LIST_ENTRY *v2; // rdi
  __int64 v3; // r13
  int v4; // r12d
  _LIST_ENTRY *v5; // rbx
  KIRQL v6; // al
  int v7; // ecx
  KIRQL v8; // si
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *Blink; // rbx
  KIRQL v12; // si
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rbx
  KSPIN_LOCK *v16; // r14
  __int64 v17; // rsi
  KIRQL v18; // r15
  ULONG_PTR v19; // r8
  int v20; // ecx
  __int64 v21; // rdx
  unsigned __int8 v22; // r10
  _BYTE *v23; // r9
  bool v24; // zf
  struct _KEVENT *v25; // rcx
  char v26; // r14
  KIRQL v27; // al
  ULONG_PTR v28; // r8
  KIRQL v29; // r15
  int v30; // ecx
  __int64 v31; // rdx
  unsigned __int8 v32; // r10
  _BYTE *v33; // r9
  KIRQL v34; // al
  ULONG_PTR v35; // r8
  KIRQL v36; // bl
  __int64 v37; // rdx
  __int64 v38; // rax
  KIRQL v39; // r15
  __int64 v40; // rbx
  KIRQL v41; // al
  ULONG_PTR v42; // r8
  KIRQL v43; // r14
  int v44; // ecx
  __int64 v45; // r10
  unsigned __int8 v46; // r9
  _BYTE *v47; // rdx
  ULONG_PTR v48; // r8
  int v49; // ecx
  __int64 v50; // r9
  unsigned __int8 v51; // dl
  _BYTE *v52; // r10
  ULONG_PTR v53; // r8
  int v54; // ecx
  __int64 v55; // rdx
  unsigned __int8 v56; // r9
  _BYTE *v57; // r10
  int v59; // ecx
  _LIST_ENTRY *Flink; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // r14
  char v64; // r15
  KIRQL v65; // cl
  unsigned __int16 v66; // ax
  struct _NDIS_REFCOUNT_BLOCK *v67; // rcx
  __int64 v68; // rax
  KIRQL v69; // si
  ULONG_PTR v70; // r8
  int v71; // ecx
  __int64 v72; // rdx
  unsigned __int8 v73; // r10
  _BYTE *v74; // r9
  struct _KEVENT *v75; // rcx
  char v76; // r15
  KIRQL v77; // al
  ULONG_PTR v78; // r8
  KIRQL v79; // r12
  int v80; // ecx
  __int64 v81; // r10
  unsigned __int8 v82; // r9
  _BYTE *v83; // rdx
  unsigned __int8 v84; // r10
  unsigned __int8 v85; // cl
  _BYTE *v86; // r9
  char v87; // r13
  KIRQL v88; // cl
  unsigned __int16 v89; // ax
  struct _NDIS_REFCOUNT_BLOCK *v90; // rcx
  ULONG_PTR v91; // rsi
  unsigned int v92; // edx
  ULONG_PTR v93; // r13
  unsigned int v94; // edx
  struct _KEVENT *v95; // rcx
  ULONG_PTR v96; // rsi
  unsigned int v97; // edx
  _LIST_ENTRY *v98; // rax
  struct _KEVENT *v99; // rcx
  ULONG_PTR v100; // r14
  unsigned int v101; // edx
  ULONG_PTR v102; // r14
  unsigned int v103; // edx
  struct _KEVENT *v104; // rcx
  ULONG_PTR v105; // rsi
  unsigned int v106; // edx
  ULONG_PTR v107; // rbx
  unsigned int v108; // edx
  int v109; // ebx
  __int64 v110; // rdx
  _QWORD *v111; // rcx
  __int64 v112; // rdx
  _QWORD *v113; // rcx
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  unsigned int v116; // ecx
  void *v117; // rcx
  void *v118; // rcx
  void *v119; // rcx
  struct _KEVENT *v120; // rcx
  ULONG_PTR v121; // rbx
  unsigned int v122; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v124; // rdx
  _LIST_ENTRY *v125; // rcx
  _LIST_ENTRY *v126; // rdx
  _LIST_ENTRY *v127; // rcx
  _LIST_ENTRY *v128; // rdx
  _LIST_ENTRY *v129; // rcx
  unsigned int v130; // ecx
  _LIST_ENTRY *v131; // rcx
  _LIST_ENTRY *v132; // rcx
  _LIST_ENTRY *v133; // rcx
  struct _KEVENT *v134; // rcx
  _QWORD v135[9]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v137; // [rsp+C8h] [rbp+6Fh]
  KIRQL v138; // [rsp+C8h] [rbp+6Fh]
  __int64 v139; // [rsp+C8h] [rbp+6Fh]
  KIRQL v140; // [rsp+C8h] [rbp+6Fh]
  KIRQL v141; // [rsp+D0h] [rbp+77h]

  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(80LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  memset(v135, 0, 0x40uLL);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v1 + 6) != 8 )
  {
    v4 = -1073741808;
    goto LABEL_62;
  }
  v5 = (_LIST_ENTRY *)**((_QWORD **)v1 + 2);
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v7 = *((_DWORD *)v1 + 8);
  v8 = v6;
  v141 = v6;
  if ( v7 )
  {
    v59 = v7 - 1;
    if ( v59 )
    {
      if ( v59 == 1 )
        goto LABEL_98;
      v4 = -1073741811;
    }
    else
    {
      v5 = 0LL;
      while ( 1 )
      {
LABEL_98:
        v2 = 0LL;
        Flink = ndisIfList.Flink;
        if ( ndisIfList.Flink != &ndisIfList )
        {
          while ( Flink[5].Flink <= v5 )
          {
            Flink = Flink->Flink;
            if ( Flink == &ndisIfList )
              goto LABEL_103;
          }
          v2 = Flink - 77;
        }
LABEL_103:
        if ( !v2 )
          break;
        v5 = v2[82].Flink;
        if ( ((__int64)v2[86].Blink[105].Flink & 2) == 0 )
          goto LABEL_11;
      }
    }
  }
  else
  {
    v9 = ndisIfList.Flink;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v10 = v9[5].Flink;
        if ( v10 == v5 )
          break;
        if ( v10 <= v5 )
        {
          v9 = v9->Flink;
          if ( v9 != &ndisIfList )
            continue;
        }
        goto LABEL_11;
      }
      v2 = v9 - 77;
    }
LABEL_11:
    if ( v2 )
    {
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2[90].Flink);
      ++LODWORD(v2[81].Blink);
      if ( !BYTE1(v2[87].Blink) || *((_QWORD *)v1 + 1) >= 2uLL )
        goto LABEL_56;
      Blink = 0LL;
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( BYTE3(v2[87].Blink) )
      {
        Blink = v2[88].Blink;
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2[90].Blink);
        ++HIDWORD(v2[87].Blink);
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v12);
      if ( Blink )
      {
        v14 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Blink, 0, v13, 0, 2, 58);
        v15 = v14;
        if ( v14 )
        {
          v16 = (KSPIN_LOCK *)(v14 + 96);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 96));
          v17 = *(_QWORD *)(v15 + 2056);
          *(_QWORD *)(v15 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v15 + 1856) = 2234777;
          if ( v17 )
          {
            while ( 1 )
            {
              v87 = 0;
              v88 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 312));
              v140 = v88;
              if ( !*(_BYTE *)(v17 + 322) )
              {
                v89 = *(_WORD *)(v17 + 320);
                if ( v89 < 0xFFEBu )
                {
                  v90 = *(struct _NDIS_REFCOUNT_BLOCK **)(v17 + 328);
                  *(_WORD *)(v17 + 320) = v89 + 1;
                  ndisReferenceWithTag(v90);
                  v88 = v140;
                  v87 = 1;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 312), v88);
              if ( v87 )
                break;
              v17 = *(_QWORD *)(v17 + 112);
              if ( !v17 )
                goto LABEL_19;
            }
            v3 = *(_QWORD *)(v17 + 832);
          }
          else
          {
LABEL_19:
            v3 = *(_QWORD *)(v15 + 4096);
          }
          v137 = v3;
          *(_QWORD *)(v15 + 520) = 0LL;
          *(_DWORD *)(v15 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel(v16);
          v18 = KeAcquireSpinLockRaiseToDpc(v16);
          v19 = *(_QWORD *)(v15 + 4960);
          *(_QWORD *)(v15 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v15 + 1856) = 71733;
          if ( v19 )
          {
            v20 = *(unsigned __int8 *)(v19 + 1);
            if ( *(_BYTE *)(v19 + 1) )
            {
              if ( v20 == 1 )
              {
                v91 = v19 + 136;
                v92 = *(_DWORD *)(v19 + 192);
                if ( v92 >> 17 < 0x3FFE && (unsigned __int16)v92 >> 1 == (v92 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v19 + 136));
                  *(_DWORD *)(v91 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v92 & 0xFFFE) == 0 && (v92 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v19, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v19 + 136), 0);
                }
              }
            }
            else
            {
              v21 = *(_QWORD *)(v19 + 8);
              if ( v21 && (v22 = *(_BYTE *)(v19 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v23 = (_BYTE *)(v21 + 2LL * (unsigned __int8)v20);
                  if ( *v23 == 2 )
                  {
                    if ( v23[1] )
                      break;
                  }
                  LOBYTE(v20) = v20 + 1;
                  if ( (unsigned __int8)v20 >= v22 )
                    goto LABEL_26;
                }
                --v23[1];
              }
              else
              {
LABEL_26:
                if ( !_bittestandreset((signed __int32 *)(v19 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v19, 2uLL);
              }
            }
          }
          v24 = (*(_DWORD *)(v15 + 3164))-- == 1;
          if ( v24 )
          {
            v25 = *(struct _KEVENT **)(v15 + 3176);
            if ( v25 )
              KeSetEvent(v25, 0, 0);
          }
          *(_QWORD *)(v15 + 520) = 0LL;
          *(_DWORD *)(v15 + 1856) = 0;
          KeReleaseSpinLock(v16, v18);
          if ( (unsigned __int8)byte_1C008531B >= 4u )
            WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v15);
          v26 = 0;
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 4496));
          v28 = *(_QWORD *)(v15 + 4952);
          v29 = v27;
          if ( v28 )
          {
            v30 = *(unsigned __int8 *)(v28 + 1);
            if ( *(_BYTE *)(v28 + 1) )
            {
              if ( v30 == 1 )
              {
                v93 = v28 + 3720;
                v94 = *(_DWORD *)(v28 + 3776);
                if ( v94 >> 17 < 0x3FFE && (unsigned __int16)v94 >> 1 == (v94 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 3720));
                  *(_DWORD *)(v93 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v94 & 0xFFFE) == 0 && (v94 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v28, 0x3AuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 3720), 0);
                }
                v3 = v137;
              }
            }
            else
            {
              v31 = *(_QWORD *)(v28 + 8);
              if ( v31 && (v32 = *(_BYTE *)(v28 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v33 = (_BYTE *)(v31 + 2LL * (unsigned __int8)v30);
                  if ( *v33 == 58 )
                  {
                    if ( v33[1] )
                      break;
                  }
                  LOBYTE(v30) = v30 + 1;
                  if ( (unsigned __int8)v30 >= v32 )
                    goto LABEL_38;
                }
                --v33[1];
              }
              else
              {
LABEL_38:
                if ( !_bittestandreset((signed __int32 *)(v28 + 20), 0x1Au) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v28, 0x3AuLL);
              }
            }
          }
          v24 = (*(_DWORD *)(v15 + 4504))-- == 1;
          if ( v24 )
            v26 = 1;
          if ( (unsigned __int8)byte_1C008531B >= 4u )
            WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v15, *(unsigned int *)(v15 + 4504));
          KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 4496), v29);
          if ( v26 )
          {
            v95 = *(struct _KEVENT **)(v15 + 1608);
            if ( v95 )
              KeSetEvent(v95, 0, 0);
          }
          if ( (unsigned __int8)byte_1C008531B >= 4u )
            WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v15);
        }
        v34 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        v35 = (ULONG_PTR)v2[90].Blink;
        v36 = v34;
        if ( v35 )
        {
          if ( *(_BYTE *)(v35 + 1) )
          {
            if ( *(_BYTE *)(v35 + 1) == 1 )
            {
              v96 = v35 + 200;
              v97 = *(_DWORD *)(v35 + 256);
              if ( v97 >> 17 < 0x3FFE && (unsigned __int16)v97 >> 1 == (v97 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v35 + 200));
                *(_DWORD *)(v96 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v97 & 0xFFFE) == 0 && (v97 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v35, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v35 + 200), 0);
              }
            }
          }
          else
          {
            v37 = *(_QWORD *)(v35 + 8);
            if ( v37 && (v84 = *(_BYTE *)(v35 + 3), v85 = 0, v84) )
            {
              while ( 1 )
              {
                v86 = (_BYTE *)(v37 + 2LL * v85);
                if ( *v86 == 3 )
                {
                  if ( v86[1] )
                    break;
                }
                if ( ++v85 >= v84 )
                  goto LABEL_49;
              }
              --v86[1];
            }
            else
            {
LABEL_49:
              if ( !_bittestandreset((signed __int32 *)(v35 + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v35, 3uLL);
            }
          }
        }
        v24 = HIDWORD(v2[87].Blink)-- == 1;
        if ( v24 )
        {
          v98 = v2[88].Blink;
          if ( v98 )
          {
            v99 = (struct _KEVENT *)v98[256].Blink;
            if ( v99 )
              KeSetEvent(v99, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v36);
      }
      else
      {
        if ( !BYTE2(v2[87].Blink)
          || (v61 = ndisReferenceTopMiniportByNameForNsi(v2[88].Blink[2].Flink, 0, v13, 0, 2, 58), (v62 = v61) == 0) )
        {
LABEL_55:
          v8 = v141;
LABEL_56:
          **((_QWORD **)v1 + 2) = v2[82].Flink;
          goto LABEL_57;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v61 + 96));
        v63 = *(_QWORD *)(v62 + 2056);
        *(_QWORD *)(v62 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v62 + 1856) = 2234777;
        if ( v63 )
        {
          while ( 1 )
          {
            v64 = 0;
            v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v63 + 312));
            v138 = v65;
            if ( !*(_BYTE *)(v63 + 322) )
            {
              v66 = *(_WORD *)(v63 + 320);
              if ( v66 < 0xFFEBu )
              {
                v67 = *(struct _NDIS_REFCOUNT_BLOCK **)(v63 + 328);
                *(_WORD *)(v63 + 320) = v66 + 1;
                ndisReferenceWithTag(v67);
                v65 = v138;
                v64 = 1;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v63 + 312), v65);
            if ( v64 )
              break;
            v63 = *(_QWORD *)(v63 + 112);
            if ( !v63 )
              goto LABEL_201;
          }
          v68 = *(_QWORD *)(v63 + 832);
        }
        else
        {
LABEL_201:
          v68 = *(_QWORD *)(v62 + 4096);
        }
        v139 = v68;
        *(_QWORD *)(v62 + 520) = 0LL;
        *(_DWORD *)(v62 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v62 + 96));
        v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v62 + 96));
        v70 = *(_QWORD *)(v62 + 4960);
        *(_QWORD *)(v62 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v62 + 1856) = 71733;
        if ( v70 )
        {
          v71 = *(unsigned __int8 *)(v70 + 1);
          if ( *(_BYTE *)(v70 + 1) )
          {
            if ( v71 == 1 )
            {
              v100 = v70 + 136;
              v101 = *(_DWORD *)(v70 + 192);
              if ( v101 >> 17 < 0x3FFE && (unsigned __int16)v101 >> 1 == (v101 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v70 + 136));
                *(_DWORD *)(v100 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v101 & 0xFFFE) == 0 && (v101 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v70, 2uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v70 + 136), 0);
              }
            }
          }
          else
          {
            v72 = *(_QWORD *)(v70 + 8);
            if ( v72 && (v73 = *(_BYTE *)(v70 + 3)) != 0 )
            {
              while ( 1 )
              {
                v74 = (_BYTE *)(v72 + 2LL * (unsigned __int8)v71);
                if ( *v74 == 2 )
                {
                  if ( v74[1] )
                    break;
                }
                LOBYTE(v71) = v71 + 1;
                if ( (unsigned __int8)v71 >= v73 )
                  goto LABEL_120;
              }
              --v74[1];
            }
            else
            {
LABEL_120:
              if ( !_bittestandreset((signed __int32 *)(v70 + 16), 2u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v70, 2uLL);
            }
          }
        }
        v24 = (*(_DWORD *)(v62 + 3164))-- == 1;
        if ( v24 )
        {
          v75 = *(struct _KEVENT **)(v62 + 3176);
          if ( v75 )
            KeSetEvent(v75, 0, 0);
        }
        *(_QWORD *)(v62 + 520) = 0LL;
        *(_DWORD *)(v62 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v62 + 96), v69);
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v62);
        v76 = 0;
        v77 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v62 + 4496));
        v78 = *(_QWORD *)(v62 + 4952);
        v79 = v77;
        if ( v78 )
        {
          v80 = *(unsigned __int8 *)(v78 + 1);
          if ( *(_BYTE *)(v78 + 1) )
          {
            if ( v80 == 1 )
            {
              v102 = v78 + 3720;
              v103 = *(_DWORD *)(v78 + 3776);
              if ( v103 >> 17 < 0x3FFE && (unsigned __int16)v103 >> 1 == (v103 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v78 + 3720));
                *(_DWORD *)(v102 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v103 & 0xFFFE) == 0 && (v103 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v78, 0x3AuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v78 + 3720), 0);
              }
            }
          }
          else
          {
            v81 = *(_QWORD *)(v78 + 8);
            if ( v81 && (v82 = *(_BYTE *)(v78 + 3)) != 0 )
            {
              while ( 1 )
              {
                v83 = (_BYTE *)(v81 + 2LL * (unsigned __int8)v80);
                if ( *v83 == 58 )
                {
                  if ( v83[1] )
                    break;
                }
                LOBYTE(v80) = v80 + 1;
                if ( (unsigned __int8)v80 >= v82 )
                  goto LABEL_132;
              }
              --v83[1];
            }
            else
            {
LABEL_132:
              if ( !_bittestandreset((signed __int32 *)(v78 + 20), 0x1Au) )
                ndisBugCheckEx(0x1EuLL, 0LL, v78, 0x3AuLL);
            }
          }
        }
        v24 = (*(_DWORD *)(v62 + 4504))-- == 1;
        if ( v24 )
          v76 = 1;
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v62, *(unsigned int *)(v62 + 4504));
        KeReleaseSpinLock((PKSPIN_LOCK)(v62 + 4496), v79);
        if ( v76 )
        {
          v104 = *(struct _KEVENT **)(v62 + 1608);
          if ( v104 )
            KeSetEvent(v104, 0, 0);
        }
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v62);
        v3 = v139;
      }
      if ( v3 )
      {
        ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v3 + 1440));
        ++*(_DWORD *)(v3 + 1304);
      }
      v4 = 0;
      v1 = a1;
      goto LABEL_55;
    }
  }
LABEL_57:
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( v4 < 0 )
    goto LABEL_62;
  if ( v2 )
  {
    v38 = *((_QWORD *)v1 + 1);
    HIDWORD(v135[6]) = 0;
    switch ( v38 )
    {
      case 0LL:
LABEL_60:
        v135[5] = *((_QWORD *)v1 + 5);
        LODWORD(v135[6]) = *((_DWORD *)v1 + 12);
        LODWORD(v135[4]) = 0;
        ndisNsiGetInterfaceRwInformation(
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v135);
        *((_DWORD *)v1 + 12) = v135[6];
        v135[5] = *((_QWORD *)v1 + 7);
        LODWORD(v135[6]) = *((_DWORD *)v1 + 16);
        LODWORD(v135[4]) = 1;
        ndisNsiGetInterfaceRodInformation(
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v135);
        *((_DWORD *)v1 + 16) = v135[6];
        v135[5] = *((_QWORD *)v1 + 9);
        LODWORD(v135[6]) = *((_DWORD *)v1 + 20);
        LODWORD(v135[4]) = 2;
        ndisNsiGetInterfaceRosInformation(
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v135);
LABEL_61:
        *((_DWORD *)v1 + 20) = v135[6];
        goto LABEL_62;
      case 1LL:
        goto LABEL_142;
      case 12LL:
        goto LABEL_60;
      case 13LL:
LABEL_142:
        v135[5] = *((_QWORD *)v1 + 7);
        LODWORD(v135[6]) = *((_DWORD *)v1 + 16);
        LODWORD(v135[4]) = 1;
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v135);
        *((_DWORD *)v1 + 16) = v135[6];
        v135[5] = *((_QWORD *)v1 + 9);
        LODWORD(v135[6]) = *((_DWORD *)v1 + 20);
        LODWORD(v135[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NDIS_IF_BLOCK *)v3,
          (struct _NM_REQUEST_GET_PARAMETER *)v135);
        goto LABEL_61;
    }
    v4 = -1073741811;
  }
  else if ( *((_DWORD *)v1 + 8) )
  {
    v4 = -2147483622;
  }
  else
  {
    v4 = -1073741772;
  }
LABEL_62:
  v39 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 1402) )
    {
      v40 = *(_QWORD *)(v3 + 1416) + 312LL;
      v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v40);
      v42 = *(_QWORD *)(v40 + 16);
      v43 = v41;
      if ( v42 )
      {
        v44 = *(unsigned __int8 *)(v42 + 1);
        if ( *(_BYTE *)(v42 + 1) )
        {
          if ( v44 == 1 )
          {
            v105 = v42 + 712;
            v106 = *(_DWORD *)(v42 + 768);
            if ( v106 >> 17 < 0x3FFE && (unsigned __int16)v106 >> 1 == (v106 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v42 + 712));
              *(_DWORD *)(v105 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v106 & 0xFFFE) == 0 && (v106 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v42, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v42 + 712), 0);
            }
          }
        }
        else
        {
          v45 = *(_QWORD *)(v42 + 8);
          if ( v45 && (v46 = *(_BYTE *)(v42 + 3)) != 0 )
          {
            while ( 1 )
            {
              v47 = (_BYTE *)(v45 + 2LL * (unsigned __int8)v44);
              if ( *v47 == 11 )
              {
                if ( v47[1] )
                  break;
              }
              LOBYTE(v44) = v44 + 1;
              if ( (unsigned __int8)v44 >= v46 )
                goto LABEL_71;
            }
            --v47[1];
          }
          else
          {
LABEL_71:
            if ( !_bittestandreset((signed __int32 *)(v42 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v42, 0xBuLL);
          }
        }
      }
      v24 = (*(_WORD *)(v40 + 8))-- == 1;
      if ( v24 && !*(_BYTE *)(v40 + 11) )
      {
        ndisFreeRefCount(*(PVOID *)(v40 + 16));
        *(_QWORD *)(v40 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v40, v43);
      v1 = a1;
    }
    v48 = *(_QWORD *)(v3 + 1440);
    if ( v48 )
    {
      v49 = *(unsigned __int8 *)(v48 + 1);
      if ( *(_BYTE *)(v48 + 1) )
      {
        if ( v49 == 1 )
        {
          v107 = v48 + 264;
          v108 = *(_DWORD *)(v48 + 320);
          if ( v108 >> 17 < 0x3FFE && (unsigned __int16)v108 >> 1 == (v108 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v48 + 264));
            *(_DWORD *)(v107 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v108 & 0xFFFE) == 0 && (v108 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v48, 4uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v48 + 264), 0);
          }
        }
      }
      else
      {
        v50 = *(_QWORD *)(v48 + 8);
        if ( v50 && (v51 = *(_BYTE *)(v48 + 3)) != 0 )
        {
          while ( 1 )
          {
            v52 = (_BYTE *)(v50 + 2LL * (unsigned __int8)v49);
            if ( *v52 == 4 )
            {
              if ( v52[1] )
                break;
            }
            LOBYTE(v49) = v49 + 1;
            if ( (unsigned __int8)v49 >= v51 )
              goto LABEL_82;
          }
          --v52[1];
        }
        else
        {
LABEL_82:
          if ( !_bittestandreset((signed __int32 *)(v48 + 16), 4u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v48, 4uLL);
        }
      }
    }
    v24 = (*(_DWORD *)(v3 + 1304))-- == 1;
    if ( v24 )
    {
      v109 = *(_DWORD *)(v3 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v3);
      *(_QWORD *)(v3 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v110 = *(_QWORD *)(v3 + 1232);
      v111 = *(_QWORD **)(v3 + 1240);
      if ( *(_QWORD *)(v110 + 8) != v3 + 1232 || *v111 != v3 + 1232 )
        __fastfail(3u);
      *v111 = v110;
      *(_QWORD *)(v110 + 8) = v111;
      v112 = *(_QWORD *)(v3 + 1248);
      v113 = *(_QWORD **)(v3 + 1256);
      if ( *(_QWORD *)(v112 + 8) != v3 + 1248 || *v113 != v3 + 1248 )
        __fastfail(3u);
      *v113 = v112;
      *(_QWORD *)(v112 + 8) = v113;
      v114 = *(_QWORD *)(v3 + 1264);
      v115 = *(_QWORD **)(v3 + 1272);
      if ( *(_QWORD *)(v114 + 8) != v3 + 1264 || *v115 != v3 + 1264 )
        __fastfail(3u);
      *v115 = v114;
      *(_QWORD *)(v114 + 8) = v115;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v3 + 1376));
      v116 = (unsigned int)(v109 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v116 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v116) &= ~(1 << ((v109 - 1) & 7));
      v117 = *(void **)(v3 + 1440);
      --ndisInterfaceCount;
      ndisFreeRefCount(v117);
      v118 = *(void **)(v3 + 1432);
      *(_QWORD *)(v3 + 1440) = 0LL;
      if ( v118 )
      {
        ExFreePoolWithTag(v118, 0);
        *(_QWORD *)(v3 + 1432) = 0LL;
      }
      v119 = *(void **)(v3 + 1280);
      if ( v119 )
      {
        ExFreePoolWithTag(v119, 0);
        *(_QWORD *)(v3 + 1280) = 0LL;
        *(_QWORD *)(v3 + 1288) = 0LL;
      }
      v120 = *(struct _KEVENT **)(v3 + 1392);
      if ( v120 )
        KeSetEvent(v120, 0, 0);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
  }
  if ( v2 )
  {
    v53 = (ULONG_PTR)v2[90].Flink;
    if ( v53 )
    {
      v54 = *(unsigned __int8 *)(v53 + 1);
      if ( *(_BYTE *)(v53 + 1) )
      {
        if ( v54 == 1 )
        {
          v121 = v53 + 200;
          v122 = *(_DWORD *)(v53 + 256);
          if ( v122 >> 17 < 0x3FFE && (unsigned __int16)v122 >> 1 == (v122 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v53 + 200));
            *(_DWORD *)(v121 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v122 & 0xFFFE) == 0 && (v122 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v53, 3uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v53 + 200), 0);
          }
        }
      }
      else
      {
        v55 = *(_QWORD *)(v53 + 8);
        if ( v55 && (v56 = *(_BYTE *)(v53 + 3)) != 0 )
        {
          while ( 1 )
          {
            v57 = (_BYTE *)(v55 + 2LL * (unsigned __int8)v54);
            if ( *v57 == 3 )
            {
              if ( v57[1] )
                break;
            }
            LOBYTE(v54) = v54 + 1;
            if ( (unsigned __int8)v54 >= v56 )
              goto LABEL_91;
          }
          --v57[1];
        }
        else
        {
LABEL_91:
          if ( !_bittestandreset((signed __int32 *)(v53 + 16), 3u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v53, 3uLL);
        }
      }
    }
    v24 = LODWORD(v2[81].Blink)-- == 1;
    if ( v24 )
    {
      Flink_high = HIDWORD(v2->Flink);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v2);
      v2[81].Flink = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v124 = v2[77].Flink;
      v125 = v2[77].Blink;
      if ( v124->Blink != &v2[77] || v125->Flink != &v2[77] )
        __fastfail(3u);
      v125->Flink = v124;
      v124->Blink = v125;
      v126 = v2[78].Flink;
      v127 = v2[78].Blink;
      if ( v126->Blink != &v2[78] || v127->Flink != &v2[78] )
        __fastfail(3u);
      v127->Flink = v126;
      v126->Blink = v127;
      v128 = v2[79].Flink;
      v129 = v2[79].Blink;
      if ( v128->Blink != &v2[79] || v129->Flink != &v2[79] )
        __fastfail(3u);
      v129->Flink = v128;
      v128->Blink = v129;
      NETWORKBLOCK_DECREMENT_REF(v2[86].Flink);
      v130 = (unsigned int)(Flink_high - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v130 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v130) &= ~(1 << ((Flink_high - 1) & 7));
      v131 = v2[90].Flink;
      --ndisInterfaceCount;
      ndisFreeRefCount(v131);
      v132 = v2[89].Blink;
      v2[90].Flink = 0LL;
      if ( v132 )
      {
        ExFreePoolWithTag(v132, 0);
        v2[89].Blink = 0LL;
      }
      v133 = v2[80].Flink;
      if ( v133 )
      {
        ExFreePoolWithTag(v133, 0);
        v2[80].Flink = 0LL;
        v2[80].Blink = 0LL;
      }
      v134 = (struct _KEVENT *)v2[87].Flink;
      if ( v134 )
        KeSetEvent(v134, 0, 0);
      ExFreePoolWithTag(v2, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v39);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(81LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v1, (unsigned int)v4);
  return (unsigned int)v4;
}
