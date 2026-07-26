/*
 * XREFs of ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0010024
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C000FF3C (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0010164 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C0010228 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C00111E4 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF__guid__guid__guid_ @ 0x1C003E0FC (WPP_SF__guid__guid__guid_.c)
 *     ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C009D47C (-QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A5484 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *a2)
{
  int v4; // eax
  void *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  void *v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  struct _GUID v11; // xmm0
  int v12; // edx
  int v13; // ecx
  struct _GUID P; // [rsp+30h] [rbp-48h] BYREF
  struct _GUID v15; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&P.Data1 = 0LL;
  v4 = KRegKey::QueryValueString(a2, L"IfAlias", &P);
  v5 = *(void **)&P.Data1;
  if ( v4 >= 0 )
  {
    if ( *(_QWORD *)&P.Data1 )
      v6 = *(_QWORD *)&P.Data1 + 8LL;
    else
      v6 = 0LL;
    ndisIfUpdateStringIfNeeded(a1, v6, &a1->ifAlias, 0LL, 20);
  }
  *(_QWORD *)&P.Data1 = 0LL;
  v7 = KRegKey::QueryValueString(a2, L"IfDescr", &P);
  v8 = *(void **)&P.Data1;
  if ( v7 >= 0 )
  {
    if ( *(_QWORD *)&P.Data1 )
      v9 = *(_QWORD *)&P.Data1 + 8LL;
    else
      v9 = 0LL;
    ndisIfUpdateStringIfNeeded(a1, v9, &a1->ifDescr, 2LL, 4);
  }
  v10 = KRegKey::QueryValueGuid(a2, L"IsolationNetwork", &v15);
  if ( v10 == -1073741772 )
  {
    v11 = *ndisIfGetDefaultNetworkGuid(&P);
    v10 = 0;
    v15 = v11;
  }
  if ( v10 >= 0 && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v15) < 0 && (unsigned __int8)byte_1C008531D >= 3u )
    WPP_SF__guid__guid__guid_(v13, v12, (_DWORD)a1 + 540, &a1->Network->NetworkGuid, (__int64)&v15);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x7274534Bu);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x7274534Bu);
}
