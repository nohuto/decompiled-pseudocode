/*
 * XREFs of ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022BAC
 * Callers:
 *     ?get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180004130 (-get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180022768 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 *     ?GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022A88 (-GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PEAPEAG@Z @ 0x180022DC0 (-MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetDisplayName(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        unsigned __int16 **a4)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int RawDisplayName; // ebx
  int v10; // eax
  unsigned __int16 *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  unsigned __int16 *v15; // rdi
  __int64 v16; // rdx
  LPVOID v17; // rcx
  __int64 v18; // r9
  void *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v26; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v28; // [rsp+90h] [rbp+30h] BYREF

  *a4 = 0LL;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
  v28 = 0LL;
  if ( (**v6)(v6, &GUID_e0cae81b_625e_400d_9ded_4e4956f6fb9d, &v28) < 0 )
  {
    RawDisplayName = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, a4);
    goto LABEL_26;
  }
  pv = 0LL;
  v24 = -1LL;
  v25 = -1LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v28 + 40LL))(v28, 983227LL, &pv);
  v11 = (unsigned __int16 *)pv;
  if ( v10 < 0 || !pv )
  {
    v12 = v28;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v24 = -1LL;
    v25 = -1LL;
    (*(void (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, 6553604LL, &pv);
    v11 = (unsigned __int16 *)pv;
    if ( !pv )
    {
      v26 = 0LL;
      v13 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, &v26);
      v15 = v26;
      RawDisplayName = v13;
      if ( v13 < 0 )
      {
        v16 = 554LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v13);
        if ( v15 )
          CoTaskMemFree(v15);
        v19 = pv;
        goto LABEL_23;
      }
      v17 = pv;
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v24 = -1LL;
      v25 = -1LL;
      v13 = TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(v17, v15, v14, &pv);
      RawDisplayName = v13;
      if ( v13 < 0 )
      {
        v16 = 558LL;
        goto LABEL_14;
      }
      v20 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(this, a2, a3, v18, (LPCWCH)pv);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x231,
          (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v20);
      if ( v15 )
        CoTaskMemFree(v15);
      v11 = (unsigned __int16 *)pv;
    }
  }
  v19 = 0LL;
  v25 = 0LL;
  pv = 0LL;
  RawDisplayName = 0;
  v24 = 0LL;
  *a4 = v11;
LABEL_23:
  if ( v19 )
  {
    CoTaskMemFree(v19);
    pv = 0LL;
  }
  v24 = 0LL;
  v25 = 0LL;
LABEL_26:
  v21 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return RawDisplayName;
}
