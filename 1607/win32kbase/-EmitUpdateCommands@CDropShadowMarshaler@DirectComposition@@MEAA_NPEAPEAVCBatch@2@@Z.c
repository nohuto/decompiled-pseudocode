/*
 * XREFs of ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E9B10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004479C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETBLURRADIUS@@V_lambda_ca5ee11a4e4eac5ebce3be67c7f79afd_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_ca5ee11a4e4eac5ebce3be67c7f79afd_@@@Z @ 0x1C00E98E4 (--$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETBLURRADIUS@@V_lambda_ca5ee11a4e4eac5ebce3be67c7f79afd.c)
 *     ??$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETCOLOR@@V_lambda_0f65ccd11010066f3bf13d4ccdcefdb6_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_0f65ccd11010066f3bf13d4ccdcefdb6_@@@Z @ 0x1C00E9940 (--$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETCOLOR@@V_lambda_0f65ccd11010066f3bf13d4ccdcefdb6_@@@C.c)
 *     ??$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETMASK@@V_lambda_c3736e7ec6bdc5e1298df4c29b81c382_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_c3736e7ec6bdc5e1298df4c29b81c382_@@@Z @ 0x1C00E99A4 (--$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETMASK@@V_lambda_c3736e7ec6bdc5e1298df4c29b81c382_@@@CR.c)
 *     ??$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETOFFSET@@V_lambda_3d0c5b44ea74fc7ebfe1dabea39653cd_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_3d0c5b44ea74fc7ebfe1dabea39653cd_@@@Z @ 0x1C00E9A0C (--$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETOFFSET@@V_lambda_3d0c5b44ea74fc7ebfe1dabea39653cd_@@@.c)
 *     ??$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETOPACITY@@V_lambda_c6072fc4d5e24a2293318db97d0ceb0b_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_c6072fc4d5e24a2293318db97d0ceb0b_@@@Z @ 0x1C00E9A80 (--$EmitUpdateCommand@UMILCMD_DROPSHADOW_SETOPACITY@@V_lambda_c6072fc4d5e24a2293318db97d0ceb0b_@@.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::EmitUpdateCommands(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  bool v6; // zf
  DirectComposition::CDropShadowMarshaler *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_DROPSHADOW_SETBLURRADIUS,_lambda_ca5ee11a4e4eac5ebce3be67c7f79afd_>(
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_DROPSHADOW_SETCOLOR,_lambda_0f65ccd11010066f3bf13d4ccdcefdb6_>(
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_DROPSHADOW_SETMASK,_lambda_c3736e7ec6bdc5e1298df4c29b81c382_>(
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_DROPSHADOW_SETOFFSET,_lambda_3d0c5b44ea74fc7ebfe1dabea39653cd_>(
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v8 = this;
    if ( v6 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_DROPSHADOW_SETOPACITY,_lambda_c6072fc4d5e24a2293318db97d0ceb0b_>(
           a2,
           (__int64)&v8) )
    {
      *((_DWORD *)this + 4) &= ~0x800u;
      return 1;
    }
  }
  return v4;
}
