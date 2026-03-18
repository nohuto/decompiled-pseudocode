/*
 * XREFs of MiReduceMdl @ 0x14003696C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceMdl(__int64 a1)
{
  char *v1; // r11
  unsigned int v2; // r10d
  __int64 v3; // rbp
  __int64 v4; // rdi
  char *v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // r9d
  unsigned __int64 v8; // r8
  _QWORD *v9; // rdx
  signed __int64 v11; // rdi
  int v12; // eax
  __int16 v13; // di
  unsigned int v14; // eax
  char *v15; // rdx
  __int64 v16; // r9

  v1 = (char *)(a1 + 48);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 40);
  v4 = qword_14034F708;
  v5 = (char *)(a1 + 48);
  v6 = 0LL;
  v7 = 0;
  v8 = ((unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + v3 + 4095) >> 12;
  if ( v8 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v5 != qword_14034F708 )
        break;
      ++v7;
      ++v6;
      v5 += 8;
    }
    while ( v7 < v8 - 1 );
  }
  if ( v6 )
  {
    *(_WORD *)(a1 + 8) += -8 * v6;
    *(_DWORD *)(a1 + 40) = v3 - ((_DWORD)v6 << 12);
    v11 = v1 - v5;
    do
    {
      ++v7;
      *(_QWORD *)&v5[v11] = *(_QWORD *)v5;
      v5 += 8;
    }
    while ( v7 < v8 );
    v4 = qword_14034F708;
    v8 -= v6;
  }
  v9 = (_QWORD *)(a1 + 40 + 8 * v8);
  if ( *v9 == v4 )
  {
    *(_WORD *)(a1 + 8) -= 8;
    v12 = *(_DWORD *)(a1 + 40);
    v13 = *(_WORD *)(a1 + 8);
    if ( (v12 & 0xFFF) != 0 )
      v14 = v12 & 0xFFFFF000;
    else
      v14 = v12 - 4096;
    v15 = (char *)(v9 - 1);
    *(_DWORD *)(a1 + 40) = v14;
    v16 = 0LL;
    if ( v15 != v1 )
    {
      do
      {
        if ( *(_QWORD *)v15 != qword_14034F708 )
          break;
        ++v16;
        v15 -= 8;
      }
      while ( v15 != v1 );
      if ( v16 )
      {
        *(_WORD *)(a1 + 8) = v13 - 8 * v16;
        *(_DWORD *)(a1 + 40) += -4096 * v16;
      }
    }
    v8 += -1 - v16;
  }
  *(_WORD *)(a1 + 10) |= 0x4000u;
  if ( v8 )
  {
    while ( *(_QWORD *)v1 != qword_14034F708 )
    {
      ++v2;
      v1 += 8;
      if ( v2 >= v8 )
        return v6;
    }
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  }
  return v6;
}
