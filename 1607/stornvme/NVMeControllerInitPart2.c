/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C0006E84
 * Callers:
 *     NVMeHwInitialize @ 0x1C0004DE0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0004E80 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C00070C0 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C00072C8 (NVMeControllerReset.c)
 * Callees:
 *     GetInterruptMessageInformation @ 0x1C0005448 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0005ABC (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0005BD0 (IoQueuesCreation.c)
 *     IoQueuesInitialize @ 0x1C0005EFC (IoQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C00063A0 (IoSqToIoCqMapping.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0007664 (NVMeInitHostMemoryBuffer.c)
 *     NVMeStartAsyncEventCommands @ 0x1C0008574 (NVMeStartAsyncEventCommands.c)
 *     NVMeConfigAsyncEvent @ 0x1C000CA58 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000CE34 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000D06C (NVMeGetTemperatureThreshold.c)
 *     NVMeSetArbitration @ 0x1C000DE10 (NVMeSetArbitration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E190 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C000E290 (NVMeSetIoQueueCount.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  char v4; // si
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  char result; // al

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a2 )
  {
    if ( !GetInterruptMessageInformation(a1) )
    {
      *(_DWORD *)(a1 + 24) = 11;
      return 0;
    }
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v6;
  NVMeSetIoQueueCount(a1, a2, a3);
  if ( !*(_WORD *)(a1 + 234) || !*(_WORD *)(a1 + 232) )
  {
    *(_DWORD *)(a1 + 24) = 12;
    return 0;
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v7) = v3;
    NVMeSetInterruptCoalescing(a1, v7);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v7) = v3;
    NVMeSetArbitration(a1, v7);
  }
  if ( v4 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 232) = 0;
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
  if ( !IoQueuesCreation(a1, v3, v8) )
  {
    *(_DWORD *)(a1 + 24) = 14;
    return 0;
  }
  LOBYTE(v9) = v3;
  NVMeGetCommandEffectsLog(a1, v9);
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v10) = v3;
    NVMeGetTemperatureThreshold(a1, v10);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v10) = v3;
    NVMeConfigAsyncEvent(a1, v10);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
    NVMeStartAsyncEventCommands(a1);
  NVMeInitHostMemoryBuffer(a1);
  *(_DWORD *)(a1 + 20) |= 1u;
  result = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
