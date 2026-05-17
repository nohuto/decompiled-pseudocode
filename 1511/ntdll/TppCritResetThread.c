/*
 * XREFs of TppCritResetThread @ 0x180081BB0
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppCritResetThread(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return sub_1800C550A();
  return result;
}
