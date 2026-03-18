/*
 * XREFs of ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ED0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E9F40 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0@@V_lambda_a08c5b50be745393b97c31162c89a0e1_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a08c5b50be745393b97c31162c89a0e1_@@@Z @ 0x1C00ECE70 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0@@V_lambda_a08c5b50be745393b97.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1@@V_lambda_a4198d3d1e9f4798873a68f15acbfc3e_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a4198d3d1e9f4798873a68f15acbfc3e_@@@Z @ 0x1C00ECECC (--$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1@@V_lambda_a4198d3d1e9f4798873.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2@@V_lambda_f3eceb702d3bb95f35e8572466a46398_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_f3eceb702d3bb95f35e8572466a46398_@@@Z @ 0x1C00ECF28 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2@@V_lambda_f3eceb702d3bb95f35e.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR@@V_lambda_f7cd886f5d9d790c7912a5ea05224ba2_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_f7cd886f5d9d790c7912a5ea05224ba2_@@@Z @ 0x1C00ECF84 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR@@V_lambda_f7cd886f5d9d790c7912a5ea05.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@V_lambda_2f459d7b1de51fe0f6c48d211e4120f0_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_2f459d7b1de51fe0f6c48d211e4120f0_@@@Z @ 0x1C00ECFE8 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@V_lambda_2f459d7b1de51fe0.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET@@V_lambda_0e3be02f44656b4d080e4e3876d13855_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_0e3be02f44656b4d080e4e3876d13855_@@@Z @ 0x1C00ED050 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET@@V_lambda_0e3be02f44656b4d080e4e387.c)
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  DirectComposition::CCompositionPointLightMarshaler *v9; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0,_lambda_a08c5b50be745393b97c31162c89a0e1_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1,_lambda_a4198d3d1e9f4798873a68f15acbfc3e_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2,_lambda_f3eceb702d3bb95f35e8572466a46398_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR,_lambda_f7cd886f5d9d790c7912a5ea05224ba2_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE,_lambda_2f459d7b1de51fe0f6c48d211e4120f0_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET,_lambda_0e3be02f44656b4d080e4e3876d13855_>(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x800u;
      return 1;
    }
  }
  return v4;
}
