/*
 * XREFs of ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009E470
 * Callers:
 *     ndisPnPRemoveDeviceEx @ 0x1C009E398 (ndisPnPRemoveDeviceEx.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     ndisIfDetachMiniportBlock @ 0x1C0012CF8 (ndisIfDetachMiniportBlock.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A2B60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h]

  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qq(0xD1u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2);
  *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1192LL) = a3;
  v6 = *(_QWORD *)(a2 + 4096);
  if ( *(_DWORD *)(v6 + 1112) != 2 )
  {
    *(_DWORD *)(v6 + 1112) = 2;
    v7 = *(_QWORD *)(a2 + 4096);
    v10 = 1LL;
    v12 = 0x21800000008LL;
    v11 = v7 + 1112;
    ndisNsiNotifyClientInterfaceChange(v7, 0LL, &v10);
  }
  v8 = *(_QWORD *)(a2 + 4096);
  if ( *(_DWORD *)(v8 + 1220) )
  {
    *(_DWORD *)(v8 + 1220) = 0;
    v9 = *(_QWORD *)(a2 + 4096);
    v10 = 1LL;
    v12 = 0x28400000004LL;
    v11 = v9 + 1220;
    ndisNsiNotifyClientInterfaceChange(v9, 0LL, &v10);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qq(0xD2u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2);
}
