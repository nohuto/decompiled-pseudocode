/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003870
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C003BA7C (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
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

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NM_REQUEST_GET_PARAMETER *v1; // rbp
  struct _NDIS_IF_BLOCK *v2; // rdi
  __int64 v3; // r13
  int v4; // esi
  union _NET_LUID_LH v5; // rbx
  KIRQL v6; // al
  int v7; // ecx
  KIRQL v8; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v10; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v12; // si
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rbx
  KSPIN_LOCK *v16; // r14
  __int64 v17; // rsi
  char v18; // r15
  KIRQL v19; // r12
  unsigned __int16 v20; // cx
  KIRQL v21; // bp
  ULONG_PTR v22; // r8
  __int64 v23; // rdx
  unsigned __int8 v24; // r10
  unsigned __int8 v25; // cl
  _BYTE *v26; // r9
  bool v27; // zf
  struct _KEVENT *v28; // rcx
  char v29; // r14
  KIRQL v30; // al
  ULONG_PTR v31; // r8
  KIRQL v32; // r15
  __int64 v33; // rdx
  unsigned __int8 v34; // r10
  unsigned __int8 v35; // cl
  _BYTE *v36; // r9
  KIRQL v37; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v39; // bl
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  int InterfaceRodInformation; // eax
  KIRQL v44; // r14
  __int64 v45; // rbx
  KIRQL v46; // al
  ULONG_PTR v47; // r8
  KIRQL v48; // bp
  __int64 v49; // r10
  unsigned __int8 v50; // r9
  unsigned __int8 v51; // cl
  _BYTE *v52; // rdx
  ULONG_PTR v53; // r8
  int v54; // ecx
  __int64 v55; // r9
  unsigned __int8 v56; // dl
  _BYTE *v57; // r10
  ULONG_PTR RefCountTracker; // r8
  int v59; // ecx
  __int64 v60; // rdx
  unsigned __int8 v61; // r9
  _BYTE *v62; // r10
  unsigned __int8 v64; // r10
  unsigned __int8 v65; // dl
  _BYTE *v66; // r9
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rsi
  char v70; // r14
  KIRQL v71; // r12
  unsigned __int16 v72; // cx
  KIRQL v73; // al
  KIRQL v74; // si
  ULONG_PTR v75; // rcx
  struct _KEVENT *v76; // rcx
  char v77; // bp
  KIRQL v78; // al
  ULONG_PTR v79; // rcx
  KIRQL v80; // r14
  int v81; // eax
  int v82; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  ULONG_PTR v84; // rsi
  unsigned int v85; // edx
  ULONG_PTR v86; // rbp
  unsigned int v87; // edx
  struct _KEVENT *v88; // rcx
  ULONG_PTR v89; // rsi
  unsigned int v90; // edx
  _NDIS_MINIPORT_BLOCK *v91; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  struct _KEVENT *v93; // rcx
  ULONG_PTR v94; // rsi
  unsigned int v95; // edx
  ULONG_PTR v96; // rbx
  unsigned int v97; // edx
  int v98; // ebx
  __int64 v99; // rdx
  _QWORD *v100; // rcx
  __int64 v101; // rdx
  _QWORD *v102; // rcx
  __int64 v103; // rdx
  _QWORD *v104; // rcx
  unsigned int v105; // ecx
  void *v106; // rcx
  void *v107; // rcx
  void *v108; // rcx
  struct _KEVENT *v109; // rcx
  ULONG_PTR v110; // rbx
  unsigned int v111; // edx
  unsigned int ifIndex; // ebx
  _LIST_ENTRY *v113; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v115; // rdx
  _LIST_ENTRY *v116; // rcx
  _LIST_ENTRY *v117; // rdx
  _LIST_ENTRY *v118; // rcx
  unsigned int v119; // ecx
  NDIS_REFCOUNT_HANDLE__ *v120; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  KIRQL v125; // [rsp+78h] [rbp+10h]
  int v126; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v126 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(72LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v1 + 6) != 8 )
  {
    v4 = -1073741808;
    v126 = -1073741808;
    goto LABEL_71;
  }
  if ( !*((_DWORD *)v1 + 12) )
  {
    v4 = -1073741808;
    v126 = -1073741808;
    goto LABEL_71;
  }
  if ( !*((_QWORD *)v1 + 5) )
  {
    v4 = -1073741808;
    v126 = -1073741808;
    goto LABEL_71;
  }
  v5.Value = (*((union _NET_LUID_LH **)v1 + 2))->Value;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v7 = *((_DWORD *)v1 + 14);
  v8 = v6;
  v125 = v6;
  if ( v7 )
  {
    v82 = v7 - 1;
    if ( v82 )
    {
      if ( v82 == 1 )
        goto LABEL_152;
      v4 = -1073741808;
      v126 = -1073741808;
    }
    else
    {
      v5.Value = 0LL;
LABEL_152:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v5);
        v2 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v5.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (NextInterfaceByNetLuid->Compartment->LoopbackInfo.Flags & 2) == 0 )
          goto LABEL_13;
      }
    }
  }
  else
  {
    Flink = ndisIfList.Flink;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v10 = Flink[5].Flink;
        if ( v10 == (_LIST_ENTRY *)v5.Value )
          break;
        if ( (unsigned __int64)v10 <= v5.Value )
        {
          Flink = Flink->Flink;
          if ( Flink != &ndisIfList )
            continue;
        }
        goto LABEL_13;
      }
      v2 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
    }
