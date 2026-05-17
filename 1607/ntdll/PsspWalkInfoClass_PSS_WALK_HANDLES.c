/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180008440
 * Callers:
 *     PssNtWalkSnapshot @ 0x180007FF0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall PsspWalkInfoClass_PSS_WALK_HANDLES(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // ecx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 976);
  if ( !v5 )
    return 3221226021LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !*a2 )
  {
    v18 = 0LL;
    result = ZwMapViewOfSection(v5, -1LL, a2, 0LL, 0LL, 0LL, &v18, 1, 0, 2);
    if ( (int)result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = a2[1];
  if ( v7 >= *(_QWORD *)(a1 + 968) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v8 = v7 + *a2;
  memset(a3, 0, 0x48uLL);
  v9 = 16;
  *a3 = *(_DWORD *)v8;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v8 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v8 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 8);
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    v10 = *(unsigned __int16 *)(v8 + 16);
    *((_WORD *)a3 + 8) = v10;
    *((_QWORD *)a3 + 3) = v8 + 18;
    v9 = v10 + 18;
  }
  if ( (*(_BYTE *)(v8 + 4) & 2) != 0 )
  {
    v15 = v9;
    v16 = v9 + 2;
    v17 = *(unsigned __int16 *)(v15 + v8);
    *((_WORD *)a3 + 16) = v17;
    *((_QWORD *)a3 + 5) = v8 + v16;
    v9 = v17 + v16;
  }
  if ( (*(_BYTE *)(v8 + 4) & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v8 + v9;
    v9 += 56;
  }
  if ( (*(_BYTE *)(v8 + 4) & 8) != 0 )
  {
    v11 = v9;
    v12 = v9 + 2;
    v13 = *(unsigned __int16 *)(v11 + v8);
    *((_WORD *)a3 + 28) = v13;
    *((_QWORD *)a3 + 8) = v8 + v12;
    v9 = v13 + v12;
  }
  a2[1] = v7 + v9;
  return 0LL;
}
