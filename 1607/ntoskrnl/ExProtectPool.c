/*
 * XREFs of ExProtectPool @ 0x1400F0300
 * Callers:
 *     HvpProtectBin @ 0x140513DE0 (HvpProtectBin.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
