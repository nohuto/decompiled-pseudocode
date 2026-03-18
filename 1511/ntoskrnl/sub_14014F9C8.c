/*
 * XREFs of sub_14014F9C8 @ 0x14014F9C8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14014F138 @ 0x14014F138 (sub_14014F138.c)
 */

char __fastcall sub_14014F9C8(__int64 a1, int *a2)
{
  _QWORD *v4; // r9
  unsigned __int64 v5; // r8
  const char *v6; // rax
  int v7; // r11d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 i; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // edx
  _BYTE *v18; // r8
  char *v19; // r9
  __int64 v20; // rcx
  char v21; // cl
  __int64 v22; // rcx
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a2 != 11 || *(_QWORD *)(a1 + 1672) )
  {
    v4 = (_QWORD *)*((_QWORD *)a2 + 1);
    v5 = (unsigned int)a2[4];
    v6 = (const char *)v4;
    *(_DWORD *)(a1 + 1432) += v5;
    v7 = *(_DWORD *)(a1 + 1412);
    v8 = *(_QWORD *)(a1 + 1416);
    if ( v4 < (_QWORD *)((char *)v4 + v5) )
    {
      do
      {
        _mm_prefetch(v6, 0);
        v6 += 64;
      }
      while ( v6 < (const char *)v4 + v5 );
    }
    if ( (unsigned int)v5 >= 8 )
    {
      v9 = v5 >> 3;
      do
      {
        v8 = __ROL8__(*v4++ ^ v8, v7);
        LODWORD(v5) = v5 - 8;
        --v9;
      }
      while ( v9 );
    }
    for ( ; (_DWORD)v5; LODWORD(v5) = v5 - 1 )
    {
      v10 = *(unsigned __int8 *)v4;
      v4 = (_QWORD *)((char *)v4 + 1);
      v8 = __ROL8__(v10 ^ v8, v7);
    }
    for ( i = v8; ; LODWORD(v8) = i ^ v8 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v12 = (unsigned int)a2[5];
    v13 = v8 & 0x7FFFFFFF;
    if ( v13 != (_DWORD)v12 )
    {
      if ( !*(_DWORD *)(a1 + 1544) )
        *(_QWORD *)(*(_QWORD *)(a1 + 1176) + 24LL) = v12 ^ v13;
      v14 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(a1 + 1544) )
      {
        *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1560) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 1568) = *a2;
        *(_QWORD *)(a1 + 1576) = v14;
        *(_DWORD *)(a1 + 1544) = 1;
      }
    }
  }
  LODWORD(v15) = a2[10];
  if ( ((v15 & 2) == 0 || *(_QWORD *)(a1 + 1672)) && (v15 & 4) == 0 )
  {
    v16 = a2[4];
    if ( v16 )
    {
      sub_14014F138(a1, *((_QWORD *)a2 + 1), v16, (__int64)v24);
      v17 = 16;
      v18 = a2 + 6;
      v19 = v24;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        v19 += 8;
        v15 = *(_QWORD *)v18;
        v18 += 8;
        if ( v20 != v15 )
          break;
        v17 -= 8;
        if ( v17 < 8 )
        {
          if ( !v17 )
            goto LABEL_31;
          while ( 1 )
          {
            v21 = *v19++;
            LOBYTE(v15) = *v18++;
            if ( v21 != (_BYTE)v15 )
              goto LABEL_29;
            if ( !--v17 )
              goto LABEL_31;
          }
        }
      }
LABEL_29:
      v22 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(a1 + 1544) )
      {
        *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1560) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        v15 = *a2;
        *(_QWORD *)(a1 + 1568) = v15;
        *(_QWORD *)(a1 + 1576) = v22;
        *(_DWORD *)(a1 + 1544) = 1;
      }
LABEL_31:
      *(_DWORD *)(a1 + 1432) += 16 * v16;
    }
  }
  return v15;
}
