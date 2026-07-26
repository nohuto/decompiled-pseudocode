/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A1440
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A7BD4 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0020CA8 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00A1E64 (-QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A1F54 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AB1C0 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AC530 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        Ndis::BindRegistry *this,
        KRegKey *a2,
        struct KRegKey *a3,
        union _NET_LUID_LH *a4)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int16 v15; // dx
  unsigned int v16; // ecx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  unsigned __int16 v19; // cx
  unsigned int v20; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-34h] BYREF
  struct _GUID v22; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+20h] BYREF

  memset(a4, 0, 0x484uLL);
  result = Ndis::BindRegistry::LoadNetworkInterfaceString(a2, L"IfAlias", (char *)&a4->Info + 4);
  if ( (int)result < 0 )
    return result;
  result = Ndis::BindRegistry::LoadNetworkInterfaceString(a2, L"IfDescr", &a4[65]);
  if ( (int)result < 0 )
    return result;
  v9 = KRegKey::QueryValueUlong(a2, L"IfType", &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned __int8)byte_1C008371D < 2u )
      return v10;
    v19 = 24;
LABEL_19:
    WPP_SF_d(v19, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v9);
    return v10;
  }
  v9 = KRegKey::QueryValueUlong(a2, L"NetLuidIndex", &v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned __int8)byte_1C008371D < 2u )
      return v10;
    v19 = 25;
    goto LABEL_19;
  }
  v11 = KRegKey::QueryValueUlong(a2, L"MediaType", &v23);
  v12 = v23;
  if ( v11 < 0 )
    v12 = 0;
  *((_DWORD *)&a4[134].Info + 1) = v12;
  v13 = KRegKey::QueryValueUlong(a2, L"PhysicalMediaType", &v23);
  v14 = v23;
  if ( v13 < 0 )
    v14 = 0;
  LODWORD(a4[135].Value) = v14;
  if ( KRegKey::QueryValueUlong(a2, L"Characteristics", &v23) >= 0 && (v23 & 4) != 0 )
    *((_DWORD *)&a4[135].Info + 1) |= 2u;
  result = Ndis::BindRegistry::LoadNetworkInterfaceAddress(a2, L"CurrentAddress", &a4[136]);
  if ( (int)result >= 0 )
  {
    result = Ndis::BindRegistry::LoadNetworkInterfaceAddress(a2, L"PermanentAddress", (char *)&a4[140].Info + 2);
    if ( (int)result >= 0 )
    {
      v15 = v20;
      v16 = v21;
      HIWORD(a3->_p) = v20;
      a3->_p = (void **)((unsigned __int64)a3->_p & 0xFFFF000000000000uLL | ((unsigned __int64)(v16 & 0xFFFFFF) << 24));
      *((_WORD *)&a4[129].Info + 2) = v15;
      v17 = *(_OWORD *)this;
      LODWORD(a4[134].Value) = 0;
      *(_OWORD *)&a4[130].Value = v17;
      result = KRegKey::QueryValueGuid(a2, L"IsolationNetwork", (struct _GUID *)&a4[132]);
      if ( (_DWORD)result == -1073741772 )
      {
        v18 = (__int128)*ndisIfGetDefaultNetworkGuid(&v22);
        result = 0LL;
        *(_OWORD *)&a4[132].Value = v18;
      }
    }
  }
  return result;
}
