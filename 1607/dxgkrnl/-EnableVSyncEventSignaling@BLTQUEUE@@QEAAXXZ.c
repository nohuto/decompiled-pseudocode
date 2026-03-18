/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C00CF204
 * Callers:
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00CEC9C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147094 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  LARGE_INTEGER PerformanceCounter; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((_BYTE *)this + 403) = 1;
  *((LARGE_INTEGER *)this + 92) = PerformanceCounter;
  KeSetEvent((PRKEVENT)((char *)this + 352), 0, 0);
}
