/*
 * XREFs of SeTokenCanImpersonate @ 0x1404798B0
 * Callers:
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14002D850 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14002D93C (SepCopyTokenIntegrity.c)
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400EFFDC (_TlgCreateWsz.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeTokenIsWriteRestricted @ 0x140125C48 (SeTokenIsWriteRestricted.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlIsParentOfChildAppContainer @ 0x140408410 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14040FC40 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x14053E684 (SeTokenIsElevated.c)
 */

__int64 __fastcall SeTokenCanImpersonate(PACCESS_TOKEN Token, PACCESS_TOKEN a2, int a3, _BYTE *a4)
{
  NTSTATUS IsElevated; // ebx
  void *v8; // rbx
  void *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  struct _ERESOURCE *v12; // rcx
  struct _KTHREAD *v13; // rax
  const WCHAR *v14; // r9
  void *v15; // rbp
  void *v16; // r14
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  char v23; // [rsp+30h] [rbp-88h] BYREF
  BOOLEAN Dominates; // [rsp+31h] [rbp-87h] BYREF
  BOOLEAN DominatesTrust[6]; // [rsp+32h] [rbp-86h] BYREF
  PSID Sid2; // [rsp+38h] [rbp-80h]
  PSID Sid1; // [rsp+48h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-40h] BYREF

  Dominates = 0;
  DominatesTrust[0] = 0;
  v23 = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0;
  if ( *((_DWORD *)a2 + 6) == 998 && !*((_DWORD *)a2 + 7) )
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x4000) == 0 )
        return (unsigned int)-1073741727;
      v8 = (void *)*((_QWORD *)a2 + 98);
      v9 = (void *)*((_QWORD *)Token + 98);
      if ( !RtlEqualSid(v9, v8) && !RtlIsParentOfChildAppContainer(v9, v8) )
        return (unsigned int)-1073741727;
    }
    return 0;
  }
  IsElevated = RtlSidDominatesForTrust(*((PSID *)Token + 138), *((PSID *)a2 + 138), DominatesTrust);
  if ( IsElevated < 0 )
    return (unsigned int)IsElevated;
  if ( !DominatesTrust[0] )
    *a4 = 1;
  if ( (*((_DWORD *)Token + 18) & 0x20000000) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Token >= a2 )
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)a2 + 6), 1u);
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v12 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (struct _ERESOURCE *)*((_QWORD *)a2 + 6);
  }
  ExAcquireResourceSharedLite(v12, 1u);
  SepCopyTokenIntegrity((__int64)Token);
  SepCopyTokenIntegrity((__int64)a2);
  IsElevated = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( IsElevated >= 0 )
  {
    if ( !Dominates )
      goto LABEL_45;
    if ( SepIsImpersonationAllowedDueToCapability((__int64)Token, (__int64)a2) )
    {
      IsElevated = 0;
      goto LABEL_46;
    }
    if ( *((_DWORD *)Token + 6) == *((_DWORD *)a2 + 56) && *((_DWORD *)Token + 7) == *((_DWORD *)a2 + 57) )
    {
      IsElevated = 0;
      goto LABEL_46;
    }
    if ( !RtlEqualSid(**((PSID **)Token + 19), **((PSID **)a2 + 19)) )
      goto LABEL_45;
    IsElevated = SeTokenIsElevated(a2, &v23);
    if ( IsElevated >= 0 )
    {
      if ( !v23 )
        goto LABEL_35;
      IsElevated = SeTokenIsElevated(Token, &v23);
      if ( IsElevated >= 0 )
      {
        if ( !v23 )
        {
          if ( stru_14077E830.LevelPlus1 > 5 && TlgKeywordOn(&stru_14077E830, 0x200000000000uLL) )
          {
            TlgCreateWsz(&pDesc, v14);
            TlgWrite(&stru_14077E830, &unk_1402A4E70, 0LL, 0LL, 3u, &pData);
          }
          if ( (SeCompatFlags & 1) != 0 )
          {
LABEL_45:
            IsElevated = -1073741727;
            goto LABEL_46;
          }
        }
LABEL_35:
        IsElevated = 0;
        if ( (*((_DWORD *)Token + 50) & 0x4000) == 0
          || (*((_DWORD *)a2 + 50) & 0x4000) != 0
          && ((v15 = (void *)*((_QWORD *)a2 + 98), v16 = (void *)*((_QWORD *)Token + 98), RtlEqualSid(v16, v15))
           || RtlIsParentOfChildAppContainer(v16, v15)) )
        {
          if ( !SeTokenIsRestricted(Token)
            || SeTokenIsRestricted(a2) && (SeTokenIsWriteRestricted(Token) || !SeTokenIsWriteRestricted(a2)) )
          {
            v17 = *((_DWORD *)a2 + 30);
            if ( *((_DWORD *)Token + 30) == v17 || v17 )
              goto LABEL_46;
          }
        }
        goto LABEL_45;
      }
    }
    if ( (SeCompatFlags & 1) != 0 )
      goto LABEL_46;
    goto LABEL_35;
  }
LABEL_46:
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ExReleaseResourceLite(*((PERESOURCE *)a2 + 6));
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)IsElevated;
}
