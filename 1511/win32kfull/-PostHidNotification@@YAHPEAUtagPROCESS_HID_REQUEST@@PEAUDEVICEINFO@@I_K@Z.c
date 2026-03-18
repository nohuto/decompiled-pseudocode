/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C008A23C
 * Callers:
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v3 = 0;
  v4 = *((_QWORD *)a1 + 4);
  if ( !v4 || (*((_DWORD *)a1 + 5) & 4) == 0 || *(char *)(v4 + 44) < 0 || *(char *)(v4 + 43) < 0 )
    return 1LL;
  LOBYTE(v3) = (unsigned int)PostInputMessage(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 384LL), v4, a3) != 0;
  return v3;
}
