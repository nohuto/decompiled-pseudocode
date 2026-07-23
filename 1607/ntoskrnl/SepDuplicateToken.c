/*
 * XREFs of SepDuplicateToken @ 0x140411A90
 * Callers:
 *     SepGetAnonymousToken @ 0x14007F904 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x140080B10 (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x140411590 (NtDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     SepSetLogonSessionToken @ 0x14047C0CC (SepSetLogonSessionToken.c)
 *     SeCopyClientToken @ 0x1404B0584 (SeCopyClientToken.c)
 *     SeGetLinkedToken @ 0x140692AA0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140692B88 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14000E790 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x14000EDCC (SepReferenceLuidToIndexEntry.c)
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepReferenceLogonSession @ 0x140478574 (SepReferenceLogonSession.c)
 *     SepMakeTokenEffectiveOnly @ 0x1404AF78C (SepMakeTokenEffectiveOnly.c)
 *     SepDuplicateSid @ 0x1404B4434 (SepDuplicateSid.c)
 *     SepModifyTokenPolicyCounter @ 0x14068D360 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140693098 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 *     SepAddTokenLogonSession @ 0x140693730 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x140695D6C (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        char **a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r14
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // rbp
  int v17; // esi
  ULONG v18; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v20; // rdi
  __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  PSID_AND_ATTRIBUTES *v25; // r12
  unsigned __int64 v26; // r14
  _SID_AND_ATTRIBUTES *v27; // rcx
  int i; // eax
  __int64 v29; // rax
  char *v30; // rax
  ULONG j; // ecx
  __int64 v32; // rax
  unsigned int v33; // ecx
  size_t v34; // r13
  char *v35; // r14
  __int64 v36; // rax
  char *v37; // r14
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  void *v42; // rcx
  __int64 v43; // rdx
  _KPROCESS *Process; // rcx
  int v45; // edx
  char *Object; // [rsp+50h] [rbp-98h]
  PSID_AND_ATTRIBUTES *v47; // [rsp+58h] [rbp-90h]
  ULONG *v48; // [rsp+68h] [rbp-80h]
  PVOID *v49; // [rsp+88h] [rbp-60h]
  PSID_AND_ATTRIBUTES *v50; // [rsp+90h] [rbp-58h]
  UINT puResult; // [rsp+108h] [rbp+20h] BYREF

  v8 = a5;
  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v15 = PoolWithTag + 2;
  v15[1] = v15;
  *v15 = v15;
  v14[6] = 0;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  if ( SeTokenLeakTracking )
  {
    v11 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v11 )
    {
      ExFreePoolWithTag(v14, 0);
      return 3221225626LL;
    }
  }
  v16 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v16 )
  {
    ExFreePoolWithTag(v14, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  v17 = RtlUIntAdd(0x488u, *(_DWORD *)(a1 + 132), &puResult);
  if ( v17 >= 0 )
  {
    v17 = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6);
    if ( v17 >= 0 )
    {
      *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      Object[204] = 0;
      *((_DWORD *)Object + 48) = a4;
      *((_DWORD *)Object + 49) = v8;
      *((_QWORD *)Object + 6) = v16;
      ExInitializeResourceLite(v16);
      *((_QWORD *)Object + 3) = *(_QWORD *)(a1 + 24);
      *(_OWORD *)Object = *(_OWORD *)a1;
      *((_DWORD *)Object + 35) = 0;
      *((_QWORD *)Object + 4) = *(_QWORD *)(a1 + 32);
      *((_QWORD *)Object + 5) = *(_QWORD *)(a1 + 40);
      *((_QWORD *)Object + 28) = *(_QWORD *)(a1 + 224);
      *((_QWORD *)Object + 140) = 0LL;
      *((_QWORD *)Object + 141) = 0LL;
      *((_QWORD *)Object + 137) = 0LL;
      *((_QWORD *)Object + 143) = v11;
      *((_DWORD *)Object + 30) = 0;
      *((_QWORD *)Object + 144) = 0LL;
      if ( SeTokenLeakTracking )
      {
        v18 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*((_QWORD *)Object + 143) + 40LL + 8LL * v18), 30 - v18, 1u);
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      v20 = Object;
      *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
      *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
      *((_DWORD *)Object + 36) = *(_DWORD *)(a1 + 144);
      *((_DWORD *)Object + 32) = *(_DWORD *)(a1 + 128);
      *((_DWORD *)Object + 33) = *(_DWORD *)(a1 + 132);
      v48 = (ULONG *)(Object + 128);
      *((_DWORD *)Object + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
      SepSetTokenSessionById((_DWORD)Object, *(_DWORD *)(a1 + 120), 0, 0LL);
      *(_OWORD *)(Object + 88) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(Object + 104) = *(_OWORD *)(a1 + 104);
      *((_DWORD *)Object + 52) = *(_DWORD *)(a1 + 208);
      *((_DWORD *)Object + 53) = *(_DWORD *)(a1 + 212);
      *((_OWORD *)Object + 4) = *(_OWORD *)(a1 + 64);
      *((_QWORD *)Object + 10) = *(_QWORD *)(a1 + 80);
      *((_QWORD *)Object + 97) = v14;
      *((_QWORD *)Object + 135) = 0LL;
      *((_QWORD *)Object + 136) = 0LL;
      *((_QWORD *)Object + 99) = 0LL;
      v50 = (PSID_AND_ATTRIBUTES *)(Object + 792);
      *((_QWORD *)Object + 98) = 0LL;
      *((_DWORD *)Object + 200) = 0;
      memset(Object + 808, 0, 0x110uLL);
      *((_QWORD *)Object + 22) = 0LL;
      *((_QWORD *)Object + 138) = 0LL;
      *((_QWORD *)Object + 139) = 0LL;
      *((_QWORD *)Object + 142) = 0LL;
      v49 = (PVOID *)(Object + 1104);
      if ( Object[119] == 2 )
        SepModifyTokenPolicyCounter(Object + 88, 1LL);
      if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
      {
        v22 = SepReferenceLogonSession(a1 + 24, Object + 216);
        if ( v22 < 0 )
        {
          *((_DWORD *)Object + 50) |= 0x20u;
          *((_QWORD *)Object + 27) = 0LL;
          goto LABEL_36;
        }
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 216);
        *((_QWORD *)Object + 27) = v21;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24)) <= 1 )
          __fastfail(0xEu);
        v20 = Object;
        v22 = 0;
      }
      v23 = *(_QWORD *)(a1 + 1136);
      if ( v23 )
        SepReferenceLuidToIndexEntry(v23);
      *((_QWORD *)Object + 142) = *(_QWORD *)(a1 + 1136);
      v24 = *(_DWORD **)(a1 + 776);
      if ( *v24 )
      {
        v22 = AuthzBasepDuplicateSecurityAttributes((__int64)v24, *((_QWORD *)Object + 97), a7);
        if ( v22 < 0 )
          goto LABEL_36;
      }
      memmove(v20 + 1160, (const void *)(a1 + 1160), *(unsigned int *)(a1 + 132));
      v25 = (PSID_AND_ATTRIBUTES *)(v20 + 152);
      v26 = (unsigned __int64)&v20[-a1];
      if ( SepTokenSidSharingEnabled )
      {
        *v25 = (PSID_AND_ATTRIBUTES)(v26 + *(_QWORD *)(a1 + 152));
        v22 = SepDuplicateTokenUserAndGroups(a1, v20);
        if ( v22 < 0 )
        {
          *v25 = 0LL;
          goto LABEL_36;
        }
      }
      else
      {
        *((_DWORD *)v20 + 31) = *(_DWORD *)(a1 + 124);
        v27 = (_SID_AND_ATTRIBUTES *)(v26 + *(_QWORD *)(a1 + 152));
        *v25 = v27;
        for ( i = *((_DWORD *)v20 + 31); i; --i )
        {
          v27->Sid = (char *)v27->Sid + v26;
          ++v27;
        }
      }
      v29 = *(_QWORD *)(a1 + 160);
      v47 = (PSID_AND_ATTRIBUTES *)(v20 + 160);
      *((_QWORD *)v20 + 20) = v29;
      if ( v29 )
      {
        v30 = (char *)(v26 + v29);
        *((_QWORD *)v20 + 20) = v30;
        for ( j = *v48; j; --j )
        {
          *(_QWORD *)v30 += v26;
          v30 += 16;
        }
      }
      v32 = *(_QWORD *)(a1 + 184);
      v33 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
      if ( v32 )
        v33 += *(unsigned __int16 *)(v32 + 2);
      v34 = v33;
      v35 = (char *)ExAllocatePoolWithTag(PagedPool, v33, 0x64546553u);
      *((_QWORD *)Object + 22) = v35;
      if ( !v35 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v20);
        return 3221225626LL;
      }
      memmove(v35, *(const void **)(a1 + 176), v34);
      v36 = *(_QWORD *)(a1 + 184);
      v37 = &v35[-*(_QWORD *)(a1 + 176)];
      *((_QWORD *)v20 + 23) = v36;
      if ( v36 )
        *((_QWORD *)v20 + 23) = &v37[v36];
      *((_QWORD *)v20 + 21) = &v37[*(_QWORD *)(a1 + 168)];
      v38 = *(unsigned int *)(a1 + 800);
      if ( (_DWORD)v38 )
        v22 = SepSetTokenCapabilities(v20, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v38);
      if ( v22 >= 0 )
      {
        v39 = *(_QWORD *)(a1 + 784);
        if ( v39 )
          v22 = SepSetTokenPackage(v20, v39);
        if ( v22 >= 0 )
        {
          v40 = *(_QWORD *)(a1 + 1080);
          if ( v40 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v40 + 24)) <= 1 )
              __fastfail(0xEu);
            v20 = Object;
            *((_QWORD *)Object + 135) = *(_QWORD *)(a1 + 1080);
          }
          v41 = *(_QWORD *)(a1 + 1088);
          if ( v41 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v41 + 24)) <= 1 )
              __fastfail(0xEu);
            v20 = Object;
            *((_QWORD *)Object + 136) = *(_QWORD *)(a1 + 1088);
          }
          if ( !*(_QWORD *)(a1 + 1096) || (v22 = SepDuplicateTokenClaims(a1, v20), v22 >= 0) )
          {
            v42 = *(void **)(a1 + 1104);
            v22 = 0;
            if ( !v42 || (v22 = SepDuplicateSid(v42), v22 >= 0) )
            {
              if ( *v49 )
              {
                ExFreePoolWithTag(*v49, 0);
                *v49 = 0LL;
              }
              *v49 = 0LL;
              ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
              KeLeaveCriticalRegion();
              if ( SeTokenLeakTracking )
              {
                **((_QWORD **)Object + 143) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
                *(_QWORD *)(*((_QWORD *)Object + 143) + 8LL) = KeGetCurrentThread()[1].KernelStack;
                *(_DWORD *)(*((_QWORD *)Object + 143) + 32LL) = 13;
                *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = 0;
                *(_DWORD *)(*((_QWORD *)Object + 143) + 284LL) = 0;
                v43 = *((_QWORD *)Object + 143);
                v20 = Object;
                Process = KeGetCurrentThread()->ApcState.Process;
                *(_QWORD *)(v43 + 16) = Process[1].ActiveProcessors.Bitmap[12];
                *(_DWORD *)(v43 + 24) = Process[1].ActiveProcessors.Bitmap[13];
                *(_WORD *)(v43 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
                *(_BYTE *)(v43 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
                SepAddTokenLogonSession();
              }
              if ( a3 )
                SepMakeTokenEffectiveOnly(v20);
              RtlSidHashInitialize(*v25, *((_DWORD *)v20 + 31), (PSID_AND_ATTRIBUTES_HASH)(v20 + 232));
              RtlSidHashInitialize(*v47, *v48, (PSID_AND_ATTRIBUTES_HASH)(v20 + 504));
              if ( *v50 )
                RtlSidHashInitialize(*v50, *((_DWORD *)Object + 200), (PSID_AND_ATTRIBUTES_HASH)(Object + 808));
              if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 13 )
              {
                if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                {
                  *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                  v45 = *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL);
                  if ( v45 >= SepTokenLeakBreakCount )
                  {
                    DbgPrint("\nToken number 0x%x = 0x%p\n", v45, Object);
                    __debugbreak();
                  }
                }
                v20 = Object;
              }
              *a8 = v20;
              return (unsigned int)v22;
            }
          }
        }
      }
LABEL_36:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v20);
      return (unsigned int)v22;
    }
  }
  ExFreePoolWithTag(v14, 0);
  ExFreePoolWithTag(v16, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v17;
}
