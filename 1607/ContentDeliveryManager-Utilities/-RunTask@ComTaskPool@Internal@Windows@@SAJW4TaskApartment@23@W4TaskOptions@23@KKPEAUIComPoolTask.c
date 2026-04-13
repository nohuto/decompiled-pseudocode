/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000401C
 * Callers:
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180006328 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180015F20 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     _lambda_65e132131f351cb9064538b793e0e588_::operator() @ 0x180034CF4 (_lambda_65e132131f351cb9064538b793e0e588_--operator().c)
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180045A80 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Con.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180046A60 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@Conte.c)
 * Callees:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180004218 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004618 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180005368 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180005D00 (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct Windows::Internal::IComPoolTask *a5,
        _QWORD *a6)
{
  unsigned int v9; // esi
  struct Windows::Internal::IComPoolTask *v10; // r14
  HRESULT ApartmentType; // edi
  APTTYPE v12; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v15; // ecx
  struct Windows::Internal::IComPoolTask *v16; // rbx
  HRESULT v17; // eax
  APTTYPE pAptType; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::IComPoolTask *v20; // [rsp+38h] [rbp-50h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = -2LL;
  v9 = a1;
  v10 = a5;
  if ( a6 )
    *a6 = 0LL;
  ApartmentType = a5 == 0LL ? 0x8007000E : 0;
  if ( a5 )
  {
    if ( a1 == 5 )
      v9 = 1;
    if ( v9 == 4
      || (a2 & 0x80u) != 0
      && ((v12 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool,
           `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1)
        ? (TaskPoolTlsSlot = 0)
        : (TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType),
           v12 = pAptType),
          TaskPoolTlsSlot < 0 || (Value = (int *)TlsGetValue(v12)) == 0LL ? (v15 = 0x7FFFFFFF) : (v15 = *Value),
          v15 != 0x7FFFFFFF
       && ((v15 - 1) & 0x800000) != 0
       && (v9 == (v15 - 1) >> 24 || v9 == 3)
       && (((unsigned __int8)(v15 - 1) ^ (unsigned __int8)a2) & 9) == 0) )
    {
      (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)a5 + 24LL))(a5);
      return (unsigned int)ApartmentType;
    }
    v16 = 0LL;
    v20 = 0LL;
    if ( v9 == 3 )
    {
      v9 = 0;
      goto LABEL_30;
    }
    if ( v9 == 2 )
    {
      ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
      if ( ApartmentType < 0 )
        goto LABEL_35;
      v9 = 0;
      if ( pAptType == APTTYPE_STA )
      {
LABEL_29:
        ApartmentType = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(a5, &v20);
        v16 = v20;
        v10 = v20;
        goto LABEL_30;
      }
      if ( pAptType <= APTTYPE_STA )
      {
LABEL_28:
        ApartmentType = -2147418113;
LABEL_35:
        if ( v16 )
          (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v16 + 16LL))(v16);
        return (unsigned int)ApartmentType;
      }
      if ( pAptType > APTTYPE_NA )
      {
        if ( pAptType != APTTYPE_MAINSTA )
          goto LABEL_28;
        goto LABEL_29;
      }
    }
LABEL_30:
    if ( ApartmentType >= 0 )
    {
      if ( a4 )
        v17 = Windows::Internal::ComTaskPool::s_QueueDelayedTask(v9, a2, a3, a4, v10, a6);
      else
        v17 = Windows::Internal::ComTaskPool::s_QueuePoolTask(v9, a2, a3, v10);
      ApartmentType = v17;
    }
    goto LABEL_35;
  }
  return (unsigned int)ApartmentType;
}
