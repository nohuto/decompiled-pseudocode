/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A728C
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A1714 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0017E8C (ndisIfReadNetworkGuidFromKey.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A7F1C (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF6C4 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AFCA0 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        Ndis::BindRegistry *this,
        KRegKey *a2,
        struct KRegKey *a3,
        union _NET_LUID_LH *a4)
{
  __int64 result; // rax
  int ValueUlong; // eax
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int16 v15; // dx
  unsigned int v16; // ecx
  __int128 v17; // xmm0
  unsigned __int16 v18; // cx
  unsigned int v19; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v20[9]; // [rsp+24h] [rbp-24h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+20h] BYREF

  memset(a4, 0, 0x484uLL);
  result = Ndis::BindRegistry::LoadNetworkInterfaceString(a2, L"IfAlias", (char *)&a4->Info + 4);
  if ( (int)result < 0 )
    return result;
  result = Ndis::BindRegistry::LoadNetworkInterfaceString(a2, L"IfDescr", &a4[65]);
  if ( (int)result < 0 )
    return result;
  ValueUlong = KRegKey::QueryValueUlong(a2, L"IfType", &v19);
  v10 = ValueUlong;
  if ( ValueUlong < 0 )
  {
    if ( (unsigned __int8)byte_1C00895DD < 2u )
      return v10;
    v18 = 24;
LABEL_18:
    WPP_SF_d(v18, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, ValueUlong);
    return v10;
  }
  ValueUlong = KRegKey::QueryValueUlong(a2, L"NetLuidIndex", v20);
  v10 = ValueUlong;
  if ( ValueUlong < 0 )
  {
    if ( (unsigned __int8)byte_1C00895DD < 2u )
      return v10;
    v18 = 25;
    goto LABEL_18;
  }
  v11 = KRegKey::QueryValueUlong(a2, L"MediaType", &v21);
  v12 = v21;
  if ( v11 < 0 )
    v12 = 0;
  *((_DWORD *)&a4[134].Info + 1) = v12;
  v13 = KRegKey::QueryValueUlong(a2, L"PhysicalMediaType", &v21);
  v14 = v21;
  if ( v13 < 0 )
    v14 = 0;
  LODWORD(a4[135].Value) = v14;
  if ( KRegKey::QueryValueUlong(a2, L"Characteristics", &v21) >= 0 && (v21 & 4) != 0 )
    *((_DWORD *)&a4[135].Info + 1) |= 2u;
  result = Ndis::BindRegistry::LoadNetworkInterfaceAddress(a2, L"CurrentAddress", &a4[136]);
  if ( (int)result >= 0 )
  {
    result = Ndis::BindRegistry::LoadNetworkInterfaceAddress(a2, L"PermanentAddress", (char *)&a4[140].Info + 2);
    if ( (int)result >= 0 )
    {
      v15 = v19;
      v16 = v20[0];
      HIWORD(a3->_p) = v19;
      a3->_p = (void **)((unsigned __int64)a3->_p & 0xFFFF000000000000uLL | ((unsigned __int64)(v16 & 0xFFFFFF) << 24));
      *((_WORD *)&a4[129].Info + 2) = v15;
      v17 = *(_OWORD *)this;
      LODWORD(a4[134].Value) = 0;
      *(_OWORD *)&a4[130].Value = v17;
      return ndisIfReadNetworkGuidFromKey(a2, (struct _GUID *)&a4[132]);
    }
  }
  return result;
}
