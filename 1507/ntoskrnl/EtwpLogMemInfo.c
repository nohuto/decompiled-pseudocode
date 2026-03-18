/*
 * XREFs of EtwpLogMemInfo @ 0x14025DBCC
 * Callers:
 *     EtwpLogMemInfoDpc @ 0x14025DCE0 (EtwpLogMemInfoDpc.c)
 *     EtwpLogMemInfoRundown @ 0x1406E8680 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall EtwpLogMemInfo(unsigned int *a1, __int64 a2, __int64 a3)
{
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v8[11]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v10; // [rsp+100h] [rbp+0h] BYREF
  int v11; // [rsp+108h] [rbp+8h]
  int v12; // [rsp+10Ch] [rbp+Ch]
  __int64 v13; // [rsp+110h] [rbp+10h]
  int v14; // [rsp+118h] [rbp+18h]
  int v15; // [rsp+11Ch] [rbp+1Ch]

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v6;
  v6 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(v8, 0xB0u, a3, v7);
  v12 = 0;
  v15 = 0;
  v10 = (struct _EVENT_DATA_DESCRIPTOR *)v8;
  v11 = 176;
  v13 = a2;
  v14 = 32;
  if ( a1 )
    return (void *)EtwpLogKernelEvent((__int64)&v10, *a1, 2u, 0x270u, 4200451);
  if ( (dword_1403277E4 & 0x80000) != 0 )
    EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 3u, &UserData);
  return EtwTraceKernelEvent((int)&v10, 2, 0x20080000u, 0x270u, 4200451);
}
