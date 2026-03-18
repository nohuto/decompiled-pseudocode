/*
 * XREFs of MiLogVirtualRotateEvent @ 0x1406A3070
 * Callers:
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x140213C50 (MiLogPerfMemoryEvent.c)
 */

void *__fastcall MiLogVirtualRotateEvent(__int64 a1, __int64 a2, char a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v4[0] = a1;
  v4[1] = a2;
  v5 = a3 & 0xF;
  return MiLogPerfMemoryEvent(0x27Fu, 0x20008000u, (__int64)v4, 20, 4200706);
}
