/*
 * XREFs of MiLogSectionObjectEvent @ 0x1406593F0
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiSectionDelete @ 0x14042D110 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x1401E27A4 (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int16 v4; // ax
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
