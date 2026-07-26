/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004ADC (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     ?ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z @ 0x1C001600C (-ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C003C7D4 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
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

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v1; // r12d
  struct _NM_REQUEST_GET_PARAMETER *v2; // rdi
  struct _NDIS_IF_BLOCK *v3; // rsi
  struct _NDIS_IF_BLOCK *TopIfBlockFromMiniport; // r14
  int v5; // r13d
  struct _KTHREAD *CurrentThread; // r15
  union _NET_LUID_LH v7; // rbx
  unsigned int *ThreadProperty; // rax
  unsigned int v9; // ebp
  PACCESS_TOKEN v10; // rax
  void *v11; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v14; // al
  int v15; // ecx
  KIRQL v16; // r15
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Flink; // rdx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v20; // di
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rbx
  KSPIN_LOCK *v25; // r12
  __int64 v26; // r14
  char v27; // bp
  KIRQL v28; // r15
  unsigned __int16 v29; // cx
  KIRQL v30; // bp
  ULONG_PTR v31; // r8
  __int64 v32; // rcx
  unsigned __int8 v33; // r9
  unsigned __int8 v34; // dl
  bool v35; // zf
  struct _KEVENT *v36; // rcx
  KIRQL v37; // al
  ULONG_PTR v38; // r8
  KIRQL v39; // r15
  __int64 v40; // rcx
  unsigned __int8 v41; // r9
  unsigned __int8 v42; // dl
  bool v43; // di
  KIRQL v44; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v46; // di
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  int InterfaceRodInformation; // eax
  KIRQL v51; // r15
  __int64 p_DeferredContext; // rbx
  KIRQL v53; // al
  ULONG_PTR v54; // r8
  KIRQL v55; // bp
  __int64 v56; // rax
  unsigned __int8 v57; // r9
  unsigned __int8 v58; // dl
  ULONG_PTR RefCountTracker; // r8
  __int64 v60; // rax
  unsigned __int8 v61; // r9
  unsigned __int8 v62; // dl
  ULONG_PTR v63; // r8
  int v64; // ecx
  __int64 v65; // rax
  unsigned __int8 v66; // r9
  unsigned __int8 v67; // dl
  unsigned __int8 v69; // r9
  unsigned __int8 v70; // dl
  NTSTATUS v71; // edi
  KIRQL v72; // r8
  int v73; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  ULONG_PTR v75; // rdi
  unsigned int v76; // edx
  ULONG_PTR v77; // rdi
  unsigned int v78; // edx
  struct _KEVENT *v79; // rcx
  ULONG_PTR v80; // rbx
  unsigned int v81; // edx
  _NDIS_MINIPORT_BLOCK *v82; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v84; // eax
  ULONG_PTR v85; // rdi
  unsigned int v86; // edx
  ULONG_PTR v87; // rbx
  unsigned int v88; // edx
  unsigned int ifIndex; // ebx
  _LIST_ENTRY *v90; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v92; // rdx
  _LIST_ENTRY *v93; // rcx
  _LIST_ENTRY *v94; // rdx
  _LIST_ENTRY *v95; // rcx
  __int64 v96; // rcx
  NDIS_REFCOUNT_HANDLE__ *v97; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v101; // rbx
  unsigned int v102; // edx
  unsigned int v103; // ebx
  _LIST_ENTRY *v104; // rdx
  _LIST_ENTRY *v105; // rcx
  _LIST_ENTRY *v106; // rdx
  _LIST_ENTRY *v107; // rcx
  _LIST_ENTRY *v108; // rdx
  _LIST_ENTRY *v109; // rcx
  __int64 v110; // rcx
  NDIS_REFCOUNT_HANDLE__ *v111; // rcx
  _IF_COUNTED_STRING_LH *v112; // rcx
  _NDIS_IF_RCV_ADDRESS *v113; // rcx
  struct _KEVENT *v114; // rcx
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+30h] [rbp-58h] BYREF
  PVOID TokenInformation; // [rsp+38h] [rbp-50h] BYREF
  KIRQL v118; // [rsp+98h] [rbp+10h]
  BOOLEAN EffectiveOnly; // [rsp+A0h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+A8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = a1;
  v3 = 0LL;
  TopIfBlockFromMiniport = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(72LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 || !*((_DWORD *)v2 + 12) || !*((_QWORD *)v2 + 5) )
  {
    v5 = -1073741808;
    goto LABEL_83;
  }
  CurrentThread = KeGetCurrentThread();
  v7.Value = (*((union _NET_LUID_LH **)v2 + 2))->Value;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x734E774EuLL, 0);
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    v1 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v10 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v11 = v10;
      if ( v10 )
      {
        v71 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v11);
        if ( v71 >= 0 )
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
      v72 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v9 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v72);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v9 = 1;
    }
    v2 = a1;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = *((_DWORD *)v2 + 14);
  v16 = v14;
  v118 = v14;
  if ( v15 )
  {
    v73 = v15 - 1;
    if ( v73 )
    {
      if ( v73 == 1 )
        goto LABEL_147;
      v5 = -1073741808;
    }
    else
    {
      v7.Value = 0LL;
LABEL_147:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v7);
        v3 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v7.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( ndisIsCompartmentEnumerableByCaller(NextInterfaceByNetLuid->Compartment, v1, v9) )
          goto LABEL_26;
      }
    }
  }
  else
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Flink = i[5].Flink;
      if ( Flink == (_LIST_ENTRY *)v7.Value )
      {
        v3 = (struct _NDIS_IF_BLOCK *)&i[-77];
        break;
      }
      if ( (unsigned __int64)Flink > v7.Value )
        break;
    }
