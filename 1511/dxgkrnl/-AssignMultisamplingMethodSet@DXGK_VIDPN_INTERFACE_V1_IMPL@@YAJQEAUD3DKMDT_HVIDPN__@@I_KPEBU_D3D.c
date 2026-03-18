/*
 * XREFs of ?AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C017F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C0180A18 (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignMultisamplingMethodSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        unsigned __int64 a3,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  DMMVIDPNSOURCE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // rax

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7047);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9 = v6;
  v8[3] = a4;
  v8[4] = a3;
  v8[5] = v6;
  v8[6] = this;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v10 )
  {
    v15 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v10 + 304), v6);
    if ( v15 )
    {
      v18 = DMMVIDPNSOURCE::SetMultisamplingMethodSet(v15, a3, a4);
      v6 = v18;
      if ( v18 >= 0 )
      {
        LODWORD(v6) = 0;
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v19, v14, v20);
        v21[3] = v9;
        v21[4] = this;
        v21[5] = v6;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdError(v17);
      LODWORD(v6) = -1071774972;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    LODWORD(v6) = -1071774973;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7047);
  return (unsigned int)v6;
}
