/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C003D564 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfDeleteStackEntries @ 0x1C003E748 (ndisIfDeleteStackEntries.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00983E0 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0098630 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v1; // rsi
  _LIST_ENTRY *Blink; // rbx
  unsigned int v3; // ebp
  KIRQL v4; // r15
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v8; // edx
  _LIST_ENTRY *v9; // r12
  __int64 v10; // r13
  KIRQL v11; // di
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // r14
  KSPIN_LOCK *v15; // r15
  __int64 v16; // rdi
  char v17; // si
  KIRQL v18; // bp
  unsigned __int16 v19; // ax
  struct _NDIS_REFCOUNT_BLOCK *v20; // rcx
  KIRQL v21; // di
  ULONG_PTR v22; // r8
  int v23; // ecx
  __int64 v24; // rdx
  unsigned __int8 v25; // r10
  _BYTE *v26; // r9
  bool v27; // zf
  struct _KEVENT *v28; // rcx
  char v29; // si
  KIRQL v30; // al
  ULONG_PTR v31; // r10
  KIRQL v32; // bp
  int v33; // ecx
  __int64 v34; // r9
  unsigned __int8 v35; // r8
  _BYTE *v36; // rdx
  __int64 v37; // rbx
  KIRQL v38; // al
  ULONG_PTR v39; // r8
  KIRQL v40; // si
  int v41; // ecx
  __int64 v42; // r10
  unsigned __int8 v43; // r9
  _BYTE *v44; // rdx
  ULONG_PTR v45; // r10
  int v46; // ecx
  __int64 v47; // r9
  unsigned __int8 v48; // r8
  _BYTE *v49; // rdx
  ULONG_PTR v50; // r8
  int v51; // ecx
  __int64 v52; // r10
  unsigned __int8 v53; // r9
  _BYTE *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r14
  KSPIN_LOCK *v57; // r15
  __int64 v58; // rdi
  char v59; // si
  KIRQL v60; // bp
  unsigned __int16 v61; // ax
  struct _NDIS_REFCOUNT_BLOCK *v62; // rcx
  KIRQL v63; // di
  ULONG_PTR v64; // r8
  int v65; // ecx
  __int64 v66; // r10
  unsigned __int8 v67; // r9
  _BYTE *v68; // rdx
  struct _KEVENT *v69; // rcx
  char v70; // si
  KIRQL v71; // al
  ULONG_PTR v72; // r10
  KIRQL v73; // bp
  int v74; // ecx
  __int64 v75; // r9
  unsigned __int8 v76; // r8
  _BYTE *v77; // rdx
  KIRQL v78; // al
  ULONG_PTR v79; // r8
  KIRQL v80; // di
  __int64 v81; // r10
  unsigned __int8 v82; // r9
  unsigned __int8 v83; // cl
  _BYTE *v84; // rdx
  ULONG_PTR v85; // rbx
  unsigned int v86; // edx
  ULONG_PTR v87; // rbx
  unsigned int v88; // edx
  struct _KEVENT *v89; // rcx
  ULONG_PTR v90; // rbx
  unsigned int v91; // edx
  _LIST_ENTRY *v92; // rax
  struct _KEVENT *v93; // rcx
  ULONG_PTR v94; // rbx
  unsigned int v95; // edx
  ULONG_PTR v96; // rbx
  unsigned int v97; // edx
  struct _KEVENT *v98; // rcx
  ULONG_PTR v99; // rdi
  unsigned int v100; // edx
  ULONG_PTR v101; // rbx
  unsigned int v102; // edx
  int v103; // ebx
  __int64 v104; // rdx
  _QWORD *v105; // rcx
  __int64 v106; // rdx
  _QWORD *v107; // rcx
  __int64 v108; // rdx
  _QWORD *v109; // rcx
  unsigned int v110; // ecx
  void *v111; // rcx
  void *v112; // rcx
  void *v113; // rcx
  struct _KEVENT *v114; // rcx
  ULONG_PTR v115; // rbx
  unsigned int v116; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v118; // rdx
  _LIST_ENTRY *v119; // rcx
  _LIST_ENTRY *v120; // rdx
  _LIST_ENTRY *v121; // rcx
  _LIST_ENTRY *v122; // rdx
  _LIST_ENTRY *v123; // rcx
  unsigned int v124; // ecx
  _LIST_ENTRY *v125; // rcx
  _LIST_ENTRY *v126; // rcx
  _LIST_ENTRY *v127; // rcx
  struct _KEVENT *v128; // rcx
  _LIST_ENTRY *v129; // [rsp+30h] [rbp-B8h]
  unsigned int v130; // [rsp+38h] [rbp-B0h]
  unsigned int v131; // [rsp+3Ch] [rbp-ACh]
  unsigned int Size; // [rsp+40h] [rbp-A8h]
  char *v133; // [rsp+48h] [rbp-A0h]
  __int64 v134; // [rsp+50h] [rbp-98h]
  __int64 v135; // [rsp+58h] [rbp-90h]
  _QWORD v136[9]; // [rsp+60h] [rbp-88h] BYREF
  KIRQL v138; // [rsp+F8h] [rbp+10h]
  int v139; // [rsp+100h] [rbp+18h]
  unsigned int v140; // [rsp+108h] [rbp+20h]

  v1 = a1;
  Blink = 0LL;
  v3 = *((_DWORD *)a1 + 22);
  v140 = v3;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(84LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  KeEnterCriticalRegion();
  v138 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v4 = v138;
  if ( !v3 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      if ( ((__int64)i[9].Blink[105].Flink & 2) == 0 )
        LODWORD(Blink) = (_DWORD)Blink + 1;
    }
    *((_DWORD *)v1 + 22) = (_DWORD)Blink;
    if ( (_DWORD)Blink )
      goto LABEL_9;
    LODWORD(Blink) = 0;
    goto LABEL_10;
  }
  Size = *((_DWORD *)v1 + 6);
  v131 = *((_DWORD *)v1 + 16);
  v130 = *((_DWORD *)v1 + 20);
  v133 = (char *)*((_QWORD *)v1 + 2);
  v135 = *((_QWORD *)v1 + 7);
  v134 = *((_QWORD *)v1 + 9);
  if ( v133 && *((_DWORD *)v1 + 6) != 8
    || *((_QWORD *)v1 + 5)
    || *((_DWORD *)v1 + 12)
    || *((_QWORD *)v1 + 7) && *((_DWORD *)v1 + 16) < 0x28Cu
    || *((_QWORD *)v1 + 9) && *((_DWORD *)v1 + 20) < 0x238u )
  {
    LODWORD(Blink) = -1073741306;
    goto LABEL_10;
  }
  memset(v136, 0, 0x40uLL);
  Flink = ndisIfList.Flink;
  HIDWORD(v136[6]) = 0;
  v8 = 0;
  v129 = ndisIfList.Flink;
  while ( Flink != &ndisIfList )
  {
    v9 = Flink - 77;
    if ( ((__int64)Flink[9].Blink[105].Flink & 2) != 0 )
    {
      Flink = Flink->Flink;
      v129 = Flink;
    }
    else
    {
      v139 = ++v8;
      if ( v8 <= v3 )
      {
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v9[90].Flink);
        ++LODWORD(v9[81].Blink);
        v10 = 0LL;
        if ( BYTE1(v9[87].Blink) && *((_QWORD *)v1 + 1) < 2uLL )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          if ( BYTE3(v9[87].Blink) )
          {
            Blink = v9[88].Blink;
            ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v9[90].Blink);
            ++HIDWORD(v9[87].Blink);
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v11);
          if ( Blink )
          {
            v55 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Blink, 0, v12, 0, 2, 58);
            v56 = v55;
            if ( v55 )
            {
              v57 = (KSPIN_LOCK *)(v55 + 96);
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 96));
              v58 = *(_QWORD *)(v56 + 2056);
              *(_QWORD *)(v56 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v56 + 1856) = 2234777;
              if ( v58 )
              {
                while ( 1 )
                {
                  v59 = 0;
                  v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v58 + 312));
                  if ( !*(_BYTE *)(v58 + 322) )
                  {
                    v61 = *(_WORD *)(v58 + 320);
                    if ( v61 < 0xFFEBu )
                    {
                      v62 = *(struct _NDIS_REFCOUNT_BLOCK **)(v58 + 328);
                      *(_WORD *)(v58 + 320) = v61 + 1;
                      ndisReferenceWithTag(v62);
                      v59 = 1;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v58 + 312), v60);
                  if ( v59 )
                    break;
                  v58 = *(_QWORD *)(v58 + 112);
                  if ( !v58 )
                    goto LABEL_151;
                }
                v10 = *(_QWORD *)(v58 + 832);
              }
              else
              {
LABEL_151:
                v10 = *(_QWORD *)(v56 + 4096);
              }
              *(_QWORD *)(v56 + 520) = 0LL;
              *(_DWORD *)(v56 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel(v57);
              v63 = KeAcquireSpinLockRaiseToDpc(v57);
              v64 = *(_QWORD *)(v56 + 4960);
              *(_QWORD *)(v56 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v56 + 1856) = 71733;
              if ( v64 )
              {
                v65 = *(unsigned __int8 *)(v64 + 1);
                if ( *(_BYTE *)(v64 + 1) )
                {
                  if ( v65 == 1 )
                  {
                    v85 = v64 + 136;
                    v86 = *(_DWORD *)(v64 + 192);
                    if ( v86 >> 17 < 0x3FFE && (unsigned __int16)v86 >> 1 == (v86 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v64 + 136));
                      *(_DWORD *)(v85 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v86 & 0xFFFE) == 0 && (v86 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v64, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v64 + 136), 0);
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
                      if ( *v68 == 2 )
                      {
                        if ( v68[1] )
                          break;
                      }
                      LOBYTE(v65) = v65 + 1;
                      if ( (unsigned __int8)v65 >= v67 )
                        goto LABEL_125;
                    }
                    --v68[1];
                  }
                  else
                  {
LABEL_125:
                    if ( !_bittestandreset((signed __int32 *)(v64 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v64, 2uLL);
                  }
                }
              }
              v27 = (*(_DWORD *)(v56 + 3164))-- == 1;
              if ( v27 )
              {
                v69 = *(struct _KEVENT **)(v56 + 3176);
                if ( v69 )
                  KeSetEvent(v69, 0, 0);
              }
              *(_QWORD *)(v56 + 520) = 0LL;
              *(_DWORD *)(v56 + 1856) = 0;
              KeReleaseSpinLock(v57, v63);
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v56);
              v70 = 0;
              v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v56 + 4496));
              v72 = *(_QWORD *)(v56 + 4952);
              v73 = v71;
              if ( v72 )
              {
                v74 = *(unsigned __int8 *)(v72 + 1);
                if ( *(_BYTE *)(v72 + 1) )
                {
                  if ( v74 == 1 )
                  {
                    v87 = v72 + 3720;
                    v88 = *(_DWORD *)(v72 + 3776);
                    if ( v88 >> 17 < 0x3FFE && (unsigned __int16)v88 >> 1 == (v88 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 3720));
                      *(_DWORD *)(v87 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v88 & 0xFFFE) == 0 && (v88 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v56 + 4952), 0x3AuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 3720), 0);
                    }
                  }
                }
                else
                {
                  v75 = *(_QWORD *)(v72 + 8);
                  if ( v75 && (v76 = *(_BYTE *)(v72 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v77 = (_BYTE *)(v75 + 2LL * (unsigned __int8)v74);
                      if ( *v77 == 58 )
                      {
                        if ( v77[1] )
                          break;
                      }
                      LOBYTE(v74) = v74 + 1;
                      if ( (unsigned __int8)v74 >= v76 )
                        goto LABEL_137;
                    }
                    --v77[1];
                  }
                  else
                  {
LABEL_137:
                    if ( !_bittestandreset((signed __int32 *)(v72 + 20), 0x1Au) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v72, 0x3AuLL);
                  }
                }
              }
              v27 = (*(_DWORD *)(v56 + 4504))-- == 1;
              if ( v27 )
                v70 = 1;
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v56, *(unsigned int *)(v56 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(v56 + 4496), v73);
              if ( v70 )
              {
                v89 = *(struct _KEVENT **)(v56 + 1608);
                if ( v89 )
                  KeSetEvent(v89, 0, 0);
              }
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v56);
            }
            else
            {
              v10 = 0LL;
            }
            v78 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
            v79 = (ULONG_PTR)v9[90].Blink;
            v80 = v78;
            if ( v79 )
            {
              if ( *(_BYTE *)(v79 + 1) )
              {
                if ( *(_BYTE *)(v79 + 1) == 1 )
                {
                  v90 = v79 + 200;
                  v91 = *(_DWORD *)(v79 + 256);
                  if ( v91 >> 17 < 0x3FFE && (unsigned __int16)v91 >> 1 == (v91 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v79 + 200));
                    *(_DWORD *)(v90 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v91 & 0xFFFE) == 0 && (v91 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v79, 3uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v79 + 200), 0);
                  }
                }
              }
              else
              {
                v81 = *(_QWORD *)(v79 + 8);
                if ( v81 && (v82 = *(_BYTE *)(v79 + 3), v83 = 0, v82) )
                {
                  while ( 1 )
                  {
                    v84 = (_BYTE *)(v81 + 2LL * v83);
                    if ( *v84 == 3 )
                    {
                      if ( v84[1] )
                        break;
                    }
                    if ( ++v83 >= v82 )
                      goto LABEL_148;
                  }
                  --v84[1];
                }
                else
                {
LABEL_148:
                  if ( !_bittestandreset((signed __int32 *)(v79 + 16), 3u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v79, 3uLL);
                }
              }
            }
            v27 = HIDWORD(v9[87].Blink)-- == 1;
            if ( v27 )
            {
              v92 = v9[88].Blink;
              if ( v92 )
              {
                v93 = (struct _KEVENT *)v92[256].Blink;
                if ( v93 )
                  KeSetEvent(v93, 0, 0);
              }
            }
            KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v80);
