/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x1400FC974
 * Callers:
 *     MiReplaceUltraBit @ 0x1400FC6D4 (MiReplaceUltraBit.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindSetBitsAndClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  _QWORD *v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  unsigned int v25; // r10d
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // ecx
  _QWORD *v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // r10
  __int64 v34; // rcx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v39; // [rsp+68h] [rbp+10h]

  v3 = *a1;
  v4 = (__int64)a1;
  v5 = a1[1];
  v39 = v5;
  v8 = a3 & -(__int64)(a3 < v3);
  v9 = v3 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = v9;
      v11 = v5;
      if ( v9 - v8 + 1 >= a2 )
        break;
      v18 = -1LL;
LABEL_35:
      if ( !v8 )
        goto LABEL_12;
      v28 = a2 + a3;
      v8 = 0LL;
      if ( a2 + a3 > v3 )
        v28 = v3;
      v9 = v28 - 1;
    }
    v12 = v9 - a2 + 1;
    v13 = (_QWORD *)(v5 + 8 * (v8 >> 6));
    v14 = ((1LL << (v8 & 0x3F)) - 1) | ~*v13;
    v15 = v5 + 8 * ((v10 - a2 + 1) >> 6);
    if ( a2 > 0x7F )
    {
      if ( (v12 & 0x3F) != 0 )
        v15 += 8LL;
      if ( !v14 )
      {
        v30 = 0;
        goto LABEL_49;
      }
      if ( *++v13 == -1LL )
      {
        v23 = !_BitScanReverse64((unsigned __int64 *)&v37, v14);
        if ( v23 )
          goto LABEL_79;
        v30 = 63 - v37;
        goto LABEL_49;
      }
LABEL_45:
      while ( (unsigned __int64)v13 <= v15 )
      {
        if ( *++v13 == -1LL )
        {
          v23 = !_BitScanReverse64((unsigned __int64 *)&v29, ~*(v13 - 1));
          if ( v23 )
LABEL_79:
            v30 = 64;
          else
            v30 = 63 - v29;
LABEL_49:
          v18 = ((__int64)((__int64)v13 - v11) >> 3 << 6) - v30;
          if ( v18 > v12 )
            goto LABEL_33;
          v31 = &v13[(a2 - v30) >> 6];
          while ( ++v13 != v31 )
          {
            if ( *v13 != -1LL )
              goto LABEL_45;
          }
          v35 = (a2 - v30) & 0x3F;
          if ( !v35 )
            goto LABEL_11;
          v23 = !_BitScanForward64((unsigned __int64 *)&v36, ~*v13);
          if ( v23 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 >= v35 )
            goto LABEL_11;
        }
      }
      goto LABEL_33;
    }
    v16 = 64;
    if ( a2 < 0x40 )
    {
      if ( a2 <= 1 )
      {
        while ( v14 == -1LL )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_40;
          v14 = ~*v13;
        }
        _BitScanForward64(&v17, ~v14);
        v18 = v17 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
LABEL_10:
        if ( v18 > v12 )
        {
LABEL_40:
          v18 = -1LL;
        }
        else
        {
LABEL_11:
          if ( v18 != -1LL )
          {
LABEL_12:
            v4 = (__int64)a1;
            v19 = v18;
            goto LABEL_13;
          }
        }
LABEL_34:
        v5 = v39;
        goto LABEL_35;
      }
      v21 = 0LL;
      v22 = (_QWORD *)(v5 + 8 * (v10 >> 6));
      while ( v14 != -1LL )
      {
LABEL_18:
        v23 = !_BitScanForward64((unsigned __int64 *)&v24, v14);
        if ( v23 )
          LODWORD(v24) = 64;
        if ( (unsigned int)(v21 + v24) >= a2 )
        {
          v26 = -v21;
LABEL_25:
          v18 = ((__int64)((__int64)v13 - v11) >> 3 << 6) + v26;
          goto LABEL_10;
        }
        v25 = a2;
        v26 = ~v14;
        while ( 1 )
        {
          v26 &= v26 >> (v25 >> 1);
          if ( !v26 )
            break;
          v25 -= v25 >> 1;
          if ( v25 <= 1 )
          {
            _BitScanForward64(&v26, v26);
            goto LABEL_25;
          }
        }
        if ( v13 == v22 )
          goto LABEL_33;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v27, v14);
        if ( v23 )
          v21 = 64LL;
        else
          v21 = (unsigned int)(63 - v27);
        v14 = ~*++v13;
      }
      while ( (unsigned __int64)++v13 <= v15 )
      {
        v14 = ~*v13;
        if ( *v13 )
        {
          v21 = 0LL;
          goto LABEL_18;
        }
      }
LABEL_33:
      v18 = -1LL;
      goto LABEL_34;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( (v14 & 0x8000000000000000uLL) != 0 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_40;
          v14 = ~*v13;
        }
        v23 = !_BitScanReverse64((unsigned __int64 *)&v32, v14);
        if ( !v23 )
          v16 = 63 - v32;
        v18 = ((((__int64)((__int64)v13 - v11) >> 3) + 1) << 6) - v16;
        if ( v18 > v12 )
          goto LABEL_40;
        v33 = a2 - v16;
        if ( a2 == v16 )
          goto LABEL_11;
        ++v13;
        v16 = 64;
        v14 = ~*v13;
        if ( v33 >= 0x40 )
          break;
LABEL_62:
        v23 = !_BitScanForward64((unsigned __int64 *)&v34, v14);
        if ( v23 )
          LODWORD(v34) = 64;
        if ( (unsigned int)v34 >= v33 )
          goto LABEL_11;
        v16 = 64;
      }
      if ( *v13 == -1LL )
      {
        v33 -= 64LL;
        if ( !v33 )
          goto LABEL_11;
        v14 = ~*++v13;
        goto LABEL_62;
      }
    }
  }
  v19 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v19 != -1LL )
    RtlClearBitsEx(v4, v19, a2);
  return v19;
}
