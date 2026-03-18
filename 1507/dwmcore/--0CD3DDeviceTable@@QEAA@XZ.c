/*
 * XREFs of ??0CD3DDeviceTable@@QEAA@XZ @ 0x18009169C
 * Callers:
 *     _dynamic_initializer_for__g_deviceTable__ @ 0x180001070 (_dynamic_initializer_for__g_deviceTable__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceTable *__fastcall CD3DDeviceTable::CD3DDeviceTable(CD3DDeviceTable *this)
{
  dword_180195A38 = 0;
  g_deviceTable = (__int64)&CD3DDeviceTable::`vftable';
  xmmword_180195A40 = 0LL;
  qword_180195A50 = 0LL;
  dword_180195A58 = 0;
  xmmword_180195A60 = 0LL;
  qword_180195A70 = 0LL;
  dword_180195A78 = 0;
  xmmword_180195A80 = 0LL;
  qword_180195A90 = 0LL;
  dword_180195A98 = 0;
  xmmword_180195AA0 = 0LL;
  qword_180195AB0 = 0LL;
  dword_180195AB8 = 0;
  _InterlockedIncrement(&dword_180195A38);
  return (CD3DDeviceTable *)&g_deviceTable;
}
