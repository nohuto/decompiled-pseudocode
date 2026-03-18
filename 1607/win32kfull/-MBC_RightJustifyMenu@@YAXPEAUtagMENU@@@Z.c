/*
 * XREFs of ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C00B7B88
 * Callers:
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     IsMDIItem @ 0x1C0232E3C (IsMDIItem.c)
 */

void __fastcall MBC_RightJustifyMenu(struct tagMENU *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  struct tagMENU *v4; // r11
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r14d
  int v12; // r10d
  __int64 i; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rbp
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // r15d
  __int64 v23; // r10
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8

  v2 = *((int *)a1 + 13);
  v3 = 0LL;
  v4 = a1;
  if ( !(_DWORD)v2 )
    return;
  v5 = *((_QWORD *)a1 + 10);
  v6 = 0;
  v7 = *((_DWORD *)a1 + 10);
  v8 = v5;
  if ( (v7 & 0x20) != 0 )
  {
    v9 = *(_BYTE *)(*((_QWORD *)v4 + 9) + 45LL) & 2;
    if ( (int)v2 > 0 )
    {
      while ( !v9 )
      {
        if ( (*(_DWORD *)v8 & 4) == 0 )
        {
          v10 = MNIsOwnerDrawItem((__int64)v4, (_DWORD *)v8);
          goto LABEL_11;
        }
        if ( *(_QWORD *)(v8 + 104) > 0xCuLL )
          goto LABEL_13;
LABEL_12:
        v8 = v5 + 152LL * ++v6;
        if ( v6 >= (int)v2 )
          goto LABEL_13;
      }
      if ( v6 )
        goto LABEL_13;
      v10 = IsMDIItem(v8, a2, v3);
LABEL_11:
      if ( !v10 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_13:
    if ( v6 == (_DWORD)v2 )
      --v6;
    v11 = v2 - 1;
    v12 = v11;
    for ( i = 152LL * v11; ; i = 152LL * v12 )
    {
      v15 = (_DWORD *)(v5 + i);
      if ( v12 <= v6 )
      {
LABEL_23:
        v16 = *(_DWORD *)(v5 + 76);
        v17 = *((_DWORD *)v4 + 14);
        v18 = v17;
        v19 = v6;
        v20 = 152LL * v6;
        v21 = v12;
        v22 = *(_DWORD *)(v20 + v5 + 72);
        if ( v11 > (__int64)v12 )
        {
          v23 = 152LL * v11;
          v24 = v11 - v21;
          do
          {
            v25 = *((_QWORD *)v4 + 10);
            v17 -= *(_DWORD *)(v23 + v25 + 80);
            *(_DWORD *)(v23 + v25 + 72) = v17;
            *(_DWORD *)(v23 + v25 + 76) = v16;
            v23 -= 152LL;
            --v24;
          }
          while ( v24 );
        }
        if ( v19 <= v21 )
        {
          v26 = v21 - v19 + 1;
          do
          {
            v27 = *((_QWORD *)v4 + 10);
            v28 = *(_DWORD *)(v20 + v27 + 80);
            v17 -= v28;
            if ( v17 <= v22 )
            {
              v22 = v3;
              v17 = v18 - v28;
              v16 += *(_DWORD *)(v20 + v27 + 84);
            }
            *(_DWORD *)(v20 + v27 + 72) = v17;
            *(_DWORD *)(v20 + v27 + 76) = v16;
            v20 += 152LL;
            --v26;
          }
          while ( v26 );
        }
        return;
      }
      if ( v9 )
      {
        v14 = IsMDIItem(v15, a2, v3);
      }
      else
      {
        if ( (*v15 & 4) != 0 )
          goto LABEL_21;
        v14 = MNIsOwnerDrawItem((__int64)v4, v15);
      }
      if ( !v14 )
        goto LABEL_23;
LABEL_21:
      --v12;
    }
  }
  if ( (int)v2 <= 0 )
    return;
  v29 = 0LL;
  while ( (*(_DWORD *)v8 & 0x4000) == 0 )
  {
    LODWORD(v3) = v3 + 1;
    ++v29;
    v8 += 152LL;
    if ( v29 >= v2 )
      return;
  }
  v30 = *((_DWORD *)v4 + 14) + *(_DWORD *)(v5 + 72);
  if ( (int)v2 - 1 >= (__int64)(int)v3 )
  {
    v31 = 152LL * ((int)v2 - 1);
    v32 = (int)v2 - 1 - (__int64)(int)v3 + 1;
    do
    {
      v33 = *((_QWORD *)v4 + 10);
      v30 -= *(_DWORD *)(v31 + v33 + 80);
      if ( *(_DWORD *)(v31 + v33 + 72) < v30 )
        *(_DWORD *)(v31 + v33 + 72) = v30;
      v31 -= 152LL;
      --v32;
    }
    while ( v32 );
  }
}
