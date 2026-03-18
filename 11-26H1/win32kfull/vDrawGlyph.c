/*
 * XREFs of vDrawGlyph @ 0x140324D54
 * Callers:
 *     vStringBitmapTextOut @ 0x1403251AC (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(unsigned int *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  int v6; // r9d
  int v7; // r11d
  unsigned int v8; // edx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  unsigned int v14; // r10d
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  char v17; // r12
  __int64 v18; // r15
  __int64 v19; // rbp
  unsigned int v20; // r8d
  _BYTE *v21; // r9
  _BYTE *v22; // rcx
  unsigned int i; // edx
  __int64 v24; // r13
  __int64 v25; // r15
  unsigned int v26; // ebp
  unsigned __int8 *v27; // r8
  _BYTE *v28; // r9
  unsigned int v29; // edi
  unsigned __int16 v30; // dx
  unsigned __int8 *v31; // r8
  __int64 v33; // [rsp+40h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 8);
  v5 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 12LL);
  if ( v6 && v7 )
  {
    v8 = *(_DWORD *)(a3 + 16);
    v9 = *(_DWORD *)(a3 + 20);
    v10 = *(_QWORD *)v3 + 16LL;
    v11 = (unsigned int)(v6 + 7) >> 3;
    if ( (v8 & 0x80000000) != 0 )
    {
      LODWORD(v3) = -v8;
      if ( v6 <= (signed int)-v8 )
        return v3;
      v6 -= v8;
      v8 = 0;
    }
    if ( v9 < 0 )
    {
      LODWORD(v3) = -v9;
      if ( v7 <= -v9 )
        return v3;
      v7 -= v9;
      v9 = 0;
    }
    if ( v8 < *a1 )
    {
      v12 = a1[1];
      if ( v9 < v12 )
      {
        v13 = *a1 - v8;
        if ( v13 >= v6 )
          v13 = v6;
        v14 = v12 - v9;
        if ( v14 >= v7 )
          v14 = v7;
        v15 = (unsigned __int64)a1 + ((unsigned __int64)v8 >> 3) + (unsigned int)(v5 * v9) + 8;
        v16 = v5;
        v33 = v5;
        v17 = v8 & 7;
        if ( (v8 & 7) != 0 )
        {
          v24 = (unsigned int)v11;
          v25 = ((_BYTE)v13 + (_BYTE)v8) & 7;
          v26 = ((v13 + v8) >> 3) - (v8 >> 3);
          do
          {
            v27 = (unsigned __int8 *)v10;
            v28 = (_BYTE *)v15;
            v10 += v24;
            v15 += v16;
            v29 = v26;
            v30 = *v27;
            v31 = v27 + 1;
            while ( v29 )
            {
              LOWORD(v3) = v30 >> v17;
              --v29;
              *v28++ |= v30 >> v17;
              v30 <<= 8;
              if ( v31 != (unsigned __int8 *)v10 )
              {
                LOWORD(v3) = *v31;
                v30 |= v3;
                ++v31;
              }
            }
            if ( (_DWORD)v25 )
              *v28 |= byte_1403707D8[v25] & (unsigned __int8)(v30 >> v17);
            v16 = v33;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v18 = v5;
          v19 = v13 & 7;
          v20 = v13 >> 3;
          do
          {
            v21 = (_BYTE *)v10;
            v22 = (_BYTE *)v15;
            v10 += v11;
            v15 += v18;
            for ( i = v20; i; --i )
            {
              LOBYTE(v3) = *v21++;
              *v22++ |= v3;
            }
            if ( (_DWORD)v19 )
            {
              LOBYTE(v3) = byte_1403707D8[v19] & *v21;
              *v22 |= v3;
            }
            --v14;
          }
          while ( v14 );
        }
      }
    }
  }
  return v3;
}
