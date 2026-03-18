/*
 * XREFs of ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01A1478
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01A1A24 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0005304 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C0033900 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentRotation(
        VIDPN_MGR *this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 Container; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  struct D3DKMDT_HVIDPN__ *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // [rsp+48h] [rbp+10h] BYREF
  int v23; // [rsp+4Ch] [rbp+14h]

  v3 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !(_DWORD)v3 || (unsigned int)(v3 - 254) <= 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = DMMVIDPNPRESENTPATH::PinContentRotation(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v3);
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40);
  v14 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  v15 = *((_QWORD *)a2 + 12);
  v22 = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v23 = *(_DWORD *)(v15 + 24);
  v16 = (struct D3DKMDT_HVIDPN__ *)(v14 + 88);
  if ( v14 != -88 )
    v16 = (struct D3DKMDT_HVIDPN__ *)v14;
  v17 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)this, v16, 9, 1, &v22);
  v10 = v17;
  if ( v17 < 0 )
  {
    if ( v17 == -1071774970 )
    {
      v21 = WdLogNewEntry5_WdWarning(v9, v18, v19, v20);
      *(_QWORD *)(v21 + 24) = v3;
      *(_QWORD *)(v21 + 32) = a2;
      WdLogEvent5_WdWarning(v21);
      return (unsigned int)v10;
    }
LABEL_7:
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v3;
    v11[4] = a2;
    v11[5] = v10;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  return 0LL;
}
