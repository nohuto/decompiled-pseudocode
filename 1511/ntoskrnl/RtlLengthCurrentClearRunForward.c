/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x1400B8A38
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 *     MiCheckHintedPageFileSpace @ 0x1400F5524 (MiCheckHintedPageFileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v5; // esi
  _DWORD *v6; // r10
  _DWORD *v7; // r11
  int v8; // r9d
  __int64 v9; // rdi
  unsigned int v10; // r8d
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  char v14; // r9
  unsigned int v15; // r8d
  char v17; // r9

  v3 = *((_QWORD *)a1 + 1);
  v5 = *a1;
  v6 = (_DWORD *)(v3 + 4 * ((unsigned __int64)a2 >> 5));
  v7 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(unsigned int)(*a1 - 1) >> 5));
  v8 = *a1 & 0x1F;
  if ( (*a1 & 0x1F) != 0 )
    --v7;
  v9 = a2 & 0x1F;
  v10 = 0;
  LODWORD(v11) = ~dword_1402452F0[v9] & *v6;
  if ( v6 > v7 )
  {
LABEL_17:
    if ( v8 )
    {
      if ( v10 )
        LODWORD(v11) = v6[1];
      v12 = !_BitScanForward64((unsigned __int64 *)&v11, (unsigned int)v11 | ~dword_1402452F0[v5 & 0x1F]);
      v17 = -1;
      if ( !v12 )
        v17 = v11;
      v10 += v17;
    }
  }
  else if ( (_DWORD)v11 )
  {
LABEL_5:
    v12 = !_BitScanForward64((unsigned __int64 *)&v13, (unsigned int)v11);
    v14 = -1;
    if ( !v12 )
      v14 = v13;
    v10 += v14;
  }
  else
  {
    while ( 1 )
    {
      v10 += 32;
      if ( v10 >= a3 && v10 - (unsigned int)v9 >= a3 )
        break;
      if ( v6 == v7 )
        goto LABEL_17;
      LODWORD(v11) = *++v6;
      if ( *v6 )
        goto LABEL_5;
    }
  }
  v15 = v10 - v9;
  if ( v15 > a3 )
    return a3;
  return v15;
}
