/*
 * XREFs of vFill_RotateGLYPHDATA @ 0x1C024421C
 * Callers:
 *     BmfdQueryFontData @ 0x1C0018508 (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

char __fastcall vFill_RotateGLYPHDATA(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // r11d
  _DWORD *v12; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  unsigned __int64 v16; // rdi
  unsigned int v17; // ebx
  _BYTE *v18; // rcx
  unsigned int v19; // edx
  unsigned __int8 v20; // r15
  __int64 v21; // r10
  unsigned int v22; // r11d
  _DWORD *v23; // r13
  unsigned int v24; // r14d
  unsigned int v25; // r10d
  unsigned int v26; // r15d
  unsigned int v27; // ebx
  unsigned int v28; // r9d
  _BYTE *i; // rdx
  __int64 v30; // rdi
  unsigned int v31; // r9d
  _DWORD *v32; // rcx
  unsigned int v33; // r14d
  unsigned int v34; // r10d
  unsigned int v35; // r15d
  unsigned int v36; // ebx
  unsigned int v37; // r11d
  _BYTE *v38; // rdx
  unsigned int v39; // edi
  unsigned __int8 v40; // r15
  __int64 v41; // rcx
  _QWORD v43[7]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v44; // [rsp+A8h] [rbp+48h]
  _DWORD *v45; // [rsp+A8h] [rbp+48h]

  LOBYTE(v8) = (unsigned __int8)memset(v43, 0, sizeof(v43));
  if ( a1 )
  {
    v9 = *(_OWORD *)(a1 + 32);
    v10 = *(_OWORD *)(a1 + 48);
    *(_QWORD *)a1 = a3;
    *(_OWORD *)&v43[3] = v9;
    *(_OWORD *)&v43[5] = v10;
  }
  switch ( a4 )
  {
    case 900:
      if ( a1 )
      {
        *(_QWORD *)(a1 + 48) = v43[6];
        *(_DWORD *)(a1 + 60) = -HIDWORD(v43[5]);
        *(_DWORD *)(a1 + 56) = v43[5];
        *(_DWORD *)(a1 + 36) = -LODWORD(v43[4]);
        *(_DWORD *)(a1 + 44) = -LODWORD(v43[3]);
        *(_DWORD *)(a1 + 40) = HIDWORD(v43[4]);
        LOBYTE(v8) = BYTE4(v43[3]);
        *(_DWORD *)(a1 + 32) = HIDWORD(v43[3]);
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v31 = a2[2];
          v32 = a3 + 4;
          v33 = a2[3];
          v34 = 0;
          *a3 = a2[1];
          v45 = a3 + 4;
          a3[1] = -v31;
          v35 = (v33 + 7) >> 3;
          a3[2] = a2[3];
          v8 = a2[2];
          a3[3] = v8;
          if ( v31 )
          {
            v36 = 0;
            do
            {
              v37 = 0;
              v38 = (char *)v32 + v36;
              if ( v33 )
              {
                v39 = 0;
                v40 = BitON[((_BYTE)v31 - (_BYTE)v34 - 1) & 7];
                do
                {
                  v41 = v37 & 7;
                  if ( (*((_BYTE *)a2 + ((unsigned __int64)(v31 - v34 - 1) >> 3) + v39 + 16) & v40) != 0 )
                  {
                    LOBYTE(v8) = BitON[v41];
                    *v38 |= v8;
                  }
                  else
                  {
                    LOBYTE(v8) = BitOFF[v41];
                    *v38 &= v8;
                  }
                  if ( (_DWORD)v41 == 7 )
                    ++v38;
                  ++v37;
                  v39 += (v31 + 7) >> 3;
                }
                while ( v37 < v33 );
                v35 = (v33 + 7) >> 3;
                v32 = v45;
              }
              ++v34;
              v36 += v35;
            }
            while ( v34 < v31 );
          }
        }
      }
      break;
    case 1800:
      if ( a1 )
      {
        *(_DWORD *)(a1 + 52) = -HIDWORD(v43[5]);
        *(_DWORD *)(a1 + 48) = v43[5];
        *(_DWORD *)(a1 + 60) = -HIDWORD(v43[6]);
        *(_DWORD *)(a1 + 56) = v43[6];
        *(_DWORD *)(a1 + 36) = -HIDWORD(v43[4]);
        *(_DWORD *)(a1 + 44) = -HIDWORD(v43[3]);
        *(_DWORD *)(a1 + 40) = -LODWORD(v43[3]);
        v8 = -LODWORD(v43[4]);
        *(_DWORD *)(a1 + 32) = -LODWORD(v43[4]);
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v22 = a2[2];
          v23 = a3 + 4;
          v24 = a2[3];
          v25 = 0;
          *a3 = -v22;
          v26 = (v22 + 7) >> 3;
          a3[1] = -(v24 + a2[1]);
          a3[2] = a2[2];
          v8 = a2[3];
          a3[3] = v8;
          if ( v24 )
          {
            v27 = 0;
            do
            {
              v28 = 0;
              for ( i = (char *)v23 + v27; v28 < v22; ++v28 )
              {
                v30 = v28 & 7;
                if ( (*((_BYTE *)a2 + v26 * (v24 - v25 - 1) + ((unsigned __int64)(v22 - v28 - 1) >> 3) + 16) & BitON[((_BYTE)v22 - (_BYTE)v28 - 1) & 7]) != 0 )
                {
                  LOBYTE(v8) = BitON[v30];
                  *i |= v8;
                }
                else
                {
                  LOBYTE(v8) = BitOFF[v30];
                  *i &= v8;
                }
                if ( (_DWORD)v30 == 7 )
                  ++i;
              }
              ++v25;
              v27 += v26;
            }
            while ( v25 < v24 );
          }
        }
      }
      break;
    case 2700:
      if ( a1 )
      {
        *(_DWORD *)(a1 + 52) = -HIDWORD(v43[6]);
        *(_DWORD *)(a1 + 48) = v43[6];
        *(_QWORD *)(a1 + 56) = v43[5];
        *(_DWORD *)(a1 + 36) = v43[3];
        *(_DWORD *)(a1 + 44) = v43[4];
        *(_DWORD *)(a1 + 40) = -HIDWORD(v43[4]);
        v8 = -HIDWORD(v43[3]);
        *(_DWORD *)(a1 + 32) = -HIDWORD(v43[3]);
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v11 = a2[3];
          v12 = a3 + 4;
          v13 = a2[2];
          v14 = 0;
          v44 = a3 + 4;
          *a3 = -(v11 + a2[1]);
          a3[1] = *a2;
          v15 = (v11 + 7) >> 3;
          a3[2] = a2[3];
          v8 = a2[2];
          a3[3] = v8;
          if ( v13 )
          {
            v16 = 0LL;
            v17 = 0;
            do
            {
              v18 = (char *)v12 + v17;
              v19 = 0;
              if ( v11 )
              {
                v20 = BitON[v14 & 7];
                do
                {
                  v21 = v19 & 7;
                  if ( (*((_BYTE *)a2 + (v16 >> 3) + ((v13 + 7) >> 3) * (v11 - v19 - 1) + 16) & v20) != 0 )
                  {
                    LOBYTE(v8) = BitON[v21];
                    *v18 |= v8;
                  }
                  else
                  {
                    LOBYTE(v8) = BitOFF[v21];
                    *v18 &= v8;
                  }
                  if ( (_DWORD)v21 == 7 )
                    ++v18;
                  ++v19;
                }
                while ( v19 < v11 );
                v15 = (v11 + 7) >> 3;
              }
              v12 = v44;
              ++v14;
              v17 += v15;
              ++v16;
            }
            while ( v14 < v13 );
          }
        }
      }
      break;
  }
  return v8;
}
