/*
 * XREFs of vDrawGlyph @ 0x1C028B42C
 * Callers:
 *     vStringBitmapTextOut @ 0x1C028B648 (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  int v6; // r9d
  int v7; // r10d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r11
  unsigned int v11; // ebx
  _BYTE *v12; // r8
  char v13; // bp
  __int64 v14; // rbp
  __int64 v15; // r14
  unsigned int v16; // r9d
  _BYTE *v17; // rbx
  _BYTE *v18; // rcx
  unsigned int i; // edx
  __int64 v20; // r13
  __int64 v21; // r15
  unsigned int v22; // r14d
  unsigned __int8 *v23; // r9
  _BYTE *v24; // rbx
  unsigned int v25; // edi
  unsigned __int16 v26; // dx
  unsigned __int8 *v27; // r9
  __int64 v29; // [rsp+40h] [rbp+18h]

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
    if ( v8 < 0 )
    {
      LODWORD(v3) = -v8;
      if ( v6 <= -v8 )
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
    v3 = a1 + (unsigned int)(v5 * v9);
    v12 = (_BYTE *)(v3 + ((__int64)v8 >> 3));
    v13 = v8 & 7;
    if ( (v8 & 7) != 0 )
    {
      v20 = v11;
      v21 = ((_BYTE)v8 + (_BYTE)v6) & 7;
      v22 = ((unsigned int)(v8 + v6) >> 3) - (v8 >> 3);
      v3 = v5;
      v29 = v5;
      do
      {
        v23 = (unsigned __int8 *)v10;
        v24 = v12;
        v10 += v20;
        v12 += v3;
        v25 = v22;
        v26 = *v23;
        v27 = v23 + 1;
        if ( v22 )
        {
          do
          {
            --v25;
            *v24++ |= v26 >> v13;
            v26 <<= 8;
            if ( v27 != (unsigned __int8 *)v10 )
              v26 |= *v27++;
          }
          while ( v25 );
          v3 = v29;
        }
        if ( (_DWORD)v21 )
          *v24 |= byte_1C02ED218[v21] & (unsigned __int8)(v26 >> v13);
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v14 = v11;
      v15 = v6 & 7;
      v16 = (unsigned int)v6 >> 3;
      do
      {
        v17 = (_BYTE *)v10;
        v18 = v12;
        v10 += v14;
        v12 += v5;
        for ( i = v16; i; --i )
        {
          LOBYTE(v3) = *v17++;
          *v18++ |= v3;
        }
        if ( (_DWORD)v15 )
        {
          LOBYTE(v3) = *v17 & byte_1C02ED218[v15];
          *v18 |= v3;
        }
        --v7;
      }
      while ( v7 );
    }
  }
  return v3;
}
