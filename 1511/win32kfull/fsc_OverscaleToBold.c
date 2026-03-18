/*
 * XREFs of fsc_OverscaleToBold @ 0x1C02DC368
 * Callers:
 *     fs_ContourScan @ 0x1C00A9410 (fs_ContourScan.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     EmboldenOverscaleConst @ 0x1C02DC0A8 (EmboldenOverscaleConst.c)
 *     FindNext @ 0x1C02DC17C (FindNext.c)
 */

char __fastcall fsc_OverscaleToBold(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // r13
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // r8
  __int64 v11; // r11
  unsigned __int16 v12; // r10
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  _BYTE *v15; // r15
  char *v16; // r12
  char *v17; // rdi
  char v18; // r8
  unsigned __int8 v19; // r9
  char *v20; // r8
  int v21; // edi
  unsigned __int16 v22; // r13
  _BYTE *v23; // r12
  BOOL v24; // r10d
  char *v25; // r11
  __int16 v26; // dx
  unsigned __int8 v27; // cl
  signed __int16 v28; // cx
  unsigned __int16 v29; // si
  unsigned __int16 v30; // dx
  int Next; // eax
  _BYTE *v32; // r10
  int v33; // ecx
  unsigned __int16 v34; // r9
  unsigned int v35; // eax
  unsigned __int8 v36; // dl
  char *v37; // rbx
  unsigned __int8 *v38; // r13
  unsigned __int16 v39; // si
  char **v40; // r8
  unsigned __int8 v41; // di
  char *v42; // rdx
  char v43; // r12
  char v44; // r11
  __int64 v45; // rax
  _BYTE *v46; // rdx
  unsigned __int64 v47; // r8
  _BYTE *v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int8 v51; // [rsp+40h] [rbp-C0h] BYREF
  char v52; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int16 v53; // [rsp+42h] [rbp-BEh]
  unsigned __int16 v54; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v55; // [rsp+46h] [rbp-BAh]
  unsigned __int16 v56; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v57; // [rsp+4Ah] [rbp-B6h]
  char *v58; // [rsp+50h] [rbp-B0h] BYREF
  char *v59; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v60; // [rsp+60h] [rbp-A0h]
  char *v61; // [rsp+68h] [rbp-98h]
  _BYTE *v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  _QWORD v66[48]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v67[48]; // [rsp+210h] [rbp+110h] BYREF

  v3 = a3;
  v4 = *(_WORD *)(a2 + 2) - *(_WORD *)(a2 + 4);
  v64 = a3;
  v56 = v4;
  if ( a1 > 0x18u || v4 > 0x30u )
  {
    LOBYTE(v48) = EmboldenOverscaleConst((unsigned __int16 *)a2);
  }
  else
  {
    v5 = *(_WORD *)a2;
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *((_QWORD *)a3 + 5);
    v55 = *(_WORD *)a2;
    if ( v4 )
    {
      v8 = v4;
      do
      {
        v9 = v5;
        if ( v6 > v5 + v6 )
          v9 = 0LL;
        if ( v9 )
        {
          for ( i = 0LL; i < v9; ++i )
            *(_BYTE *)(i + v7) = *(_BYTE *)(i + v6);
        }
        v7 += v5;
        v6 += v5;
        --v8;
      }
      while ( v8 );
      v5 = v55;
    }
    v11 = *(_QWORD *)(a2 + 40);
    v12 = 0;
    v13 = *((_QWORD *)v3 + 5);
    v63 = v11;
    v60 = v13;
    v52 = 0;
    v54 = 0;
    if ( v4 )
    {
      v14 = v5;
      v65 = 8LL;
      do
      {
        v15 = (_BYTE *)(v14 + v11 - 1);
        v62 = v15;
        v16 = &v52;
        v59 = &v52;
        if ( v14 + v13 - 1 >= v13 )
        {
          v17 = (char *)(v13 + v14 - 1);
          v61 = v17;
          do
          {
            while ( 1 )
            {
              v18 = *v17;
              if ( !*v17 || v18 == -1 && ((unsigned __int8)*v16 >> 7 == 1 || v16 == &v52) )
                break;
              v19 = byte_1C02ED5F8[(unsigned __int8)(v18 & (((unsigned __int8)*v16 >> 7 == 0) | (2 * (~v18 & ~*v15))))
                                 + 280];
              if ( v19 == 8 )
                break;
              v20 = v17;
              v58 = v17;
              v21 = 0;
              v53 = 0;
              v22 = 0;
              v51 = v19;
              v57 = v12;
              v23 = (_BYTE *)v13;
              while ( 1 )
              {
                v24 = 0;
                v25 = v20;
                v67[v22] = v19;
                v66[v22] = v20;
                v26 = -1 - v19;
                v27 = *v20 & StartMask[v19 + 1];
                do
                {
                  if ( v26 >= 10 )
                    break;
                  if ( v20 <= &v23[v14 - 1] )
                  {
                    v28 = (unsigned __int8)byte_1C02ED5F8[v27 + 24];
                    v24 = v28 < (signed __int16)v65;
                    v26 += v28;
                    v27 = *++v25;
                  }
                  else
                  {
                    v26 = 10;
                  }
                }
                while ( !v24 );
                v4 = v56;
                v29 = v57;
                if ( v26 > 4 )
                  v30 = v26 < 10 ? v26 - 4 : 6;
                else
                  v30 = 0;
                v22 = v53 + 1;
                v21 += v30;
                ++v53;
                Next = FindNext(v56, v55, v57, v23, v20, v19, &v58, &v51);
                v23 += v14;
                v57 = v29 + 1;
                if ( !Next )
                  break;
                v19 = v51;
                v20 = v58;
              }
              v13 = v60;
              v15 = v62;
              v16 = v59;
              v32 = v62;
              v33 = v22;
              v34 = 0;
              v35 = v21 + (v22 >> 1);
              v17 = v61;
              v36 = v35 / v22;
              if ( v36 < 2u )
                v36 = 2;
              v58 = (char *)(v14 + v60 - 1);
              if ( v22 )
              {
                v37 = v58;
                v38 = v67;
                v39 = v53;
                v40 = (char **)v66;
                v41 = EndMask[v36];
                do
                {
                  v42 = *v40;
                  v51 = *v38;
                  v58 = v42;
                  v43 = v41 >> (v51 + 1);
                  v44 = v41 << (7 - v51);
                  LOBYTE(v45) = 8;
                  if ( v43 )
                  {
                    v45 = (unsigned __int8)byte_1C02ED5F8[(unsigned __int8)(*v32 & StartMask[v51 + 1]) + 24];
                    v42 = v58;
                    *v32 |= v43 & EndMask[v45];
                  }
                  if ( v44 && (_BYTE)v45 == 8 && v42 < v37 )
                    v32[1] |= v44 & EndMask[(unsigned __int8)byte_1C02ED5F8[(unsigned __int8)v32[1] + 24]];
                  if ( v34 < v33 - 1 )
                    v32 += v40[1] - v58;
                  v37 += v14;
                  ++v34;
                  ++v38;
                  ++v40;
                }
                while ( v34 < v39 );
                v4 = v56;
                v17 = v61;
                v13 = v60;
                v15 = v62;
                v12 = v54;
                v16 = v59;
              }
              else
              {
                v12 = v54;
              }
            }
            v59 = v15;
            --v17;
            v16 = v15;
            v61 = v17;
            v62 = --v15;
          }
          while ( (unsigned __int64)v17 >= v13 );
          v11 = v63;
        }
        v13 += v14;
        v11 += v14;
        v60 = v13;
        ++v12;
        v63 = v11;
        v54 = v12;
      }
      while ( v12 < v4 );
      v3 = v64;
    }
    v46 = (_BYTE *)*((_QWORD *)v3 + 5);
    v47 = 0LL;
    v48 = &v46[*v3 * v4];
    v49 = *v3 * v4;
    if ( v46 > v48 )
      v49 = 0LL;
    if ( v49 )
    {
      do
      {
        *v46 = 0;
        ++v47;
        ++v46;
      }
      while ( v47 < v49 );
    }
  }
  return (char)v48;
}
