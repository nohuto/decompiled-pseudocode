/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044920
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004479C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@V_lambda_952b6b000c999d04aa5713e06a78ee9c_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_952b6b000c999d04aa5713e06a78ee9c_@@@Z @ 0x1C0044C94 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@V_lambda_952b6b000c999d04a.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@V_lambda_a2b9f137e6bd54fb770976a3249b25b0_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a2b9f137e6bd54fb770976a3249b25b0_@@@Z @ 0x1C0047864 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@V_lambda_a2b9f137e6bd54fb770976a3249.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@V_lambda_a17fe493a9a3d244ffd1b2531b500889_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a17fe493a9a3d244ffd1b2531b500889_@@@Z @ 0x1C00478D8 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@V_lambda_a17fe493a9a3d244ffd1.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@V_lambda_1e56685df1004fc9203520070e26a5fd_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_1e56685df1004fc9203520070e26a5fd_@@@Z @ 0x1C004794C (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@V_lambda_1e56685df1004fc9203.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@V_lambda_0da63ec28eaf95972bb33284f20f15c0_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_0da63ec28eaf95972bb33284f20f15c0_@@@Z @ 0x1C00479A8 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@V_lambda_0da63ec28eaf95972bb33.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@V_lambda_ae326120eec07a33cfa3124b4300c4b1_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_ae326120eec07a33cfa3124b4300c4b1_@@@Z @ 0x1C0047A24 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@V_lambda_ae326120eec07a33cfa31.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@V_lambda_32f87ddeda71ec7c51647be65d6a8b51_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_32f87ddeda71ec7c51647be65d6a8b51_@@@Z @ 0x1C0078480 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@V_lambda_32f87ddeda71ec7c51647.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform3DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT,_lambda_ae326120eec07a33cfa3124b4300c4b1_>(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT,_lambda_32f87ddeda71ec7c51647be65d6a8b51_>(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION,_lambda_0da63ec28eaf95972bb33284f20f15c0_>(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS,_lambda_a17fe493a9a3d244ffd1b2531b500889_>(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE,_lambda_1e56685df1004fc9203520070e26a5fd_>(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETSCALE,_lambda_a2b9f137e6bd54fb770976a3249b25b0_>(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x2000) != 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX,_lambda_952b6b000c999d04aa5713e06a78ee9c_>(
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) |= 0x2000u;
      return 1;
    }
  }
  return v4;
}
