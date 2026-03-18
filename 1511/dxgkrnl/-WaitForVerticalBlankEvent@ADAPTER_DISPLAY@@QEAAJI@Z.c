/*
 * XREFs of ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A3EC
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForVerticalBlankEvent(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rax
  bool v3; // zf
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v2 + 1984) || (v3 = *(_QWORD *)(v2 + 544) == 0LL, Timeout.QuadPart = -1000000LL, v3) )
    Timeout.QuadPart = -5000000LL;
  return KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 17) + 800LL + 1016LL * a2), UserRequest, 0, 0, &Timeout);
}
