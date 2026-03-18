/*
 * XREFs of sub_14017DB84 @ 0x14017DB84
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14017D2FC @ 0x14017D2FC (sub_14017D2FC.c)
 */

char __fastcall sub_14017DB84(__int64 a1, int *a2)
{
  _QWORD *v4; // r8
  unsigned __int64 v5; // r9
  const char *v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // r10d
  int v9; // ecx
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int64 i; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned int v18; // edx
  _BYTE *v19; // r8
  char *v20; // r9
  __int64 v21; // rcx
  char v22; // cl
  __int64 v23; // rcx
  _BYTE v25[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a2 != 11 || *(_QWORD *)(a1 + 1664) )
  {
    v4 = (_QWORD *)*((_QWORD *)a2 + 1);
    v5 = (unsigned int)a2[4];
    v6 = (const char *)v4;
    if ( v4 < (_QWORD *)((char *)v4 + v5) )
    {
      do
      {
        _mm_prefetch(v6, 0);
        v6 += 64;
      }
      while ( v6 < (const char *)v4 + v5 );
    }
    v7 = *(_QWORD *)(a1 + 1408);
    v8 = v5;
    if ( (unsigned int)v5 >= 8 )
    {
      v9 = *(_DWORD *)(a1 + 1404);
      v10 = v5 >> 3;
      do
      {
        v8 -= 8;
        v7 = __ROL8__(*v4++ ^ v7, v9);
        --v10;
      }
      while ( v10 );
    }
    for ( ; v8; --v8 )
    {
      v11 = *(unsigned __int8 *)v4;
      v4 = (_QWORD *)((char *)v4 + 1);
      v7 = __ROL8__(v11 ^ v7, *(_DWORD *)(a1 + 1404));
    }
    *(_DWORD *)(a1 + 1424) += v5;
    for ( i = v7; ; LODWORD(v7) = i ^ v7 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v13 = (unsigned int)a2[5];
    v14 = v7 & 0x7FFFFFFF;
    if ( v14 != (_DWORD)v13 )
    {
      if ( !*(_DWORD *)(a1 + 1536) )
        *(_QWORD *)(*(_QWORD *)(a1 + 1160) + 24LL) = v13 ^ v14;
      v15 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(a1 + 1536) )
      {
        *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1552) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 1560) = *a2;
        *(_QWORD *)(a1 + 1568) = v15;
        *(_DWORD *)(a1 + 1536) = 1;
      }
    }
  }
  LODWORD(v16) = a2[10];
  if ( (v16 & 2) == 0 || *(_QWORD *)(a1 + 1664) )
  {
    v17 = a2[4];
    if ( v17 )
    {
      sub_14017D2FC(a1, *((_QWORD *)a2 + 1), v17, (__int64)v25);
      v18 = 16;
      v19 = a2 + 6;
      v20 = v25;
      while ( 1 )
      {
        v21 = *(_QWORD *)v20;
        v20 += 8;
        v16 = *(_QWORD *)v19;
        v19 += 8;
        if ( v21 != v16 )
          break;
        v18 -= 8;
        if ( v18 < 8 )
        {
          if ( !v18 )
            goto LABEL_30;
          while ( 1 )
          {
            v22 = *v20++;
            LOBYTE(v16) = *v19++;
            if ( v22 != (_BYTE)v16 )
              goto LABEL_28;
            if ( !--v18 )
              goto LABEL_30;
          }
        }
      }
LABEL_28:
      v23 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(a1 + 1536) )
      {
        *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1552) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        v16 = *a2;
        *(_QWORD *)(a1 + 1560) = v16;
        *(_QWORD *)(a1 + 1568) = v23;
        *(_DWORD *)(a1 + 1536) = 1;
      }
LABEL_30:
      *(_DWORD *)(a1 + 1424) += 16 * v17;
    }
  }
  return v16;
}
