/*
 * XREFs of MiLogSectionObjectEvent @ 0x1406A2EF0
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiSectionDelete @ 0x1404B6100 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x140213C50 (MiLogPerfMemoryEvent.c)
 */

void *__fastcall MiLogSectionObjectEvent(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  int v5; // edx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v7[0] = v2;
  v3 = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  v4 = 647;
  v7[1] = v3;
  if ( v5 != 1 )
    v4 = 648;
  return MiLogPerfMemoryEvent(v4, 0x20400001u, (__int64)v7, 16, 4200706);
}
