/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x1800F920C
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F7D40 (RtlpEstimateAllocatedSize.c)
 */

NTSTATUS __fastcall RtlpLogHeapCreateEvent(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  HANDLE v4; // r10
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v7; // [rsp+26h] [rbp-62h]
  __int64 v8; // [rsp+40h] [rbp-48h]
  int v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+4Ch] [rbp-3Ch]
  __int64 v11; // [rsp+54h] [rbp-34h]
  __int64 v12; // [rsp+5Ch] [rbp-2Ch]

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = RtlpEstimateAllocatedSize(a1);
  v7 = 4128;
  return NtTraceEvent(v4, 0x403u, 0x24u, Fields);
}
