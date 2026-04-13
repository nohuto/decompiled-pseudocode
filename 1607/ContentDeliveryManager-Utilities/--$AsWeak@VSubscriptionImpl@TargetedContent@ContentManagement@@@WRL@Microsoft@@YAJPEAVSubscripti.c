/*
 * XREFs of ??$AsWeak@VSubscriptionImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@YAJPEAVSubscriptionImpl@TargetedContent@ContentManagement@@PEAVWeakRef@01@@Z @ 0x180043660
 * Callers:
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentSubscription@TargetedContent@ContentManagement@@U?$InterfaceList@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042A00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180042A00.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<ContentManagement::TargetedContent::SubscriptionImpl>(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscription,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
         a1,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v12);
  v4 = v12;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v11);
    v7 = v11;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v8 = v11;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v7 = v11;
      }
      v9 = *a2;
      *a2 = v8;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
        v7 = v11;
      }
      v5 = 0;
    }
    if ( v7 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
