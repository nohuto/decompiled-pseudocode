/*
 * XREFs of ObGetHandleInformation @ 0x1406ABCE8
 * Callers:
 *     ExpGetHandleInformation @ 0x1406EE3DC (ExpGetHandleInformation.c)
 * Callees:
 *     ExpSnapShotHandleTables @ 0x1406F02E4 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ObGetHandleInformation(_DWORD *a1, unsigned int a2, int *a3)
{
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 8;
  if ( a2 < 8 )
    return 3221225476LL;
  *a1 = 0;
  result = ExpSnapShotHandleTables((unsigned int)ObpCaptureHandleInformation, (_DWORD)a1, a2, (unsigned int)&v5, 0);
  if ( a3 )
    *a3 = v5;
  return result;
}
