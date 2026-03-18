/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EAE30
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01EA760 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01EA908 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EAFE0 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0214A98 (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v5; // r9d
  __int64 v6; // r9
  int v7; // edx
  struct tagINTDDEINFO *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  v5 = xxxCopyAckIn(a1, a2, a3, &v8);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
    v5 = 0;
  if ( v5 != 2 )
    return v5;
  v6 = *((_QWORD *)a3 + 7);
  v7 = *(_DWORD *)(v6 + 64);
  if ( (*(_DWORD *)v8 & 0x8000LL) != 0 && (v7 & 0x400) != 0 )
    FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v6 + 48), v7 & 0xFFFFFFFE);
  else
    xxxClientFreeDDEHandle(*(_QWORD *)(v6 + 40), v7 & 0xFFFFFFFE);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
    return 0;
  PopState(a3);
  return 2;
}
