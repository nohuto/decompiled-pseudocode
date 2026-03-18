/*
 * XREFs of ?vFillGRectDIB16_565@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CD3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_565(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // r11
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // r14
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r9d
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  _WORD *v22; // r13
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  int v25; // r15d
  __int64 v26; // r8
  int v27; // r10d
  unsigned __int64 v28; // r8
  __int16 v29; // r9
  unsigned __int64 v30; // r8
  __int16 v31; // r9
  unsigned __int64 v32; // r8
  char v33; // [rsp+0h] [rbp-B8h]
  int v34; // [rsp+4h] [rbp-B4h]
  unsigned __int64 v35; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+18h] [rbp-A0h]
  __int64 v38; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+48h] [rbp-70h]
  __int64 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  int v47; // [rsp+C0h] [rbp+8h]
  int v49; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v3 = *((int *)a1 + 22);
  v4 = *((_DWORD *)v2 + 9);
  v5 = *((_QWORD *)v2 + 14);
  v6 = v4 + *((_DWORD *)v2 + 11);
  v7 = *((_QWORD *)v2 + 15);
  v8 = *((_QWORD *)v2 + 12);
  v9 = *((_QWORD *)v2 + 6);
  v10 = *((_QWORD *)v2 + 7);
  v11 = *((_QWORD *)v2 + 8);
  v47 = v4;
  v49 = v6;
  v40 = v5;
  v41 = v7;
  v12 = *((_QWORD *)a1 + 10) + (int)v3 * v4;
  v38 = *((_QWORD *)v2 + 16);
  v13 = *((int *)v2 + 45);
  v39 = v12;
  v44 = *((_QWORD *)v2 + 10);
  v45 = *((_QWORD *)v2 + 11);
  v43 = v8;
  v35 = v9;
  v36 = v10;
  v37 = v11;
  if ( (_DWORD)v13 )
  {
    v9 += *((_QWORD *)v2 + 10) * v13;
    v10 += *((_QWORD *)v2 + 11) * v13;
    v35 = v9;
    v36 = v10;
    v11 += v8 * v13;
    v37 = v11;
  }
  v14 = *((_DWORD *)v2 + 37);
  v15 = *((_DWORD *)v2 + 36);
  v33 = v14;
  v34 = v15;
  if ( v4 < v6 )
  {
    v46 = v3;
    do
    {
      v16 = *((int *)v2 + 44);
      v17 = ((_BYTE)v14 + (_BYTE)v4) & 3;
      v18 = v9;
      v19 = v10;
      v42 = 0x1C0000000LL + 16LL * v17 + 3302752;
      v20 = v11;
      if ( (_DWORD)v16 )
      {
        v18 = v9 + v5 * v16;
        v19 = v10 + v7 * v16;
        v20 = v11 + v38 * v16;
      }
      v21 = *((int *)v2 + 8);
      v22 = (_WORD *)(v12 + 2 * v21);
      v23 = (unsigned __int64)(2LL * *((int *)v2 + 10) + 1) >> 1;
      if ( v22 > &v22[*((int *)v2 + 10)] )
        v23 = 0LL;
      if ( v23 )
      {
        v24 = 0LL;
        v25 = v21 + v15;
        do
        {
          ++v24;
          v26 = v25++ & 3;
          v27 = *(_DWORD *)(v42 + 4 * v26);
          v28 = HIDWORD(v18);
          v18 += v40;
          v29 = Saturation16_5[(unsigned __int64)(v27 + ((unsigned int)v28 >> 3)) >> 16];
          v30 = HIDWORD(v19);
          v19 += v41;
          v31 = Saturation16_6[(unsigned __int64)(v27 + ((unsigned int)v30 >> 2)) >> 16] | (unsigned __int16)(v29 << 6);
          v32 = HIDWORD(v20);
          v20 += v38;
          *v22++ = Saturation16_5[(unsigned __int64)(v27 + ((unsigned int)v32 >> 3)) >> 16] | (unsigned __int16)(32 * v31);
        }
        while ( v24 < v23 );
        v2 = a2;
        v4 = v47;
        v9 = v35;
        v10 = v36;
        v11 = v37;
        v12 = v39;
        v6 = v49;
        v8 = v43;
      }
      v9 += v44;
      v10 += v45;
      v11 += v8;
      v12 += v46;
      ++v4;
      LOBYTE(v14) = v33;
      v5 = v40;
      v7 = v41;
      v15 = v34;
      v35 = v9;
      v36 = v10;
      v37 = v11;
      v47 = v4;
      v39 = v12;
    }
    while ( v4 < v6 );
  }
}
