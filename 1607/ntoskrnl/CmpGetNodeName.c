/*
 * XREFs of CmpGetNodeName @ 0x1407B060C
 * Callers:
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407B04F8 (CmpIsLoadType.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 */

_WORD *__fastcall CmpGetNodeName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int16 v5; // bx
  unsigned __int16 v6; // bx
  _WORD *v7; // rax
  _WORD *v8; // rdi
  _WORD *v10; // rax

  if ( a3 )
    *a3 = 0;
  v5 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
  {
    v6 = v5 + 2;
    v10 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v6, 0LL, 540167491LL);
    v8 = v10;
    if ( v10 )
    {
      memmove(v10, (const void *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
      v8[((unsigned __int64)v6 >> 1) - 1] = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
  v6 = 2 * (v5 + 1);
  v7 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v6, 0LL, 540167491LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  CmpCopyCompressedName(v7, v6, (unsigned __int8 *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
  v8[((unsigned __int64)v6 >> 1) - 1] = 0;
LABEL_6:
  if ( a3 )
    *a3 = v6;
  return v8;
}
