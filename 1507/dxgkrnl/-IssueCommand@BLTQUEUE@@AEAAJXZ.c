/*
 * XREFs of ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00AD90C
 * Callers:
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00AD708 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B644C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0159EE4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C015A7D4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C015B824 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE::IssueCommand(BLTQUEUE *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _KEVENT *v3; // rcx

  *((_QWORD *)this + 39) = KeGetCurrentThread();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = (struct _KEVENT *)*((_QWORD *)this + 30);
  *((LARGE_INTEGER *)this + 59) = PerformanceCounter;
  KeSetEvent(v3, 0, 0);
  KeWaitForSingleObject(*((PVOID *)this + 31), Executive, 0, 0, 0LL);
  *((_QWORD *)this + 39) = 0LL;
  return *((unsigned int *)this + 72);
}
