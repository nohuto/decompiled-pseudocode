/*
 * XREFs of ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CCD80
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1402CC83C (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402CCA14 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1402CD218 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDD30 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v3; // esi
  bool v5; // zf
  unsigned int result; // eax
  unsigned int v7; // ebx
  char v8; // cl
  struct tagDDECONV *v9; // rax
  struct tagINTDDEINFO *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1 == 996;
  v10 = 0LL;
  if ( !v5 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v7 = xxxCopyAckIn(a1, a2, a3, &v10);
  v8 = *(_BYTE *)(_HMPheFromObject(a3) + 25);
  result = 1;
  if ( (v8 & 1) == 0 )
    v3 = v7;
  if ( v3 != 2 )
    return v3;
  if ( (*((_DWORD *)a3 + 20) & 6) == 0 )
  {
    if ( (*(_QWORD *)v10 & 0x8000) != 0 )
      v9 = (struct tagDDECONV *)*((_QWORD *)a3 + 4);
    else
      v9 = a3;
    FreeListAdd(
      v9,
      *(void **)((-(__int64)((*(_QWORD *)v10 & 0x8000LL) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + *((_QWORD *)a3 + 7) + 48),
      *(_DWORD *)(*((_QWORD *)a3 + 7) + 64LL) & 0xFFFFFFFE);
    PopState(a3);
    return 2;
  }
  return result;
}
