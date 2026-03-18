/*
 * XREFs of ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DDE54
 * Callers:
 *     RitPrepDitTakeOver @ 0x1C009D8C8 (RitPrepDitTakeOver.c)
 *     DitPrepRitTakeOver @ 0x1C009EBF4 (DitPrepRitTakeOver.c)
 *     ?StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE8A8 (-StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     DitClose @ 0x1C01DFEB4 (DitClose.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE810 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

void __fastcall CloseDevice(struct DEVICEINFO *a1)
{
  int v2; // eax
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && (v2 = *((_DWORD *)a1 + 22), (v2 & 4) != 0) )
  {
    *((_DWORD *)a1 + 22) = v2 | 0x10;
    RitWakeDITAndWaitForResponse(2u);
  }
  else
  {
    v3 = (void *)*((_QWORD *)a1 + 27);
    if ( v3 )
    {
      ZwCancelIoFile(v3, &IoStatusBlock);
      v4 = (void *)*((_QWORD *)a1 + 27);
      if ( v4 == (void *)ghRemoteMouseChannel || v4 == (void *)ghRemoteKeyboardChannel )
      {
        *((_QWORD *)a1 + 27) = 0LL;
      }
      else
      {
        ZwClose(v4);
        v5 = (void *)*((_QWORD *)a1 + 28);
        *((_QWORD *)a1 + 27) = 0LL;
        if ( v5 )
        {
          ObfDereferenceObject(v5);
          *((_QWORD *)a1 + 28) = 0LL;
        }
      }
    }
  }
}
