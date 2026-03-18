/*
 * XREFs of _dynamic_initializer_for__g_deviceTable__ @ 0x180001040
 * Callers:
 *     <none>
 * Callees:
 *     ??0CD3DDeviceTable@@QEAA@XZ @ 0x18006AF54 (--0CD3DDeviceTable@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_deviceTable__(CD3DDeviceTable *a1)
{
  CD3DDeviceTable::CD3DDeviceTable(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_deviceTable__);
}
