/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAPEAUITargetedContentSubscription@TargetedContent@ContentManagement@@@Z @ 0x18004734C
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUITargetedContentSubscription@TargetedContent@ContentManagement@@@Z @ 0x180045790 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048730 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID Ptr; // rbx
  PVOID v5; // rsi
  RTL_SRWLOCK *v6; // r15
  PVOID v7; // rdi
  PVOID v8; // rcx
  PVOID v9; // rcx
  bool v10; // r9
  unsigned int v11; // edi
  PVOID v13; // [rsp+70h] [rbp+38h] BYREF
  PVOID v14; // [rsp+78h] [rbp+40h] BYREF
  PVOID v15; // [rsp+80h] [rbp+48h] BYREF
  PVOID v16; // [rsp+88h] [rbp+50h]

  Ptr = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v15 = Ptr;
  }
  v7 = a1[2].Ptr;
  if ( v7 )
  {
    v13 = 0LL;
    v14 = v7;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(PVOID, GUID *, PVOID *))(*(_QWORD *)v7 + 24LL))(
      v7,
      &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2,
      &v13);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v13;
    if ( v13 )
    {
      v14 = 0LL;
      if ( (int)RoGetAgileReference(0LL, &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2, v13, &v14) < 0 )
      {
        v9 = v14;
      }
      else
      {
        v5 = v14;
        v16 = v14;
        v9 = 0LL;
      }
      if ( v9 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = v13;
    }
    if ( v8 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockShared(v6);
  *a2 = 0LL;
  if ( v5 )
  {
    v13 = v5;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
    v11 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2,
            a2);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else if ( Ptr )
  {
    v11 = CMarshaledInterface::_Unmarshal(
            (CMarshaledInterface *)&v15,
            &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2,
            a2,
            v10);
    Ptr = v15;
  }
  else
  {
    v11 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v11;
}
