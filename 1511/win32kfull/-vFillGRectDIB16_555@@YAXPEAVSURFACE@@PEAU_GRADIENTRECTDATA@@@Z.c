/*
 * XREFs of ?vFillGRectDIB16_555@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02C9F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_555(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // r11
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // r10
  int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // r8
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  _WORD *v22; // r13
  unsigned __int64 v23; // rdi
  int v24; // r14d
  __int64 v25; // r8
  int v26; // r10d
  unsigned __int64 v27; // r8
  __int16 v28; // r9
  unsigned __int64 v29; // r8
  __int16 v30; // r9
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+8h] [rbp-C0h]
  char v34; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-B0h]
  __int64 v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+28h] [rbp-A0h]
  __int64 v38; // [rsp+30h] [rbp-98h]
  __int64 v39; // [rsp+38h] [rbp-90h]
  __int64 v40; // [rsp+48h] [rbp-80h]
  __int64 v41; // [rsp+50h] [rbp-78h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+70h] [rbp-58h]
  int v45; // [rsp+D0h] [rbp+8h]
  int v47; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = *((int *)a1 + 22);
  v4 = *((_DWORD *)v2 + 9);
  v5 = *((_QWORD *)v2 + 14);
  v6 = v4 + *((_DWORD *)v2 + 11);
  v7 = *((_QWORD *)v2 + 15);
  v8 = *((_QWORD *)v2 + 10);
  v9 = *((_QWORD *)v2 + 6);
  v10 = *((_QWORD *)v2 + 7);
  v11 = *((_QWORD *)v2 + 8);
  v45 = v4;
  v47 = v6;
  v37 = v5;
  v36 = v7;
  v12 = *((_QWORD *)a1 + 10) + (int)v3 * v4;
  v39 = *((_QWORD *)v2 + 16);
  v13 = *((int *)v2 + 45);
  v38 = v12;
  v40 = v8;
  v41 = *((_QWORD *)v2 + 11);
  v43 = *((_QWORD *)v2 + 12);
  v32 = v9;
  v33 = v10;
  v35 = v11;
  if ( (_DWORD)v13 )
  {
    v9 += v8 * v13;
    v10 += *((_QWORD *)v2 + 11) * v13;
    v32 = v9;
    v33 = v10;
    v11 += *((_QWORD *)v2 + 12) * v13;
    v35 = v11;
  }
  v14 = *((_DWORD *)v2 + 37);
  v34 = v14;
  if ( v4 < v6 )
  {
    v44 = v3;
    do
    {
      v15 = *((int *)v2 + 44);
      v16 = ((_BYTE)v14 + (_BYTE)v4) & 3;
      v17 = v9;
      v18 = v10;
      v42 = 0x1C0000000LL + 16LL * v16 + 3282080;
      v19 = v11;
      if ( (_DWORD)v15 )
      {
        v17 = v9 + v5 * v15;
        v18 = v10 + v7 * v15;
        v19 = v11 + v39 * v15;
      }
      v20 = *((int *)v2 + 8);
      v21 = (unsigned __int64)(2LL * *((int *)v2 + 10) + 1) >> 1;
      if ( v12 + 2 * v20 > (unsigned __int64)(v12 + 2 * v20 + 2LL * *((int *)v2 + 10)) )
        v21 = 0LL;
      if ( v21 )
      {
        v22 = (_WORD *)(v12 + 2 * v20);
        v23 = 0LL;
        v24 = v20 + *((_DWORD *)v2 + 36);
        do
        {
          ++v23;
          v25 = v24++ & 3;
          v26 = *(_DWORD *)(v42 + 4 * v25);
          v27 = HIDWORD(v17);
          v17 += v37;
          v28 = Saturation16_5[(unsigned __int64)(v26 + ((unsigned int)v27 >> 3)) >> 16];
          v29 = HIDWORD(v18);
          v18 += v36;
          v30 = Saturation16_5[(unsigned __int64)(v26 + ((unsigned int)v29 >> 3)) >> 16] | (unsigned __int16)(32 * v28);
          v31 = HIDWORD(v19);
          v19 += v39;
          *v22++ = Saturation16_5[(unsigned __int64)(v26 + ((unsigned int)v31 >> 3)) >> 16] | (unsigned __int16)(32 * v30);
        }
        while ( v23 < v21 );
        v2 = a2;
        v4 = v45;
        v9 = v32;
        v10 = v33;
        v11 = v35;
        v12 = v38;
        v6 = v47;
        v8 = v40;
      }
      v10 += v41;
      v11 += v43;
      v9 += v8;
      v12 += v44;
      ++v4;
      LOBYTE(v14) = v34;
      v5 = v37;
      v7 = v36;
      v32 = v9;
      v33 = v10;
      v35 = v11;
      v45 = v4;
      v38 = v12;
    }
    while ( v4 < v6 );
  }
}
