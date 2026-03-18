/*
 * XREFs of _dynamic_atexit_destructor_for__g_deviceTable__ @ 0x1800BFAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_deviceTable__()
{
  CD3DDeviceTable::~CD3DDeviceTable((void **)&g_deviceTable);
}
