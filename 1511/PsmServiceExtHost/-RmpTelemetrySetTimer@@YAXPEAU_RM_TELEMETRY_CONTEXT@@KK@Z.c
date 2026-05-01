/*
 * XREFs of ?RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z @ 0x18001F2B0
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001F120 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     RmpTelemetryContextStart @ 0x180021138 (RmpTelemetryContextStart.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpTelemetrySetTimer(struct _RM_TELEMETRY_CONTEXT *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3 - *((_DWORD *)a1 + 4);
  if ( v3 > a2 )
    v4 = 0LL;
  else
    v4 = a2 - v3;
  v5 = -10000 * v4;
  TpSetTimer(*(_QWORD *)a1, &v5, a2, 300000LL);
}
