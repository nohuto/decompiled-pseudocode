/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x180072440
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x1800011E0 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_1801A3D78 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_1801A3D80 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  byte_1801A3DB0 = 0;
  qword_1801A3DE0 = 0LL;
  dword_1801A3DE8 = 0;
  qword_1801A3DB8 = 0LL;
  dword_1801A3DF0 = 0;
  qword_1801A3DC8 = 0LL;
  word_1801A3E04 = 0;
  byte_1801A3E06 = 0;
  xmmword_1801A3DF4 = 0uLL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  xmmword_1801A3DD0 = 0LL;
  return result;
}
