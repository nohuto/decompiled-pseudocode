/*
 * XREFs of ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DD854
 * Callers:
 *     DitPrepRitTakeOver @ 0x1C0131AC0 (DitPrepRitTakeOver.c)
 *     RitPrepDitTakeOver @ 0x1C0144BD8 (RitPrepDitTakeOver.c)
 *     ?StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE2A0 (-StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     DitClose @ 0x1C01DF8B4 (DitClose.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE20C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

void __fastcall CloseDevice(struct DEVICEINFO *a1)
{
  int v2; // eax
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && (v2 = *((_DWORD *)a1 + 24), (v2 & 4) != 0) )
  {
    *((_DWORD *)a1 + 24) = v2 | 0x10;
    RitWakeDITAndWaitForResponse(2u);
  }
  else
  {
    v3 = (void *)*((_QWORD *)a1 + 28);
    if ( v3 )
    {
      ZwCancelIoFile(v3, &IoStatusBlock);
      v4 = (void *)*((_QWORD *)a1 + 28);
      if ( v4 == (void *)ghRemoteMouseChannel || v4 == (void *)ghRemoteKeyboardChannel )
      {
        *((_QWORD *)a1 + 28) = 0LL;
      }
      else
      {
        ZwClose(v4);
        v5 = (void *)*((_QWORD *)a1 + 29);
        *((_QWORD *)a1 + 28) = 0LL;
        if ( v5 )
        {
          ObfDereferenceObject(v5);
          *((_QWORD *)a1 + 29) = 0LL;
        }
      }
    }
  }
}
