/*
 * XREFs of ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAUIOnlineIdServiceTicketRequest@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@4@PEAI@Z @ 0x1800116A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Cleanup@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@I@Z @ 0x180019524 (--$_Cleanup@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@I@Detail.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 8 * v8);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,unsigned int>(
      a3,
      (unsigned int)*a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
