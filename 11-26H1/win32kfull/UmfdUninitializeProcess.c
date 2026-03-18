/*
 * XREFs of UmfdUninitializeProcess @ 0x14034A050
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdUninitializeProcess(int a1, __int64 a2)
{
  UmfdHostLifeTimeManager::UninitializeProcess(a1, a2);
}
