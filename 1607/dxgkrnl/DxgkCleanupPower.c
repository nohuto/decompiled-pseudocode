/*
 * XREFs of DxgkCleanupPower @ 0x1C019A4C8
 * Callers:
 *     DxgkUnload @ 0x1C0165770 (DxgkUnload.c)
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C0056E99 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C0057218 )
    {
      PoUnregisterPowerSettingCallback(qword_1C0057218);
      qword_1C0057218 = 0LL;
    }
    if ( qword_1C00572A8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C00572A8, qword_1C00572A8 | 3, qword_1C00572A8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C00572A8 = 0LL;
      }
    }
  }
}
