/*
 * XREFs of sub_1C00A7E48 @ 0x1C00A7E48
 * Callers:
 *     sub_1C00A7CC8 @ 0x1C00A7CC8 (sub_1C00A7CC8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C008DD14 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C008FC64 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00A7EF4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 */

__int64 __fastcall sub_1C00A7E48(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a4)
{
  VIDPN_MGR *v4; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 result; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  __int64 v15; // rax
  char v16; // [rsp+20h] [rbp-28h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // [rsp+58h] [rbp+10h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v18; // [rsp+68h] [rbp+20h]

  v18 = a4;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = a3;
  if ( a3 == D3DKMDT_VPPS_RESERVED1 )
  {
    AdapterDefaultScaling = (unsigned int)VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(a2 + 48));
    a4 = v18;
    v5 = AdapterDefaultScaling;
  }
  v12 = 0LL;
  if ( BmlIsSupportedPathScaling(v5, a4) )
  {
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v4, &v17);
    if ( a2 != -289 )
      v12 = a2 + 96;
    v16 = 1;
    result = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))v17 + 8))(
               v12,
               *(unsigned int *)(*(_QWORD *)a1 + 16LL),
               *(unsigned int *)(*(_QWORD *)a1 + 20LL),
               (unsigned int)v5,
               v16);
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdWarning(v15);
    return 3223192326LL;
  }
  return result;
}
