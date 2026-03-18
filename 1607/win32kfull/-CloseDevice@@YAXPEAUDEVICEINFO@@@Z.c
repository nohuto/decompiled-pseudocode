/*
 * XREFs of ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D5768
 * Callers:
 *     DitClose @ 0x1C01D68C0 (DitClose.c)
 *     DitStopRead @ 0x1C01D6A50 (DitStopRead.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01D5F4C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

void __fastcall CloseDevice(struct DEVICEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) == gptiRit
    && (v5 = *((_DWORD *)a1 + 24), (v5 & 4) != 0) )
  {
    *((_DWORD *)a1 + 24) = v5 | 0x10;
    RitWakeDITAndWaitForResponse(2u);
  }
  else
  {
    if ( gfRecordPnpNotification )
      RecordPnpNotification(7LL, a1, *((unsigned __int16 *)a1 + 33));
    v6 = (void *)*((_QWORD *)a1 + 28);
    if ( v6 )
    {
      ZwCancelIoFile(v6, &IoStatusBlock);
      v7 = (void *)*((_QWORD *)a1 + 28);
      if ( v7 == (void *)ghRemoteMouseChannel || v7 == (void *)ghRemoteKeyboardChannel )
      {
        *((_QWORD *)a1 + 28) = 0LL;
      }
      else
      {
        ZwClose(v7);
        v8 = (void *)*((_QWORD *)a1 + 29);
        *((_QWORD *)a1 + 28) = 0LL;
        if ( v8 )
        {
          ObfDereferenceObject(v8);
          *((_QWORD *)a1 + 29) = 0LL;
        }
      }
    }
  }
}
