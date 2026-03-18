/*
 * XREFs of ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00B3440
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForVerticalBlankEvent(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rax
  bool v3; // zf
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v2 + 1976) || (v3 = *(_QWORD *)(v2 + 544) == 0LL, Timeout.QuadPart = -1000000LL, v3) )
    Timeout.QuadPart = -5000000LL;
  return KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 14) + 800LL + 1008LL * a2), UserRequest, 0, 0, &Timeout);
}
