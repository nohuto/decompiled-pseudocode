/*
 * XREFs of ?EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z @ 0x1C0048EC0
 * Callers:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0048E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 * Callees:
 *     ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1C0048F44 (-QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z.c)
 */

__int64 __fastcall EvaluateCurrentStateFromRegistry(int a1, int a2, volatile signed __int32 *a3)
{
  unsigned int v3; // ebx
  BOOL v5; // edi
  signed __int32 v6; // ecx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  v5 = a2 != 1;
  if ( (unsigned int)QueryFeatureOverride(
                       __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
                       (enum reg_FeatureEnabledState *)&v8)
    && v8 )
  {
    if ( v8 == 1 )
    {
LABEL_6:
      v6 = 1;
      goto LABEL_7;
    }
    v5 = 1;
  }
  v6 = 2;
  if ( !v5 )
    goto LABEL_6;
LABEL_7:
  _InterlockedCompareExchange(a3, v6, 0);
  LOBYTE(v3) = *a3 != 1;
  return v3;
}
