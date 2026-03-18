/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1400F79B0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1400F7948 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x14014DA30 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14014E56C (RtlpMakeXpressCallback.c)
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
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r12
  unsigned int v15; // ecx
  unsigned __int8 *v16; // rbx
  unsigned __int64 v17; // r13
  int v18; // esi
  _BYTE *v19; // r14
  int *v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int8 *v23; // r8
  unsigned __int8 v24; // dl
  unsigned __int8 *v25; // r11
  unsigned __int8 v26; // r10
  unsigned __int8 v27; // r13
  char *v28; // r10
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // r13
  unsigned __int64 v31; // rcx
  __int16 v32; // ax
  __int64 v33; // rbp
  unsigned __int8 *v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int8 *v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 *v39; // rcx
  unsigned __int8 v40; // al
  int *v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // rcx
  char v44; // al
  unsigned int v45; // r14d
  unsigned __int64 v47; // rcx
  int v48; // eax
  __int64 XpressCallback; // rax
  unsigned __int64 v50; // [rsp+20h] [rbp-88h]
  int *v51; // [rsp+28h] [rbp-80h]
  _BYTE *v52; // [rsp+30h] [rbp-78h]
  unsigned __int64 v53; // [rsp+38h] [rbp-70h]
  unsigned __int64 v54; // [rsp+40h] [rbp-68h]
  unsigned __int64 v55; // [rsp+48h] [rbp-60h]
  _QWORD v56[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-48h]
  unsigned __int64 v58; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v59; // [rsp+B8h] [rbp+10h]
  int v60; // [rsp+C0h] [rbp+18h]

  v60 = a3;
  v9 = a3;
  v10 = &a1[a2];
  v11 = a3 + a4;
  v54 = (unsigned __int64)v10;
  v55 = v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = (unsigned __int64)(v10 - 38);
  v14 = v11 - 41;
  v53 = (unsigned __int64)(v10 - 38);
  v50 = v11 - 41;
  v52 = 0LL;
  if ( !a7 || (v15 = a9, a9 > a2) )
    v15 = a2;
  v16 = a1 + 1;
  v17 = (unsigned __int64)&a1[v15];
  v56[1] = a8;
  *(_BYTE *)(v9 + 4) = *a1;
  v18 = 2;
  if ( v13 < v17 )
    v17 = (unsigned __int64)(v10 - 38);
  v56[0] = a7;
  v19 = (_BYTE *)(v9 + 5);
  v58 = v17;
  v57 = v15;
  v20 = (int *)v9;
  v51 = (int *)v9;
  if ( a2 >= 0x40 )
  {
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = a6 + 8LL * *v16;
        v22 = v16[2] + 4 * v16[1];
        v23 = *(unsigned __int8 **)(v21 + 16 * v22);
        *(_QWORD *)(v21 + 16 * v22) = v16;
        if ( *(_WORD *)v23 == *(_WORD *)v16 && v23[2] == v16[2] && v16 - v23 < 0x2000 )
          break;
        *v19++ = *v16++;
        if ( v18 <= 0 )
        {
          v51 = (int *)v19;
          *v20 = 2 * v18;
          v18 = 1;
          v20 = (int *)v19;
          v19 += 4;
          if ( (unsigned __int64)v16 >= v17 )
          {
            if ( (unsigned __int64)v16 >= v13 )
            {
LABEL_82:
              v20 = v51;
              v10 = (unsigned __int8 *)v54;
              v11 = v55;
              LODWORD(v9) = v60;
              goto LABEL_83;
            }
            XpressCallback = RtlpMakeXpressCallback(v56, v13, v16, v13);
            v13 = v53;
            v17 = XpressCallback;
            v20 = v51;
            v58 = XpressCallback;
          }
          if ( (unsigned __int64)v19 >= v14 )
            goto LABEL_82;
        }
        else
        {
          v18 *= 2;
        }
      }
      v24 = v23[3];
      v25 = v16;
      v26 = v16[3];
      if ( v26 != v24 )
      {
        v33 = *v16 + 2 * v22;
        v34 = *(unsigned __int8 **)(a6 + 8 * (v33 + v26) + 22448);
        *(_QWORD *)(a6 + 8 * (v33 + v24) + 22448) = v23;
        if ( v16 - v34 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v34 )
          goto LABEL_47;
        v23 = v34;
        *(_QWORD *)(a6 + 8 * (v33 + v16[3]) + 22448) = v16;
      }
      v27 = v16[4];
      v28 = (char *)(v16 + 4);
      v29 = v23[4];
      if ( v27 != v29 )
      {
        v36 = 2
            * ((unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(v16[3] + *v16, 3), 1)
             + 4 * (unsigned __int8)__ROL1__(*v16 ^ __ROR1__(v16[1] + v16[2] + 97, 1), 3));
        v37 = *(unsigned __int8 **)(a6 + 8 * (v36 + v27) + 22448);
        *(_QWORD *)(a6 + 8 * (v36 + v29) + 22448) = v23;
        if ( v16 - v37 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v37 || *v28 != v37[4] || v16 == v37 )
        {
          v16 += 4;
          LOWORD(v23) = (_WORD)v23 + 4;
          goto LABEL_37;
        }
        v23 = v37;
        *(_QWORD *)(a6 + 8 * (v36 + (unsigned __int8)*v28) + 22448) = v16;
      }
      v30 = v23[5];
      v59 = v16[5];
      if ( v59 != v30 )
      {
        v38 = 2
            * ((v16[2] ^ (unsigned __int8)__ROL1__(*v16, *v28))
             + 4
             * ((unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(v16[3], 3), 1)
              + (unsigned __int8)__ROL1__(*v28 ^ (__ROR1__(*v16, 1) + 69), 3)));
        v39 = *(unsigned __int8 **)(a6 + 8 * (v38 + v59) + 22448);
        *(_QWORD *)(a6 + 8 * (v38 + v30) + 22448) = v23;
        if ( v16 - v39 >= 0x2000
          || *(_DWORD *)v16 != *(_DWORD *)v39
          || *v28 != v39[4]
          || (v40 = v16[5], v40 != v39[5])
          || v16 == v39 )
        {
          v16 += 5;
          LOWORD(v23) = (_WORD)v23 + 5;
          goto LABEL_37;
        }
        v23 = v39;
        *(_QWORD *)(a6 + 8 * (v38 + v40) + 22448) = v16;
      }
      v16 += 6;
      v23 += 6;
      if ( (unsigned __int64)v16 >= v53 )
      {
LABEL_27:
        while ( (unsigned __int64)v16 < v54 )
        {
          if ( *v16 != *v23 )
            break;
          ++v16;
          ++v23;
        }
        goto LABEL_37;
      }
      while ( *(_DWORD *)v16 == *(_DWORD *)v23 )
      {
        if ( *((_DWORD *)v16 + 1) != *((_DWORD *)v23 + 1) )
        {
          v16 += 4;
          v23 += 4;
          break;
        }
        if ( *((_DWORD *)v16 + 2) != *((_DWORD *)v23 + 2) )
        {
          v16 += 8;
          v23 += 8;
          break;
        }
        if ( *((_DWORD *)v16 + 3) != *((_DWORD *)v23 + 3) )
        {
          v16 += 12;
          v23 += 12;
          break;
        }
        if ( *((_DWORD *)v16 + 4) != *((_DWORD *)v23 + 4) )
        {
          v16 += 16;
          v23 += 16;
          break;
        }
        if ( *((_DWORD *)v16 + 5) != *((_DWORD *)v23 + 5) )
        {
          v16 += 20;
          v23 += 20;
          break;
        }
        if ( *((_DWORD *)v16 + 6) != *((_DWORD *)v23 + 6) )
        {
          v16 += 24;
          v23 += 24;
          break;
        }
        if ( *((_DWORD *)v16 + 7) != *((_DWORD *)v23 + 7) )
        {
          v16 += 28;
          v23 += 28;
          break;
        }
        v16 += 32;
        v23 += 32;
        if ( (unsigned __int64)v16 >= v53 )
          goto LABEL_27;
      }
      if ( *v16 != *v23 )
        goto LABEL_37;
      if ( v16[1] != v23[1] )
      {
        ++v16;
        LOWORD(v23) = (_WORD)v23 + 1;
LABEL_37:
        v17 = v58;
        v14 = v50;
        goto LABEL_38;
      }
      v14 = v50;
      v17 = v58;
      if ( v16[2] != v23[2] )
      {
        v16 += 2;
        LOWORD(v23) = (_WORD)v23 + 2;
        goto LABEL_38;
      }