LABEL_26:
    if ( v3 )
    {
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v3->RefCountTracker);
      ++v3->Ref;
      TopIfBlockFromMiniport = 0LL;
      if ( !v3->bNdisIsProvider || *((_QWORD *)v2 + 1) >= 2uLL )
        goto LABEL_74;
      Miniport = 0LL;
      v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( v3->MiniportAvailable )
      {
        Miniport = v3->Miniport;
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v3->MpRefCountTracker);
        ++v3->MiniportLinkReference;
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v20);
      if ( Miniport )
      {
        v23 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Miniport, 0, v22, 0, 2, 58);
        v24 = v23;
        if ( v23 )
        {
          v25 = (KSPIN_LOCK *)(v23 + 96);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 96));
          v26 = *(_QWORD *)(v24 + 2056);
          *(_QWORD *)(v24 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v24 + 1856) = 2234889;
          if ( !v26 )
            goto LABEL_124;
          do
          {
            v27 = 0;
            v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 312));
            if ( !*(_BYTE *)(v26 + 322) )
            {
              v29 = *(_WORD *)(v26 + 320);
              if ( v29 < 0xFFEBu )
              {
                *(_WORD *)(v26 + 320) = v29 + 1;
                ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v26 + 328));
                v27 = 1;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 312), v28);
            if ( v27 )
              break;
            v26 = *(_QWORD *)(v26 + 112);
          }
          while ( v26 );
          v25 = (KSPIN_LOCK *)(v24 + 96);
          if ( v26 )
            TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v26 + 832);
          else
