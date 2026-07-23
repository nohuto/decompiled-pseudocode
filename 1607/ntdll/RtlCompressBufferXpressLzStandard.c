/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x180077BD4
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180002EF0 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800FCAEC (RtlpMakeXpressCallback.c)
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
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int8 *v20; // r8
  unsigned __int8 v21; // di
  unsigned __int8 *v22; // r11
  unsigned __int8 v23; // di
  char *v24; // r9
  unsigned __int8 v25; // bp
  _BYTE *v26; // r10
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 *v31; // rcx
  __int64 v32; // r10
  unsigned __int8 *v33; // rcx
  __int64 v34; // rdx
  unsigned __int8 *v35; // rcx
  char v36; // al
  unsigned int v38; // esi
  int v39; // eax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v42; // [rsp+28h] [rbp-60h]
  unsigned __int64 v43; // [rsp+30h] [rbp-58h]
  _QWORD v44[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-40h]
  _BYTE *v46; // [rsp+90h] [rbp+8h]
  int v47; // [rsp+A0h] [rbp+18h]
  int *v48; // [rsp+C0h] [rbp+38h]
  unsigned __int64 v49; // [rsp+C8h] [rbp+40h]

  v47 = a3;
  v7 = (unsigned __int64)&a1[a2];
  v8 = a3;
  v9 = a3 + a4;
  v43 = v9;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v45 = a2;
  v10 = v7 - 38;
  v46 = 0LL;
  v44[0] = 0LL;
  v41 = v9 - 41;
  XpressCallback = v7;
  *(_BYTE *)(a3 + 4) = *a1;
  if ( v7 >= 0x26 )
    XpressCallback = v7 - 38;
  v44[1] = 0LL;
  v12 = (_BYTE *)(a3 + 5);
  v49 = XpressCallback;
  v48 = (int *)a3;
  v13 = 0LL;
  v14 = 2;
  v15 = (int *)a3;
  v16 = a1 + 1;
  if ( a2 >= 0x40 )
  {
    v17 = a6;
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 2 )
    {
      while ( 1 )
      {
        v18 = v17 + 8LL * *v16;
        v19 = v16[2] + 4 * v16[1];
        v20 = *(unsigned __int8 **)(v18 + 16 * v19);
        *(_QWORD *)(v18 + 16 * v19) = v16;
        if ( *v20 != *v16 || v20[1] != v16[1] || v20[2] != v16[2] || v16 - v20 >= 0x2000 )
          break;
        v21 = v20[3];
        v22 = v16 + 3;
        v42 = v16;
        if ( v16[3] != v21 )
        {
          v30 = *v16 + 2 * v19;
          v31 = *(unsigned __int8 **)(a6 + 8 * (v30 + *v22) + 22448);
          *(_QWORD *)(a6 + 8 * (v30 + v21) + 22448) = v20;
          if ( v16 - v31 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v31 )
          {
            v16 += 3;
            goto LABEL_50;
          }
          v20 = v31;
          *(_QWORD *)(a6 + 8 * (v30 + *v22) + 22448) = v16;
        }
        v23 = v20[4];
        v24 = (char *)(v16 + 4);
        if ( v16[4] != v23 )
        {
          v32 = 2
              * ((unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(*v16 + *v22, 3), 1)
               + 4 * (unsigned __int8)__ROL1__(*v16 ^ __ROR1__(v16[1] + v16[2] + 97, 1), 3));
          v33 = *(unsigned __int8 **)(a6 + 8 * (v32 + (unsigned __int8)*v24) + 22448);
          *(_QWORD *)(a6 + 8 * (v32 + v23) + 22448) = v20;
          if ( v16 - v33 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v33 || *v24 != v33[4] || v16 == v33 )
          {
            v16 += 4;
            LOWORD(v20) = (_WORD)v20 + 4;
            goto LABEL_33;
          }
          v20 = v33;
          *(_QWORD *)(a6 + 8 * (v32 + (unsigned __int8)*v24) + 22448) = v16;
        }
        v25 = v20[5];
        v26 = v16 + 5;
        if ( v16[5] != v25 )
        {
          v34 = 2
              * ((v16[2] ^ (unsigned __int8)__ROL1__(*v16, *v24))
               + 4
               * ((unsigned __int8)__ROL1__(*v24 ^ (__ROR1__(*v16, 1) + 69), 3)
                + (unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(*v22, 3), 1)));
          v35 = *(unsigned __int8 **)(a6 + 8 * (v34 + (unsigned __int8)*v26) + 22448);
          *(_QWORD *)(a6 + 8 * (v34 + v25) + 22448) = v20;
          if ( v16 - v35 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v35 || *v24 != v35[4] || *v26 != v35[5] || v16 == v35 )
          {
            v16 += 5;
            LOWORD(v20) = (_WORD)v20 + 5;
            goto LABEL_47;
          }
          v20 = v35;
          *(_QWORD *)(a6 + 8 * (v34 + (unsigned __int8)*v26) + 22448) = v16;
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
            goto LABEL_47;
          }
          if ( *(_DWORD *)v16 != *(_DWORD *)v20 )
            goto LABEL_29;
          if ( *((_DWORD *)v16 + 1) != *((_DWORD *)v20 + 1) )
          {
            v16 += 4;
            v20 += 4;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 2) != *((_DWORD *)v20 + 2) )
          {
            v16 += 8;
            v20 += 8;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 3) != *((_DWORD *)v20 + 3) )
          {
            v16 += 12;
            v20 += 12;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 4) != *((_DWORD *)v20 + 4) )
          {
            v16 += 16;
            v20 += 16;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 5) != *((_DWORD *)v20 + 5) )
          {
            v16 += 20;
            v20 += 20;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 6) != *((_DWORD *)v20 + 6) )
          {
            v16 += 24;
            v20 += 24;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 7) != *((_DWORD *)v20 + 7) )
            break;
          v16 += 32;
        }
        v16 += 28;
        v20 += 28;
