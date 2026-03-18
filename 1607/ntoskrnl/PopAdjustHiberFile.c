/*
 * XREFs of PopAdjustHiberFile @ 0x14052EA18
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopResizeHiberFile @ 0x14052EEAC (PopResizeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x140546C54 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopAdjustHiberFile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  PopCalculateHiberFileSize(&v3, &v2);
  result = PopResizeHiberFile(v3, &v4);
  if ( (int)result >= 0 )
    byte_140303F76 = v2;
  return result;
}
