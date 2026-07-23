/*
 * XREFs of PfpRpRehashIfNeeded @ 0x1404F6714
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1404F61C0 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     PfpRpIsRehashNeeded @ 0x1400ED6A4 (PfpRpIsRehashNeeded.c)
 */

__int64 __fastcall PfpRpRehashIfNeeded(_DWORD *a1, unsigned __int64 *a2)
{
  int IsRehashNeeded; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r8d
  unsigned __int64 v8; // rbx
  __int64 *v9; // r11
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned int v12; // r11d
  __int64 v13; // rdi
  __int64 v14; // r15
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // ecx
  char i; // cl
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  IsRehashNeeded = PfpRpIsRehashNeeded(a1, &v20);
  v6 = 0;
  if ( IsRehashNeeded && (unsigned int)v20 <= (unsigned int)v4 )
  {
    v8 = *a2;
    if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
    {
      for ( i = -1; (_DWORD)v4; LODWORD(v4) = (unsigned int)v4 >> 1 )
        ++i;
      v4 = (unsigned int)(1 << i);
    }
    v9 = (__int64 *)*a2;
    v10 = 0LL;
    if ( (unsigned int)v4 > 0x4000000 )
      v4 = 0x4000000LL;
    v11 = (unsigned __int64)(8 * v4 + 7) >> 3;
    if ( v8 > v8 + 8 * v4 )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        ++v10;
        *v9++ = v5 | 1;
      }
      while ( v10 < v11 );
    }
    v12 = 0;
    v13 = -1LL << (*(_BYTE *)(v5 + 4) & 0x1F);
    if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v14 = *(_QWORD *)(v5 + 8);
        while ( 1 )
        {
          v15 = *(_QWORD **)(v14 + 8LL * v12);
          if ( ((unsigned __int8)v15 & 1) != 0 )
            break;
          *(_QWORD *)(v14 + 8LL * v12) = *v15;
          v20 = v13 & v15[1];
          v16 = (37
               * (BYTE6(v20)
                + 37
                * (BYTE5(v20)
                 + 37
                 * (BYTE4(v20)
                  + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
               + HIBYTE(v20)) & (unsigned int)(v4 - 1);
          *v15 = *(_QWORD *)(v8 + 8 * v16);
          *(_QWORD *)(v8 + 8 * v16) = v15;
        }
        ++v12;
      }
      while ( v12 < *(_DWORD *)(v5 + 4) >> 5 );
    }
    v17 = *(_QWORD *)(v5 + 8);
    v18 = (32 * v4) | *(_DWORD *)(v5 + 4) & 0x1F;
    *(_QWORD *)(v5 + 8) = v8;
    *(_DWORD *)(v5 + 4) = v18;
    *a2 = v17;
  }
  LOBYTE(v6) = (*(_DWORD *)(v5 + 4) & 0xFFFFFFE0) != 0;
  return v6;
}
