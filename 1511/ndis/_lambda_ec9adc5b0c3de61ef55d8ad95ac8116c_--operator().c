/*
 * XREFs of _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A63F4
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@Z @ 0x1C00A1798 (--$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8a.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0099310 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A5D40 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 *     ?insertSortedUnique@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@P6A_NAEBV3@1@Z@Z @ 0x1C00A60A0 (-insertSortedUnique@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL.c)
 */

__int64 __fastcall lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator()(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rcx
  char *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  Ndis::BindStack::BuildProtocolLink(v3, &P, &DestinationString);
  v4 = (char *)P;
  if ( !P )
    goto LABEL_9;
  if ( !Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertSortedUnique(
          *a1 + 8,
          (__int64 *)&P) )
  {
    v4 = (char *)P;
LABEL_9:
    v6 = -1073741670;
    goto LABEL_5;
  }
  v5 = *a1;
  v6 = 0;
  ++*(_DWORD *)(v5 + 136);
  v4 = (char *)P;
LABEL_5:
  if ( v4 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((volatile signed __int32 **)v4 + 13);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v4 + 8));
    ExFreePoolWithTag(v4, 0x4C745042u);
  }
  return v6;
}
