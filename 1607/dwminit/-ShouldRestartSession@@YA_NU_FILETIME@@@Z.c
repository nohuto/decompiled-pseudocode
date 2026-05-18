/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x1800027E8
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800028C4 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?SkipRestartHeuristic@@YA_NXZ @ 0x180002498 (-SkipRestartHeuristic@@YA_NXZ.c)
 *     ?ForceBasicDisplayAdapter@@YA_NXZ @ 0x1800024F8 (-ForceBasicDisplayAdapter@@YA_NXZ.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000271C (-FallBackToBDD@@YA_NXZ.c)
 */

char __fastcall ShouldRestartSession(struct _FILETIME a1)
{
  char v1; // bl
  char v2; // r8
  unsigned __int64 v3; // rdx
  int v4; // eax
  bool v5; // zf

  v1 = 1;
  if ( SkipRestartHeuristic() )
    return 0;
  if ( !ForceBasicDisplayAdapter() )
  {
    v2 = byte_18000D6B4;
    if ( byte_18000D6B4
      && (v3 = (*(_QWORD *)&a1 - qword_18000D788) / 0x989680uLL,
          byte_18000D6B4 &= -(v3 < 0x3C),
          ((unsigned __int8)v2 & (unsigned __int8)-(v3 < 0x3C)) != 0) )
    {
      v4 = gDwmNumRetriesSoFar;
      if ( gDwmNumRetriesSoFar >= 7 )
      {
        v5 = !FallBackToBDD();
        v4 = gDwmNumRetriesSoFar;
        v1 = v5;
LABEL_13:
        gDwmNumRetriesSoFar = v4 + 1;
        return v1;
      }
    }
    else
    {
      byte_18000D6B4 = 1;
      v4 = 0;
      qword_18000D788 = (__int64)a1;
    }
    v1 = 0;
    goto LABEL_13;
  }
  if ( FallBackToBDD() || byte_18000D6B5 )
  {
    v1 = 0;
    byte_18000D6B5 = 1;
  }
  return v1;
}
