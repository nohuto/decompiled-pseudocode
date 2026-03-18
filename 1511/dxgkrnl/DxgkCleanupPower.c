/*
 * XREFs of DxgkCleanupPower @ 0x1C0171938
 * Callers:
 *     DxgkUnload @ 0x1C0142B60 (DxgkUnload.c)
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C0046CD8 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C0047058 )
    {
      PoUnregisterPowerSettingCallback(qword_1C0047058);
      qword_1C0047058 = 0LL;
    }
    if ( qword_1C00470E8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C00470E8, qword_1C00470E8 | 3, qword_1C00470E8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C00470E8 = 0LL;
      }
    }
  }
}
