/*
 * XREFs of xxxClientFreeDDEHandle @ 0x1C0214A98
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EAC48 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EAE30 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01EB3AC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB580 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB930 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBA04 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01EBDA4 (xxxDDETrackPostHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientFreeDDEHandle(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h]

  v5[0] = a1;
  v5[1] = (unsigned int)a2;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(66LL);
  v2 = KeUserModeCallback(66LL, v5, 16LL, &v6, &v7);
  EtwTraceEndCallback(66LL);
  EnterCrit(1LL);
  if ( v2 < 0 || v7 != 24 )
    return 0LL;
  v3 = (__int64 *)v6;
  if ( v6 + 8 < v6 || v6 + 8 > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v8 = *v3;
  return result;
}
