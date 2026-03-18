/*
 * XREFs of KeSetEventBoostPriority @ 0x1402018D4
 * Callers:
 *     NtSetEventBoostPriority @ 0x1406F0A44 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall KeSetEventBoostPriority(__int64 a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, v2, 0LL, 0LL, 0);
}
