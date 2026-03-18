/*
 * XREFs of UserSleep @ 0x1C0080530
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UserSleep(int a1)
{
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -10000LL * a1;
  return KeDelayExecutionThread(1, 0, &Interval);
}
