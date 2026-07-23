/*
 * XREFs of RtlFindClearBitsEx @ 0x1402120D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // r9
  unsigned int v21; // r9d
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 *v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r10d
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = v8;
      if ( v8 - v7 + 1 < a2 )
      {
LABEL_4:
        v11 = -1LL;
        goto LABEL_28;
      }
      v12 = v8 - a2 + 1;
      v13 = (unsigned __int64 *)(v5 + 8 * (v7 >> 6));
      v14 = ((1LL << (v7 & 0x3F)) - 1) | *v13;
      v15 = v5 + 8 * ((v10 - a2 + 1) >> 6);
      if ( a2 <= 0x7F )
        break;
      if ( (v12 & 0x3F) != 0 )
        v15 += 8LL;
      if ( v14 )
      {
        if ( *++v13 )
          goto LABEL_14;
        v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v14);
        if ( v17 )
          v16 = 64;
        else
          v16 = 63 - v18;
      }
      else
      {
        v16 = 0;
      }
LABEL_19:
      v11 = ((__int64)((__int64)v13 - v5) >> 3 << 6) - v16;
      if ( v11 > v12 )
        goto LABEL_4;
      v20 = &v13[(a2 - v16) >> 6];
      while ( ++v13 != v20 )
      {
        if ( *v13 )
          goto LABEL_14;
      }
      v21 = ((_BYTE)a2 - (_BYTE)v16) & 0x3F;
      if ( (((_BYTE)a2 - (_BYTE)v16) & 0x3F) != 0 )
      {
        v17 = !_BitScanForward64((unsigned __int64 *)&v22, *v13);
        if ( v17 )
          LODWORD(v22) = 64;
        if ( (unsigned int)v22 < v21 )
        {
LABEL_14:
          while ( (unsigned __int64)v13 <= v15 )
          {
            if ( !*++v13 )
            {
              v17 = !_BitScanReverse64((unsigned __int64 *)&v19, *(v13 - 1));
              if ( v17 )
                v16 = 64;
              else
                v16 = 63 - v19;
              goto LABEL_19;
            }
          }
          goto LABEL_4;
        }
      }
LABEL_27:
      if ( v11 != -1LL )
        return v11;
LABEL_28:
      if ( !v7 )
        return v11;
      v23 = a2 + a3;
      v7 = 0LL;
      if ( a2 + a3 > v3 )
        v23 = v3;
      v8 = v23 - 1;
    }
    if ( a2 < 0x40 )
    {
      if ( a2 <= 1 )
      {
        while ( v14 == -1 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_4;
          v14 = *v13;
        }
        _BitScanForward64(&v34, ~v14);
        v11 = v34 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
      }
      else
      {
        v28 = 0LL;
        v29 = (unsigned __int64 *)(v5 + 8 * (v10 >> 6));
        while ( 1 )
        {
          if ( v14 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v13 > v15 )
                goto LABEL_4;
              v14 = *v13;
            }
            while ( *v13 == -1LL );
            v28 = 0LL;
          }
          v17 = !_BitScanForward64((unsigned __int64 *)&v30, v14);
          if ( v17 )
            LODWORD(v30) = 64;
          if ( (unsigned int)(v28 + v30) >= a2 )
            break;
          v31 = a2;
          v32 = ~v14;
          while ( 1 )
          {
            v32 &= v32 >> (v31 >> 1);
            if ( !v32 )
              break;
            v31 -= v31 >> 1;
            if ( v31 <= 1 )
            {
              _BitScanForward64(&v32, v32);
              goto LABEL_70;
            }
          }
          if ( v13 == v29 )
            goto LABEL_4;
          v17 = !_BitScanReverse64((unsigned __int64 *)&v33, v14);
          if ( v17 )
            v28 = 64LL;
          else
            v28 = (unsigned int)(63 - v33);
          v14 = *++v13;
        }
        v32 = -v28;
LABEL_70:
        v11 = ((__int64)((__int64)v13 - v5) >> 3 << 6) + v32;
      }
      if ( v11 > v12 )
        goto LABEL_4;
      goto LABEL_27;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_4;
          v14 = *v13;
        }
        v17 = !_BitScanReverse64((unsigned __int64 *)&v24, v14);
        if ( v17 )
          v25 = 64;
        else
          v25 = 63 - v24;
        v11 = ((((__int64)((__int64)v13 - v5) >> 3) + 1) << 6) - v25;
        if ( v11 > v12 )
          goto LABEL_4;
        v26 = a2 - v25;
        if ( a2 == v25 )
          goto LABEL_27;
        v14 = *++v13;
        if ( v26 >= 0x40 )
          break;
LABEL_46:
        v17 = !_BitScanForward64(&v27, v14);
        if ( v17 )
          v27 = 64LL;
        if ( v27 >= v26 )
          goto LABEL_27;
      }
      if ( !v14 )
      {
        v26 -= 64LL;
        if ( !v26 )
          goto LABEL_27;
        v14 = *++v13;
        goto LABEL_46;
      }
    }
  }
  return v7 & 0xFFFFFFFFFFFFFFF8uLL;
}
