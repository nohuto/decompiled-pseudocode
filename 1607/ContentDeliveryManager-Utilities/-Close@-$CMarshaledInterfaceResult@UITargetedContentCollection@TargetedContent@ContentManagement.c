/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAXXZ @ 0x1800472B4
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180045A50 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@Conte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>::Close(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rsi
  __int64 *v3; // rax
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rbx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v3 = (__int64 *)(a1 + 16);
  v4 = 0LL;
  if ( &v7 != (char *)(a1 + 16) )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v5 = (char *)(a1 + 24);
  v6 = 0LL;
  if ( &v7 != v5 )
  {
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
  }
  ReleaseSRWLockExclusive(v1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
