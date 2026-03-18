/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C00C8F80
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00B3610 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C011B3D0 )
    return qword_1C011B3D0(a1, 0LL);
  else
    return 3221225659LL;
}