LABEL_63:
            if ( v10 )
            {
              ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v10 + 1440));
              ++*(_DWORD *)(v10 + 1304);
            }
            v4 = v138;
            v1 = a1;
          }
          else if ( BYTE2(v9[87].Blink) )
          {
            v13 = ndisReferenceTopMiniportByNameForNsi(v9[88].Blink[2].Flink, 0, v12, 0, 2, 58);
            v14 = v13;
            if ( v13 )
            {
              v15 = (KSPIN_LOCK *)(v13 + 96);
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 96));
              v16 = *(_QWORD *)(v14 + 2056);
              *(_QWORD *)(v14 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v14 + 1856) = 2234777;
              if ( v16 )
              {
                while ( 1 )
                {
                  v17 = 0;
                  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 312));
                  if ( !*(_BYTE *)(v16 + 322) )
                  {
                    v19 = *(_WORD *)(v16 + 320);
                    if ( v19 < 0xFFEBu )
                    {
                      v20 = *(struct _NDIS_REFCOUNT_BLOCK **)(v16 + 328);
                      *(_WORD *)(v16 + 320) = v19 + 1;
                      ndisReferenceWithTag(v20);
                      v17 = 1;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 312), v18);
                  if ( v17 )
                    break;
                  v16 = *(_QWORD *)(v16 + 112);
                  if ( !v16 )
                    goto LABEL_197;
                }
                v10 = *(_QWORD *)(v16 + 832);
              }
              else
              {
LABEL_197:
                v10 = *(_QWORD *)(v14 + 4096);
              }
              *(_QWORD *)(v14 + 520) = 0LL;
              *(_DWORD *)(v14 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel(v15);
              v21 = KeAcquireSpinLockRaiseToDpc(v15);
              v22 = *(_QWORD *)(v14 + 4960);
              *(_QWORD *)(v14 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v14 + 1856) = 71733;
              if ( v22 )
              {
                v23 = *(unsigned __int8 *)(v22 + 1);
                if ( *(_BYTE *)(v22 + 1) )
                {
                  if ( v23 == 1 )
                  {
                    v94 = v22 + 136;
                    v95 = *(_DWORD *)(v22 + 192);
                    if ( v95 >> 17 < 0x3FFE && (unsigned __int16)v95 >> 1 == (v95 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v22 + 136));
                      *(_DWORD *)(v94 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v95 & 0xFFFE) == 0 && (v95 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v22, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 136), 0);
                    }
                  }
                }
                else
                {
                  v24 = *(_QWORD *)(v22 + 8);
                  if ( v24 && (v25 = *(_BYTE *)(v22 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v26 = (_BYTE *)(v24 + 2LL * (unsigned __int8)v23);
                      if ( *v26 == 2 )
                      {
                        if ( v26[1] )
                          break;
                      }
                      LOBYTE(v23) = v23 + 1;
                      if ( (unsigned __int8)v23 >= v25 )
                        goto LABEL_43;
                    }
                    --v26[1];
                  }
                  else
                  {
LABEL_43:
                    if ( !_bittestandreset((signed __int32 *)(v22 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v22, 2uLL);
                  }
                }
              }
              v27 = (*(_DWORD *)(v14 + 3164))-- == 1;
              if ( v27 )
              {
                v28 = *(struct _KEVENT **)(v14 + 3176);
                if ( v28 )
                  KeSetEvent(v28, 0, 0);
              }
              *(_QWORD *)(v14 + 520) = 0LL;
              *(_DWORD *)(v14 + 1856) = 0;
              KeReleaseSpinLock(v15, v21);
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v14);
              v29 = 0;
              v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 4496));
              v31 = *(_QWORD *)(v14 + 4952);
              v32 = v30;
              if ( v31 )
              {
                v33 = *(unsigned __int8 *)(v31 + 1);
                if ( *(_BYTE *)(v31 + 1) )
                {
                  if ( v33 == 1 )
                  {
                    v96 = v31 + 3720;
                    v97 = *(_DWORD *)(v31 + 3776);
                    if ( v97 >> 17 < 0x3FFE && (unsigned __int16)v97 >> 1 == (v97 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 3720));
                      *(_DWORD *)(v96 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v97 & 0xFFFE) == 0 && (v97 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v14 + 4952), 0x3AuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 3720), 0);
                    }
                  }
                }
                else
                {
                  v34 = *(_QWORD *)(v31 + 8);
                  if ( v34 && (v35 = *(_BYTE *)(v31 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v36 = (_BYTE *)(v34 + 2LL * (unsigned __int8)v33);
                      if ( *v36 == 58 )
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
                    if ( !_bittestandreset((signed __int32 *)(v31 + 20), 0x1Au) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v31, 0x3AuLL);
                  }
                }
              }
              v27 = (*(_DWORD *)(v14 + 4504))-- == 1;
              if ( v27 )
                v29 = 1;
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v14, *(unsigned int *)(v14 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 4496), v32);
              if ( v29 )
              {
                v98 = *(struct _KEVENT **)(v14 + 1608);
                if ( v98 )
                  KeSetEvent(v98, 0, 0);
              }
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v14);
              goto LABEL_63;
            }
            v10 = 0LL;
          }
          Flink = v129;
        }
        KeReleaseSpinLock(&ndisIfListLock, v4);
        if ( *((_QWORD *)v1 + 2) )
        {
          memmove(v133, &v9[82], Size);
          v133 += Size;
        }
        if ( *((_QWORD *)v1 + 7) )
        {
          v136[5] = v135;
          LODWORD(v136[6]) = v131;
          LODWORD(v136[4]) = 1;
          ndisNsiGetInterfaceRodEnumObject(
            (struct _NDIS_IF_BLOCK *)v9,
            (struct _NDIS_IF_BLOCK *)v10,
            (struct _NM_REQUEST_GET_PARAMETER *)v136);
          v135 += v131;
        }
        if ( *((_QWORD *)v1 + 9) )
        {
          v136[5] = v134;
          LODWORD(v136[6]) = v130;
          LODWORD(v136[4]) = 2;
          ndisNsiGetInterfaceRosEnumObject(
            (struct _NDIS_IF_BLOCK *)v9,
            (struct _NDIS_IF_BLOCK *)v10,
            (struct _NM_REQUEST_GET_PARAMETER *)v136);
          v134 += v130;
        }
        v138 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        v4 = v138;
        if ( !v10 )
          goto LABEL_95;
        if ( *(_BYTE *)(v10 + 1402) )
        {
          v37 = *(_QWORD *)(v10 + 1416) + 312LL;
          v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v37);
          v39 = *(_QWORD *)(v37 + 16);
          v40 = v38;
          if ( v39 )
          {
            v41 = *(unsigned __int8 *)(v39 + 1);
            if ( *(_BYTE *)(v39 + 1) )
            {
              if ( v41 == 1 )
              {
                v99 = v39 + 712;
                v100 = *(_DWORD *)(v39 + 768);
                if ( v100 >> 17 < 0x3FFE && (unsigned __int16)v100 >> 1 == (v100 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v39 + 712));
                  *(_DWORD *)(v99 + 56) &= 0x10001u;
                  Flink = v129;
                }
                else
                {
                  if ( (v100 & 0xFFFE) == 0 && (v100 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v39, 0xBuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v39 + 712), 0);
                  Flink = v129;
                }
              }
            }
            else
            {
              v42 = *(_QWORD *)(v39 + 8);
              if ( v42 && (v43 = *(_BYTE *)(v39 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v44 = (_BYTE *)(v42 + 2LL * (unsigned __int8)v41);
                  if ( *v44 == 11 )
                  {
                    if ( v44[1] )
                      break;
                  }
                  LOBYTE(v41) = v41 + 1;
                  if ( (unsigned __int8)v41 >= v43 )
                    goto LABEL_82;
                }
                --v44[1];
              }
              else
              {
LABEL_82:
                if ( !_bittestandreset((signed __int32 *)(v39 + 16), 0xBu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v39, 0xBuLL);
              }
            }
          }
          v27 = (*(_WORD *)(v37 + 8))-- == 1;
          if ( v27 && !*(_BYTE *)(v37 + 11) )
          {
            ndisFreeRefCount(*(PVOID *)(v37 + 16));
            *(_QWORD *)(v37 + 16) = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v37, v40);
          v1 = a1;
        }
        v45 = *(_QWORD *)(v10 + 1440);
        if ( v45 )
        {
          v46 = *(unsigned __int8 *)(v45 + 1);
          if ( *(_BYTE *)(v45 + 1) )
          {
            if ( v46 == 1 )
            {
              v101 = v45 + 456;
              v102 = *(_DWORD *)(v45 + 512);
              if ( v102 >> 17 < 0x3FFE && (unsigned __int16)v102 >> 1 == (v102 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v45 + 456));
                *(_DWORD *)(v101 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v102 & 0xFFFE) == 0 && (v102 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v10 + 1440), 7uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v45 + 456), 0);
              }
            }
          }
          else
          {
            v47 = *(_QWORD *)(v45 + 8);
            if ( v47 && (v48 = *(_BYTE *)(v45 + 3)) != 0 )
            {
              while ( 1 )
              {
                v49 = (_BYTE *)(v47 + 2LL * (unsigned __int8)v46);
                if ( *v49 == 7 )
                {
                  if ( v49[1] )
                    break;
                }
                LOBYTE(v46) = v46 + 1;
                if ( (unsigned __int8)v46 >= v48 )
                  goto LABEL_93;
              }
              --v49[1];
            }
            else
            {
LABEL_93:
              if ( !_bittestandreset((signed __int32 *)(v45 + 16), 7u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v45, 7uLL);
            }
          }
        }
        v27 = (*(_DWORD *)(v10 + 1304))-- == 1;
        if ( v27 )
        {
          v103 = *(_DWORD *)(v10 + 4);
          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
          ndisIfDeleteStackEntries(v10);
          *(_QWORD *)(v10 + 1296) = 0LL;
          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
          v104 = *(_QWORD *)(v10 + 1232);
          v105 = *(_QWORD **)(v10 + 1240);
          if ( *(_QWORD *)(v104 + 8) != v10 + 1232 || *v105 != v10 + 1232 )
            __fastfail(3u);
          *v105 = v104;
          *(_QWORD *)(v104 + 8) = v105;
          v106 = *(_QWORD *)(v10 + 1248);
          v107 = *(_QWORD **)(v10 + 1256);
          if ( *(_QWORD *)(v106 + 8) != v10 + 1248 || *v107 != v10 + 1248 )
            __fastfail(3u);
          *v107 = v106;
          *(_QWORD *)(v106 + 8) = v107;
          v108 = *(_QWORD *)(v10 + 1264);
          v109 = *(_QWORD **)(v10 + 1272);
          if ( *(_QWORD *)(v108 + 8) != v10 + 1264 || *v109 != v10 + 1264 )
            __fastfail(3u);
          *v109 = v108;
          *(_QWORD *)(v108 + 8) = v109;
          NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v10 + 1376));
          v110 = (unsigned int)(v103 - 1) >> 3;
          if ( IfUsedIfIndicesLength >= v110 + 1 )
            *((_BYTE *)IfUsedIfIndicesData + v110) &= ~(1 << ((v103 - 1) & 7));
          v111 = *(void **)(v10 + 1440);
          --ndisInterfaceCount;
          ndisFreeRefCount(v111);
          v112 = *(void **)(v10 + 1432);
          Blink = 0LL;
          *(_QWORD *)(v10 + 1440) = 0LL;
          if ( v112 )
          {
            ExFreePoolWithTag(v112, 0);
            *(_QWORD *)(v10 + 1432) = 0LL;
          }
          v113 = *(void **)(v10 + 1280);
          if ( v113 )
          {
            ExFreePoolWithTag(v113, 0);
            *(_QWORD *)(v10 + 1280) = 0LL;
            *(_QWORD *)(v10 + 1288) = 0LL;
          }
          v114 = *(struct _KEVENT **)(v10 + 1392);
          if ( v114 )
            KeSetEvent(v114, 0, 0);
          ExFreePoolWithTag((PVOID)v10, 0);
        }
        else
        {
LABEL_95:
          Blink = 0LL;
        }
        v50 = (ULONG_PTR)v9[90].Flink;
        Flink = Flink->Flink;
        v129 = Flink;
        if ( v50 )
        {
          v51 = *(unsigned __int8 *)(v50 + 1);
          if ( *(_BYTE *)(v50 + 1) )
          {
            if ( v51 == 1 )
            {
              v115 = v50 + 392;
              v116 = *(_DWORD *)(v50 + 448);
              if ( v116 >> 17 < 0x3FFE && (unsigned __int16)v116 >> 1 == (v116 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v50 + 392));
                *(_DWORD *)(v115 + 56) &= 0x10001u;
                Blink = 0LL;
              }
              else
              {
                if ( (v116 & 0xFFFE) == 0 && (v116 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v50, 6uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v50 + 392), 0);
                Blink = 0LL;
              }
            }
          }
          else
          {
            v52 = *(_QWORD *)(v50 + 8);
            if ( v52 && (v53 = *(_BYTE *)(v50 + 3)) != 0 )
            {
              while ( 1 )
              {
                v54 = (_BYTE *)(v52 + 2LL * (unsigned __int8)v51);
                if ( *v54 == 6 )
                {
                  if ( v54[1] )
                    break;
                }
                LOBYTE(v51) = v51 + 1;
                if ( (unsigned __int8)v51 >= v53 )
                  goto LABEL_102;
              }
              --v54[1];
            }
            else
            {
LABEL_102:
              if ( !_bittestandreset((signed __int32 *)(v50 + 16), 6u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v50, 6uLL);
            }
          }
        }
        v27 = LODWORD(v9[81].Blink)-- == 1;
        if ( v27 )
        {
          Flink_high = HIDWORD(v9->Flink);
          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
          ndisIfDeleteStackEntries(v9);
          v9[81].Flink = 0LL;
          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
          v118 = v9[77].Flink;
          v119 = v9[77].Blink;
          if ( v118->Blink != &v9[77] || v119->Flink != &v9[77] )
            __fastfail(3u);
          v119->Flink = v118;
          v118->Blink = v119;
          v120 = v9[78].Flink;
          v121 = v9[78].Blink;
          if ( v120->Blink != &v9[78] || v121->Flink != &v9[78] )
            __fastfail(3u);
          v121->Flink = v120;
          v120->Blink = v121;
          v122 = v9[79].Flink;
          v123 = v9[79].Blink;
          if ( v122->Blink != &v9[79] || v123->Flink != &v9[79] )
            __fastfail(3u);
          v123->Flink = v122;
          v122->Blink = v123;
          NETWORKBLOCK_DECREMENT_REF(v9[86].Flink);
          v124 = (unsigned int)(Flink_high - 1) >> 3;
          if ( IfUsedIfIndicesLength >= v124 + 1 )
            *((_BYTE *)IfUsedIfIndicesData + v124) &= ~(1 << ((Flink_high - 1) & 7));
          v125 = v9[90].Flink;
          --ndisInterfaceCount;
          ndisFreeRefCount(v125);
          v126 = v9[89].Blink;
          Blink = 0LL;
          v9[90].Flink = 0LL;
          if ( v126 )
          {
            ExFreePoolWithTag(v126, 0);
            v9[89].Blink = 0LL;
          }
          v127 = v9[80].Flink;
          if ( v127 )
          {
            ExFreePoolWithTag(v127, 0);
            v9[80].Flink = 0LL;
            v9[80].Blink = 0LL;
          }
          v128 = (struct _KEVENT *)v9[87].Flink;
          if ( v128 )
            KeSetEvent(v128, 0, 0);
          ExFreePoolWithTag(v9, 0);
        }
        v3 = v140;
        v8 = v139;
        continue;
      }
      Flink = Flink->Flink;
      v129 = Flink;
    }
  }
  *((_DWORD *)v1 + 22) = v8;
  if ( v8 > v3 )
LABEL_9:
    LODWORD(Blink) = 261;
LABEL_10:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(85LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v1, (unsigned int)Blink);
  return (unsigned int)Blink;
}
