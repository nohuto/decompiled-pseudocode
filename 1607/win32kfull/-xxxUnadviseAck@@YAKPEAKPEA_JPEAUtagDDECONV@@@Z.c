/*
 * XREFs of ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2970
 * Callers:
 *     <none>
 * Callees:
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E206C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 */

unsigned int __fastcall xxxUnadviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  struct tagINTDDEINFO *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  result = xxxCopyAckIn(a1, (void **)a2, a3, &v5);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
    result = 0;
  if ( result == 2 )
  {
    PopState(a3);
    return 2;
  }
  return result;
}
