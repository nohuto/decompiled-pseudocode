/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EE290
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@V_lambda_07f550606503c46a5ddadc30f3af38e5_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_07f550606503c46a5ddadc30f3af38e5_@@@Z @ 0x1C00EE028 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@V_lambda_07f550606503c46a5ddad.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@V_lambda_4216ace2a3a9ce7a95c5444156fe5754_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_4216ace2a3a9ce7a95c5444156fe5754_@@@Z @ 0x1C00EE08C (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@V_lambda_4216ace2a3a9ce7a95c54.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@V_lambda_cdb35c6cdab0467f092d1c5f3e41d906_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_cdb35c6cdab0467f092d1c5f3e41d906_@@@Z @ 0x1C00EE0F0 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@V_lambda_cdb35c6cdab0467f092d1c5f3e.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@V_lambda_69ec054dab31664297bc4004e316ccaa_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_69ec054dab31664297bc4004e316ccaa_@@@Z @ 0x1C00EE154 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@V_lambda_69ec054dab31664297b.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@V_lambda_6048ccecba1615198592d45635461d84_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_6048ccecba1615198592d45635461d84_@@@Z @ 0x1C00EE1B0 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@V_lambda_6048ccecba1615198592d456354.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@V_lambda_8e27e368b213886017cbcce0d374cdc4_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_8e27e368b213886017cbcce0d374cdc4_@@@Z @ 0x1C00EE214 (--$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@V_lambda_8e27e368b21388601.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  DirectComposition::CComponentTransform2DMarshaler *v10; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v10 = this;
  if ( (v2 & 0x40) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT,_lambda_07f550606503c46a5ddadc30f3af38e5_>(
            a2,
            (__int64)&v10) )
      return v3;
    *((_DWORD *)this + 4) |= 0x40u;
  }
  v6 = *((_DWORD *)this + 4);
  v10 = this;
  if ( (v6 & 0x20) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT,_lambda_4216ace2a3a9ce7a95c5444156fe5754_>(
            a2,
            (__int64)&v10) )
      return v3;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  v7 = *((_DWORD *)this + 4);
  v10 = this;
  if ( (v7 & 0x80u) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETOFFSET,_lambda_cdb35c6cdab0467f092d1c5f3e41d906_>(
            a2,
            (__int64)&v10) )
      return v3;
    *((_DWORD *)this + 4) |= 0x80u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v10 = this;
  if ( v8 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE,_lambda_69ec054dab31664297bc4004e316ccaa_>(
            a2,
            (__int64)&v10) )
      return v3;
    *((_DWORD *)this + 4) |= 0x100u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v10 = this;
  if ( v8 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETSCALE,_lambda_6048ccecba1615198592d45635461d84_>(
            a2,
            (__int64)&v10) )
      return v3;
    *((_DWORD *)this + 4) |= 0x200u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v10 = this;
  if ( !v8 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX,_lambda_8e27e368b213886017cbcce0d374cdc4_>(
         a2,
         (__int64 *)&v10) )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    return 1;
  }
  return v3;
}
