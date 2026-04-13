/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180006328
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180015EB0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000401C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??$WrapWithTask@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@Z @ 0x180012084 (--$WrapWithTask@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComTaskPoolHandler::FireCompletion(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IAsyncFireCompletion *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  struct Windows::Internal::IComPoolTask *v5; // rbx
  DWORD CurrentThreadId; // eax
  int v7; // ebx
  Windows::Internal::ComTaskPoolHandler *v8; // rcx
  bool v9; // bl
  Windows::Internal::ComTaskPoolHandler *v11; // [rsp+70h] [rbp+8h] BYREF
  struct Windows::Internal::IAsyncFireCompletion *v12; // [rsp+80h] [rbp+18h] BYREF
  struct Windows::Internal::IAsyncFireCompletion *v13; // [rsp+88h] [rbp+20h]

  v11 = this;
  v3 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( *(int *)(v4 + 4) <= 4 )
    goto LABEL_13;
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = *(struct Windows::Internal::IComPoolTask **)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>(
                                                     &v11,
                                                     &v12);
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, 0, v5, 0LL);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(Windows::Internal::ComTaskPoolHandler *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v7 >= 0;
  if ( v12 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( !v9 )
  {
LABEL_13:
    ++*(_DWORD *)(v4 + 4);
    v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 24LL))(a2);
    --*(_DWORD *)(v4 + 4);
  }
  return v3;
}
