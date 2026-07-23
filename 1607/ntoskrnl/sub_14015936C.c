/*
 * XREFs of sub_14015936C @ 0x14015936C
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1401588B8 @ 0x1401588B8 (sub_1401588B8.c)
 */

char __fastcall sub_14015936C(__int64 a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rbp
  _QWORD *v8; // r9
  unsigned __int64 v9; // r8
  const char *v10; // rax
  int v11; // r11d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  unsigned __int64 j; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // esi
  _BYTE *v20; // rdx
  char *v21; // r8
  __int64 v22; // rcx
  char v23; // cl
  __int64 v24; // rcx
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(v2) = a2[10];
  v5 = 16;
  if ( (v2 & 2) == 0 )
    goto LABEL_15;
  if ( !*(_QWORD *)(a1 + 1744) )
  {
    *(_DWORD *)(a1 + 1500) = 0;
    return v2;
  }
  LODWORD(v2) = *(_DWORD *)(a1 + 1756);
  if ( *(_DWORD *)(a1 + 1500) )
  {
    if ( (((unsigned int)v2 ^ ((unsigned int)v2 >> 2)) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 1500) = 0;
      return v2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1756) = v2 ^ (v2 ^ (4 * v2)) & 0x10;
  }
  LODWORD(v2) = *(_DWORD *)(a1 + 1756);
  if ( (v2 & 4) != 0 )
  {
    v6 = *((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFF000uLL;
    for ( i = ((a2[2] & 0xFFF) + (unsigned __int64)(unsigned int)a2[4] + 4095) >> 12; i; v6 += 4096LL )
    {
      --i;
      LOBYTE(v2) = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 656))(v6);
      if ( (_BYTE)v2 && !*(_DWORD *)(a1 + 1616) )
      {
        *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1632) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        v2 = *a2;
        *(_QWORD *)(a1 + 1640) = v2;
        *(_QWORD *)(a1 + 1648) = v6;
        *(_DWORD *)(a1 + 1616) = 1;
      }
      *(_DWORD *)(a1 + 1504) += 256;
    }
  }
  else
  {
LABEL_15:
    LODWORD(v2) = a2[10];
    if ( (v2 & 4) == 0 )
    {
      v8 = (_QWORD *)*((_QWORD *)a2 + 1);
      v9 = (unsigned int)a2[4];
      v10 = (const char *)v8;
      *(_DWORD *)(a1 + 1504) += v9;
      v11 = *(_DWORD *)(a1 + 1484);
      v12 = *(_QWORD *)(a1 + 1488);
      if ( v8 < (_QWORD *)((char *)v8 + v9) )
      {
        do
        {
          _mm_prefetch(v10, 0);
          v10 += 64;
        }
        while ( v10 < (const char *)v8 + v9 );
      }
      if ( (unsigned int)v9 >= 8 )
      {
        v13 = v9 >> 3;
        do
        {
          v12 = __ROL8__(*v8++ ^ v12, v11);
          LODWORD(v9) = v9 - 8;
          --v13;
        }
        while ( v13 );
      }
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        v14 = *(unsigned __int8 *)v8;
        v8 = (_QWORD *)((char *)v8 + 1);
        v12 = __ROL8__(v14 ^ v12, v11);
      }
      for ( j = v12; ; LODWORD(v12) = j ^ v12 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v2 = (unsigned int)a2[5];
      v16 = v12 & 0x7FFFFFFF;
      if ( v16 != (_DWORD)v2 )
      {
        if ( !*(_DWORD *)(a1 + 1616) )
        {
          v17 = v2 ^ v16;
          v2 = *(_QWORD *)(a1 + 1240);
          *(_QWORD *)(v2 + 24) = v17;
        }
        v18 = *((_QWORD *)a2 + 1);
        if ( !*(_DWORD *)(a1 + 1616) )
        {
          *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1632) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          v2 = *a2;
          *(_QWORD *)(a1 + 1640) = v2;
          *(_QWORD *)(a1 + 1648) = v18;
          *(_DWORD *)(a1 + 1616) = 1;
        }
      }
      v19 = a2[4];
      if ( v19 )
      {
        sub_1401588B8(a1, *((_QWORD *)a2 + 1), v19, (__int64)v26);
        v20 = a2 + 6;
        v21 = v26;
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v21 += 8;
          v2 = *(_QWORD *)v20;
          v20 += 8;
          if ( v22 != v2 )
            break;
          v5 -= 8;
          if ( v5 < 8 )
          {
            if ( !v5 )
              goto LABEL_41;
            while ( 1 )
            {
              v23 = *v21++;
              LOBYTE(v2) = *v20++;
              if ( v23 != (_BYTE)v2 )
                goto LABEL_39;
              if ( !--v5 )
                goto LABEL_41;
            }
          }
        }
LABEL_39:
        v24 = *((_QWORD *)a2 + 1);
        if ( !*(_DWORD *)(a1 + 1616) )
        {
          *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1632) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          v2 = *a2;
          *(_QWORD *)(a1 + 1640) = v2;
          *(_QWORD *)(a1 + 1648) = v24;
          *(_DWORD *)(a1 + 1616) = 1;
        }
LABEL_41:
        *(_DWORD *)(a1 + 1504) += 16 * v19;
      }
    }
  }
  return v2;
}
