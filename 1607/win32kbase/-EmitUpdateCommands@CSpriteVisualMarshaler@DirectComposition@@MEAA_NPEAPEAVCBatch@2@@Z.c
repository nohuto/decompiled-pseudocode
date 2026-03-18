/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EAF30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044290 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_SPRITEVISUAL_SETBRUSH@@V_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_@@@Z @ 0x1C00EAE44 (--$EmitUpdateCommand@UMILCMD_SPRITEVISUAL_SETBRUSH@@V_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_@@.c)
 *     ??$EmitUpdateCommand@UMILCMD_SPRITEVISUAL_SETSHADOW@@V_lambda_c0319cdccaf42ab5f4bab8df748e24c2_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_c0319cdccaf42ab5f4bab8df748e24c2_@@@Z @ 0x1C00EAEB4 (--$EmitUpdateCommand@UMILCMD_SPRITEVISUAL_SETSHADOW@@V_lambda_c0319cdccaf42ab5f4bab8df748e24c2_@.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CSpriteVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x2000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SPRITEVISUAL_SETBRUSH,_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_>(
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000000u;
    }
    v5 = (*((_DWORD *)this + 4) & 0x4000000) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SPRITEVISUAL_SETSHADOW,_lambda_c0319cdccaf42ab5f4bab8df748e24c2_>(
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x4000000u;
      return 1;
    }
  }
  return v4;
}
