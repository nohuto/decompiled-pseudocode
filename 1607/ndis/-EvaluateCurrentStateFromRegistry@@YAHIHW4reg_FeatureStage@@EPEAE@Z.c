/*
 * XREFs of ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x1C004DF34
 * Callers:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C004DFB0 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 * Callees:
 *     ?QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z @ 0x1C004E020 (-QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z.c)
 */

_BOOL8 __fastcall EvaluateCurrentStateFromRegistry(int a1, int a2, int a3, char a4, _BYTE *a5)
{
  _BYTE *v5; // rdi
  BOOL v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  v5 = a5;
  v8 = 0x80000000;
  v6 = a3 != 1;
  *a5 = a4;
  if ( (unsigned int)QueryFeatureOverride(
                       __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
                       a2,
                       (enum reg_FeatureEnabledState *)&v9,
                       &v8) )
  {
    if ( v9 )
      v6 = v9 != 1;
    if ( v8 != 0x80000000 )
      *v5 = v8;
  }
  return v6;
}
