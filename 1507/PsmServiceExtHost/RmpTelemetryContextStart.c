/*
 * XREFs of RmpTelemetryContextStart @ 0x180019C74
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z @ 0x1800058EC (-RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z.c)
 */

__int64 __fastcall RmpTelemetryContextStart(struct _RM_TELEMETRY_CONTEXT *a1)
{
  LPVOID v1; // rsi
  __int64 result; // rax
  __int64 v4; // rax
  int v5; // ebx
  DWORD TickCount; // eax
  int v7; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  int v15; // [rsp+60h] [rbp-10h]

  v1 = RmSvcGlobals;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v11 = 0LL;
  v7 = 3;
  v14 = 1;
  v15 = 72;
  result = TpAllocCleanupGroup((char *)a1 + 8);
  if ( (int)result >= 0 )
  {
    v4 = *((_QWORD *)a1 + 1);
    v10 = 0LL;
    v9 = v4;
    result = TpAllocTimer(a1, RmpTelemetryTimerCallback, v1, &v7);
    if ( (int)result >= 0 )
    {
      v5 = (*((_BYTE *)RmSvcGlobals + 1816) & 1) != 0 ? 0x2932E0 : 0;
      TickCount = GetTickCount();
      RmpTelemetrySetTimer(a1, v5 + 900000, TickCount);
      return 0LL;
    }
  }
  return result;
}
