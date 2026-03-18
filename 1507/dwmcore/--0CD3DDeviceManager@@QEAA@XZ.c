/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x180091060
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001210 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_180195D88 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_180195D90 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  byte_180195DC0 = 0;
  qword_180195DE8 = 0LL;
  qword_180195DF0 = 0LL;
  qword_180195DF8 = 0LL;
  dword_180195E00 = 0;
  qword_180195DD0 = 0LL;
  byte_180195DC8 = 0;
  dword_180195E08 = 0;
  qword_180195DE0 = 0LL;
  byte_180195DD8 = 0;
  xmmword_180195E0C = 0uLL;
  return (CD3DDeviceManager *)&g_D3DDeviceManager;
}
