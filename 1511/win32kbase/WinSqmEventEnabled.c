/*
 * XREFs of WinSqmEventEnabled @ 0x1C00631B4
 * Callers:
 *     WinSqmEndSession @ 0x1C0062790 (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C0062F60 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0063128 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00B23C0 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00B25BC (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char Type; // al
  bool v6; // zf

  v2 = 0;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
  {
    Type = WPP_MAIN_CB.DeviceQueue.Type;
    if ( !*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      return EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C00E8BB8, 0x10uLL) != 16 )
      {
        v6 = (WPP_MAIN_CB.DeviceQueue.Type & 2) == 0;
        goto LABEL_10;
      }
      Type = WPP_MAIN_CB.DeviceQueue.Type;
    }
    v6 = (Type & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink, EventDescriptor);
  }
  return v2;
}
