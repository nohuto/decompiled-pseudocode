/*
 * XREFs of ?StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE8A8
 * Callers:
 *     DitStopRead @ 0x1C01E0008 (DitStopRead.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DDE54 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE810 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

struct DEVICEINFO *__fastcall StopDeviceRead(struct DEVICEINFO *a1)
{
  int v2; // eax
  void *v3; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && (v2 = *((_DWORD *)a1 + 22), (v2 & 4) != 0) )
  {
    *((_DWORD *)a1 + 22) = v2 | 0x40;
    RitWakeDITAndWaitForResponse(8u);
  }
  else
  {
    v3 = (void *)*((_QWORD *)a1 + 27);
    *((_WORD *)a1 + 32) &= ~2u;
    ZwCancelIoFile(v3, &IoStatusBlock);
    CloseDevice(a1);
  }
  return 0LL;
}
