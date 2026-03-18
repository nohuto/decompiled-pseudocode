/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044D50
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0046500 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@V_lambda_c9bfe3e300f4f487d2cc0aec257d29f7_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_c9bfe3e300f4f487d2cc0aec257d29f7_@@@Z @ 0x1C0046760 (--$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@V_lambda_c9bfe3e300f4f487d2cc0aec.c)
 *     ??$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@V_lambda_906b35406400a961726b3a3948cff082_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_906b35406400a961726b3a3948cff082_@@@Z @ 0x1C00467BC (--$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@V_lambda_906b35406400a961726b3a394.c)
 *     ??$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@V_lambda_48736720202e4a1a68181a1e244f7701_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_48736720202e4a1a68181a1e244f7701_@@@Z @ 0x1C0046818 (--$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@V_lambda_48736720202e4a1a68181a1e244.c)
 *     ??$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@V_lambda_5ed9830f15740f35f4074d41a83c2e4b_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_5ed9830f15740f35f4074d41a83c2e4b_@@@Z @ 0x1C0046874 (--$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@V_lambda_5ed9830f15740f35f4074d41a8.c)
 *     ??$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@V_lambda_b077b7130a3859aa8305c9b673db2541_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_b077b7130a3859aa8305c9b673db2541_@@@Z @ 0x1C00796A8 (--$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@V_lambda_b077b7130a3859aa8305c9b673.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  DirectComposition::CRectangleClipMarshaler *v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, a2) )
  {
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_RECTANGLEGEOMETRY_SETLEFTINSET,_lambda_5ed9830f15740f35f4074d41a83c2e4b_>(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_RECTANGLEGEOMETRY_SETTOPINSET,_lambda_48736720202e4a1a68181a1e244f7701_>(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET,_lambda_906b35406400a961726b3a3948cff082_>(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET,_lambda_c9bfe3e300f4f487d2cc0aec257d29f7_>(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE,_lambda_b077b7130a3859aa8305c9b673db2541_>(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    return 1;
  }
  return v4;
}
