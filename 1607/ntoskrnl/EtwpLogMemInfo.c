/*
 * XREFs of EtwpLogMemInfo @ 0x140226584
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1402266A4 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1406A70B8 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpLogMemInfo(unsigned int *a1, __int64 a2, __int64 a3)
{
  char v5; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v6[3]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v7[11]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v9; // [rsp+100h] [rbp+0h] BYREF
  int v10; // [rsp+108h] [rbp+8h]
  int v11; // [rsp+10Ch] [rbp+Ch]
  __int64 v12; // [rsp+110h] [rbp+10h]
  int v13; // [rsp+118h] [rbp+18h]
  int v14; // [rsp+11Ch] [rbp+1Ch]

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v5;
  v5 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(v7, 0xB0u, a3, v6);
  v11 = 0;
  v14 = 0;
  v9 = (struct _EVENT_DATA_DESCRIPTOR *)v7;
  v10 = 176;
  v12 = a2;
  v13 = 32;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&v9, EtwpHostSiloState, *a1, 2u, 0x270u, 0x401803u);
  }
  else
  {
    if ( (dword_1402FD524 & 0x80000) != 0 )
      EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 3u, &UserData);
    EtwTraceKernelEvent((int)&v9, 2, 0x20080000u, 624, 4200451);
  }
}
