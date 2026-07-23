/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x140080DF0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x140080D7C (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x14011469C (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140114480 (RtlpMakeXpressCallback.c)
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
  unsigned __int64 v10; // r15
  unsigned __int8 *v11; // r8
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r12
  _BYTE *v15; // r13
  unsigned int v16; // ecx
  int *v17; // r9
  unsigned __int64 v18; // r11
  int v19; // r14d
  _BYTE *v20; // rsi
  unsigned __int8 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int8 *v24; // r8
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // r10
  unsigned __int8 v27; // r12
  char *v28; // r10
  unsigned __int8 v29; // bp
  unsigned __int8 v30; // r12
  unsigned __int8 v31; // r13
  __int64 v32; // rdi
  unsigned __int8 *v33; // r10
  unsigned __int64 v34; // rcx
  __int16 v35; // ax
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int8 *v38; // rcx
  __int64 v39; // rdx
  unsigned __int8 *v40; // rcx
  unsigned __int64 v41; // rcx
  int *v42; // rcx
  int v43; // eax
  unsigned __int8 v44; // al
  char v45; // al
  unsigned int v46; // esi
  int v48; // eax
  unsigned __int64 v49; // rcx
  __int64 XpressCallback; // rax
  unsigned __int64 v51; // [rsp+20h] [rbp-88h]
  int *v52; // [rsp+30h] [rbp-78h]
  unsigned __int64 v53; // [rsp+38h] [rbp-70h]
  unsigned __int64 v54; // [rsp+40h] [rbp-68h]
  unsigned __int8 *v55; // [rsp+48h] [rbp-60h]
  _QWORD v56[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-40h]
  _BYTE *v58; // [rsp+B0h] [rbp+8h]
  int v59; // [rsp+C0h] [rbp+18h]

  v59 = a3;
  v10 = a3 + a4;
  v11 = &a1[a2];
  v54 = (unsigned __int64)v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = v10 - 41;
  v14 = (unsigned __int64)(v11 - 38);
  v53 = (unsigned __int64)(v11 - 38);
  v15 = 0LL;
  v58 = 0LL;
  if ( !a7 || (v16 = a9, a9 > a2) )
    v16 = a2;
  v17 = (int *)a3;
  v18 = (unsigned __int64)&a1[v16];
  v56[1] = a8;
  *(_BYTE *)(a3 + 4) = *a1;
  v19 = 2;
  if ( v14 < v18 )
    v18 = (unsigned __int64)(v11 - 38);
  v52 = (int *)a3;
  v20 = (_BYTE *)(a3 + 5);
  v51 = v18;
  v56[0] = a7;
  v21 = a1 + 1;
  v57 = v16;
  if ( a2 >= 0x40 )
  {
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = a6 + 8LL * *v21;
        v23 = v21[2] + 4 * v21[1];
        v24 = *(unsigned __int8 **)(v22 + 16 * v23);
        *(_QWORD *)(v22 + 16 * v23) = v21;
        if ( *(_WORD *)v24 == *(_WORD *)v21 && v24[2] == v21[2] && v21 - v24 < 0x2000 )
          break;
        *v20++ = *v21++;
        if ( v19 <= 0 )
        {
          v52 = (int *)v20;
          *v17 = 2 * v19;
          v19 = 1;
          v17 = (int *)v20;
          v20 += 4;
          if ( (unsigned __int64)v21 >= v18 )
          {
            if ( (unsigned __int64)v21 >= v14 )
            {
LABEL_83:
              v17 = v52;
              v11 = (unsigned __int8 *)v54;
              goto LABEL_84;
            }
            XpressCallback = RtlpMakeXpressCallback(v56, v14, v21, v17);
            v17 = v52;
            v18 = XpressCallback;
            v51 = XpressCallback;
          }
          if ( (unsigned __int64)v20 >= v13 )
            goto LABEL_83;
        }
        else
        {
          v19 *= 2;
        }
      }
      v25 = v24[3];
      v26 = v21[3];
      v55 = v21;
      if ( v26 != v25 )
      {
        v32 = *v21 + 2 * v23;
        v33 = *(unsigned __int8 **)(a6 + 8 * (v32 + v26) + 22448);
        *(_QWORD *)(a6 + 8 * (v32 + v25) + 22448) = v24;
        if ( v21 - v33 >= 0x2000 || *(_DWORD *)v21 != *(_DWORD *)v33 )
        {
LABEL_33:
          v21 += 3;
          LOWORD(v24) = (_WORD)v24 + 3;
          goto LABEL_37;
        }
        v24 = v33;
        *(_QWORD *)(a6 + 8 * (v32 + v21[3]) + 22448) = v21;
      }
      v27 = v21[4];
      v28 = (char *)(v21 + 4);
      v29 = v24[4];
      if ( v27 != v29 )
      {
        v37 = 2
            * ((unsigned __int8)__ROR1__(v21[1] ^ __ROL1__(v21[3] + *v21, 3), 1)
             + 4 * (unsigned __int8)__ROL1__(*v21 ^ __ROR1__(v21[1] + v21[2] + 97, 1), 3));
        v38 = *(unsigned __int8 **)(a6 + 8 * (v37 + v27) + 22448);
        *(_QWORD *)(a6 + 8 * (v37 + v29) + 22448) = v24;
        if ( v21 - v38 >= 0x2000 || *(_DWORD *)v21 != *(_DWORD *)v38 || *v28 != v38[4] || v21 == v38 )
        {
          v14 = v53;
          v21 += 4;
          LOWORD(v24) = (_WORD)v24 + 4;
          goto LABEL_36;
        }
        v24 = v38;
        *(_QWORD *)(a6 + 8 * (v37 + (unsigned __int8)*v28) + 22448) = v21;
      }
      v30 = v24[5];
      v31 = v21[5];
      if ( v31 != v30 )
      {
        v39 = 2
            * ((v21[2] ^ (unsigned __int8)__ROL1__(*v21, *v28))
             + 4
             * ((unsigned __int8)__ROR1__(v21[1] ^ __ROL1__(v21[3], 3), 1)
              + (unsigned __int8)__ROL1__(*v28 ^ (__ROR1__(*v21, 1) + 69), 3)));
        v40 = *(unsigned __int8 **)(a6 + 8 * (v39 + v31) + 22448);
        *(_QWORD *)(a6 + 8 * (v39 + v30) + 22448) = v24;
        if ( v21 - v40 >= 0x2000
          || *(_DWORD *)v21 != *(_DWORD *)v40
          || *v28 != v40[4]
          || (v44 = v21[5], v44 != v40[5])
          || v21 == v40 )
        {
          v14 = v53;
          v21 += 5;
          LOWORD(v24) = (_WORD)v24 + 5;
LABEL_35:
          v15 = v58;
LABEL_36:
          v18 = v51;
          v13 = v10 - 41;
          goto LABEL_37;
        }
        v24 = v40;
        *(_QWORD *)(a6 + 8 * (v39 + v44) + 22448) = v21;
      }
      v14 = v53;
      v21 += 6;
      v24 += 6;
      if ( (unsigned __int64)v21 >= v53 )
      {
LABEL_27:
        while ( (unsigned __int64)v21 < v54 )
        {
          if ( *v21 != *v24 )
            break;
          ++v21;
          ++v24;
        }
        goto LABEL_35;
      }
      while ( *(_DWORD *)v21 == *(_DWORD *)v24 )
      {
        if ( *((_DWORD *)v21 + 1) != *((_DWORD *)v24 + 1) )
        {
          v21 += 4;
          v24 += 4;
          break;
        }
        if ( *((_DWORD *)v21 + 2) != *((_DWORD *)v24 + 2) )
        {
          v21 += 8;
          v24 += 8;
          break;
        }
        if ( *((_DWORD *)v21 + 3) != *((_DWORD *)v24 + 3) )
        {
          v21 += 12;
          v24 += 12;
          break;
        }
        if ( *((_DWORD *)v21 + 4) != *((_DWORD *)v24 + 4) )
        {
          v21 += 16;
          v24 += 16;
          break;
        }
        if ( *((_DWORD *)v21 + 5) != *((_DWORD *)v24 + 5) )
        {
          v21 += 20;
          v24 += 20;
          break;
        }
        if ( *((_DWORD *)v21 + 6) != *((_DWORD *)v24 + 6) )
        {
          v21 += 24;
          v24 += 24;
          break;
        }
        if ( *((_DWORD *)v21 + 7) != *((_DWORD *)v24 + 7) )
        {
          v21 += 28;
          v24 += 28;
          break;
        }
        v21 += 32;
        v24 += 32;
        if ( (unsigned __int64)v21 >= v53 )
          goto LABEL_27;
      }
      if ( *v21 != *v24 )
        goto LABEL_35;
      if ( v21[1] != v24[1] )
      {
        ++v21;
        LOWORD(v24) = (_WORD)v24 + 1;
        goto LABEL_35;
      }
      v13 = v10 - 41;
      v18 = v51;
      v15 = v58;
      if ( v21[2] == v24[2] )
        goto LABEL_33;
      v21 += 2;
      LOWORD(v24) = (_WORD)v24 + 2;
LABEL_37:
      v34 = v21 - v55 - 3;
      v35 = 8 * ((_WORD)v21 - (_WORD)v24) - 8;
      if ( v34 >= 7 )
      {
        v36 = v21 - v55 - 10;
        *(_WORD *)v20 = v35 | 7;
        v20 += 2;
        if ( v15 )
        {
          if ( v36 >= 0xF )
          {
            *v15 |= 0xF0u;
            v15 = 0LL;
            v58 = 0LL;
LABEL_66:
            v41 = v21 - v55 - 25;
            if ( v41 >= 0xFF )
            {
              v49 = v41 + 22;
              *v20 = -1;
              if ( v49 >= 0x10000 )
              {
                *(_WORD *)(v20 + 1) = 0;
                *(_DWORD *)(v20 + 3) = v49;
                v20 += 7;
              }
              else
              {
                *(_WORD *)(v20 + 1) = v49;
                v20 += 3;
              }
            }
            else
            {
              *v20++ = v41;
            }
            goto LABEL_39;
          }
          *v15 |= 16 * (_BYTE)v36;
          v15 = 0LL;
          v58 = 0LL;
        }
        else
        {
          v58 = v20;
          v15 = v20;
          if ( v36 >= 0xF )
          {
            *v20++ = 15;
            goto LABEL_66;
          }
          *v20++ = v36;
        }
      }
      else
      {
        *(_WORD *)v20 = v35 + v34;
        v20 += 2;
      }
LABEL_39:
      if ( v19 <= 0 )
      {
        v42 = v52;
        v43 = 2 * v19 + 1;
        v52 = (int *)v20;
        v19 = 1;
        v20 += 4;
        *v42 = v43;
      }
      else
      {
        v19 = 2 * v19 + 1;
      }
      if ( (unsigned __int64)v21 >= v18 )
      {
        if ( (unsigned __int64)v21 >= v14 )
          goto LABEL_83;
        v18 = RtlpMakeXpressCallback(v56, v14, v21, v17);
        v51 = v18;
      }
      v17 = v52;
      if ( (unsigned __int64)v20 >= v13 )
        goto LABEL_83;
    }
  }
LABEL_84:
  if ( v21 < v11 )
  {
    while ( (unsigned __int64)v20 < v10 )
    {
      v45 = *v21++;
      *v20++ = v45;
      if ( v19 <= 0 )
      {
        v48 = 2 * v19;
        v19 = 1;
        *v17 = v48;
        v17 = (int *)v20;
        v20 += 4;
      }
      else
      {
        v19 *= 2;
      }
      if ( v21 >= v11 )
        goto LABEL_89;
    }
    return 3221225507LL;
  }
LABEL_89:
  if ( (unsigned __int64)v20 >= v10 )
    return 3221225507LL;
  for ( ; v19 > 0; v19 = 2 * v19 + 1 )
    ;
  v46 = (_DWORD)v20 - v59;
  *v17 = 2 * v19 + 1;
  *a5 = v46;
  if ( v46 < 8 )
    *a5 = 8;
  return 0LL;
}
