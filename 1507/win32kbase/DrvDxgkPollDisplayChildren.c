/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C00BBA80
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80 (-xxxDisplayDiagBlackScreenDetected@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C0101270 )
    return qword_1C0101270(a1, 0LL);
  else
    return 3221225659LL;
}
