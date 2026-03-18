/*
 * XREFs of ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C016C300
 * Callers:
 *     <none>
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016BEC4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG __fastcall DpiBrightnessEventStopCallback(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  char *DeviceExtension; // rdi
  unsigned int v6; // ecx
  char *v7; // rax

  DeviceExtension = (char *)a3->DeviceExtension;
  KeWaitForSingleObject(DeviceExtension + 2928, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)DeviceExtension + 400) && (int)DpiAcquireCoreSyncAccessSafe((__int64)a3, 0) >= 0 )
  {
    v6 = 0;
    v7 = DeviceExtension + 2864;
    while ( a1 != *((_QWORD *)v7 + 1) )
    {
      ++v6;
      v7 += 24;
      if ( v6 >= 2 )
        goto LABEL_8;
    }
    *v7 = 0;
    DpiBrightnessAISetBacklightOptLevel(a3);
LABEL_8:
    DpiReleaseCoreSyncAccessSafe((__int64)a3, 0);
  }
  return KeReleaseMutex((PRKMUTEX)(DeviceExtension + 2928), 0);
}
