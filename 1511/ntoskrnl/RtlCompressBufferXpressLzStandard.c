/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1400C2250
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1400C21E0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x140119A9C (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140119880 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 v9; // r15
  unsigned __int8 *v10; // rbp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned int v14; // edi
  unsigned __int8 *v15; // rbx
  unsigned __int64 v16; // r12
  int v17; // esi
  _BYTE *v18; // r14
  int *v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned __int8 *v22; // r8
  unsigned __int8 v23; // dl
  unsigned __int8 *v24; // r11
  unsigned __int8 v25; // r10
  unsigned __int8 v26; // r13
  char *v27; // r10
  unsigned __int8 v28; // r12
  unsigned __int8 v29; // r13
  unsigned __int64 v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rbp
  unsigned __int8 *v33; // rdi
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int8 *v36; // rcx
  __int64 v37; // rdx
  unsigned __int8 *v38; // rcx
  unsigned __int8 v39; // al
  int *v40; // rcx
  int v41; // eax
  unsigned __int64 v42; // rcx
  unsigned int v43; // r14d
  unsigned __int64 v45; // rcx
  char v46; // al
  int v47; // eax
  __int64 XpressCallback; // rax
  unsigned __int64 v49; // [rsp+20h] [rbp-88h]
  int *v50; // [rsp+28h] [rbp-80h]
  _BYTE *v51; // [rsp+30h] [rbp-78h]
  unsigned __int64 v52; // [rsp+38h] [rbp-70h]
  unsigned __int64 v53; // [rsp+40h] [rbp-68h]
  unsigned __int64 v54; // [rsp+48h] [rbp-60h]
  _QWORD v55[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v56; // [rsp+60h] [rbp-48h]
  unsigned __int64 v57; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v58; // [rsp+B8h] [rbp+10h]
  int v59; // [rsp+C0h] [rbp+18h]

  v59 = a3;
  v9 = a3;
  v10 = &a1[a2];
  v11 = a3 + a4;
  v53 = (unsigned __int64)v10;
  v54 = v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v12 = (unsigned __int64)(v10 - 38);
  v13 = v11 - 41;
  v52 = (unsigned __int64)(v10 - 38);
  v49 = v11 - 41;
  v51 = 0LL;
  if ( !a7 || (v14 = a9, a9 > a2) )
    v14 = a2;
  v15 = a1 + 1;
  v16 = (unsigned __int64)&a1[v14];
  v55[1] = a8;
  *(_BYTE *)(v9 + 4) = *a1;
  v17 = 2;
  if ( v12 < v16 )
    v16 = (unsigned __int64)(v10 - 38);
  v55[0] = a7;
  v18 = (_BYTE *)(v9 + 5);
  v57 = v16;
  v56 = v14;
  v19 = (int *)v9;
  v50 = (int *)v9;
  if ( a2 >= 0x40 )
  {
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = a6 + 8LL * *v15;
        v21 = v15[2] + 4 * v15[1];
        v22 = *(unsigned __int8 **)(v20 + 16 * v21);
        *(_QWORD *)(v20 + 16 * v21) = v15;
        if ( *(_WORD *)v22 == *(_WORD *)v15 && v22[2] == v15[2] && v15 - v22 < 0x2000 )
          break;
        *v18++ = *v15++;
        if ( v17 <= 0 )
        {
          v50 = (int *)v18;
          *v19 = 2 * v17;
          v17 = 1;
          v19 = (int *)v18;
          v18 += 4;
          if ( (unsigned __int64)v15 >= v16 )
          {
            if ( (unsigned __int64)v15 >= v12 )
            {
LABEL_82:
              v19 = v50;
              v10 = (unsigned __int8 *)v53;
              v11 = v54;
              LODWORD(v9) = v59;
              goto LABEL_83;
            }
            XpressCallback = RtlpMakeXpressCallback(v55, v12, v15, v12);
            v12 = v52;
            v16 = XpressCallback;
            v19 = v50;
            v57 = XpressCallback;
          }
          if ( (unsigned __int64)v18 >= v13 )
            goto LABEL_82;
        }
        else
        {
          v17 *= 2;
        }
      }
      v23 = v22[3];
      v24 = v15;
      v25 = v15[3];
      if ( v25 != v23 )
      {
        v32 = *v15 + 2 * v21;
        v33 = *(unsigned __int8 **)(a6 + 8 * (v32 + v25) + 22448);
        *(_QWORD *)(a6 + 8 * (v32 + v23) + 22448) = v22;
        if ( v15 - v33 >= 0x2000 || *(_DWORD *)v15 != *(_DWORD *)v33 )
          goto LABEL_47;
        v22 = v33;
        *(_QWORD *)(a6 + 8 * (v32 + v15[3]) + 22448) = v15;
      }
      v26 = v15[4];
      v27 = (char *)(v15 + 4);
      v28 = v22[4];
      if ( v26 != v28 )
      {
        v35 = 2
            * ((unsigned __int8)__ROR1__(v15[1] ^ __ROL1__(v15[3] + *v15, 3), 1)
             + 4 * (unsigned __int8)__ROL1__(*v15 ^ __ROR1__(v15[1] + v15[2] + 97, 1), 3));
        v36 = *(unsigned __int8 **)(a6 + 8 * (v35 + v26) + 22448);
        *(_QWORD *)(a6 + 8 * (v35 + v28) + 22448) = v22;
        if ( v15 - v36 >= 0x2000 || *(_DWORD *)v15 != *(_DWORD *)v36 || *v27 != v36[4] || v15 == v36 )
        {
          v15 += 4;
          LOWORD(v22) = (_WORD)v22 + 4;
          goto LABEL_37;
        }
        v22 = v36;
        *(_QWORD *)(a6 + 8 * (v35 + (unsigned __int8)*v27) + 22448) = v15;
      }
      v29 = v22[5];
      v58 = v15[5];
      if ( v58 != v29 )
      {
        v37 = 2
            * ((v15[2] ^ (unsigned __int8)__ROL1__(*v15, *v27))
             + 4
             * ((unsigned __int8)__ROR1__(v15[1] ^ __ROL1__(v15[3], 3), 1)
              + (unsigned __int8)__ROL1__(*v27 ^ (__ROR1__(*v15, 1) + 69), 3)));
        v38 = *(unsigned __int8 **)(a6 + 8 * (v37 + v58) + 22448);
        *(_QWORD *)(a6 + 8 * (v37 + v29) + 22448) = v22;
        if ( v15 - v38 >= 0x2000
          || *(_DWORD *)v15 != *(_DWORD *)v38
          || *v27 != v38[4]
          || (v39 = v15[5], v39 != v38[5])
          || v15 == v38 )
        {
          v15 += 5;
          LOWORD(v22) = (_WORD)v22 + 5;
          goto LABEL_37;
        }
        v22 = v38;
        *(_QWORD *)(a6 + 8 * (v37 + v39) + 22448) = v15;
      }
      v15 += 6;
      v22 += 6;
      if ( (unsigned __int64)v15 >= v52 )
      {
LABEL_27:
        while ( (unsigned __int64)v15 < v53 )
        {
          if ( *v15 != *v22 )
            break;
          ++v15;
          ++v22;
        }
        goto LABEL_37;
      }
      while ( *(_DWORD *)v15 == *(_DWORD *)v22 )
      {
        if ( *((_DWORD *)v15 + 1) != *((_DWORD *)v22 + 1) )
        {
          v15 += 4;
          v22 += 4;
          break;
        }
        if ( *((_DWORD *)v15 + 2) != *((_DWORD *)v22 + 2) )
        {
          v15 += 8;
          v22 += 8;
          break;
        }
        if ( *((_DWORD *)v15 + 3) != *((_DWORD *)v22 + 3) )
        {
          v15 += 12;
          v22 += 12;
          break;
        }
        if ( *((_DWORD *)v15 + 4) != *((_DWORD *)v22 + 4) )
        {
          v15 += 16;
          v22 += 16;
          break;
        }
        if ( *((_DWORD *)v15 + 5) != *((_DWORD *)v22 + 5) )
        {
          v15 += 20;
          v22 += 20;
          break;
        }
        if ( *((_DWORD *)v15 + 6) != *((_DWORD *)v22 + 6) )
        {
          v15 += 24;
          v22 += 24;
          break;
        }
        if ( *((_DWORD *)v15 + 7) != *((_DWORD *)v22 + 7) )
        {
          v15 += 28;
          v22 += 28;
          break;
        }
        v15 += 32;
        v22 += 32;
        if ( (unsigned __int64)v15 >= v52 )
          goto LABEL_27;
      }
      if ( *v15 != *v22 )
        goto LABEL_37;
      if ( v15[1] != v22[1] )
      {
        ++v15;
        LOWORD(v22) = (_WORD)v22 + 1;
LABEL_37:
        v13 = v49;
        v16 = v57;
        goto LABEL_38;
      }
      v16 = v57;
      v13 = v49;
      if ( v15[2] != v22[2] )
      {
        v15 += 2;
        LOWORD(v22) = (_WORD)v22 + 2;
        goto LABEL_38;
      }
LABEL_47:
      v15 += 3;
      LOWORD(v22) = (_WORD)v22 + 3;
LABEL_38:
      v30 = v15 - v24 - 3;
      v31 = 8 * ((_WORD)v15 - (_WORD)v22) - 8;
      if ( v30 >= 7 )
      {
        v34 = v15 - v24 - 10;
        *(_WORD *)v18 = v31 | 7;
        v18 += 2;
        if ( v51 )
        {
          if ( v34 >= 0xF )
          {
            *v51 |= 0xF0u;
            v51 = 0LL;
LABEL_73:
            v42 = v15 - v24 - 25;
            if ( v42 >= 0xFF )
            {
              v45 = v42 + 22;
              *v18 = -1;
              if ( v45 >= 0x10000 )
              {
                *(_WORD *)(v18 + 1) = 0;
                *(_DWORD *)(v18 + 3) = v45;
                v18 += 7;
              }
              else
              {
                *(_WORD *)(v18 + 1) = v45;
                v18 += 3;
              }
            }
            else
            {
              *v18++ = v42;
            }
            goto LABEL_40;
          }
          *v51 |= 16 * (_BYTE)v34;
          v51 = 0LL;
        }
        else
        {
          v51 = v18;
          if ( v34 >= 0xF )
          {
            *v18++ = 15;
            goto LABEL_73;
          }
          *v18++ = v34;
        }
      }
      else
      {
        *(_WORD *)v18 = v31 + v30;
        v18 += 2;
      }
LABEL_40:
      if ( v17 <= 0 )
      {
        v40 = v50;
        v41 = 2 * v17 + 1;
        v50 = (int *)v18;
        v17 = 1;
        v18 += 4;
        *v40 = v41;
      }
      else
      {
        v17 = 2 * v17 + 1;
      }
      if ( (unsigned __int64)v15 >= v16 )
      {
        if ( (unsigned __int64)v15 >= v52 )
          goto LABEL_82;
        v16 = RtlpMakeXpressCallback(v55, v52, v15, v12);
        v57 = v16;
      }
      if ( (unsigned __int64)v18 >= v13 )
        goto LABEL_82;
      v12 = v52;
      v19 = v50;
    }
  }
LABEL_83:
  if ( v15 < v10 )
  {
    while ( (unsigned __int64)v18 < v11 )
    {
      v46 = *v15++;
      *v18++ = v46;
      if ( v17 <= 0 )
      {
        v47 = 2 * v17;
        v17 = 1;
        *v19 = v47;
        v19 = (int *)v18;
        v18 += 4;
      }
      else
      {
        v17 *= 2;
      }
      if ( v15 >= v10 )
        goto LABEL_84;
    }
    return 3221225507LL;
  }
LABEL_84:
  if ( (unsigned __int64)v18 >= v11 )
    return 3221225507LL;
  for ( ; v17 > 0; v17 = 2 * v17 + 1 )
    ;
  v43 = (_DWORD)v18 - v9;
  *v19 = 2 * v17 + 1;
  *a5 = v43;
  if ( v43 < 8 )
    *a5 = 8;
  return 0LL;
}
