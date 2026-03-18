/*
 * XREFs of PopAdjustHiberFile @ 0x140564A7C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopResizeHiberFile @ 0x140564F6C (PopResizeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x14056BFC0 (PopCalculateHiberFileSize.c)
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
    byte_14032E536 = v2;
  return result;
}