LABEL_13:
    if ( v2 )
    {
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2->RefCountTracker);
      ++v2->Ref;
      if ( !v2->bNdisIsProvider || *((_QWORD *)v1 + 1) >= 2uLL )
        goto LABEL_62;
      Miniport = 0LL;
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( v2->MiniportAvailable )
      {
        Miniport = v2->Miniport;
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2->MpRefCountTracker);
        ++v2->MiniportLinkReference;
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v12);
      if ( Miniport )
      {
        v14 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Miniport, 0, v13, 0, 2, 58);
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
              v18 = 0;
              v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 312));
              if ( !*(_BYTE *)(v17 + 322) )
              {
                v20 = *(_WORD *)(v17 + 320);
                if ( v20 < 0xFFEBu )
                {
                  *(_WORD *)(v17 + 320) = v20 + 1;
                  ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v17 + 328));
                  v18 = 1;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 312), v19);
              if ( v18 )
                break;
              v17 = *(_QWORD *)(v17 + 112);
              if ( !v17 )
                goto LABEL_109;
            }
            v3 = *(_QWORD *)(v17 + 832);
          }
          else
          {
LABEL_109:
            v3 = *(_QWORD *)(v15 + 4096);
          }
          *(_QWORD *)(v15 + 520) = 0LL;
          *(_DWORD *)(v15 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel(v16);
          v21 = KeAcquireSpinLockRaiseToDpc(v16);
          v22 = *(_QWORD *)(v15 + 4960);
          *(_QWORD *)(v15 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v15 + 1856) = 71733;
          if ( v22 )
          {
            if ( *(_BYTE *)(v22 + 1) )
            {
              if ( *(_BYTE *)(v22 + 1) == 1 )
              {
                v84 = v22 + 136;
                v85 = *(_DWORD *)(v22 + 192);
                if ( v85 >> 17 < 0x3FFE && (unsigned __int16)v85 >> 1 == (v85 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v22 + 136));
                  *(_DWORD *)(v84 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v85 & 0xFFFE) == 0 && (v85 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v22, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 136), 0);
                }
              }
            }
            else
            {
              v23 = *(_QWORD *)(v22 + 8);
              if ( v23 && (v24 = *(_BYTE *)(v22 + 3), v25 = 0, v24) )
              {
                while ( 1 )
                {
                  v26 = (_BYTE *)(v23 + 2LL * v25);
                  if ( *v26 == 2 )
                  {
                    if ( v26[1] )
                      break;
                  }
                  if ( ++v25 >= v24 )
                    goto LABEL_32;
                }
                --v26[1];
              }
              else
              {
LABEL_32:
                if ( !_bittestandreset((signed __int32 *)(v22 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v22, 2uLL);
              }
            }
          }
          v27 = (*(_DWORD *)(v15 + 3164))-- == 1;
          if ( v27 )
          {
            v28 = *(struct _KEVENT **)(v15 + 3176);
            if ( v28 )
              KeSetEvent(v28, 0, 0);
          }
          *(_QWORD *)(v15 + 520) = 0LL;
          *(_DWORD *)(v15 + 1856) = 0;
          KeReleaseSpinLock(v16, v21);
          if ( (unsigned __int8)byte_1C008531B >= 4u )
            WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v15);
          v29 = 0;
          v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 4496));
          v31 = *(_QWORD *)(v15 + 4952);
          v32 = v30;
          if ( v31 )
          {
            if ( *(_BYTE *)(v31 + 1) )
            {
              if ( *(_BYTE *)(v31 + 1) == 1 )
              {
                v86 = v31 + 3720;
                v87 = *(_DWORD *)(v31 + 3776);
                if ( v87 >> 17 < 0x3FFE && (unsigned __int16)v87 >> 1 == (v87 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 3720));
                  *(_DWORD *)(v86 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v87 & 0xFFFE) == 0 && (v87 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v31, 0x3AuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 3720), 0);
                }
              }
            }
            else
            {
              v33 = *(_QWORD *)(v31 + 8);
              if ( v33 && (v34 = *(_BYTE *)(v31 + 3), v35 = 0, v34) )
              {
                while ( 1 )
                {
                  v36 = (_BYTE *)(v33 + 2LL * v35);
                  if ( *v36 == 58 )
                  {
                    if ( v36[1] )
                      break;
                  }
                  if ( ++v35 >= v34 )
                    goto LABEL_44;
                }
                --v36[1];
              }
              else
              {
LABEL_44:
                if ( !_bittestandreset((signed __int32 *)(v31 + 20), 0x1Au) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v31, 0x3AuLL);
              }
            }
          }
          v27 = (*(_DWORD *)(v15 + 4504))-- == 1;
          if ( v27 )
            v29 = 1;
          if ( (unsigned __int8)byte_1C008531B >= 4u )
            WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v15, *(unsigned int *)(v15 + 4504));
          KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 4496), v32);
          if ( v29 )
          {
            v88 = *(struct _KEVENT **)(v15 + 1608);
            if ( v88 )
              KeSetEvent(v88, 0, 0);
          }
          if ( (unsigned __int8)byte_1C008531B >= 4u )
            WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v15);
        }
        v37 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        MpRefCountTracker = (ULONG_PTR)v2->MpRefCountTracker;
        v39 = v37;
        if ( MpRefCountTracker )
        {
          if ( *(_BYTE *)(MpRefCountTracker + 1) )
          {
            if ( *(_BYTE *)(MpRefCountTracker + 1) == 1 )
            {
              v89 = MpRefCountTracker + 200;
              v90 = *(_DWORD *)(MpRefCountTracker + 256);
              if ( v90 >> 17 < 0x3FFE && (unsigned __int16)v90 >> 1 == (v90 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                *(_DWORD *)(v89 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v90 & 0xFFFE) == 0 && (v90 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
              }
            }
          }
          else
          {
            v40 = *(_QWORD *)(MpRefCountTracker + 8);
            if ( v40 && (v64 = *(_BYTE *)(MpRefCountTracker + 3), v65 = 0, v64) )
            {
              while ( 1 )
              {
                v66 = (_BYTE *)(v40 + 2LL * v65);
                if ( *v66 == 3 )
                {
                  if ( v66[1] )
                    break;
                }
                if ( ++v65 >= v64 )
                  goto LABEL_55;
              }
              --v66[1];
            }
            else
            {
LABEL_55:
              if ( !_bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
            }
          }
        }
        v27 = v2->MiniportLinkReference-- == 1;
        if ( v27 )
        {
          v91 = v2->Miniport;
          if ( v91 )
          {
            IfBlockPointerRefZeroEvent = v91->IfBlockPointerRefZeroEvent;
            if ( IfBlockPointerRefZeroEvent )
              KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v39);
      }
      else
      {
        if ( !v2->IsNdisFilter
          || (v67 = ndisReferenceTopMiniportByNameForNsi(*(_QWORD *)&v2->Miniport->Reserved4.Length, 0, v13, 0, 2, 58),
              (v68 = v67) == 0) )
        {
LABEL_61:
          v4 = 0;
LABEL_62:
          **((_QWORD **)v1 + 2) = v2->NetLuid.Value;
          goto LABEL_63;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v67 + 96));
        v69 = *(_QWORD *)(v68 + 2056);
        *(_QWORD *)(v68 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v68 + 1856) = 2234777;
        if ( v69 )
        {
          while ( 1 )
          {
            v70 = 0;
            v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v69 + 312));
            if ( !*(_BYTE *)(v69 + 322) )
            {
              v72 = *(_WORD *)(v69 + 320);
              if ( v72 < 0xFFEBu )
              {
                *(_WORD *)(v69 + 320) = v72 + 1;
                ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v69 + 328));
                v70 = 1;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v69 + 312), v71);
            if ( v70 )
              break;
            v69 = *(_QWORD *)(v69 + 112);
            if ( !v69 )
              goto LABEL_193;
          }
          v3 = *(_QWORD *)(v69 + 832);
        }
        else
        {
LABEL_193:
          v3 = *(_QWORD *)(v68 + 4096);
        }
        *(_QWORD *)(v68 + 520) = 0LL;
        *(_DWORD *)(v68 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v68 + 96));
        v73 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v68 + 96));
        *(_QWORD *)(v68 + 520) = KeGetCurrentThread();
        v74 = v73;
        v75 = *(_QWORD *)(v68 + 4960);
        *(_DWORD *)(v68 + 1856) = 71733;
        ndisDereferenceWithTag(v75, 2u);
        v27 = (*(_DWORD *)(v68 + 3164))-- == 1;
        if ( v27 )
        {
          v76 = *(struct _KEVENT **)(v68 + 3176);
          if ( v76 )
            KeSetEvent(v76, 0, 0);
        }
        *(_QWORD *)(v68 + 520) = 0LL;
        *(_DWORD *)(v68 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v68 + 96), v74);
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v68);
        v77 = 0;
        v78 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v68 + 4496));
        v79 = *(_QWORD *)(v68 + 4952);
        v80 = v78;
        if ( v79 )
          ndisDereferenceWithTag(v79, 0x3Au);
        v27 = (*(_DWORD *)(v68 + 4504))-- == 1;
        if ( v27 )
          v77 = 1;
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v68, *(unsigned int *)(v68 + 4504));
        KeReleaseSpinLock((PKSPIN_LOCK)(v68 + 4496), v80);
        if ( v77 )
        {
          v93 = *(struct _KEVENT **)(v68 + 1608);
          if ( v93 )
            KeSetEvent(v93, 0, 0);
        }
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v68);
      }
      if ( v3 )
      {
        ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v3 + 1440));
        ++*(_DWORD *)(v3 + 1304);
      }
      v8 = v125;
      v1 = a1;
      goto LABEL_61;
    }
  }
