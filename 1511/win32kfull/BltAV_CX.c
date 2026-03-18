/*
 * XREFs of BltAV_CX @ 0x1C0253140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall BltAV_CX(__int64 a1)
{
  _BYTE *v1; // r8
  _BYTE *v2; // r10
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r11
  unsigned __int8 *v6; // r9
  int v7; // ecx
  char *v8; // rcx
  char result; // al

  v1 = *(_BYTE **)(a1 + 352);
  v2 = *(_BYTE **)(a1 + 360);
  v3 = *(int *)(a1 + 368);
  v4 = *(_QWORD *)(a1 + 248);
  if ( (*(_DWORD *)a1 & 0x2000) != 0 )
  {
    v5 = *(int *)(a1 + 368);
    v6 = (unsigned __int8 *)(v4 + 3);
    do
    {
      v7 = *v6;
      v6 += 4;
      *v1 = (v7 + (unsigned int)(unsigned __int8)*v1 + 1) >> 1;
      v1 += v5;
    }
    while ( v1 != v2 );
  }
  else
  {
    v8 = (char *)(v4 + 3);
    do
    {
      result = *v8;
      v8 += 4;
      *v1 = result;
      v1 += v3;
    }
    while ( v1 != v2 );
  }
  return result;
}
