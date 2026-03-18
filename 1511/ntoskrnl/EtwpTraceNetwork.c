/*
 * XREFs of EtwpTraceNetwork @ 0x14020F448
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpNetProvTraceNetwork @ 0x14020EA18 (EtwpNetProvTraceNetwork.c)
 */

__int64 __fastcall EtwpTraceNetwork(unsigned __int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( (dword_1402D84A0 & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData, a1);
  return EtwTraceKernelEvent((int)&UserData, 1, 0x10000u, a1, 4200450);
}
