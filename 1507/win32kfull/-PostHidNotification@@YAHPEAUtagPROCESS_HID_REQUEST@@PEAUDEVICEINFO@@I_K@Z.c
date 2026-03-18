/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0079340
 * Callers:
 *     PostDeviceNotification @ 0x1C00790B0 (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rax

  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  if ( !v6 || (*((_DWORD *)a1 + 5) & 4) == 0 || *(char *)(v6 + 44) < 0 || *(char *)(v6 + 43) < 0 )
    return 1LL;
  v8 = 0LL;
  if ( a2 )
    v8 = *(_QWORD *)a2;
  LOBYTE(v5) = (unsigned int)PostInputMessage(
                               *(_QWORD *)(*(_QWORD *)(v6 + 16) + 392LL),
                               v6,
                               a3,
                               a4,
                               v8,
                               0,
                               0LL,
                               0LL,
                               0,
                               0LL,
                               0LL,
                               0LL) != 0;
  return v5;
}