LABEL_47:
      v16 += 3;
      LOWORD(v23) = (_WORD)v23 + 3;
LABEL_38:
      v31 = v16 - v25 - 3;
      v32 = 8 * ((_WORD)v16 - (_WORD)v23) - 8;
      if ( v31 >= 7 )
      {
        v35 = v16 - v25 - 10;
        *(_WORD *)v19 = v32 | 7;
        v19 += 2;
        if ( v52 )
        {
          if ( v35 >= 0xF )
          {
            *v52 |= 0xF0u;
            v52 = 0LL;
LABEL_73:
            v43 = v16 - v25 - 25;
            if ( v43 >= 0xFF )
            {
              v47 = v43 + 22;
              *v19 = -1;
              if ( v47 >= 0x10000 )
              {
                *(_WORD *)(v19 + 1) = 0;
                *(_DWORD *)(v19 + 3) = v47;
                v19 += 7;
              }
              else
              {
                *(_WORD *)(v19 + 1) = v47;
                v19 += 3;
              }
            }
            else
            {
              *v19++ = v43;
            }
            goto LABEL_40;
          }
          *v52 |= 16 * (_BYTE)v35;
          v52 = 0LL;
        }
        else
        {
          v52 = v19;
          if ( v35 >= 0xF )
          {
            *v19++ = 15;
            goto LABEL_73;
          }
          *v19++ = v35;
        }
      }
      else
      {
        *(_WORD *)v19 = v32 + v31;
        v19 += 2;
      }
