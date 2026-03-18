/*
 * XREFs of ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2610
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01E17F0 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E206C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C020D6B0 (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxPokeAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // r8d
  struct tagINTDDEINFO *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  result = xxxCopyAckIn(a1, (void **)a2, a3, &v8);
  v5 = gSharedInfo[0];
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
    result = 0;
  if ( result == 2 )
  {
    v6 = *((_QWORD *)a3 + 7);
    if ( (*(_DWORD *)v8 & 0x8000LL) != 0 )
    {
      v7 = *(_DWORD *)(v6 + 64);
      if ( (v7 & 0x400) == 0 )
        goto LABEL_11;
      FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v6 + 40), v7 & 0xFFFFFFFE);
    }
    else
    {
      xxxClientFreeDDEHandle(*(_QWORD *)(v6 + 48), *(_DWORD *)(v6 + 64) & 0xFFFFFFFE);
    }
    v5 = gSharedInfo[0];
LABEL_11:
    if ( (*(_BYTE *)(*(_DWORD *)(v5 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + *(_QWORD *)(v5 + 8) + 17LL) & 1) != 0 )
    {
      return 0;
    }
    else
    {
      PopState(a3);
      return 2;
    }
  }
  return result;
}
