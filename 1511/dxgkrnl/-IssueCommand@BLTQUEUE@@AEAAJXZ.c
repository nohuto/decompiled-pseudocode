/*
 * XREFs of ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00BFBCC
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C009B204 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00BF9D0 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015E204 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C015EAF8 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C015FB18 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
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
  *((LARGE_INTEGER *)this + 62) = PerformanceCounter;
  KeSetEvent(v3, 0, 0);
  KeWaitForSingleObject(*((PVOID *)this + 31), Executive, 0, 0, 0LL);
  *((_QWORD *)this + 39) = 0LL;
  return *((unsigned int *)this + 72);
}
