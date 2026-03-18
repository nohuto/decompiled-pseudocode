/*
 * XREFs of vSetGrayState__FONTCONTEXT @ 0x1C0018D8C
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 * Callees:
 *     <none>
 */

void __fastcall vSetGrayState__FONTCONTEXT(__int64 *a1)
{
  int v1; // r8d
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r11
  _WORD *v6; // r10
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // r9
  int v9; // ecx
  _WORD *v10; // r10
  int v11; // r11d
  _WORD *v12; // rbx
  int v13; // r9d
  int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rax
  int v17; // ecx

  *((_DWORD *)a1 + 10) |= 0x80000000;
  v1 = *((_DWORD *)a1 + 10);
  if ( (v1 & 0x10000) != 0 )
  {
    v3 = v1 & 0xFFFEFFFF;
    *((_DWORD *)a1 + 10) = v3;
    if ( (v3 & 0x80000) != 0 )
    {
      *((_DWORD *)a1 + 10) = v3 | 0x10000;
    }
    else
    {
      v4 = a1[24];
      v5 = a1[1];
      v6 = (_WORD *)(*(unsigned int *)(v4 + 112) + *(_QWORD *)(v5 + 64));
      if ( !*(_DWORD *)(v4 + 112)
        || (v7 = *(unsigned int *)(v4 + 116), (unsigned int)v7 < 4)
        || (v8 = __ROR2__(v6[1], 8), 4 * (unsigned __int64)v8 + 4 > v7) )
      {
        v15 = *(_WORD *)(v5 + 404);
        if ( (v15 & 1) != 0 || (v15 & 0x20) == 0 )
        {
          v8 = 3;
          v6 = &unk_1C02F08E0;
        }
        else
        {
          v6 = &unk_1C02F08D0;
          v8 = 2;
        }
      }
      v9 = *((_DWORD *)a1 + 31);
      if ( v9 <= 0xFFFF )
      {
        v10 = v6 + 2;
        if ( v8 > 8u )
          v8 = 8;
        v11 = -1;
        v12 = &v10[2 * v8];
        while ( v10 < v12 )
        {
          v13 = (unsigned __int16)__ROR2__(*v10, 8);
          if ( v9 <= v13 && v11 < v9 )
          {
            if ( (__ROR2__(v10[1], 8) & 2) != 0 )
              *((_DWORD *)a1 + 10) = v3 | 0x10000;
            break;
          }
          v11 = v13;
          v10 += 2;
        }
      }
    }
    v14 = *((_DWORD *)a1 + 10);
    if ( (v14 & 0x10000) == 0 )
    {
      v16 = *a1;
      v17 = v14 | 0x20000;
      *((_DWORD *)a1 + 10) = v17;
      *(_DWORD *)(v16 + 12) = v17;
    }
  }
}
