/*
 * XREFs of ObGetHandleInformationEx @ 0x140666130
 * Callers:
 *     ExpGetHandleInformationEx @ 0x1406AB5D0 (ExpGetHandleInformationEx.c)
 * Callees:
 *     ExpSnapShotHandleTables @ 0x1406AD780 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ObGetHandleInformationEx(_QWORD *a1, unsigned int a2, int *a3)
{
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 16;
  if ( a2 < 0x10 )
    return 3221225476LL;
  *a1 = 0LL;
  result = ExpSnapShotHandleTables((unsigned int)ObpCaptureHandleInformationEx, (_DWORD)a1, a2, (unsigned int)&v5, 1);
  if ( a3 )
    *a3 = v5;
  return result;
}
