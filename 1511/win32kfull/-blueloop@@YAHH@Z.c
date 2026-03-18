/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C012D860
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C012D56C (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  unsigned int v1; // r14d
  int v2; // r11d
  int v3; // r15d
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // r10d
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  int v10; // r12d
  _BYTE *v11; // r9
  int v12; // r13d
  char v13; // bp
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // edi
  unsigned int v18; // r10d
  unsigned int *v19; // rcx
  _BYTE *v20; // r8
  bool v21; // cc

  v1 = 0;
  v2 = 2 * dword_1C0323F1C;
  if ( a1 )
  {
    v3 = dword_1C0323EB8;
    v5 = 31;
    v6 = dword_1C0323ED0;
    v4 = 0;
    dword_1C0323F68 = 31;
    dword_1C0323F60 = dword_1C0323EB8;
    dword_1C0323F64 = 0;
    dword_1C0323F6C = dword_1C0323ED0;
    dword_1C0323F70 = 32;
    dword_1C0323F74 = 0;
  }
  else
  {
    v3 = dword_1C0323F60;
    v4 = dword_1C0323F64;
    v5 = dword_1C0323F68;
    v6 = dword_1C0323F6C;
  }
  v7 = dword_1C0323EC4;
  v8 = dword_1C0323EC4;
  v9 = (unsigned int *)qword_1C0323EE0;
  v10 = v4;
  v11 = (_BYTE *)qword_1C0323EF8;
  v12 = v5;
  v13 = dword_1C0323F24;
  v14 = v3;
  v15 = v6;
  if ( v3 <= v5 )
  {
    while ( *v9 <= v8 )
    {
      v8 += v15;
      ++v14;
      v15 += v2;
      ++v9;
      ++v11;
      if ( v14 > v5 )
        goto LABEL_6;
    }
    if ( v14 > v3 )
    {
      v3 = v14;
      dword_1C0323F60 = v14;
      qword_1C0323EE0 = (__int64)v9;
      v7 = v8;
      qword_1C0323EF8 = (__int64)v11;
      v6 = v15;
      dword_1C0323EC4 = v8;
      v10 = v14;
      dword_1C0323F6C = v15;
    }
    v1 = 1;
    if ( v14 <= v5 )
    {
      while ( *v9 > v8 )
      {
        *v9 = v8;
        ++v14;
        v8 += v15;
        *v11++ = v13;
        v15 += v2;
        ++v9;
        if ( v14 > v5 )
          goto LABEL_6;
      }
      v12 = v14 - 1;
    }
  }
LABEL_6:
  v16 = v3 - 1;
  v17 = v6 - v2;
  v18 = v7 - v17;
  v19 = (unsigned int *)(qword_1C0323EE0 - 4);
  v20 = (_BYTE *)(qword_1C0323EF8 - 1);
  if ( !v1 )
  {
    if ( v16 < v4 )
      return v1;
    while ( *v19 <= v18 )
    {
      v17 -= v2;
      --v16;
      v18 -= v17;
      --v19;
      --v20;
      if ( v16 < v4 )
        return v1;
    }
    dword_1C0323F60 = v16;
    v12 = v16;
    qword_1C0323EE0 = (__int64)v19;
    v1 = 1;
    qword_1C0323EF8 = (__int64)v20;
    dword_1C0323EC4 = v18;
    dword_1C0323F6C = v17;
  }
  if ( v16 >= v4 )
  {
    while ( *v19 > v18 )
    {
      *v19 = v18;
      v17 -= v2;
      *v20 = v13;
      v18 -= v17;
      --v20;
      --v16;
      --v19;
      if ( v16 < v4 )
        goto LABEL_12;
    }
    v10 = v16 + 1;
  }
LABEL_12:
  v21 = v12 < dword_1C0323F74;
  dword_1C0323F74 = v12;
  if ( v21 )
    v5 = v12;
  dword_1C0323F68 = v5;
  if ( v10 > dword_1C0323F70 )
    v4 = v10;
  dword_1C0323F70 = v10;
  dword_1C0323F64 = v4;
  return v1;
}
