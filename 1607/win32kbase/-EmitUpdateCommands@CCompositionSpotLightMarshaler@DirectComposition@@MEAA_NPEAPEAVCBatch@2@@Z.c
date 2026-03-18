/*
 * XREFs of ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ED880
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E9F40 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0@@V_lambda_8cd7f403f38b7898ae24184497cca95e_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_8cd7f403f38b7898ae24184497cca95e_@@@Z @ 0x1C00ED494 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0@@V_lambda_8cd7f403f38b7898ae24.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1@@V_lambda_2091914c1cf1803762948c2c2eb666c0_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_2091914c1cf1803762948c2c2eb666c0_@@@Z @ 0x1C00ED4F0 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1@@V_lambda_2091914c1cf180376294.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2@@V_lambda_37d68d00375d3b30b1619e8b713d57c3_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_37d68d00375d3b30b1619e8b713d57c3_@@@Z @ 0x1C00ED54C (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2@@V_lambda_37d68d00375d3b30b161.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@V_lambda_85ef3985c37784968b274c944d4fdc70_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_85ef3985c37784968b274c944d4fdc70_@@@Z @ 0x1C00ED5A8 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@V_lambda_85ef3985c37784968.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION@@V_lambda_168d3da3d0f2960b32fb69d934910f4b_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_168d3da3d0f2960b32fb69d934910f4b_@@@Z @ 0x1C00ED610 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION@@V_lambda_168d3da3d0f2960b32fb69d.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE@@V_lambda_6b73664f286d64caf8bc4722c4f296c7_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_6b73664f286d64caf8bc4722c4f296c7_@@@Z @ 0x1C00ED684 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE@@V_lambda_6b73664f286d64caf8.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR@@V_lambda_a54f22532ec0465d6c2327584066914c_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a54f22532ec0465d6c2327584066914c_@@@Z @ 0x1C00ED6E0 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR@@V_lambda_a54f22532ec0465d6c.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET@@V_lambda_4d51ba2affa0090bf5bed167bc03e4a4_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_4d51ba2affa0090bf5bed167bc03e4a4_@@@Z @ 0x1C00ED744 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET@@V_lambda_4d51ba2affa0090bf5bed167bc.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE@@V_lambda_49ff8c4316bd9bc1691633b4f529c7cf_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_49ff8c4316bd9bc1691633b4f529c7cf_@@@Z @ 0x1C00ED7B8 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE@@V_lambda_49ff8c4316bd9bc169.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR@@V_lambda_7a1338af5eb8b672e116a5a836624782_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_7a1338af5eb8b672e116a5a836624782_@@@Z @ 0x1C00ED814 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR@@V_lambda_7a1338af5eb8b672e1.c)
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  DirectComposition::CCompositionSpotLightMarshaler *v9; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0,_lambda_8cd7f403f38b7898ae24184497cca95e_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1,_lambda_2091914c1cf1803762948c2c2eb666c0_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2,_lambda_37d68d00375d3b30b1619e8b713d57c3_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION,_lambda_168d3da3d0f2960b32fb69d934910f4b_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE,_lambda_85ef3985c37784968b274c944d4fdc70_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE,_lambda_6b73664f286d64caf8bc4722c4f296c7_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x1000) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR,_lambda_a54f22532ec0465d6c2327584066914c_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x2000) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET,_lambda_4d51ba2affa0090bf5bed167bc03e4a4_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x4000) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE,_lambda_49ff8c4316bd9bc1691633b4f529c7cf_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x8000) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR,_lambda_7a1338af5eb8b672e116a5a836624782_>(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x8000u;
      return 1;
    }
  }
  return v4;
}
