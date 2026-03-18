/*
 * XREFs of ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0005304
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0004B84 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00BD640 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01A1478 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C01A2934 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000D438 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  _QWORD *v15; // rax
  __int32 v16; // eax
  __int32 v17; // eax
  int v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int32 v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax

  v2 = a2;
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(a2) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v15[3] = v2;
    v15[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v15[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdError(v15);
  }
  v5 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2);
  LOBYTE(v8) = 1;
  v9 = 251LL;
  v10 = v5 - 1;
  if ( !v10 )
  {
    LOBYTE(v11) = *((_BYTE *)this + 124);
    goto LABEL_5;
  }
  v16 = v10 - 1;
  if ( !v16 )
  {
    v11 = *((_DWORD *)this + 31) >> 1;
LABEL_5:
    if ( (v11 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_6;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v11 = *((_DWORD *)this + 31) >> 2;
    goto LABEL_5;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v11 = *((_DWORD *)this + 31) >> 3;
    goto LABEL_5;
  }
  if ( v18 != 251 )
  {
LABEL_14:
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = v2;
    WdLogEvent5_WdError(v19);
    goto LABEL_15;
  }
LABEL_6:
  v12 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v12 )
  {
    v13 = *((_DWORD *)this + 31) >> 4;
    goto LABEL_8;
  }
  v21 = v12 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == (_DWORD)v9 )
          goto LABEL_9;
        goto LABEL_14;
      }
      v13 = *((_DWORD *)this + 31) >> 7;
    }
    else
    {
      v13 = *((_DWORD *)this + 31) >> 6;
    }
  }
  else
  {
    v13 = *((_DWORD *)this + 31) >> 5;
  }
LABEL_8:
  if ( ((unsigned __int8)v8 & (unsigned __int8)v13) != 0 )
  {
LABEL_9:
    *((_DWORD *)this + 29) = v2;
    return 0LL;
  }
LABEL_15:
  v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
  v20[3] = v2;
  v20[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v20[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v20);
  return 3223192326LL;
}
