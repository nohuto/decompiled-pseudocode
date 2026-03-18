/*
 * XREFs of ?EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB820
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_MASKBRUSH_SETMASK@@V_lambda_b547dab8fd8be34540294d316fb3ac32_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_b547dab8fd8be34540294d316fb3ac32_@@@Z @ 0x1C00EB750 (--$EmitUpdateCommand@UMILCMD_MASKBRUSH_SETMASK@@V_lambda_b547dab8fd8be34540294d316fb3ac32_@@@CRe.c)
 *     ??$EmitUpdateCommand@UMILCMD_MASKBRUSH_SETSOURCE@@V_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_@@@Z @ 0x1C00EB7B8 (--$EmitUpdateCommand@UMILCMD_MASKBRUSH_SETSOURCE@@V_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_@@@C.c)
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  DirectComposition::CMaskBrushMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_MASKBRUSH_SETSOURCE,_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_>(
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v6 & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_MASKBRUSH_SETMASK,_lambda_b547dab8fd8be34540294d316fb3ac32_>(
         a2,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
