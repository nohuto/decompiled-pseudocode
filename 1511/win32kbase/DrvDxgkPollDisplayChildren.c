/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C00BD2B0
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C0104090 )
    return qword_1C0104090(a1, 0LL);
  else
    return 3221225659LL;
}
