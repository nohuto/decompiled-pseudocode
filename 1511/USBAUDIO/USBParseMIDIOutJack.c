/*
 * XREFs of USBParseMIDIOutJack @ 0x1C001E150
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C001A40C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001CF64 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C001D304 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C001DF44 (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v6; // rcx
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v9; // r14
  int MIDIJackStringFromDeviceID; // eax
  int v11; // r15d
  int *PoolWithTag; // r12
  __int64 i; // r8
  int v14; // eax
  const WCHAR *v16; // [rsp+90h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v6, a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  UnitString = USBParseGetUnitString(a1, a3, &v16);
  if ( UnitString >= 0 )
  {
    v9 = v16;
    if ( !v16 && PinIndexForStreamingTerminal != -1 )
    {
      MIDIJackStringFromDeviceID = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v16);
      v9 = v16;
      UnitString = MIDIJackStringFromDeviceID;
    }
    if ( UnitString >= 0 )
    {
      v11 = *(unsigned __int8 *)(a2 + 2) << 8;
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[5], 0x41627845u);
      UnitString = -1073741670;
      if ( PoolWithTag )
      {
        for ( i = 0LL; (unsigned int)i < a3[5]; i = (unsigned int)(i + 1) )
          PoolWithTag[i] = v11 | a3[2 * i + 6];
        v14 = 2305;
        if ( a3[3] == 1 )
          v14 = 257;
        UnitString = BusApiBuildTerminalFunctionUnit(
                       a1,
                       v11 | (unsigned int)a3[4],
                       1,
                       0,
                       0,
                       a3[5],
                       PoolWithTag,
                       v9,
                       0LL,
                       v14,
                       2,
                       PinIndexForStreamingTerminal);
        ExFreePool(PoolWithTag);
      }
    }
  }
  return (unsigned int)UnitString;
}
