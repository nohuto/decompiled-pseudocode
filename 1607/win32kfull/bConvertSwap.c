/*
 * XREFs of bConvertSwap @ 0x1C0156C1C
 * Callers:
 *     bConvertExtras @ 0x1C0156B00 (bConvertExtras.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bConvertSwap(_WORD *a1, _DWORD *a2, unsigned __int64 a3, unsigned int a4)
{
  _WORD *v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8

  v4 = a1;
  if ( *a2 )
  {
    v5 = 0LL;
    v6 = (unsigned int)((*a2 >> 1) - 1);
    v7 = (unsigned __int64)(2 * v6 + 1) >> 1;
    if ( a3 > a3 + 2 * v6 )
      v7 = 0LL;
    if ( v7 )
    {
      v8 = a3 - (_QWORD)a1;
      do
      {
        ++v5;
        *v4 = __ROR2__(*(_WORD *)((char *)v4 + v8), 8);
        ++v4;
      }
      while ( v5 < v7 );
    }
    *v4 = 0;
  }
  else
  {
    *a2 = 2 * (a4 >> 1) + 2;
  }
  return 1LL;
}
