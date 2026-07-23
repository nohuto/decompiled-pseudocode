/*
 * XREFs of MiReduceMdl @ 0x140098620
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceMdl(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // rsi
  unsigned int v6; // ebp
  char *v7; // rax
  unsigned __int64 v8; // r8
  char *v9; // r9
  signed __int64 v11; // r11
  int v12; // ecx
  __int16 v13; // bx
  unsigned int v14; // ecx
  char *v15; // r9
  __int64 v16; // r11

  v1 = 0;
  v3 = *(unsigned int *)(a1 + 40);
  v4 = qword_1403276D8;
  v5 = 0LL;
  v6 = 0;
  v7 = (char *)(a1 + 48);
  v8 = ((unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + v3 + 4095) >> 12;
  v9 = (char *)(a1 + 48);
  if ( v8 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v9 != qword_1403276D8 )
        break;
      ++v6;
      ++v5;
      v9 += 8;
    }
    while ( v6 < v8 - 1 );
  }
  if ( v5 )
  {
    *(_WORD *)(a1 + 8) += -8 * v5;
    *(_DWORD *)(a1 + 40) = v3 - ((_DWORD)v5 << 12);
    v11 = v7 - v9;
    do
    {
      ++v6;
      *(_QWORD *)&v9[v11] = *(_QWORD *)v9;
      v9 += 8;
    }
    while ( v6 < v8 );
    v4 = qword_1403276D8;
    v8 -= v5;
  }
  if ( *(_QWORD *)(a1 + 8 * v8 + 40) == v4 )
  {
    *(_WORD *)(a1 + 8) -= 8;
    v12 = *(_DWORD *)(a1 + 40);
    v13 = *(_WORD *)(a1 + 8);
    if ( (v12 & 0xFFF) != 0 )
      v14 = v12 & 0xFFFFF000;
    else
      v14 = v12 - 4096;
    v15 = (char *)(a1 + 8 * v8 + 32);
    *(_DWORD *)(a1 + 40) = v14;
    v16 = 0LL;
    if ( v15 != v7 )
    {
      do
      {
        if ( *(_QWORD *)v15 != qword_1403276D8 )
          break;
        ++v16;
        v15 -= 8;
      }
      while ( v15 != v7 );
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
    while ( *(_QWORD *)v7 != qword_1403276D8 )
    {
      ++v1;
      v7 += 8;
      if ( v1 >= v8 )
        return v5;
    }
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  }
  return v5;
}
