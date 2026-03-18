/*
 * XREFs of ??0CD3DDeviceTable@@QEAA@XZ @ 0x18006AF54
 * Callers:
 *     _dynamic_initializer_for__g_deviceTable__ @ 0x180001040 (_dynamic_initializer_for__g_deviceTable__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceTable *__fastcall CD3DDeviceTable::CD3DDeviceTable(CD3DDeviceTable *this)
{
  dword_1801A3A28 = 0;
  g_deviceTable = (__int64)&CD3DDeviceTable::`vftable';
  xmmword_1801A3A30 = 0LL;
  qword_1801A3A40 = 0LL;
  dword_1801A3A48 = 0;
  xmmword_1801A3A50 = 0LL;
  qword_1801A3A60 = 0LL;
  dword_1801A3A68 = 0;
  xmmword_1801A3A70 = 0LL;
  qword_1801A3A80 = 0LL;
  dword_1801A3A88 = 0;
  xmmword_1801A3A90 = 0LL;
  qword_1801A3AA0 = 0LL;
  dword_1801A3AA8 = 0;
  _InterlockedIncrement(&dword_1801A3A28);
  return (CD3DDeviceTable *)&g_deviceTable;
}
