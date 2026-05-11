/*
 * XREFs of WmiFunctionControl @ 0x1C001B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiFunctionControl(struct _DEVICE_OBJECT *a1, IRP *a2, int a3, int a4, char a5)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // r8d
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rdx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart >= 0x30 )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( a4 )
    {
      v7 = -1073741808;
    }
    else if ( a3 )
    {
      v7 = -1073741163;
    }
    else if ( a5 )
    {
      _InterlockedExchange(&ExBusWmiLogEnable, 1);
      ExBusWmiLoggerHandle = *(_QWORD *)&Parameters->CompletionMode;
      ExBusWmiLogLevel = BYTE2(ExBusWmiLoggerHandle);
      ExBusWmiLogFlags = HIDWORD(ExBusWmiLoggerHandle);
      if ( !BYTE2(ExBusWmiLoggerHandle) )
        ExBusWmiLogLevel = 5;
      if ( !HIDWORD(ExBusWmiLoggerHandle) )
        ExBusWmiLogFlags = 3;
    }
    else
    {
      _InterlockedExchange(&ExBusWmiLogEnable, 0);
      ExBusWmiLoggerHandle = 0LL;
      ExBusWmiLogLevel = 0;
      ExBusWmiLogFlags = 0;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  return WmiCompleteRequest(a1, a2, v7, 0, 0);
}
