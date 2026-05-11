/*
 * XREFs of USBParseMIDIOutJack @ 0x1C001F760
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C001B4AC (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001E0FC (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C001E5F0 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C001F51C (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  __int64 v8; // r8
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v11; // r14
  int MIDIJackStringFromDeviceID; // eax
  int v13; // r15d
  int *PoolWithTag; // r12
  __int64 i; // r8
  int v16; // eax
  const WCHAR *v18; // [rsp+90h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v7 = *a3;
  if ( *a3 < 6u )
    return 3221225858LL;
  v8 = a3[5];
  if ( v7 < (unsigned __int64)(2 * v8 + 7)
    || (unsigned __int64)&a3[2 * v8 + 7] > *(_QWORD *)(v6 + 40)
                                         + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v6 + 40) + 2LL) )
  {
    return 3221225858LL;
  }
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v6, a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  UnitString = USBParseGetUnitString(a1, a3, &v18);
  if ( UnitString >= 0 )
  {
    v11 = v18;
    if ( !v18 && PinIndexForStreamingTerminal != -1 )
    {
      MIDIJackStringFromDeviceID = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v18);
      v11 = v18;
      UnitString = MIDIJackStringFromDeviceID;
    }
    if ( UnitString >= 0 )
    {
      v13 = *(unsigned __int8 *)(a2 + 2) << 8;
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[5], 0x41627845u);
      UnitString = -1073741670;
      if ( PoolWithTag )
      {
        for ( i = 0LL; (unsigned int)i < a3[5]; i = (unsigned int)(i + 1) )
          PoolWithTag[i] = v13 | a3[2 * i + 6];
        v16 = 2305;
        if ( a3[3] == 1 )
          v16 = 257;
        UnitString = BusApiBuildTerminalFunctionUnit(
                       a1,
                       v13 | (unsigned int)a3[4],
                       1,
                       0,
                       0,
                       a3[5],
                       PoolWithTag,
                       v11,
                       0LL,
                       v16,
                       2,
                       PinIndexForStreamingTerminal);
        ExFreePool(PoolWithTag);
      }
    }
  }
  return (unsigned int)UnitString;
}
