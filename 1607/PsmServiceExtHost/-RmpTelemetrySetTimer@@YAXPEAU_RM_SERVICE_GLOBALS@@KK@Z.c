/*
 * XREFs of ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18001ADA0
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001AC20 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     RmpTelemetryContextStart @ 0x18001AF74 (RmpTelemetryContextStart.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpTelemetrySetTimer(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)a1 + 3340) & 2) == 0 )
  {
    v3 = a3 - *((_DWORD *)a1 + 474);
    if ( v3 > a2 )
      v4 = 0LL;
    else
      v4 = a2 - v3;
    v5 = -10000 * v4;
    TpSetTimer(*((_QWORD *)a1 + 236), &v5, a2, 300000LL);
  }
}
