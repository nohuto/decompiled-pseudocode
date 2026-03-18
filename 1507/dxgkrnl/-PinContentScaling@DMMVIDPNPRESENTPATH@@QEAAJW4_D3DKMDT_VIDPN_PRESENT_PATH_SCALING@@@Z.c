/*
 * XREFs of ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005F48
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000DC58 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00998D0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01734A0 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006000 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00061A4 (-IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALIN.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0095150 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0095158 (-IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentScaling(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  unsigned __int8 IsDriverAspectRatioCenteredMaxSupported; // al
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax

  v2 = a2;
  if ( a2 == D3DKMDT_VPPS_RESERVED1 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v9[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v9[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    goto LABEL_18;
  }
  if ( DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 255 )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = 623LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 5 )
  {
    v12 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v12 + 24) = 626LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 4 )
  {
    v13 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v13 + 24) = 627LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (int)v2 > 0 )
  {
    if ( (int)v2 <= 3 )
      goto LABEL_9;
    if ( (_DWORD)v2 == 4 || (_DWORD)v2 == 5 )
    {
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      goto LABEL_14;
    }
    if ( (_DWORD)v2 == 255 )
      goto LABEL_9;
  }
  IsDriverAspectRatioCenteredMaxSupported = 0;
LABEL_14:
  if ( !IsDriverAspectRatioCenteredMaxSupported )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v9[3] = v2;
    v9[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v9[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
LABEL_18:
    WdLogEvent5_WdError(v9);
    return 3223192389LL;
  }
LABEL_9:
  if ( DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(this, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v2) )
  {
    v5 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 28) = v2;
    if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(this) )
      return 0LL;
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = v2;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdError(v10);
    *((_DWORD *)this + 28) = v5;
    return 3223192389LL;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v14[3] = v2;
  v14[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v14[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v14);
  return 3223192326LL;
}
