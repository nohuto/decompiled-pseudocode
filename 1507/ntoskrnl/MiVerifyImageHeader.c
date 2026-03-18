/*
 * XREFs of MiVerifyImageHeader @ 0x1404FBE4C
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     MiCheckDosCalls @ 0x1406A2D2C (MiCheckDosCalls.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int16 v7; // r8
  __int16 v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // r11d
  int v13; // r14d
  int v14; // eax
  int v15; // ebp
  unsigned int v17; // r11d
  int v18; // ebp
  char v19; // al
  int v20; // eax
  int v21; // r14d
  char v22; // al
  char v23; // cl
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  __int64 v29; // r8
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned __int64 v33; // rcx
  __int16 v34; // ax

  if ( (a2 & 3) != 0 )
    return 3221225776LL;
  if ( *(_DWORD *)a2 != 17744 )
  {
    if ( *(_WORD *)a2 == 17742 )
    {
      if ( !(unsigned int)MiCheckDosCalls(a2, a4) )
      {
        v22 = *(_BYTE *)(a2 + 54);
        if ( v22 == 2 || !v22 && (((*(_WORD *)(a2 + 62) & 0xFF00) - 512) & 0xFEFF) == 0 )
          return 3221225777LL;
      }
      v23 = *(_BYTE *)(a2 + 54);
      if ( v23 != 5 && *(_WORD *)(a2 + 4) != *(_WORD *)(a2 + 42) )
      {
        if ( v23 != 1 )
          goto LABEL_60;
        v24 = *(_DWORD *)(a3 + 512) - *(_DWORD *)"16STUB";
        if ( !v24 )
          v24 = *(unsigned __int16 *)(a3 + 516) - *(unsigned __int16 *)"UB";
        if ( v24 )
        {
LABEL_60:
          v25 = *(unsigned __int16 *)(a3 + 8);
          if ( 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 8) > 0xFC6 )
            goto LABEL_89;
          v26 = a3 + (unsigned int)(16 * v25);
          v27 = *(_QWORD *)(v26 + 24) - *(_QWORD *)"Phar Lap Software, Inc.";
          if ( !v27 )
          {
            v27 = *(_QWORD *)(v26 + 32) - *(_QWORD *)" Software, Inc.";
            if ( !v27 )
              v27 = *(_QWORD *)(v26 + 40) - *(_QWORD *)"e, Inc.";
          }
          if ( v27 || (v28 = *(_WORD *)(v26 + 56), v28 != 19280) && v28 != 20304 && v28 != 22096 )
          {
LABEL_89:
            if ( (unsigned __int64)(unsigned int)(16 * (v25 + 3)) + 2 > 0x1000
              || (v29 = a3 + (unsigned int)(16 * v25),
                  v30 = *(unsigned __int16 *)(v29 + 48),
                  v30 + 16 * (unsigned int)*(unsigned __int16 *)(a3 + 8) > 0xFDC)
              || memcmp((const void *)(v29 + (unsigned __int16)v30), "Copyright (C) Rational Systems, Inc.", 0x24uLL) )
            {
              v31 = *(_DWORD *)(a2 + 44);
              v32 = *(_DWORD *)(a3 + 60);
              if ( v31 <= v32 )
                return 3221225755LL;
              v33 = (int)(v31 - v32);
              if ( v33 + 16 < v33 || v33 + 16 >= a4 || memcmp((const void *)(a2 + v33 + 1), "1-2-3 Preloader", 0xFuLL) )
                return 3221225755LL;
            }
          }
        }
      }
    }
    return 3221225776LL;
  }
  v7 = *(_WORD *)(a2 + 4);
  if ( !v7 && !*(_WORD *)(a2 + 20) )
    return 3221225776LL;
  if ( (*(_BYTE *)(a2 + 22) & 2) != 0 )
  {
    v8 = *(_WORD *)(a2 + 24);
    v9 = *(_DWORD *)(a2 + 60);
    v10 = *(_DWORD *)(a2 + 56);
    v11 = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v10;
    *(_DWORD *)(a1 + 16) = v11;
    *(_BYTE *)(a1 + 104) = 0;
    if ( v8 == 523 )
    {
      v12 = *(_DWORD *)(a2 + 132);
      v13 = *(_DWORD *)(a2 + 128);
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 104);
      *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
      *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
      *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
      *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
      *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
      *(_WORD *)(a1 + 48) = 523;
      *(_DWORD *)(a1 + 20) = v13;
      if ( v12 > 6 )
        *(_BYTE *)(a1 + 104) = *(_DWORD *)(a2 + 184) != 0;
      if ( v12 > 0xC )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
      }
      if ( v12 <= 0xE )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        v14 = *(_DWORD *)(a2 + 248);
        v15 = *(_DWORD *)(a2 + 252);
        *(_DWORD *)(a1 + 80) = v14;
        *(_DWORD *)(a1 + 84) = v15;
        if ( v14 && v15 )
          *(_DWORD *)(a1 + 20) = v13 | 1;
      }
      if ( v12 <= 5 )
      {
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
        *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 180);
      }
      if ( v12 <= 0xA )
      {
        *(_QWORD *)(a1 + 96) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 220);
      }
      goto LABEL_16;
    }
    v17 = *(_DWORD *)(a2 + 116);
    v18 = *(_DWORD *)(a2 + 112);
    *(_QWORD *)a1 = *(unsigned int *)(a2 + 52);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a2 + 96);
    *(_QWORD *)(a1 + 40) = *(unsigned int *)(a2 + 100);
    *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
    *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
    *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
    *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
    *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
    *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
    *(_WORD *)(a1 + 48) = v8;
    *(_DWORD *)(a1 + 20) = v18;
    if ( v17 > 6 )
    {
      v19 = *(_BYTE *)(a1 + 104);
      if ( *(_DWORD *)(a2 + 168) )
        v19 = 1;
      *(_BYTE *)(a1 + 104) = v19;
    }
    if ( v17 > 0xC )
    {
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 216);
      *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 220);
    }
    if ( v17 <= 0xE )
    {
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    else
    {
      v20 = *(_DWORD *)(a2 + 232);
      v21 = *(_DWORD *)(a2 + 236);
      *(_DWORD *)(a1 + 80) = v20;
      *(_DWORD *)(a1 + 84) = v21;
      if ( v20 && v21 )
        *(_DWORD *)(a1 + 20) = v18 | 1;
    }
    if ( v17 <= 5 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 160);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 164);
    }
    if ( v17 <= 0xA )
    {
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    else
    {
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 200);
      *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 204);
    }
    if ( v8 == 267 )
    {
LABEL_16:
      if ( ((v9 & 0x1FF) == 0 || v9 == v10)
        && v9
        && ((v10 - 1) & v10) == 0
        && ((v9 - 1) & v9) == 0
        && v10 >= v9
        && v11 <= 0x77000000 )
      {
        if ( v8 == 267 )
        {
          if ( v7 == 332 )
            return 0LL;
          v34 = 452;
        }
        else
        {
          if ( v7 == -31132 )
            return 0LL;
          v34 = -21916;
        }
        if ( v7 == v34 )
          return 0LL;
      }
    }
  }
  return 3221225595LL;
}
