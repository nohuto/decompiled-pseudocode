/*
 * XREFs of ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0198D90
 * Callers:
 *     <none>
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01989EC (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG __fastcall DpiBrightnessEventStartCallback(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  struct _KMUTANT *DeviceExtension; // rsi
  unsigned int v6; // ebx
  BOOLEAN *p_Abandoned; // rax

  DeviceExtension = (struct _KMUTANT *)a3->DeviceExtension;
  v6 = 0;
  KeWaitForSingleObject(&DeviceExtension[74], Executive, 0, 0, 0LL);
  if ( *(_QWORD *)&DeviceExtension[78].Abandoned && (int)DpiAcquireCoreSyncAccessSafe((__int64)a3, 0) >= 0 )
  {
    p_Abandoned = &DeviceExtension[72].Abandoned;
    while ( a1 != *((_QWORD *)p_Abandoned + 1) )
    {
      ++v6;
      p_Abandoned += 24;
      if ( v6 >= 2 )
        goto LABEL_8;
    }
    *p_Abandoned = 1;
    DpiBrightnessAISetBacklightOptLevel(a3);
LABEL_8:
    DpiReleaseCoreSyncAccessSafe((__int64)a3, 0);
  }
  return KeReleaseMutex(DeviceExtension + 74, 0);
}
