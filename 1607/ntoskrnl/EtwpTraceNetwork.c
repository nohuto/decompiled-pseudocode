/*
 * XREFs of EtwpTraceNetwork @ 0x14022715C
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpNetProvTraceNetwork @ 0x140226704 (EtwpNetProvTraceNetwork.c)
 */

__int64 __fastcall EtwpTraceNetwork(__int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( (dword_1402FD520 & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData, a1);
  return EtwTraceKernelEvent((int)&UserData, 1, 0x10000u, a1, 4200450);
}