LABEL_124:
            TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v24 + 4096);
          *(_QWORD *)(v24 + 520) = 0LL;
          *(_DWORD *)(v24 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel(v25);
          v30 = KeAcquireSpinLockRaiseToDpc(v25);
          v31 = *(_QWORD *)(v24 + 4960);
          *(_QWORD *)(v24 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v24 + 1856) = 71717;
          if ( v31 )
          {
            if ( *(_BYTE *)(v31 + 1) )
            {
              if ( *(_BYTE *)(v31 + 1) == 1 )
              {
                v75 = v31 + 136;
                v76 = *(_DWORD *)(v31 + 192);
                if ( v76 >> 17 < 0x3FFE && (unsigned __int16)v76 >> 1 == (v76 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 136));
                  *(_DWORD *)(v75 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v76 & 0xFFFE) == 0 && (v76 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v31, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 136), 0);
                }
              }
            }
            else
            {
              v32 = *(_QWORD *)(v31 + 8);
              if ( v32 && (v33 = *(_BYTE *)(v31 + 3), v34 = 0, v33) )
              {
                while ( *(_BYTE *)(v32 + 2LL * v34) != 2 || !*(_BYTE *)(v32 + 2LL * v34 + 1) )
                {
                  if ( ++v34 >= v33 )
                    goto LABEL_46;
                }
                --*(_BYTE *)(v32 + 2LL * v34 + 1);
              }
              else
              {
LABEL_46:
                if ( !_bittestandreset((signed __int32 *)(v31 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v31, 2uLL);
              }
            }
          }
          v35 = (*(_DWORD *)(v24 + 3164))-- == 1;
          if ( v35 )
          {
            v36 = *(struct _KEVENT **)(v24 + 3176);
            if ( v36 )
              KeSetEvent(v36, 0, 0);
          }
          *(_QWORD *)(v24 + 520) = 0LL;
          *(_DWORD *)(v24 + 1856) = 0;
          KeReleaseSpinLock(v25, v30);
          if ( (unsigned __int8)byte_1C008371B >= 4u )
            WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v24);
          v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 4496));
          v38 = *(_QWORD *)(v24 + 4952);
          v39 = v37;
          if ( v38 )
          {
            if ( *(_BYTE *)(v38 + 1) )
            {
              if ( *(_BYTE *)(v38 + 1) == 1 )
              {
                v77 = v38 + 3720;
                v78 = *(_DWORD *)(v38 + 3776);
                if ( v78 >> 17 < 0x3FFE && (unsigned __int16)v78 >> 1 == (v78 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v38 + 3720));
                  *(_DWORD *)(v77 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v78 & 0xFFFE) == 0 && (v78 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v38, 0x3AuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v38 + 3720), 0);
                }
              }
            }
            else
            {
              v40 = *(_QWORD *)(v38 + 8);
              if ( v40 && (v41 = *(_BYTE *)(v38 + 3), v42 = 0, v41) )
              {
                while ( *(_BYTE *)(v40 + 2LL * v42) != 58 || !*(_BYTE *)(v40 + 2LL * v42 + 1) )
                {
                  if ( ++v42 >= v41 )
                    goto LABEL_58;
                }
                --*(_BYTE *)(v40 + 2LL * v42 + 1);
              }
              else
              {
LABEL_58:
                if ( !_bittestandreset((signed __int32 *)(v38 + 20), 0x1Au) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v38, 0x3AuLL);
              }
            }
          }
          v43 = --*(_DWORD *)(v24 + 4504) == 0;
          if ( (unsigned __int8)byte_1C008371B >= 4u )
            WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v24, *(unsigned int *)(v24 + 4504));
          KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 4496), v39);
          if ( v43 )
          {
            v79 = *(struct _KEVENT **)(v24 + 1608);
            if ( v79 )
              KeSetEvent(v79, 0, 0);
          }
          if ( (unsigned __int8)byte_1C008371B >= 4u )
            WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v24);
          v16 = v118;
        }
        v44 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        MpRefCountTracker = (ULONG_PTR)v3->MpRefCountTracker;
        v46 = v44;
        if ( MpRefCountTracker )
        {
          if ( *(_BYTE *)(MpRefCountTracker + 1) )
          {
            if ( *(_BYTE *)(MpRefCountTracker + 1) == 1 )
            {
              v80 = MpRefCountTracker + 200;
              v81 = *(_DWORD *)(MpRefCountTracker + 256);
              if ( v81 >> 17 < 0x3FFE && (unsigned __int16)v81 >> 1 == (v81 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                *(_DWORD *)(v80 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v81 & 0xFFFE) == 0 && (v81 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
              }
            }
          }
          else
          {
            v47 = *(_QWORD *)(MpRefCountTracker + 8);
            if ( v47 && (v69 = *(_BYTE *)(MpRefCountTracker + 3), v70 = 0, v69) )
            {
              while ( *(_BYTE *)(v47 + 2LL * v70) != 3 || !*(_BYTE *)(v47 + 2LL * v70 + 1) )
              {
                if ( ++v70 >= v69 )
                  goto LABEL_68;
              }
              --*(_BYTE *)(v47 + 2LL * v70 + 1);
            }
            else
            {
LABEL_68:
              if ( !_bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
            }
          }
        }
        v35 = v3->MiniportLinkReference-- == 1;
        if ( v35 )
        {
          v82 = v3->Miniport;
          if ( v82 )
          {
            IfBlockPointerRefZeroEvent = v82->IfBlockPointerRefZeroEvent;
            if ( IfBlockPointerRefZeroEvent )
              KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v46);
      }
      else
      {
        if ( !v3->IsNdisFilter )
        {
LABEL_73:
          v2 = a1;
LABEL_74:
          **((_QWORD **)v2 + 2) = v3->NetLuid.Value;
          goto LABEL_75;
        }
        TopIfBlockFromMiniport = ndisNsiGetTopIfBlockFromMiniport(
                                   *(struct _NDIS_MINIPORT_BLOCK **)&v3->Miniport->Reserved4.Length,
                                   v21,
                                   v22);
      }
      if ( TopIfBlockFromMiniport )
      {
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)TopIfBlockFromMiniport->RefCountTracker);
        ++TopIfBlockFromMiniport->Ref;
      }
      goto LABEL_73;
    }
  }
