/*
 * XREFs of ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0011D68
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0011C80 (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0011E88 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0011F48 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0017E8C (ndisIfReadNetworkGuidFromKey.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF__guid__guid__guid_ @ 0x1C0042E3C (WPP_SF__guid__guid__guid_.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7EA8 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *a2)
{
  int v4; // eax
  PVOID v5; // rdi
  char *v6; // rdx
  int v7; // eax
  PVOID v8; // rbx
  char *v9; // rdx
  int v10; // edx
  int v11; // ecx
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-30h] BYREF

  P = 0LL;
  v4 = KRegKey::QueryValueString(a2, L"IfAlias", &P);
  v5 = P;
  if ( v4 >= 0 )
  {
    if ( P )
      v6 = (char *)P + 8;
    else
      v6 = 0LL;
    ndisIfUpdateStringIfNeeded(a1, v6, &a1->ifAlias, 0LL, 20);
  }
  P = 0LL;
  v7 = KRegKey::QueryValueString(a2, L"IfDescr", &P);
  v8 = P;
  if ( v7 >= 0 )
  {
    if ( P )
      v9 = (char *)P + 8;
    else
      v9 = 0LL;
    ndisIfUpdateStringIfNeeded(a1, v9, &a1->ifDescr, 2LL, 4);
  }
  if ( (int)ndisIfReadNetworkGuidFromKey(a2, &v13) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v13, 0) < 0
    && (unsigned __int8)byte_1C00895DD >= 3u )
  {
    WPP_SF__guid__guid__guid_(v11, v10, (_DWORD)a1 + 540, &a1->Network->NetworkGuid, (__int64)&v13);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x7274534Bu);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x7274534Bu);
}
