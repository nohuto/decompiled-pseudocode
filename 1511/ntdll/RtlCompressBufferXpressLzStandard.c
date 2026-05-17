/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x180090A10
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800F2DC0 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800F3420 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int64 v7; // r13
  int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 XpressCallback; // r9
  _BYTE *v12; // rsi
  _BYTE *v13; // rbp
  int v14; // r14d
  int *v15; // r15
  unsigned __int8 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int8 *v20; // r8
  unsigned __int8 v21; // di
  unsigned __int8 *v22; // r11
  __int64 v23; // rdx
  unsigned __int8 *v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // di
  char *v27; // r9
  __int64 v28; // r10
  unsigned __int8 *v29; // rcx
  __int64 v30; // rax
  unsigned __int8 v31; // bp
  _BYTE *v32; // r10
  __int64 v33; // rdx
  unsigned __int8 *v34; // rcx
  unsigned __int64 v35; // rcx
  __int16 v36; // ax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  char v39; // al
  int v40; // eax
  unsigned int v42; // esi
  unsigned __int64 v43; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v44; // [rsp+28h] [rbp-60h]
  unsigned __int64 v45; // [rsp+30h] [rbp-58h]
  _QWORD v46[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-40h]
  _BYTE *v48; // [rsp+90h] [rbp+8h]
  int v49; // [rsp+A0h] [rbp+18h]
  int *v51; // [rsp+C0h] [rbp+38h]
  unsigned __int64 v53; // [rsp+C8h] [rbp+40h]

  v49 = a3;
  v7 = (unsigned __int64)&a1[a2];
  v8 = a3;
  v9 = a3 + a4;
  v45 = v9;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v47 = a2;
  v10 = v7 - 38;
  v48 = 0LL;
  v46[0] = 0LL;
  v43 = v9 - 41;
  XpressCallback = v7;
  *(_BYTE *)(a3 + 4) = *a1;
  if ( v7 >= 0x26 )
    XpressCallback = v7 - 38;
  v46[1] = 0LL;
  v12 = (_BYTE *)(a3 + 5);
  v53 = XpressCallback;
  v51 = (int *)a3;
  v13 = 0LL;
  v14 = 2;
  v15 = (int *)a3;
  v16 = a1 + 1;
  if ( a2 >= 0x40 )
  {
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    v17 = a6;
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v17 + 8LL * *v16;
        v19 = v16[2] + 4 * v16[1];
        v20 = *(unsigned __int8 **)(v18 + 16 * v19);
        *(_QWORD *)(v18 + 16 * v19) = v16;
        if ( *v20 == *v16 && v20[1] == v16[1] && v20[2] == v16[2] && v16 - v20 < 0x2000 )
          break;
        *v12++ = *v16++;
        if ( v14 <= 0 )
        {
          v51 = (int *)v12;
          *v15 = 2 * v14;
          v14 = 1;
          v15 = (int *)v12;
          v12 += 4;
          goto LABEL_80;
        }
        v14 *= 2;
      }
      v21 = v20[3];
      v22 = v16 + 3;
      v44 = v16;
      if ( v16[3] != v21 )
      {
        v23 = *v16 + 2 * v19;
        v24 = *(unsigned __int8 **)(a6 + 8 * (v23 + *v22) + 22448);
        v25 = v21;
        v17 = a6;
        *(_QWORD *)(a6 + 8 * (v23 + v25) + 22448) = v20;
        if ( v16 - v24 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v24 )
        {
          v16 += 3;
LABEL_24:
          LOWORD(v20) = (_WORD)v20 + 3;
          goto LABEL_37;
        }
        v20 = v24;
        *(_QWORD *)(a6 + 8 * (v23 + *v22) + 22448) = v16;
      }
      v26 = v20[4];
      v27 = (char *)(v16 + 4);
      if ( v16[4] == v26 )
      {
        v17 = a6;
      }
      else
      {
        v28 = 2
            * ((unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(*v16 + *v22, 3), 1)
             + 4 * (unsigned __int8)__ROL1__(*v16 ^ __ROR1__(v16[1] + v16[2] + 97, 1), 3));
        v29 = *(unsigned __int8 **)(a6 + 8 * (v28 + (unsigned __int8)*v27) + 22448);
        v30 = v26;
        v17 = a6;
        *(_QWORD *)(a6 + 8 * (v28 + v30) + 22448) = v20;
        if ( v16 - v29 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v29 || *v27 != v29[4] || v16 == v29 )
        {
          v16 += 4;
          LOWORD(v20) = (_WORD)v20 + 4;
          goto LABEL_37;
        }
        v20 = v29;
        *(_QWORD *)(a6 + 8 * (v28 + (unsigned __int8)*v27) + 22448) = v16;
      }
      v31 = v20[5];
      v32 = v16 + 5;
      if ( v16[5] != v31 )
      {
        v17 = a6;
        v33 = 2
            * ((v16[2] ^ (unsigned __int8)__ROL1__(*v16, *v27))
             + 4
             * ((unsigned __int8)__ROL1__(*v27 ^ (__ROR1__(*v16, 1) + 69), 3)
              + (unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(*v22, 3), 1)));
        v34 = *(unsigned __int8 **)(a6 + 8 * (v33 + (unsigned __int8)*v32) + 22448);
        *(_QWORD *)(a6 + 8 * (v33 + v31) + 22448) = v20;
        if ( v16 - v34 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v34 || *v27 != v34[4] || *v32 != v34[5] || v16 == v34 )
        {
          v16 += 5;
          LOWORD(v20) = (_WORD)v20 + 5;
          goto LABEL_36;
        }
        v20 = v34;
        *(_QWORD *)(a6 + 8 * (v33 + (unsigned __int8)*v32) + 22448) = v16;
      }
      v16 += 6;
      for ( v20 += 6; ; v20 += 32 )
      {
        if ( (unsigned __int64)v16 >= v10 )
        {
          while ( (unsigned __int64)v16 < v7 && *v16 == *v20 )
          {
            ++v16;
            ++v20;
          }
LABEL_36:
          v13 = v48;
          v15 = v51;
          goto LABEL_37;
        }
        if ( *(_DWORD *)v16 != *(_DWORD *)v20 )
          goto LABEL_59;
        if ( *((_DWORD *)v16 + 1) != *((_DWORD *)v20 + 1) )
          break;
        if ( *((_DWORD *)v16 + 2) != *((_DWORD *)v20 + 2) )
        {
          v16 += 8;
          v20 += 8;
          goto LABEL_59;
        }
        if ( *((_DWORD *)v16 + 3) != *((_DWORD *)v20 + 3) )
        {
          v16 += 12;
          v20 += 12;
          goto LABEL_59;
        }
        if ( *((_DWORD *)v16 + 4) != *((_DWORD *)v20 + 4) )
        {
          v16 += 16;
          v20 += 16;
          goto LABEL_59;
        }
        if ( *((_DWORD *)v16 + 5) != *((_DWORD *)v20 + 5) )
        {
          v16 += 20;
          v20 += 20;
          goto LABEL_59;
        }
        if ( *((_DWORD *)v16 + 6) != *((_DWORD *)v20 + 6) )
        {
          v16 += 24;
          v20 += 24;
          goto LABEL_59;
        }
        if ( *((_DWORD *)v16 + 7) != *((_DWORD *)v20 + 7) )
        {
          v16 += 28;
          v20 += 28;
          goto LABEL_59;
        }
        v16 += 32;
      }
      v16 += 4;
      v20 += 4;