LABEL_63:
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( v4 < 0 )
    goto LABEL_71;
  if ( v2 )
  {
    v41 = *((_QWORD *)v1 + 1);
    v4 = -1073741811;
    v126 = -1073741811;
    switch ( v41 )
    {
      case 0LL:
        goto LABEL_66;
      case 1LL:
        goto LABEL_140;
      case 12LL:
LABEL_66:
        v42 = *((_DWORD *)v1 + 8);
        if ( v42 )
        {
          if ( v42 == 1 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v2, (struct _NDIS_IF_BLOCK *)v3, v1);
          }
          else
          {
            if ( v42 != 2 )
              break;
            InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v2, (struct _NDIS_IF_BLOCK *)v3, v1);
          }
        }
        else
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v2, (struct _NDIS_IF_BLOCK *)v3, v1);
        }
        goto LABEL_70;
      case 13LL:
LABEL_140:
        v81 = *((_DWORD *)v1 + 8);
        if ( v81 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v2, (struct _NDIS_IF_BLOCK *)v3, v1);
          goto LABEL_70;
        }
        if ( v81 == 2 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v2, (struct _NDIS_IF_BLOCK *)v3, v1);
LABEL_70:
          v4 = InterfaceRodInformation;
          v126 = InterfaceRodInformation;
        }
        break;
    }
  }
  else if ( *((_DWORD *)v1 + 14) )
  {
    v4 = -2147483622;
    v126 = -2147483622;
  }
  else
  {
    v4 = -1073741772;
    v126 = -1073741772;
  }
