/*
 * XREFs of BmlInternalTryPinningScaling @ 0x1C00BD748
 * Callers:
 *     BmlPinPathContentScaling @ 0x1C00BD4B8 (BmlPinPathContentScaling.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00829E8 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0084D28 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0085248 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlInternalTryPinningScaling(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a4)
{
  VIDPN_MGR *v4; // rsi
  unsigned int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned int AdapterDefaultScaling; // eax
  __int64 v15; // rax
  char v16; // [rsp+20h] [rbp-28h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // [rsp+58h] [rbp+10h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v18; // [rsp+68h] [rbp+20h]

  v18 = a4;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = a3;
  if ( a3 == 253 )
  {
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(a2 + 48));
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
               v5,
               v16);
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v15 + 24) = (int)v5;
    WdLogEvent5_WdWarning(v15);
    return 3223192326LL;
  }
  return result;
}
