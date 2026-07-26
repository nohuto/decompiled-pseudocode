/*
 * XREFs of _lambda_91558b45fed37b56f47adbcac45390b4_::operator() @ 0x1C00A3010
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adbcac45390b4_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adbcac45390b4_@@@Z @ 0x1C00A77B8 (--$QueryValueMultisz@V_lambda_7dba7dab9bc3060b810d705c95db8e00_@@V_lambda_91558b45fed37b56f47adb.c)
 * Callees:
 *     ?insertSortedUnique@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@P6A_NAEBV3@1@Z@Z @ 0x1C00A31FC (-insertSortedUnique@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A3698 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DE0 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_91558b45fed37b56f47adbcac45390b4_::operator()(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rcx
  char *v4; // rbx
  char inserted; // al
  __int64 v6; // rax
  unsigned int v7; // edi
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  Ndis::BindStack::BuildProtocolLink(v3, &P, &DestinationString);
  v4 = (char *)P;
  if ( P
    && (inserted = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertSortedUnique(
                     *a1 + 8,
                     &P),
        v4 = (char *)P,
        inserted) )
  {
    v6 = *a1;
    v7 = 0;
    ++*(_DWORD *)(v6 + 136);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( v4 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v4 + 104);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v4 + 8));
    ExFreePoolWithTag(v4, 0x4C745042u);
  }
  return v7;
}
