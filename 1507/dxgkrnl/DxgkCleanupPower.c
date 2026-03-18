/*
 * XREFs of DxgkCleanupPower @ 0x1C016D128
 * Callers:
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C0046C58 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C0046FD8 )
    {
      PoUnregisterPowerSettingCallback(qword_1C0046FD8);
      qword_1C0046FD8 = 0LL;
    }
    if ( qword_1C0047068 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C0047068, qword_1C0047068 | 3, qword_1C0047068 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C0047068 = 0LL;
      }
    }
  }
}
