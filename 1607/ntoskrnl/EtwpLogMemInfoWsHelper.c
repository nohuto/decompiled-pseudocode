/*
 * XREFs of EtwpLogMemInfoWsHelper @ 0x1406A2448
 * Callers:
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpLogMemInfoWsHelper(unsigned int *a1, _DWORD *a2)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  v6 = 0;
  v4 = a2 + 1;
  v2 = 68 * *a2;
  UserData.Ptr = (ULONGLONG)a2;
  UserData.Size = 4;
  v5 = v2;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&UserData, EtwpHostSiloState, *a1, 2u, 0x27Du, 0x401804u);
  }
  else
  {
    EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 637, 4200452);
    if ( (dword_1402FD524 & 0x800000) != 0 )
      EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_WS, 0LL, 2u, &UserData);
  }
}
