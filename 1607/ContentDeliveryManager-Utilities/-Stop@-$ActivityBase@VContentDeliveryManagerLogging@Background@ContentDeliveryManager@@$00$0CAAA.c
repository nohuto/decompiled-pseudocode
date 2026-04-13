/*
 * XREFs of ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041564
 * Callers:
 *     ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010 (-add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU-$ITypedEventHa.c)
 *     ?remove_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJUEventRegistrationToken@@@Z @ 0x1800402E0 (-remove_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJUEventRegistrati.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001B73C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // di
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // rbx
  void *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  int v15; // [rsp+30h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v18; // [rsp+60h] [rbp+27h]
  int v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v22; // [rsp+78h] [rbp+3Fh]
  int v23; // [rsp+7Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v5;
  v6 = v5 == 0;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    LODWORD(v7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v8 = v7;
    if ( *(_DWORD *)v7 > 5u )
    {
      LODWORD(v7) = 0;
      if ( (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
      {
        v15 = 0;
        v20 = 0;
        v18 = &v15;
        v19 = 4;
        CurrentThreadId = GetCurrentThreadId();
        v23 = 0;
        LODWORD(SRWLock) = CurrentThreadId;
        p_SRWLock = &SRWLock;
        v22 = 4;
        LODWORD(v7) = TlgWrite(v8, &unk_18007C70D, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v10 = a1 + 8;
    if ( *(_DWORD *)(v10 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v11, v12, (const char *)0x8007029CLL);
    v7 = *(const struct _TlgProvider_t **)v10;
    *(_DWORD *)(v10 + 24) = 0;
    if ( *(_QWORD *)v7 )
    {
      while ( 1 )
      {
        v7 = *(const struct _TlgProvider_t **)v10;
        if ( **(_QWORD **)v10 == v10 )
          break;
        v13 = (_QWORD *)(*(_QWORD *)v7 + 16LL);
        *(_QWORD *)v10 = v13;
        if ( !*v13 )
          goto LABEL_21;
      }
      v7 = *(const struct _TlgProvider_t **)(v10 + 16);
      **(_QWORD **)v10 = v7;
    }
LABEL_21:
    *(_QWORD *)v10 = 0LL;
  }
  return (int)v7;
}
