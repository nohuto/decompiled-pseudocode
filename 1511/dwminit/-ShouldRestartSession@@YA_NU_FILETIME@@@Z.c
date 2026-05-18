/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000285C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000290C (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?SkipRestartHeuristic@@YA_NXZ @ 0x180002484 (-SkipRestartHeuristic@@YA_NXZ.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002790 (-FallBackToBDD@@YA_NXZ.c)
 */

bool __fastcall ShouldRestartSession(struct _FILETIME a1)
{
  bool v1; // cl
  char v2; // r8
  unsigned __int64 v3; // rdx
  int v4; // eax
  bool v5; // zf

  if ( !SkipRestartHeuristic() )
  {
    v2 = byte_18000C778;
    if ( byte_18000C778
      && (v3 = (*(_QWORD *)&a1 - qword_18000C790) / 0x989680uLL,
          byte_18000C778 &= -(v3 < 0x3C),
          ((unsigned __int8)v2 & (unsigned __int8)-(v3 < 0x3C)) != 0) )
    {
      v4 = gDwmNumRetriesSoFar;
      if ( gDwmNumRetriesSoFar >= 7 )
      {
        v5 = !FallBackToBDD();
        v4 = gDwmNumRetriesSoFar;
        v1 = v5;
LABEL_9:
        gDwmNumRetriesSoFar = v4 + 1;
        return v1;
      }
    }
    else
    {
      byte_18000C778 = 1;
      v4 = 0;
      qword_18000C790 = (__int64)a1;
    }
    v1 = 0;
    goto LABEL_9;
  }
  return 0;
}
