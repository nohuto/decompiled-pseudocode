/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007EA74
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007CE40 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007D370 (-ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__.c)
 *     ?ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BB660 (-ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2)
{
  union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *p_AdditionalSignalInfo; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v9);
    return 3223192337LL;
  }
  p_AdditionalSignalInfo = (union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo;
  if ( *(_DWORD *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo != 305419896 )
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = p_AdditionalSignalInfo;
    goto LABEL_16;
  }
  v4 = *(_QWORD *)&p_AdditionalSignalInfo[2].AdditionalSignalInfo;
  if ( !v4 )
    goto LABEL_8;
  v5 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v5 == v5 )
    goto LABEL_17;
  v6 = *v5 - 8LL;
  if ( *v5 == 8LL )
    goto LABEL_17;
  do
  {
    if ( v6 == v4 )
      break;
    v8 = *(_QWORD **)(v6 + 8);
    v6 = v8 == v5 ? 0LL : (__int64)(v8 - 1);
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_17:
    v10 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v10 + 24) = p_AdditionalSignalInfo;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
LABEL_8:
    ExFreePoolWithTag(p_AdditionalSignalInfo, 0);
    return 0LL;
  }
}
