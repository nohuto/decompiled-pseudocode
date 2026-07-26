/*
 * XREFs of _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00B2478
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@Z @ 0x1C00B2870 (--$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa0039.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0F2C (-append@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A12BC (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ParseV1FilterString@BindStack@Ndis@@AEAA_NPEBGPEAU_NDIS_FILTERLIST_ITEM@@@Z @ 0x1C00B2528 (-ParseV1FilterString@BindStack@Ndis@@AEAA_NPEBGPEAU_NDIS_FILTERLIST_ITEM@@@Z.c)
 */

__int64 __fastcall lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator()(
        Ndis::BindStack *a1,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 *v6; // rax
  char v7; // bl
  char *v8; // rdi
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  struct _NDIS_FILTERLIST_ITEM v11; // [rsp+28h] [rbp-30h] BYREF

  LODWORD(P) = 0;
  v4 = a3;
  if ( !Ndis::BindStack::ParseV1FilterString(a1, a2, &v11) )
    return 3221225485LL;
  v6 = Ndis::BindStack::BuildFilterLink(v5, &P, (__int64)&v11, v11.FilterIndex);
  if ( !Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::append(
          *(_QWORD *)&a1->gap0 + 32LL,
          v6) )
    goto LABEL_10;
  if ( v4 >= *(unsigned int *)(*(_QWORD *)&a1->gap0 + 40LL) )
    __fastfail(0xBAD0FFu);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a1->gap0 + 48LL) + 8 * v4) )
    v7 = 0;
  else
LABEL_10:
    v7 = 1;
  v8 = (char *)P;
  if ( P )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref((volatile signed __int32 **)P + 13);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v8 + 8));
    ExFreePoolWithTag(v8, 0x4C6C4642u);
  }
  return v7 != 0 ? 0xC000009A : 0;
}
