/*
 * XREFs of bComputeGlyphAttrBits @ 0x1C0157700
 * Callers:
 *     bLoadFontFile @ 0x1C002025C (bLoadFontFile.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C0017E28 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall bComputeGlyphAttrBits(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  ULONG v5; // ebx
  __int64 result; // rax
  _DWORD *v7; // r14
  __int64 v8; // r10
  int v9; // edx
  __int64 v10; // r8
  unsigned int *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int16 *v15; // r13
  __int64 v16; // rax
  unsigned __int16 *v17; // r9
  __int64 v18; // r12
  unsigned int **v19; // rcx
  unsigned int v20; // ebx
  _DWORD *v21; // rdi
  unsigned int v22; // ebp
  unsigned int v23; // ecx
  int v24; // r8d
  _WORD *v25; // rax
  unsigned __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-58h]
  unsigned __int16 *v28; // [rsp+38h] [rbp-50h]
  unsigned int **v29; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v30; // [rsp+48h] [rbp-40h]
  WCHAR v32; // [rsp+A0h] [rbp+18h] BYREF
  CHAR v33; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v4 = a1;
  v5 = ((unsigned int)(*(_DWORD *)(v2 + 552) + 7) >> 3) + 12;
  result = (__int64)EngAllocMem(0, v5, 0x64667454u);
  v7 = (_DWORD *)result;
  if ( result )
  {
    memset((void *)result, 0, v5);
    *v7 = v5;
    v8 = 0LL;
    v7[1] = *(_DWORD *)(v2 + 552);
    v7[2] = 1;
    v27 = 0;
    while ( (unsigned int)v8 < *(_DWORD *)(v4 + 12) )
    {
      if ( *(_DWORD *)(v4 + 16LL * (unsigned int)v8 + 44) == 1 )
      {
        v9 = 0;
        v10 = 0LL;
        v11 = 0LL;
        v12 = *(_QWORD *)(v4 + 16 * (v8 + 3));
        v13 = *(_QWORD *)(v12 + 88);
        v14 = *(unsigned int *)(v13 + 12);
        v15 = (unsigned __int16 *)(v13 + 16);
        v16 = *(_QWORD *)(v12 + 96);
        v17 = &v15[8 * v14];
        v28 = v15;
        v30 = v17;
        if ( v16 )
        {
          v10 = v16 + 16;
          v9 = 1;
        }
        v18 = v9;
        if ( v15 < v17 )
        {
          v19 = (unsigned int **)(v10 + 8);
          v29 = (unsigned int **)(v10 + 8);
          do
          {
            v20 = *v15;
            v21 = (_DWORD *)*((_QWORD *)v15 + 1);
            v22 = v15[1] + v20 - 1;
            if ( v18 )
              v11 = *v19;
            if ( *v15 != 0xFFFF && v20 <= v22 )
            {
              while ( 1 )
              {
                v23 = *(_DWORD *)(a2 + 288);
                v32 = v20;
                if ( (unsigned __int16)v20 >= (unsigned __int16)VerticalUnicodes
                  && (unsigned __int16)v20 <= (unsigned __int16)word_1C0324D56 )
                {
                  break;
                }
LABEL_18:
                if ( (int)ConvertToAndFromWideChar(v23, &v32, 2u, &v33, 2u, 0) > 1 )
                  goto LABEL_19;
LABEL_22:
                ++v21;
                ++v20;
                ++v11;
                if ( v20 > v22 )
                {
                  v15 = v28;
                  v19 = v29;
                  v17 = v30;
                  goto LABEL_24;
                }
              }
              v24 = 0;
              v25 = &unk_1C0324D22;
              while ( (unsigned __int16)v20 < *(v25 - 1) || (unsigned __int16)v20 > *v25 )
              {
                ++v24;
                v25 += 2;
                if ( (unsigned __int64)v24 >= 0xE )
                  goto LABEL_18;
              }
LABEL_19:
              if ( *v21 < v7[1] )
              {
                *((_BYTE *)v7 + ((unsigned __int64)(unsigned int)*v21 >> 3) + 12) |= glyphBits[*v21 & 7];
                if ( v18 )
                {
                  v26 = *v11;
                  if ( *v21 != (_DWORD)v26 && (unsigned int)v26 < v7[1] )
                    *((_BYTE *)v7 + (v26 >> 3) + 12) |= glyphBits[v26 & 7];
                }
              }
              goto LABEL_22;
            }
LABEL_24:
            v15 += 8;
            v19 += 2;
            v28 = v15;
            v29 = v19;
          }
          while ( v15 < v17 );
          v4 = a1;
          LODWORD(v8) = v27;
        }
      }
      v8 = (unsigned int)(v8 + 1);
      v27 = v8;
    }
    *(_QWORD *)(v4 + 32) = v7;
    return 1LL;
  }
  return result;
}
