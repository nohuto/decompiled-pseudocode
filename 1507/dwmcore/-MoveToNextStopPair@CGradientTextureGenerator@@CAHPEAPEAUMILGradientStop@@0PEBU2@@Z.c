/*
 * XREFs of ?MoveToNextStopPair@CGradientTextureGenerator@@CAHPEAPEAUMILGradientStop@@0PEBU2@@Z @ 0x18015A454
 * Callers:
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x1801594B4 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGradientTextureGenerator::MoveToNextStopPair(
        struct MILGradientStop **a1,
        struct MILGradientStop **a2,
        const struct MILGradientStop *a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  char *v5; // rax

  v3 = (__int64)*a2;
  if ( *a2 != a3 )
  {
    *a1 = (struct MILGradientStop *)((char *)*a1 + 20);
    v4 = v3 + 20;
    v5 = (char *)*a1;
    *a2 = (struct MILGradientStop *)v4;
    if ( *(float *)v5 != *(float *)v4 )
      return 1LL;
    if ( (const struct MILGradientStop *)v4 != a3 )
    {
      *a1 = (struct MILGradientStop *)(v5 + 20);
      *a2 = (struct MILGradientStop *)(v4 + 20);
      return 1LL;
    }
  }
  return 0LL;
}