LABEL_29:
        if ( *v16 != *v20 )
          goto LABEL_47;
        if ( v16[1] != v20[1] )
        {
          ++v16;
          LOWORD(v20) = (_WORD)v20 + 1;
LABEL_47:
          v13 = v46;
          v15 = v48;
          goto LABEL_33;
        }
        v13 = v46;
        v15 = v48;
        if ( v16[2] != v20[2] )
        {
          v16 += 2;
          LOWORD(v20) = (_WORD)v20 + 2;
          goto LABEL_33;
        }
        v16 += 3;
LABEL_50:
        LOWORD(v20) = (_WORD)v20 + 3;
LABEL_33:
        v27 = v16 - v42 - 3;
        v28 = 8 * ((_WORD)v16 - (_WORD)v20) - 8;
        if ( v27 < 7 )
        {
          *(_WORD *)v12 = v28 + v27;
          v12 += 2;
        }
        else
        {
          v29 = v16 - v42 - 10;
          *(_WORD *)v12 = v28 | 7;
          v12 += 2;
          if ( !v13 )
          {
            v46 = v12;
            v13 = v12;
            if ( v29 >= 0xF )
            {
              *v12++ = 15;
              goto LABEL_37;
            }
            goto LABEL_38;
          }
          v46 = 0LL;
          if ( v29 < 0xF )
          {
            *v13 |= 16 * (_BYTE)v29;
            v13 = 0LL;
          }
          else
          {
            *v13 |= 0xF0u;
            v13 = 0LL;
LABEL_37:
            v29 = v16 - v42 - 25;
            if ( v29 >= 0xFF )
            {
              v40 = v29 + 22;
              *v12 = -1;
              if ( v40 < 0x10000 )
              {
                *(_WORD *)(v12 + 1) = v40;
                v12 += 3;
              }
              else
              {
                *(_WORD *)(v12 + 1) = 0;
                *(_DWORD *)(v12 + 3) = v40;
                v12 += 7;
              }
            }
            else
            {
LABEL_38:
              *v12++ = v29;
            }
          }
        }
        if ( v14 <= 0 )
        {
          v48 = (int *)v12;
          *v15 = 2 * v14 + 1;
          v14 = 1;
          v15 = (int *)v12;
          v12 += 4;
        }
        else
        {
          v14 = 2 * v14 + 1;
        }
        XpressCallback = v49;
        if ( (unsigned __int64)v16 >= v49 )
        {
          if ( (unsigned __int64)v16 < v10 )
          {
            XpressCallback = RtlpMakeXpressCallback(v44, v7 - 38, v16);
            v49 = XpressCallback;
            goto LABEL_42;
          }
LABEL_80:
          v9 = v43;
          v8 = v47;
          goto LABEL_81;
        }
LABEL_42:
        v17 = a6;
        if ( (unsigned __int64)v12 >= v41 )
          goto LABEL_80;
      }
      *v12++ = *v16++;
      if ( v14 <= 0 )
      {
        v48 = (int *)v12;
        *v15 = 2 * v14;
        v14 = 1;
        v15 = (int *)v12;
        v12 += 4;
        if ( (unsigned __int64)v16 >= XpressCallback )
        {
          if ( (unsigned __int64)v16 >= v10 )
            goto LABEL_80;
          XpressCallback = RtlpMakeXpressCallback(v44, v7 - 38, v16);
          v49 = XpressCallback;
        }
        if ( (unsigned __int64)v12 >= v41 )
          goto LABEL_80;
      }
      else
      {
        v14 *= 2;
      }
      v17 = a6;
      continue;
    }
  }
LABEL_81:
  while ( (unsigned __int64)v16 < v7 )
  {
    if ( (unsigned __int64)v12 >= v9 )
      return 3221225507LL;
    v36 = *v16++;
    *v12++ = v36;
    if ( v14 <= 0 )
    {
      v39 = 2 * v14;
      v14 = 1;
      *v15 = v39;
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
  v38 = (_DWORD)v12 - v8;
  *v15 = 2 * v14 + 1;
  if ( v38 < 8 )
    v38 = 8;
  *a5 = v38;
  return 0LL;
}
