/*
 * XREFs of fsc_OverscaleToBold @ 0x1C02DF908
 * Callers:
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     EmboldenOverscaleConst @ 0x1C02DF63C (EmboldenOverscaleConst.c)
 *     FindNext @ 0x1C02DF710 (FindNext.c)
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
  char *v16; // r9
  char *v17; // rdi
  char v18; // r8
  unsigned __int8 v19; // r9
  unsigned __int16 v20; // r13
  char *v21; // r8
  _BYTE *v22; // r12
  BOOL v23; // r10d
  char *v24; // r11
  __int16 v25; // dx
  unsigned __int8 v26; // al
  unsigned __int16 v27; // si
  unsigned __int16 v28; // dx
  int v29; // edi
  int Next; // eax
  _BYTE *v31; // r10
  int v32; // ecx
  unsigned int v33; // eax
  unsigned __int8 v34; // dl
  unsigned __int16 v35; // r8
  unsigned __int16 v36; // bx
  unsigned __int8 *v37; // r12
  char **v38; // r13
  unsigned __int8 v39; // si
  char v40; // r11
  char v41; // r9
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  char *v44; // r11
  _BYTE *v45; // rdx
  unsigned __int64 v46; // r8
  _BYTE *v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int8 v50; // [rsp+40h] [rbp-C0h] BYREF
  char v51; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int16 v52; // [rsp+42h] [rbp-BEh]
  unsigned __int16 v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v55; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 v56; // [rsp+4Eh] [rbp-B2h]
  unsigned __int16 v57; // [rsp+50h] [rbp-B0h]
  char *v58; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v59; // [rsp+60h] [rbp-A0h]
  char *v60; // [rsp+68h] [rbp-98h]
  _BYTE *v61; // [rsp+70h] [rbp-90h]
  char *v62; // [rsp+78h] [rbp-88h]
  unsigned __int64 v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v65; // [rsp+90h] [rbp-70h]
  _QWORD v66[48]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v67[48]; // [rsp+220h] [rbp+120h] BYREF

  v3 = a3;
  v4 = *(_WORD *)(a2 + 2) - *(_WORD *)(a2 + 4);
  v65 = a3;
  v57 = v4;
  if ( a1 > 0x18u || v4 > 0x30u )
  {
    LOBYTE(v47) = EmboldenOverscaleConst((unsigned __int16 *)a2);
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
    v64 = v11;
    v63 = v13;
    v51 = 0;
    v53 = 0;
    if ( v4 )
    {
      v14 = v5;
      do
      {
        v15 = (_BYTE *)(v14 + v11 - 1);
        v61 = v15;
        v16 = &v51;
        v60 = &v51;
        if ( v14 + v13 - 1 >= v13 )
        {
          v17 = (char *)(v13 + v14 - 1);
          v62 = v17;
          do
          {
            while ( 1 )
            {
              v18 = *v17;
              if ( !*v17 || v18 == -1 && ((unsigned __int8)*v16 >> 7 == 1 || v16 == &v51) )
                break;
              v19 = byte_1C02F2C38[(unsigned __int8)(v18 & (((unsigned __int8)*v16 >> 7 == 0) | (2 * (~v18 & ~*v15))))
                                 + 280];
              if ( v19 == 8 )
                break;
              v54 = 0;
              v20 = 0;
              v52 = 0;
              v21 = v17;
              v22 = (_BYTE *)v13;
              v50 = v19;
              v58 = v17;
              v56 = v12;
              while ( 1 )
              {
                v23 = 0;
                v67[v20] = v19;
                v24 = v21;
                v66[v20] = v21;
                v25 = -1 - v19;
                v26 = *v21 & StartMask[v19 + 1];
                do
                {
                  if ( v25 >= 10 )
                    break;
                  if ( v21 <= &v22[v14 - 1] )
                  {
                    v23 = (unsigned __int8)byte_1C02F2C38[v26 + 24] < 8u;
                    ++v24;
                    v25 += (unsigned __int8)byte_1C02F2C38[v26 + 24];
                    v26 = *v24;
                  }
                  else
                  {
                    v25 = 10;
                  }
                }
                while ( !v23 );
                v4 = v57;
                v27 = v56;
                if ( v25 > 4 )
                  v28 = v25 < 10 ? v25 - 4 : 6;
                else
                  v28 = 0;
                v20 = v52 + 1;
                v29 = v28 + v54;
                ++v52;
                v54 = v29;
                Next = FindNext(v57, v55, v56, v22, v21, v19, &v58, &v50);
                v22 += v14;
                v56 = v27 + 1;
                if ( !Next )
                  break;
                v19 = v50;
                v21 = v58;
              }
              v13 = v63;
              v15 = v61;
              v16 = v60;
              v31 = v61;
              v32 = v20;
              v33 = v29 + (v20 >> 1);
              v17 = v62;
              v34 = v33 / v20;
              if ( v34 < 2u )
                v34 = 2;
              v59 = v14 + v63 - 1;
              v35 = 0;
              if ( v20 )
              {
                v36 = v52;
                v37 = v67;
                v38 = (char **)v66;
                v39 = EndMask[v34];
                do
                {
                  LODWORD(v42) = *v37;
                  v58 = *v38;
                  v54 = v42;
                  v40 = v39 >> (v42 + 1);
                  v41 = v39 << (7 - v42);
                  LOBYTE(v42) = 8;
                  if ( v40 )
                  {
                    v42 = (unsigned __int8)byte_1C02F2C38[(unsigned __int8)(*v31 & StartMask[v54 + 1]) + 24];
                    *v31 |= v40 & EndMask[v42];
                  }
                  v43 = v59;
                  v44 = v58;
                  if ( v41 && (_BYTE)v42 == 8 && (unsigned __int64)v58 < v59 )
                  {
                    v43 = v59;
                    v31[1] |= v41 & EndMask[(unsigned __int8)byte_1C02F2C38[(unsigned __int8)v31[1] + 24]];
                  }
                  if ( v35 < v32 - 1 )
                    v31 += v66[v35 + 1] - (_QWORD)v44;
                  ++v35;
                  v59 = v14 + v43;
                  ++v37;
                  ++v38;
                }
                while ( v35 < v36 );
                v4 = v57;
                v17 = v62;
                v13 = v63;
                v15 = v61;
                v16 = v60;
              }
              v12 = v53;
            }
            --v17;
            v60 = v15;
            v16 = v15;
            v62 = v17;
            v61 = --v15;
          }
          while ( (unsigned __int64)v17 >= v13 );
          v11 = v64;
        }
        v13 += v14;
        v11 += v14;
        ++v12;
        v63 = v13;
        v64 = v11;
        v53 = v12;
      }
      while ( v12 < v4 );
      v3 = v65;
    }
    v45 = (_BYTE *)*((_QWORD *)v3 + 5);
    v46 = 0LL;
    v47 = &v45[*v3 * v4];
    v48 = *v3 * v4;
    if ( v45 > v47 )
      v48 = 0LL;
    if ( v48 )
    {
      do
      {
        *v45 = 0;
        ++v46;
        ++v45;
      }
      while ( v46 < v48 );
    }
  }
  return (char)v47;
}
