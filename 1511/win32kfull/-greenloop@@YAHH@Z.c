/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C012D56C
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C012D428 (-redloop@@YAHXZ.c)
 * Callees:
 *     ?blueloop@@YAHH@Z @ 0x1C012D860 (-blueloop@@YAHH@Z.c)
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // r14d
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rdx
  int v8; // r12d
  int v9; // r15d
  int v10; // r13d
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // r13
  int v14; // r14d
  int v15; // r15d
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  bool v19; // cc
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+80h] [rbp+8h]
  int v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+88h] [rbp+10h]
  int v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+98h] [rbp+20h]

  v26 = 2 * dword_1C0323F1C;
  if ( a1 )
  {
    v1 = dword_1C0323EBC;
    v2 = 0;
    v4 = dword_1C0323ED4;
    dword_1C0323F3C = 0;
    dword_1C0323F2C = dword_1C0323EBC;
    v3 = 31;
    dword_1C0323F30 = 0;
    dword_1C0323F34 = 31;
    dword_1C0323F38 = dword_1C0323ED4;
    dword_1C0323F40 = 32;
  }
  else
  {
    v1 = dword_1C0323F2C;
    v2 = dword_1C0323F30;
    v3 = dword_1C0323F34;
    v4 = dword_1C0323F38;
  }
  v5 = qword_1C0323EE8;
  v6 = 0;
  v7 = qword_1C0323F00;
  v8 = v2;
  v9 = dword_1C0323EC8;
  v10 = v1;
  v27 = v3;
  dword_1C0323EC4 = dword_1C0323EC8;
  v11 = 1;
  v23 = dword_1C0323EC8;
  v24 = v4;
  qword_1C0323EE0 = qword_1C0323EE8;
  v21 = qword_1C0323EE8;
  qword_1C0323EF8 = qword_1C0323F00;
  v22 = qword_1C0323F00;
  if ( v1 > v3 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( (unsigned int)blueloop(v11) )
    {
      if ( !v6 )
      {
        if ( v10 > v1 )
        {
          v1 = v10;
          v9 = v23;
          v8 = v10;
          v4 = v24;
          qword_1C0323EE8 = v21;
          qword_1C0323F00 = v22;
          dword_1C0323F2C = v10;
          dword_1C0323EC8 = v23;
          dword_1C0323F38 = v24;
        }
        v6 = 1;
      }
      goto LABEL_6;
    }
    if ( v6 )
      break;
LABEL_6:
    dword_1C0323EC4 += v24;
    ++v10;
    v23 += v24;
    v11 = 0;
    qword_1C0323EE0 += 128LL;
    v21 += 128LL;
    qword_1C0323EF8 += 32LL;
    v22 += 32LL;
    v24 += v26;
    if ( v10 > v3 )
      goto LABEL_7;
  }
  v27 = v10 - 1;
LABEL_7:
  v7 = qword_1C0323F00;
  v5 = qword_1C0323EE8;
LABEL_8:
  v12 = v4 - v26;
  v13 = v5 - 128;
  v14 = v1 - 1;
  qword_1C0323EE0 = v5 - 128;
  v15 = v9 - v12;
  v16 = v7 - 32;
  dword_1C0323EC4 = v15;
  v17 = 1;
  qword_1C0323EF8 = v7 - 32;
  while ( 1 )
  {
    qword_1C0323F58 = v16;
    v25 = v16;
    qword_1C0323F50 = v13;
    dword_1C0323F44 = v15;
    dword_1C0323F48 = v12;
    if ( v14 < v2 )
      break;
    if ( (unsigned int)blueloop(v17) )
    {
      v18 = v25;
      if ( !v6 )
      {
        dword_1C0323F2C = v14;
        v6 = 1;
        qword_1C0323EE8 = v13;
        qword_1C0323F00 = v25;
        dword_1C0323EC8 = v15;
        dword_1C0323F38 = v12;
        v27 = v14;
      }
    }
    else
    {
      if ( v6 )
      {
        v8 = v14 + 1;
        break;
      }
      v18 = v25;
    }
    v12 -= v26;
    qword_1C0323EE0 -= 128LL;
    v13 -= 128LL;
    dword_1C0323EC4 -= v12;
    v15 -= v12;
    qword_1C0323EF8 -= 32LL;
    --v14;
    v16 = v18 - 32;
    v17 = 0;
  }
  if ( v6 )
  {
    v19 = v27 < dword_1C0323F3C;
    dword_1C0323F3C = v27;
    if ( v19 )
      v3 = v27;
    dword_1C0323F34 = v3;
    if ( v8 > dword_1C0323F40 )
      v2 = v8;
    dword_1C0323F40 = v8;
    dword_1C0323F30 = v2;
  }
  return v6;
}
