/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C015DDDC
 * Callers:
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0125D08 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C012FDA0 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _KEVENT *QuadPart; // rcx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = (struct _KEVENT *)this[30].QuadPart;
  this[70] = PerformanceCounter;
  BYTE3(this[32].QuadPart) = 1;
  KeSetEvent(QuadPart, 0, 0);
}
