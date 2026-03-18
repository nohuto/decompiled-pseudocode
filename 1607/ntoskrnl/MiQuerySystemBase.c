/*
 * XREFs of MiQuerySystemBase @ 0x1400B5F2C
 * Callers:
 *     MiInitializeSpecialPool @ 0x140535D5C (MiInitializeSpecialPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSystemCache @ 0x140553FFC (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140327F20[2 * a1];
}
