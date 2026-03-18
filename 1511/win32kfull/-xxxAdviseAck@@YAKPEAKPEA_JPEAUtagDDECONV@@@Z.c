/*
 * XREFs of ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01EAC70 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01EAE18 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EB500 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 */

unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // r8d
  void *v8; // rdx
  struct tagDDECONV *v9; // rcx
  struct tagINTDDEINFO *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v5 = xxxCopyAckIn(a1, a2, a3, &v10);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
    v5 = 0;
  if ( v5 != 2 )
    return v5;
  if ( (*((_DWORD *)a3 + 20) & 6) != 0 )
    return 1;
  v6 = *((_QWORD *)a3 + 7);
  v7 = *(_DWORD *)(v6 + 64) & 0xFFFFFFFE;
  if ( (*(_DWORD *)v10 & 0x8000LL) != 0 )
  {
    v8 = *(void **)(v6 + 40);
    v9 = (struct tagDDECONV *)*((_QWORD *)a3 + 4);
  }
  else
  {
    v8 = *(void **)(v6 + 48);
    v9 = a3;
  }
  FreeListAdd(v9, v8, v7);
  PopState(a3);
  return 2;
}
