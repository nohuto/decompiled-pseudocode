/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1800D5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r11
  _BYTE *v11; // rdx
  unsigned __int16 *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // edi
  unsigned __int16 *v16; // r8
  __int64 v17; // rax
  __int16 v18; // r11
  unsigned int v19; // eax

  v6 = a6 >> 1;
  v7 = a3;
  if ( !*(_WORD *)(a1 + 12) )
  {
    v8 = a3;
    if ( v6 < a3 )
      v8 = a6 >> 1;
    if ( a4 )
      *a4 = v8;
    v9 = *(_QWORD *)(a1 + 40);
    v10 = v8 & 0xF;
    v11 = &a2[v10 - 15];
    v12 = &a5[v10 - 15];
    while ( (unsigned int)v10 <= 8 )
    {
      if ( (_DWORD)v10 == 8 )
        goto LABEL_32;
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
        {
          if ( (_DWORD)v10 != 2 )
          {
            if ( (_DWORD)v10 != 3 )
            {
              if ( (_DWORD)v10 != 4 )
              {
                if ( (_DWORD)v10 != 5 )
                {
                  if ( (_DWORD)v10 != 6 )
                    goto LABEL_33;
                  goto LABEL_34;
                }
                goto LABEL_35;
              }
              goto LABEL_36;
            }
            goto LABEL_37;
          }
          goto LABEL_38;
        }
        goto LABEL_39;
      }
LABEL_40:
      v8 -= v10;
      LODWORD(v10) = 16;
      if ( !v8 )
        return v7 < v6 ? 0x80000005 : 0;
    }
    if ( (_DWORD)v10 != 9 )
    {
      if ( (_DWORD)v10 != 10 )
      {
        if ( (_DWORD)v10 != 11 )
        {
          if ( (_DWORD)v10 != 12 )
          {
            if ( (_DWORD)v10 != 13 )
            {
              if ( (_DWORD)v10 != 14 )
              {
                if ( (_DWORD)v10 != 15 )
                {
                  v13 = v12[15];
                  v12 += 16;
                  v11 += 16;
                  *(v11 - 1) = *(_BYTE *)(v13 + v9);
                }
                *v11 = *(_BYTE *)(*v12 + v9);
              }
              v11[1] = *(_BYTE *)(v12[1] + v9);
            }
            v11[2] = *(_BYTE *)(v12[2] + v9);
          }
          v11[3] = *(_BYTE *)(v12[3] + v9);
        }
        v11[4] = *(_BYTE *)(v12[4] + v9);
      }
      v11[5] = *(_BYTE *)(v12[5] + v9);
    }
    v11[6] = *(_BYTE *)(v12[6] + v9);
LABEL_32:
    v11[7] = *(_BYTE *)(v12[7] + v9);
LABEL_33:
    v11[8] = *(_BYTE *)(v12[8] + v9);
LABEL_34:
    v11[9] = *(_BYTE *)(v12[9] + v9);
LABEL_35:
    v11[10] = *(_BYTE *)(v12[10] + v9);
LABEL_36:
    v11[11] = *(_BYTE *)(v12[11] + v9);
LABEL_37:
    v11[12] = *(_BYTE *)(v12[12] + v9);
LABEL_38:
    v11[13] = *(_BYTE *)(v12[13] + v9);
LABEL_39:
    v11[14] = *(_BYTE *)(v12[14] + v9);
    goto LABEL_40;
  }
  v14 = *(_QWORD *)(a1 + 40);
  v15 = (int)a2;
  if ( v6 )
  {
    v16 = a5;
    do
    {
      if ( !v7 )
        break;
      v17 = *v16++;
      v18 = *(_WORD *)(v14 + 2 * v17);
      if ( HIBYTE(v18) )
      {
        v19 = v7--;
        if ( v19 < 2 )
          break;
        *a2++ = HIBYTE(v18);
      }
      *a2 = v18;
      --v7;
      ++a2;
      --v6;
    }
    while ( v6 );
  }
  if ( a4 )
    *a4 = (_DWORD)a2 - v15;
  return v7 < v6 ? 0x80000005 : 0;
}
