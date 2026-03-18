/*
 * XREFs of ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C0180A18
 * Callers:
 *     ?AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C017F8E0 (-AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3D.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C330 (-Initialize@-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetMultisamplingMethodSet(
        DMMVIDPNSOURCE *this,
        __int64 a2,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize((__int64)this + 128, 8 * a2, a3);
  v9 = v7;
  if ( v7 >= 0 )
    return 0LL;
  v10 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v10 + 24) = v9;
  WdLogEvent5_WdError(v10);
  return (unsigned int)v9;
}
