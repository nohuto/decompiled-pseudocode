/*
 * XREFs of GreCreatePalette @ 0x1C00CA440
 * Callers:
 *     <none>
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

__int64 __fastcall GreCreatePalette(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rbx
  unsigned int *v4; // [rsp+50h] [rbp-18h] BYREF
  int v5; // [rsp+58h] [rbp-10h]

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = 0LL;
  if ( *(_WORD *)a1 == 768 && *(_WORD *)(a1 + 2) )
  {
    v5 = 0;
    v4 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v4, 1, v1, (unsigned int *)(a1 + 4), 0, 0, 0, 0x500u, 0) )
    {
      v5 = 1;
      v2 = *(_QWORD *)v4;
    }
    PALMEMOBJ::~PALMEMOBJ(&v4);
  }
  return v2;
}
