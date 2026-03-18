/*
 * XREFs of BmlInternalTryPinningScaling @ 0x1C009B328
 * Callers:
 *     BmlPinPathContentScaling @ 0x1C009B1A8 (BmlPinPathContentScaling.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00966D4 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0097030 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C009B3D4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 */

__int64 __fastcall BmlInternalTryPinningScaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+68h] [rbp+20h]

  v17 = a4;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = (int)a3;
  if ( (_DWORD)a3 == 253 )
  {
    AdapterDefaultScaling = (unsigned int)VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(a2 + 48), a2, a3, a4);
    LODWORD(a4) = v17;
    v5 = AdapterDefaultScaling;
  }
  v12 = 0LL;
  if ( BmlIsSupportedPathScaling(v5, (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)a4) )
  {
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v4, &v16, v10, v11);
    if ( a2 != -289 )
      v12 = a2 + 96;
    result = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))v16 + 8))(
               v12,
               *(unsigned int *)(*(_QWORD *)a1 + 16LL),
               *(unsigned int *)(*(_QWORD *)a1 + 20LL),
               (unsigned int)v5,
               1);
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