LABEL_59:
      if ( *v16 != *v20 )
        goto LABEL_36;
      if ( v16[1] != v20[1] )
      {
        ++v16;
        LOWORD(v20) = (_WORD)v20 + 1;
        goto LABEL_36;
      }
      v13 = v48;
      v15 = v51;
      if ( v16[2] == v20[2] )
      {
        v16 += 3;
        goto LABEL_24;
      }
      v16 += 2;
      LOWORD(v20) = (_WORD)v20 + 2;
LABEL_37:
      v35 = v16 - v44 - 3;
      v36 = 8 * ((_WORD)v16 - (_WORD)v20) - 8;
      if ( v35 < 7 )
      {
        *(_WORD *)v12 = v36 + v35;
        v12 += 2;
        goto LABEL_76;
      }
      v37 = v16 - v44 - 10;
      *(_WORD *)v12 = v36 | 7;
      v12 += 2;
      if ( v13 )
      {
        v48 = 0LL;
        if ( v37 >= 0xF )
        {
          *v13 |= 0xF0u;
          v13 = 0LL;
          goto LABEL_71;
        }
        *v13 |= 16 * (_BYTE)v37;
        v13 = 0LL;
      }
      else
      {
        v48 = v12;
        v13 = v12;
        if ( v37 >= 0xF )
        {
          *v12++ = 15;
LABEL_71:
          v37 = v16 - v44 - 25;
          if ( v37 >= 0xFF )
          {
            v38 = v37 + 22;
            *v12 = -1;
            if ( v38 >= 0x10000 )
            {
              *(_WORD *)(v12 + 1) = 0;
              *(_DWORD *)(v12 + 3) = v38;
              v12 += 7;
            }
            else
            {
              *(_WORD *)(v12 + 1) = v38;
              v12 += 3;
            }
            goto LABEL_76;
          }
        }
        *v12++ = v37;
      }
LABEL_76:
      if ( v14 <= 0 )
      {
        v51 = (int *)v12;
        *v15 = 2 * v14 + 1;
        v14 = 1;
        v15 = (int *)v12;
        v12 += 4;
      }
      else
      {
        v14 = 2 * v14 + 1;
      }
      XpressCallback = v53;
LABEL_80:
      if ( (unsigned __int64)v16 >= XpressCallback )
      {
        if ( (unsigned __int64)v16 < v10 )
        {
          XpressCallback = RtlpMakeXpressCallback(v46, v7 - 38, v16);
          v53 = XpressCallback;
          goto LABEL_83;
        }
LABEL_84:
        v9 = v45;
        v8 = v49;
        break;
      }
LABEL_83:
      if ( (unsigned __int64)v12 >= v43 )
        goto LABEL_84;
    }
  }
  while ( (unsigned __int64)v16 < v7 )
  {
    if ( (unsigned __int64)v12 >= v9 )
      return 3221225507LL;
    v39 = *v16++;
    *v12++ = v39;
    if ( v14 <= 0 )
    {
      v40 = 2 * v14;
      v14 = 1;
      *v15 = v40;
      v15 = (int *)v12;
      v12 += 4;
    }
    else
    {
      v14 *= 2;
    }
  }
  if ( (unsigned __int64)v12 >= v9 )
    return 3221225507LL;
  while ( v14 > 0 )
    v14 = 2 * v14 + 1;
  v42 = (_DWORD)v12 - v8;
  *v15 = 2 * v14 + 1;
  if ( v42 < 8 )
    v42 = 8;
  *a5 = v42;
  return 0LL;
}