LABEL_71:
  v44 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 1402) )
    {
      v45 = *(_QWORD *)(v3 + 1416) + 312LL;
      v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v45);
      v47 = *(_QWORD *)(v45 + 16);
      v48 = v46;
      if ( v47 )
      {
        if ( *(_BYTE *)(v47 + 1) )
        {
          if ( *(_BYTE *)(v47 + 1) == 1 )
          {
            v94 = v47 + 712;
            v95 = *(_DWORD *)(v47 + 768);
            if ( v95 >> 17 < 0x3FFE && (unsigned __int16)v95 >> 1 == (v95 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 712));
              *(_DWORD *)(v94 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v95 & 0xFFFE) == 0 && (v95 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v47, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 712), 0);
            }
            v4 = v126;
          }
        }
        else
        {
          v49 = *(_QWORD *)(v47 + 8);
          if ( v49 && (v50 = *(_BYTE *)(v47 + 3), v51 = 0, v50) )
          {
            while ( 1 )
            {
              v52 = (_BYTE *)(v49 + 2LL * v51);
              if ( *v52 == 11 )
              {
                if ( v52[1] )
                  break;
              }
              if ( ++v51 >= v50 )
                goto LABEL_80;
            }
            --v52[1];
          }
          else
          {
LABEL_80:
            if ( !_bittestandreset((signed __int32 *)(v47 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v47, 0xBuLL);
          }
        }
      }
      v27 = (*(_WORD *)(v45 + 8))-- == 1;
      if ( v27 && !*(_BYTE *)(v45 + 11) )
      {
        ndisFreeRefCount(*(PVOID *)(v45 + 16));
        *(_QWORD *)(v45 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v45, v48);
      v1 = a1;
    }
    v53 = *(_QWORD *)(v3 + 1440);
    if ( v53 )
    {
      v54 = *(unsigned __int8 *)(v53 + 1);
      if ( *(_BYTE *)(v53 + 1) )
      {
        if ( v54 == 1 )
        {
          v96 = v53 + 136;
          v97 = *(_DWORD *)(v53 + 192);
          if ( v97 >> 17 < 0x3FFE && (unsigned __int16)v97 >> 1 == (v97 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v53 + 136));
            *(_DWORD *)(v96 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v97 & 0xFFFE) == 0 && (v97 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v53, 2uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v53 + 136), 0);
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
            if ( *v57 == 2 )
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
          if ( !_bittestandreset((signed __int32 *)(v53 + 16), 2u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v53, 2uLL);
        }
      }
    }
    v27 = (*(_DWORD *)(v3 + 1304))-- == 1;
    if ( v27 )
    {
      v98 = *(_DWORD *)(v3 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v3);
      *(_QWORD *)(v3 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v99 = *(_QWORD *)(v3 + 1232);
      v100 = *(_QWORD **)(v3 + 1240);
      if ( *(_QWORD *)(v99 + 8) != v3 + 1232 || *v100 != v3 + 1232 )
        __fastfail(3u);
      *v100 = v99;
      *(_QWORD *)(v99 + 8) = v100;
      v101 = *(_QWORD *)(v3 + 1248);
      v102 = *(_QWORD **)(v3 + 1256);
      if ( *(_QWORD *)(v101 + 8) != v3 + 1248 || *v102 != v3 + 1248 )
        __fastfail(3u);
      *v102 = v101;
      *(_QWORD *)(v101 + 8) = v102;
      v103 = *(_QWORD *)(v3 + 1264);
      v104 = *(_QWORD **)(v3 + 1272);
      if ( *(_QWORD *)(v103 + 8) != v3 + 1264 || *v104 != v3 + 1264 )
        __fastfail(3u);
      *v104 = v103;
      *(_QWORD *)(v103 + 8) = v104;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v3 + 1376));
      v105 = (unsigned int)(v98 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v105 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v105) &= ~(1 << ((v98 - 1) & 7));
      v106 = *(void **)(v3 + 1440);
      --ndisInterfaceCount;
      ndisFreeRefCount(v106);
      v107 = *(void **)(v3 + 1432);
      *(_QWORD *)(v3 + 1440) = 0LL;
      if ( v107 )
      {
        ExFreePoolWithTag(v107, 0);
        *(_QWORD *)(v3 + 1432) = 0LL;
      }
      v108 = *(void **)(v3 + 1280);
      if ( v108 )
      {
        ExFreePoolWithTag(v108, 0);
        *(_QWORD *)(v3 + 1280) = 0LL;
        *(_QWORD *)(v3 + 1288) = 0LL;
      }
      v109 = *(struct _KEVENT **)(v3 + 1392);
      if ( v109 )
        KeSetEvent(v109, 0, 0);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
  }
  if ( v2 )
  {
    RefCountTracker = (ULONG_PTR)v2->RefCountTracker;
    if ( RefCountTracker )
    {
      v59 = *(unsigned __int8 *)(RefCountTracker + 1);
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( v59 == 1 )
        {
          v110 = RefCountTracker + 72;
          v111 = *(_DWORD *)(RefCountTracker + 128);
          if ( v111 >> 17 < 0x3FFE && (unsigned __int16)v111 >> 1 == (v111 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 72));
            *(_DWORD *)(v110 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v111 & 0xFFFE) == 0 && (v111 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 72), 0);
          }
        }
      }
      else
      {
        v60 = *(_QWORD *)(RefCountTracker + 8);
        if ( v60 && (v61 = *(_BYTE *)(RefCountTracker + 3)) != 0 )
        {
          while ( 1 )
          {
            v62 = (_BYTE *)(v60 + 2LL * (unsigned __int8)v59);
            if ( *v62 == 1 )
            {
              if ( v62[1] )
                break;
            }
            LOBYTE(v59) = v59 + 1;
            if ( (unsigned __int8)v59 >= v61 )
              goto LABEL_100;
          }
          --v62[1];
        }
        else
        {
LABEL_100:
          if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 1uLL);
        }
      }
    }
    v27 = v2->Ref-- == 1;
    if ( v27 )
    {
      ifIndex = v2->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v2);
      *(_QWORD *)&v2->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v113 = v2->Link.Flink;
      Blink = v2->Link.Blink;
      if ( v113->Blink != &v2->Link || Blink->Flink != &v2->Link )
        __fastfail(3u);
      Blink->Flink = v113;
      v113->Blink = Blink;
      v115 = v2->ProviderLink.Flink;
      v116 = v2->ProviderLink.Blink;
      if ( v115->Blink != &v2->ProviderLink || v116->Flink != &v2->ProviderLink )
        __fastfail(3u);
      v116->Flink = v115;
      v115->Blink = v116;
      v117 = v2->NetworkLink.Flink;
      v118 = v2->NetworkLink.Blink;
      if ( v117->Blink != &v2->NetworkLink || v118->Flink != &v2->NetworkLink )
        __fastfail(3u);
      v118->Flink = v117;
      v117->Blink = v118;
      NETWORKBLOCK_DECREMENT_REF(v2->Network);
      v119 = (ifIndex - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v119 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v119) &= ~(1 << ((ifIndex - 1) & 7));
      v120 = v2->RefCountTracker;
      --ndisInterfaceCount;
      ndisFreeRefCount(v120);
      ifL2NetworkInfo = v2->ifL2NetworkInfo;
      v2->RefCountTracker = 0LL;
      if ( ifL2NetworkInfo )
      {
        ExFreePoolWithTag(ifL2NetworkInfo, 0);
        v2->ifL2NetworkInfo = 0LL;
      }
      ifRcvAddressTable = v2->ifRcvAddressTable;
      if ( ifRcvAddressTable )
      {
        ExFreePoolWithTag(ifRcvAddressTable, 0);
        v2->ifRcvAddressTable = 0LL;
        *(_QWORD *)&v2->ifRcvAddressCount = 0LL;
      }
      AsyncEvent = v2->AsyncEvent;
      if ( AsyncEvent )
        KeSetEvent(AsyncEvent, 0, 0);
      ExFreePoolWithTag(v2, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v44);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(73LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v1, (unsigned int)v4);
  return (unsigned int)v4;
}
