/*
 * XREFs of ExpandAV_CX @ 0x140308A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandAV_CX(__int64 a1)
{
  __int64 result; // rax
  int v2; // r9d
  unsigned int v3; // r8d
  int v4; // ebx
  _BYTE *v5; // rdx
  unsigned __int8 *v6; // r10
  unsigned __int16 *v7; // r11
  _BYTE *v8; // rdi
  __int64 v9; // rsi

  result = *(_QWORD *)(a1 + 304);
  v2 = 1;
  LOBYTE(v3) = -1;
  v4 = *(_DWORD *)a1 & 0x2000;
  v5 = *(_BYTE **)(a1 + 352);
  v6 = (unsigned __int8 *)(*(_QWORD *)(a1 + 248) + 3LL);
  v7 = *(unsigned __int16 **)(result + 216);
  v8 = *(_BYTE **)(a1 + 360);
  v9 = *(int *)(a1 + 368);
  do
  {
    if ( !--v2 )
    {
      v2 = *v7++;
      v3 = *v6;
      if ( v4 )
        v3 = ((unsigned __int8)*v5 + v3 + 1) >> 1;
      v6 += 4;
    }
    *v5 = v3;
    v5 += v9;
  }
  while ( v5 != v8 );
  return result;
}
