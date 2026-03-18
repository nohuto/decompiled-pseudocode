/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x14011C260
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x14011CA64 (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  unsigned __int8 v1; // si
  int v2; // r15d
  int v4; // edi
  __int64 v5; // rax
  int v6; // r12d
  unsigned __int8 *started; // rax
  unsigned int v8; // r8d
  unsigned __int8 *v9; // rcx
  unsigned int v10; // edx
  unsigned __int8 v11; // r10
  XLATEOBJ *v12; // r11
  unsigned __int8 *v13; // r8
  unsigned __int8 *v14; // rdx
  int v15; // r13d
  bool v16; // zf
  int v17; // ecx
  int v18; // r15d
  unsigned __int8 *v19; // r14
  unsigned __int8 *v20; // rdi
  int v21; // eax
  ULONG v22; // edx
  ULONG v23; // eax
  int v24; // eax
  char v25; // al
  unsigned int v26; // edx
  char v27; // al
  char v28; // al
  unsigned __int8 v29; // si
  char v30; // si
  ULONG v31; // eax
  __int16 v32; // ax
  unsigned __int8 v33; // al
  char v34; // cl
  int v35; // [rsp+20h] [rbp-38h]
  _DWORD v36[2]; // [rsp+28h] [rbp-30h]
  XLATEOBJ *v37; // [rsp+30h] [rbp-28h]
  unsigned __int8 *v38; // [rsp+38h] [rbp-20h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-18h]
  unsigned __int8 v40; // [rsp+A0h] [rbp+48h]
  __int16 v41; // [rsp+A8h] [rbp+50h]
  int v42; // [rsp+B0h] [rbp+58h]
  int v43; // [rsp+B8h] [rbp+60h]

  v1 = 0;
  v2 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  v35 = v2;
  v37 = *(XLATEOBJ **)a1;
  v40 = 0;
  v36[0] = -524255232;
  v36[1] = -16975632;
  v41 = -4096;
  if ( v5 )
    v6 = **(_DWORD **)(v5 + 112) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 8LL);
  else
    v6 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v8 = *((_DWORD *)a1 + 36);
  v9 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a1 + 14);
  v38 = started;
  v39 = StartPixel(v9, v10, v8);
  v13 = v39;
  if ( !v4 )
    return;
  v14 = v38;
  do
  {
    v15 = *((_DWORD *)a1 + 12);
    v16 = *((_DWORD *)a1 + 35) == 1;
    v17 = v2;
    v18 = *((_DWORD *)a1 + 14);
    v19 = v14;
    v43 = v4 - 1;
    v20 = v13;
    v42 = v17;
    if ( v16 )
    {
      if ( (v15 & 7) != 0 )
      {
        v11 = *v14 << (v15 & 7);
        v40 = v11;
      }
      else
      {
        v19 = v14 - 1;
      }
      v17 = v42;
    }
    v21 = *((_DWORD *)a1 + 36);
    if ( v21 == 1 )
    {
      v30 = *((_BYTE *)v36 + (v18 & 7));
    }
    else
    {
      if ( v21 != 2 )
        goto LABEL_11;
      v30 = *((_BYTE *)&v41 + (v18 & 1));
    }
    v1 = *v13 & v30;
LABEL_11:
    while ( 1 )
    {
      v42 = v17 - 1;
      if ( !v17 )
        break;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          if ( (v15 & 7) == 0 )
            v11 = *++v19;
          v22 = v11 >> 7;
          v40 = 2 * v11;
          goto LABEL_16;
        case 2:
          v26 = *v19;
          if ( (v15 & 1) != 0 )
          {
            v22 = v26 & 0xF;
            ++v19;
          }
          else
          {
            v22 = v26 >> 4;
          }
LABEL_16:
          LOBYTE(v15) = v15 + 1;
          break;
        case 3:
          v22 = *v19++;
          break;
        case 4:
          v22 = (unsigned __int16)(v6 & *(_WORD *)v19);
          v19 += 2;
          break;
        case 5:
          v22 = *v19 | (*(unsigned __int16 *)(v19 + 1) << 8);
          v19 += 3;
          break;
        case 6:
          v22 = *(_DWORD *)v19 & v6;
          v19 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v22 == *((_DWORD *)a1 + 37) )
          {
            v28 = (*v20 << (v18 & 7)) & 0x80;
          }
          else
          {
            v27 = XLATEOBJ_iXlate(v12, v22);
            v12 = v37;
            v28 = v27 << 7;
          }
          v29 = v28 | v1;
          if ( (++v18 & 7) != 0 )
          {
            v1 = v29 >> 1;
          }
          else
          {
            *v20++ = v29;
            v1 = 0;
          }
          break;
        case 2:
          if ( (v18 & 1) != 0 )
          {
            if ( v22 == *((_DWORD *)a1 + 37) )
              v25 = *v20 & 0xF;
            else
              v25 = XLATEOBJ_iXlate(v12, v22);
            v1 |= v25;
            *v20++ = v1;
          }
          else if ( v22 == *((_DWORD *)a1 + 37) )
          {
            v1 = *v20 & 0xF0;
          }
          else
          {
            v1 = 16 * XLATEOBJ_iXlate(v12, v22);
          }
          v12 = v37;
          ++v18;
          break;
        case 3:
          if ( v22 != *((_DWORD *)a1 + 37) )
          {
            v33 = XLATEOBJ_iXlate(v12, v22);
            v12 = v37;
            *v20 = v33;
          }
          ++v20;
          break;
        case 4:
          if ( v22 != *((_DWORD *)a1 + 37) )
          {
            v32 = XLATEOBJ_iXlate(v12, v22);
            v12 = v37;
            *(_WORD *)v20 = v32;
          }
          v20 += 2;
          break;
        case 5:
          if ( v22 != *((_DWORD *)a1 + 37) )
          {
            v31 = XLATEOBJ_iXlate(v12, v22);
            v12 = v37;
            *v20 = v31;
            v20[2] = BYTE2(v31);
            v20[1] = BYTE1(v31);
          }
          v20 += 3;
          break;
        case 6:
          if ( v22 != *((_DWORD *)a1 + 37) )
          {
            v23 = XLATEOBJ_iXlate(v12, v22);
            v12 = v37;
            *(_DWORD *)v20 = v23;
          }
          v20 += 4;
          break;
        default:
          return;
      }
      v11 = v40;
      v17 = v42;
    }
    v24 = *((_DWORD *)a1 + 36);
    if ( v24 == 1 )
    {
      if ( (v18 & 7) != 0 )
      {
        v34 = *((_BYTE *)v36 + (v18 & 7));
LABEL_72:
        *v20 = v1 & v34 | *v20 & ~v34;
      }
    }
    else if ( v24 == 2 && (v18 & 1) != 0 )
    {
      v34 = *((_BYTE *)&v41 + (v18 & 1));
      goto LABEL_72;
    }
    v14 = &v38[*((int *)a1 + 10)];
    v4 = v43;
    v13 = &v39[*((int *)a1 + 11)];
    v2 = v35;
    v38 = v14;
    v39 = v13;
  }
  while ( v43 );
}
