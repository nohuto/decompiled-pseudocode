/*
 * XREFs of xxxClientFreeDDEHandle @ 0x1C020D6B0
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1CE0 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1EC0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2610 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E29D0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2AA4 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01E2E50 (xxxDDETrackPostHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientFreeDDEHandle(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h]

  v5[0] = a1;
  v5[1] = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(67LL);
  v2 = KeUserModeCallback(67LL, v5, 16LL, &v6, &v7);
  EtwTraceEndCallback(67LL);
  EnterCrit(0LL, 1LL);
  if ( v2 < 0 || v7 != 24 )
    return 0LL;
  v3 = (__int64 *)v6;
  if ( v6 + 8 < v6 || v6 + 8 > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v8 = *v3;
  return result;
}
