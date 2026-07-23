/*
 * XREFs of MiQuerySystemBase @ 0x1400B3D54
 * Callers:
 *     MiInitializeSpecialPool @ 0x14053629C (MiInitializeSpecialPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSystemCache @ 0x14055453C (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140327F60[2 * a1];
}
