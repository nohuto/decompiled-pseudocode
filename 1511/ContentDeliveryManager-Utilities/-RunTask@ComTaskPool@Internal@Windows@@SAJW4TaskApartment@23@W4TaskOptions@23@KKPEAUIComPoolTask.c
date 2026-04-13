/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180008620
 * Callers:
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001B680 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001B790 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001CEA0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCom_ea_18001CEA0.c)
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001D230 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCom_ea_18001D230.c)
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001D5C0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCom_ea_18001D5C0.c)
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001D950 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCom_ea_18001D950.c)
 * Callees:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180009604 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180009FDC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCRemoteTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x1800185E4 (--$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@De.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // r14d
  __int64 v8; // rdi
  HRESULT ApartmentType; // esi
  APTTYPE v10; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // r15
  APTTYPE pAptType; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]

  v22 = -2LL;
  v7 = a1;
  v8 = a5;
  ApartmentType = a5 == 0 ? 0x8007000E : 0;
  if ( !a5 )
    return (unsigned int)ApartmentType;
  if ( a1 == 5 )
    v7 = 1;
  if ( v7 == 4
    || (a2 & 0x80u) != 0
    && ((v10 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool,
         `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1)
      ? (TaskPoolTlsSlot = 0)
      : (TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType),
         v10 = pAptType),
        TaskPoolTlsSlot < 0 || (Value = (int *)TlsGetValue(v10)) == 0LL ? (v13 = 0x7FFFFFFF) : (v13 = *Value),
        v13 != 0x7FFFFFFF
     && ((v13 - 1) & 0x800000) != 0
     && (v7 == (v13 - 1) >> 24 || v7 == 3)
     && (((unsigned __int8)(v13 - 1) ^ (unsigned __int8)a2) & 9) == 0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 24LL))(a5);
    return (unsigned int)ApartmentType;
  }
  v14 = 0LL;
  v19 = 0LL;
  if ( v7 == 3 )
  {
    v7 = 0;
    goto LABEL_33;
  }
  if ( v7 != 2 )
    goto LABEL_33;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_35;
  v7 = 0;
  if ( pAptType == APTTYPE_STA )
    goto LABEL_27;
  if ( pAptType > APTTYPE_STA )
  {
    if ( pAptType > APTTYPE_NA )
    {
      if ( pAptType != APTTYPE_MAINSTA )
        goto LABEL_26;
LABEL_27:
      v20 = a5;
      v14 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      ApartmentType = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::IComPoolTask * &>(
                        &v18,
                        &v20);
      if ( ApartmentType < 0 )
      {
        v15 = v18;
      }
      else
      {
        v14 = v18;
        v15 = 0LL;
        v19 = v18;
      }
      if ( v15 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v8 = v14;
    }
LABEL_33:
    if ( ApartmentType >= 0 )
      ApartmentType = Windows::Internal::ComTaskPool::s_QueuePoolTask(v7, a2, a3, v8);
    goto LABEL_35;
  }
LABEL_26:
  ApartmentType = -2147418113;
LABEL_35:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)ApartmentType;
}
