/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C0004400
 * Callers:
 *     NVMeHwInitialize @ 0x1C0001AF0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0001B40 (NVMeHwPassiveInitialize.c)
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0004E88 (NVMeControllerReset.c)
 * Callees:
 *     IoSqToIoCqMapping @ 0x1C00028B0 (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0002AC4 (IoQueuesInitialize.c)
 *     GetInterruptMessageInformation @ 0x1C000364C (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C00038D4 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C00039EC (IoQueuesCreation.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B448 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000B6F8 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000B874 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000B974 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000BAD8 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x1C000BF40 (NVMeConfigAsyncEvent.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000C3E0 (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  char v5; // bp
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  char result; // al

  v4 = a3;
  v5 = a2;
  if ( (_BYTE)a2 && !GetInterruptMessageInformation(a1, a2, a3, a4) )
  {
    *(_DWORD *)(a1 + 24) = 11;
    return 0;
  }
  LOBYTE(a3) = v4;
  LOBYTE(a2) = v5 == 0;
  NVMeSetIoQueueCount(a1, a2, a3);
  if ( !*(_WORD *)(a1 + 226) || !*(_WORD *)(a1 + 224) )
  {
    *(_DWORD *)(a1 + 24) = 12;
    return 0;
  }
  LOWORD(v8) = 4;
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v7) = v4;
    NVMeSetInterruptCoalescing(a1, v7);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v7) = v4;
    NVMeSetArbitration(a1, v7);
  }
  if ( v5 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 24) = 17;
      return 0;
    }
    if ( !IoQueuesInitialize(a1) )
    {
      *(_DWORD *)(a1 + 24) = 13;
      return 0;
    }
    IoSqToIoCqMapping(a1);
  }
  if ( !IoQueuesCreation(a1, v4) )
  {
    *(_DWORD *)(a1 + 24) = 14;
    return 0;
  }
  LOBYTE(v9) = v4;
  NVMeGetCommandEffectsLog(a1, v9);
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v10) = v4;
    NVMeGetTemperatureThreshold(a1, v10);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v10) = v4;
    NVMeConfigAsyncEvent(a1, v10);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 && !*(_BYTE *)(a1 + 16) )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1072) + 259LL);
    if ( v11 + 1 < 4 )
      LOWORD(v8) = v11 + 1;
    if ( (_WORD)v8 )
    {
      v12 = a1 + 656;
      v8 = (unsigned __int16)v8;
      do
      {
        NVMeIssueAsyncEventCommand(a1, v12);
        v12 += 104LL;
        --v8;
      }
      while ( v8 );
    }
  }
  *(_DWORD *)(a1 + 20) |= 1u;
  result = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