LABEL_75:
  KeReleaseSpinLock(&ndisIfListLock, v16);
  if ( v5 < 0 )
    goto LABEL_83;
  if ( v3 )
  {
    v48 = *((_QWORD *)v2 + 1);
    v5 = -1073741811;
    if ( !v48 || v48 == 12 )
    {
      v49 = *((_DWORD *)v2 + 8);
      if ( v49 )
      {
        if ( v49 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v3, TopIfBlockFromMiniport, v2);
        }
        else
        {
          if ( v49 != 2 )
            goto LABEL_83;
          InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v3, TopIfBlockFromMiniport, v2);
        }
      }
      else
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v3, TopIfBlockFromMiniport, v2);
      }
      goto LABEL_82;
    }
    if ( v48 == 1 || v48 == 13 )
    {
      v84 = *((_DWORD *)v2 + 8);
      if ( v84 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v3, TopIfBlockFromMiniport, v2);
LABEL_82:
        v5 = InterfaceRodInformation;
        goto LABEL_83;
      }
      if ( v84 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v3, TopIfBlockFromMiniport, v2);
        goto LABEL_82;
      }
    }
  }
  else
  {
    v5 = *((_DWORD *)v2 + 14) != 0 ? -2147483622 : -1073741772;
  }
LABEL_83:
  v51 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( TopIfBlockFromMiniport )
  {
    if ( TopIfBlockFromMiniport->IsNdisFilter )
    {
      p_DeferredContext = (__int64)&TopIfBlockFromMiniport->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
      v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
      v54 = *(_QWORD *)(p_DeferredContext + 16);
      v55 = v53;
      if ( v54 )
      {
        if ( *(_BYTE *)(v54 + 1) )
        {
          if ( *(_BYTE *)(v54 + 1) == 1 )
          {
            v85 = v54 + 712;
            v86 = *(_DWORD *)(v54 + 768);
            if ( v86 >> 17 < 0x3FFE && (unsigned __int16)v86 >> 1 == (v86 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v54 + 712));
              *(_DWORD *)(v85 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v86 & 0xFFFE) == 0 && (v86 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v54, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v54 + 712), 0);
            }
            v2 = a1;
          }
        }
        else
        {
          v56 = *(_QWORD *)(v54 + 8);
          if ( v56 && (v57 = *(_BYTE *)(v54 + 3), v58 = 0, v57) )
          {
            while ( *(_BYTE *)(v56 + 2LL * v58) != 11 || !*(_BYTE *)(v56 + 2LL * v58 + 1) )
            {
              if ( ++v58 >= v57 )
                goto LABEL_92;
            }
            --*(_BYTE *)(v56 + 2LL * v58 + 1);
          }
          else
          {
LABEL_92:
            if ( !_bittestandreset((signed __int32 *)(v54 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v54, 0xBuLL);
          }
        }
      }
      v35 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
      if ( v35 && !*(_BYTE *)(p_DeferredContext + 11) )
      {
        ndisFreeRefCount(*(PVOID *)(p_DeferredContext + 16));
        *(_QWORD *)(p_DeferredContext + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v55);
    }
    RefCountTracker = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
    if ( RefCountTracker )
    {
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
        {
          v87 = RefCountTracker + 136;
          v88 = *(_DWORD *)(RefCountTracker + 192);
          if ( v88 >> 17 < 0x3FFE && (unsigned __int16)v88 >> 1 == (v88 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 136));
            *(_DWORD *)(v87 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v88 & 0xFFFE) == 0 && (v88 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 2uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 136), 0);
          }
        }
      }
      else
      {
        v60 = *(_QWORD *)(RefCountTracker + 8);
        if ( v60 && (v61 = *(_BYTE *)(RefCountTracker + 3), v62 = 0, v61) )
        {
          while ( *(_BYTE *)(v60 + 2LL * v62) != 2 || !*(_BYTE *)(v60 + 2LL * v62 + 1) )
          {
            if ( ++v62 >= v61 )
              goto LABEL_103;
          }
          --*(_BYTE *)(v60 + 2LL * v62 + 1);
        }
        else
        {
LABEL_103:
          if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 16), 2u) )
            ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 2uLL);
        }
      }
    }
    v35 = TopIfBlockFromMiniport->Ref-- == 1;
    if ( v35 )
    {
      ifIndex = TopIfBlockFromMiniport->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(TopIfBlockFromMiniport);
      *(_QWORD *)&TopIfBlockFromMiniport->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v90 = TopIfBlockFromMiniport->Link.Flink;
      Blink = TopIfBlockFromMiniport->Link.Blink;
      if ( v90->Blink != &TopIfBlockFromMiniport->Link || Blink->Flink != &TopIfBlockFromMiniport->Link )
        __fastfail(3u);
      Blink->Flink = v90;
      v90->Blink = Blink;
      v92 = TopIfBlockFromMiniport->ProviderLink.Flink;
      v93 = TopIfBlockFromMiniport->ProviderLink.Blink;
      if ( v92->Blink != &TopIfBlockFromMiniport->ProviderLink || v93->Flink != &TopIfBlockFromMiniport->ProviderLink )
        __fastfail(3u);
      v93->Flink = v92;
      v92->Blink = v93;
      v94 = TopIfBlockFromMiniport->NetworkLink.Flink;
      v95 = TopIfBlockFromMiniport->NetworkLink.Blink;
      if ( v94->Blink != &TopIfBlockFromMiniport->NetworkLink || v95->Flink != &TopIfBlockFromMiniport->NetworkLink )
        __fastfail(3u);
      v95->Flink = v94;
      v94->Blink = v95;
      NETWORKBLOCK_DECREMENT_REF(TopIfBlockFromMiniport->Network);
      v96 = (ifIndex - 1) >> 3;
      if ( IfUsedIfIndicesLength >= (int)v96 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v96) = *((_BYTE *)IfUsedIfIndicesData + v96) & ~(1 << ((ifIndex - 1) & 7));
      v97 = TopIfBlockFromMiniport->RefCountTracker;
      --ndisInterfaceCount;
      ndisFreeRefCount(v97);
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
  if ( v3 )
  {
    v63 = (ULONG_PTR)v3->RefCountTracker;
    if ( v63 )
    {
      v64 = *(unsigned __int8 *)(v63 + 1);
      if ( *(_BYTE *)(v63 + 1) )
      {
        if ( v64 == 1 )
        {
          v101 = v63 + 72;
          v102 = *(_DWORD *)(v63 + 128);
          if ( v102 >> 17 < 0x3FFE && (unsigned __int16)v102 >> 1 == (v102 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v63 + 72));
            *(_DWORD *)(v101 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v102 & 0xFFFE) == 0 && (v102 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v63, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v63 + 72), 0);
          }
        }
      }
      else
      {
        v65 = *(_QWORD *)(v63 + 8);
        if ( v65 && (v66 = *(_BYTE *)(v63 + 3), v67 = 0, v66) )
        {
          while ( *(_BYTE *)(v65 + 2LL * v67) != (_BYTE)v64 + 1 || !*(_BYTE *)(v65 + 2LL * v67 + 1) )
          {
            v67 += v64 + 1;
            if ( v67 >= v66 )
              goto LABEL_112;
          }
          --*(_BYTE *)(v65 + 2LL * v67 + 1);
        }
        else
        {
LABEL_112:
          if ( !_bittestandreset((signed __int32 *)(v63 + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v63, (unsigned int)(v64 + 1));
        }
      }
    }
    v35 = v3->Ref-- == 1;
    if ( v35 )
    {
      v103 = v3->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v3);
      *(_QWORD *)&v3->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v104 = v3->Link.Flink;
      v105 = v3->Link.Blink;
      if ( v104->Blink != &v3->Link || v105->Flink != &v3->Link )
        __fastfail(3u);
      v105->Flink = v104;
      v104->Blink = v105;
      v106 = v3->ProviderLink.Flink;
      v107 = v3->ProviderLink.Blink;
      if ( v106->Blink != &v3->ProviderLink || v107->Flink != &v3->ProviderLink )
        __fastfail(3u);
      v107->Flink = v106;
      v106->Blink = v107;
      v108 = v3->NetworkLink.Flink;
      v109 = v3->NetworkLink.Blink;
      if ( v108->Blink != &v3->NetworkLink || v109->Flink != &v3->NetworkLink )
        __fastfail(3u);
      v109->Flink = v108;
      v108->Blink = v109;
      NETWORKBLOCK_DECREMENT_REF(v3->Network);
      v110 = (v103 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= (int)v110 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v110) = *((_BYTE *)IfUsedIfIndicesData + v110) & ~(1 << ((v103 - 1) & 7));
      v111 = v3->RefCountTracker;
      --ndisInterfaceCount;
      ndisFreeRefCount(v111);
      v112 = v3->ifL2NetworkInfo;
      v3->RefCountTracker = 0LL;
      if ( v112 )
      {
        ExFreePoolWithTag(v112, 0);
        v3->ifL2NetworkInfo = 0LL;
      }
      v113 = v3->ifRcvAddressTable;
      if ( v113 )
      {
        ExFreePoolWithTag(v113, 0);
        v3->ifRcvAddressTable = 0LL;
        *(_QWORD *)&v3->ifRcvAddressCount = 0LL;
      }
      v114 = v3->AsyncEvent;
      if ( v114 )
        KeSetEvent(v114, 0, 0);
      ExFreePoolWithTag(v3, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v51);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(73LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v2, (unsigned int)v5);
  return (unsigned int)v5;
}
