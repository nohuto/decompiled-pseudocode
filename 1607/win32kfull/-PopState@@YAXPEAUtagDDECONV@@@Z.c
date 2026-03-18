/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1C40 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1EC0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2210 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2340 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2610 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2970 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01E33AC (xxxFreeDdeConv.c)
 * Callees:
 *     FreeDdeXact @ 0x1C01E2B30 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1)
{
  char *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)a1 + 56;
  v3 = *(_QWORD *)v2;
  v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v10;
  v10[1] = v3;
  ++*(_DWORD *)(v3 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
  v5 = HMAssignmentLock(v2, v4);
  v6 = (char *)a1 + 64;
  if ( v4 )
    v6 = (char *)(v5 + 24);
  HMAssignmentUnlock(v6);
  v9 = ThreadUnlock1(v8, v7);
  if ( v9 )
    FreeDdeXact(v9);
}
