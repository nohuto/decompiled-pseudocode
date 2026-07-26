/*
 * XREFs of WPP_SF_ZZL @ 0x1C006BA24
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD908 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZZL(unsigned __int16 a1, __int64 a2, __int64 *a3, __int64 *a4, ...)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  const wchar_t *v7; // rcx
  const wchar_t *v8; // rax
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = 10LL;
  if ( a4 && a4[1] )
    v6 = *(unsigned __int16 *)a4;
  else
    v6 = 10LL;
  if ( !a4 || (v7 = (const wchar_t *)a4[1]) == 0LL )
    v7 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00241B0;
  if ( !a3 )
    goto LABEL_15;
  if ( a3[1] )
    v5 = *(unsigned __int16 *)a3;
  v8 = (const wchar_t *)a3[1];
  if ( !v8 )
LABEL_15:
    v8 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00241B0;
  ndisWppFastTraceMessage(
    &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
    a1,
    a3,
    2LL,
    v8,
    v5,
    a4,
    2LL,
    v7,
    v6,
    va,
    4LL,
    0LL);
}
