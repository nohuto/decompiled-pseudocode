/*
 * XREFs of Input8BPPToAA24 @ 0x1401EC4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input8BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v3; // r9
  _BYTE *v4; // r10
  _BYTE *v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rcx
  char v8; // cl
  int v9; // eax
  int v10; // eax
  __int64 v12; // rax

  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v4 = &a2[*((int *)a1 + 14)];
  v5 = a2;
  v6 = *((_QWORD *)a1 + 10);
  if ( (*a1 & 4) != 0 )
  {
    do
    {
      v12 = *v3++;
      *a2++ = *(_BYTE *)(v6 + 4 * v12 + 3);
    }
    while ( a2 < v4 );
  }
  else
  {
    do
    {
      v7 = *v3++;
      *(_WORD *)a2 = *(_WORD *)(v6 + 4 * v7);
      a2[2] = *(_BYTE *)(v6 + 4 * v7 + 2);
      a2 += 3;
    }
    while ( a2 < v4 );
  }
  v8 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v9 = *((_DWORD *)a1 + 13);
    if ( v9 && (v10 = v9 - 1, (*((_DWORD *)a1 + 13) = v10) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v8 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v8 & 0xFD;
    }
  }
  return v5;
}
