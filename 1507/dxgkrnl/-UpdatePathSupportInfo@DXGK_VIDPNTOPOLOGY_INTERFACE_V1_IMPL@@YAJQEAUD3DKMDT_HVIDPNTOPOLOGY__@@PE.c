/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0099AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C0089BE8 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int updated; // edi
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7038);
  if ( a2 )
  {
    v6 = *(_DWORD *)a2;
    v7 = *((unsigned int *)a2 + 1);
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v8[3] = v6;
    v8[4] = v7;
    v8[5] = this;
    v8[6] = a2;
    v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v11 = *((_DWORD *)a2 + 83);
      if ( (v11 & 1) == 0 )
        *((_DWORD *)a2 + 83) = v11 | 1;
      updated = DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
                  v10,
                  v6,
                  v7,
                  (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)a2 + 83);
      if ( updated < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v18 + 24) = a2;
        *(_QWORD *)(v18 + 32) = v10;
        WdLogEvent5_WdError(v18);
      }
      else
      {
        updated = 0;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v17 + 24) = this;
      WdLogEvent5_WdError(v17);
      updated = -1071774976;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    updated = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v14, 7038);
  return (unsigned int)updated;
}
