/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x180035D04
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001240 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_1801F0018 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_1801F0020 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  qword_1801F0070 = (__int64)&unk_1801F0090;
  qword_1801F0078 = (__int64)&unk_1801F0090;
  dword_1801F0080 = 1;
  qword_1801F0084 = 1LL;
  qword_1801F00A0 = (__int64)&unk_1801F00C0;
  qword_1801F00A8 = (__int64)&unk_1801F00C0;
  dword_1801F00B0 = 2;
  unk_1801F00B4 = 2LL;
  xmmword_1801F0114 = 0uLL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  byte_1801F0050 = 0;
  qword_1801F0058 = 0LL;
  dword_1801F0110 = 0;
  qword_1801F0068 = 0LL;
  byte_1801F0124 = 0;
  return result;
}