LABEL_40:
      if ( v18 <= 0 )
      {
        v41 = v51;
        v42 = 2 * v18 + 1;
        v51 = (int *)v19;
        v18 = 1;
        v19 += 4;
        *v41 = v42;
      }
      else
      {
        v18 = 2 * v18 + 1;
      }
      if ( (unsigned __int64)v16 >= v17 )
      {
        if ( (unsigned __int64)v16 >= v53 )
          goto LABEL_82;
        v17 = RtlpMakeXpressCallback(v56, v53, v16, v13);
        v58 = v17;
      }
      if ( (unsigned __int64)v19 >= v14 )
        goto LABEL_82;
      v13 = v53;
      v20 = v51;
    }
  }
LABEL_83:
  if ( v16 < v10 )
  {
    while ( (unsigned __int64)v19 < v11 )
    {
      v44 = *v16++;
      *v19++ = v44;
      if ( v18 <= 0 )
      {
        v48 = 2 * v18;
        v18 = 1;
        *v20 = v48;
        v20 = (int *)v19;
        v19 += 4;
      }
      else
      {
        v18 *= 2;
      }
      if ( v16 >= v10 )
        goto LABEL_88;
    }
    return 3221225507LL;
  }
LABEL_88:
  if ( (unsigned __int64)v19 >= v11 )
    return 3221225507LL;
  for ( ; v18 > 0; v18 = 2 * v18 + 1 )
    ;
  v45 = (_DWORD)v19 - v9;
  *v20 = 2 * v18 + 1;
  *a5 = v45;
  if ( v45 < 8 )
    *a5 = 8;
  return 0LL;
}
