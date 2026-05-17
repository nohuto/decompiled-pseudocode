/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800D2CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x180056780 (RtlClearBits.c)
 */

__int64 __fastcall RtlFindSetBitsAndClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v10; // r15d
  unsigned int v11; // r11d
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // ebp
  _QWORD *v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rsi
  int v19; // ecx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // r8
  _QWORD *v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // edx
  _QWORD *v29; // r11
  __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // cc
  unsigned __int64 v39; // rax
  unsigned int v41; // [rsp+68h] [rbp+10h]
  unsigned int v42; // [rsp+70h] [rbp+18h]

  v42 = a3;
  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v8 = v6 & 0xFFFFFFF8;
    goto LABEL_83;
  }
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
  {
    v9 = 1;
    v10 = 32;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v41 = v9;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = *(_QWORD *)(a1 + 8) - 4LL * v9;
    if ( v7 - v6 + 1 < a2 )
    {
      v14 = -1;
      goto LABEL_33;
    }
    v15 = v11 - a2 + 1;
    v16 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v12 >> 6));
    v17 = ((1LL << (v12 & 0x3F)) - 1) | ~*v16;
    v18 = v13 + 8 * ((unsigned __int64)v15 >> 6);
    if ( a2 > 0x7F )
    {
      if ( (v15 & 0x3F) != 0 )
        v18 += 8LL;
      if ( v17 )
      {
        if ( *++v16 != -1LL )
          goto LABEL_18;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v21, v17);
        if ( v20 )
          v19 = 64;
        else
          v19 = 63 - v21;
      }
      else
      {
        v19 = 0;
      }
LABEL_23:
      v14 = ((unsigned int)(((__int64)v16 - v13) >> 3) << 6) - v19;
      if ( v14 <= v15 )
      {
        v23 = a2 - v19;
        v24 = &v16[(unsigned __int64)(a2 - v19) >> 6];
        while ( ++v16 != v24 )
        {
          if ( *v16 != -1LL )
            goto LABEL_18;
        }
        v25 = v23 & 0x3F;
        if ( !v25 )
          goto LABEL_31;
        v20 = !_BitScanForward64((unsigned __int64 *)&v26, ~*v16);
        if ( v20 )
          LODWORD(v26) = 64;
        if ( (unsigned int)v26 >= v25 )
          goto LABEL_31;
LABEL_18:
        while ( (unsigned __int64)v16 <= v18 )
        {
          if ( *++v16 == -1LL )
          {
            v20 = !_BitScanReverse64((unsigned __int64 *)&v22, ~*(v16 - 1));
            if ( v20 )
              v19 = 64;
            else
              v19 = 63 - v22;
            goto LABEL_23;
          }
        }
      }
LABEL_76:
      v14 = -1;
      goto LABEL_32;
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( (v17 & 0x8000000000000000uLL) != 0 )
          {
            if ( (unsigned __int64)++v16 > v18 )
              goto LABEL_76;
            v17 = ~*v16;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v17);
          if ( v20 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v14 = (((unsigned int)(((__int64)v16 - v13) >> 3) + 1) << 6) - v34;
          if ( v14 > v15 )
            goto LABEL_76;
          v35 = a2 - v34;
          if ( a2 == v34 )
            goto LABEL_31;
          v17 = ~*++v16;
          if ( v35 >= 0x40 )
            break;
LABEL_64:
          v20 = !_BitScanForward64((unsigned __int64 *)&v36, v17);
          if ( v20 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 >= v35 )
            goto LABEL_31;
        }
        if ( *v16 == -1LL )
        {
          v35 -= 64;
          if ( !v35 )
            goto LABEL_31;
          v17 = ~*++v16;
          goto LABEL_64;
        }
      }
    }
    if ( a2 > 1 )
    {
      v28 = 0;
      v29 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v11 >> 6));
      while ( v17 != -1LL )
      {
LABEL_44:
        v20 = !_BitScanForward64((unsigned __int64 *)&v30, v17);
        if ( v20 )
          LODWORD(v30) = 64;
        if ( (int)v30 + v28 >= a2 )
        {
          LODWORD(v32) = -v28;
LABEL_74:
          v14 = ((unsigned int)(((__int64)v16 - v13) >> 3) << 6) + v32;
          v38 = v14 <= v15;
          goto LABEL_75;
        }
        v31 = a2;
        v32 = ~v17;
        while ( 1 )
        {
          v32 &= v32 >> (v31 >> 1);
          if ( !v32 )
            break;
          v31 -= v31 >> 1;
          if ( v31 <= 1 )
          {
            _BitScanForward64(&v32, v32);
            goto LABEL_74;
          }
        }
        if ( v16 == v29 )
          goto LABEL_76;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v37, v17);
        if ( v20 )
          v28 = 64;
        else
          v28 = 63 - v37;
        v17 = ~*++v16;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v16 > v18 )
          goto LABEL_76;
        v17 = ~*v16;
        if ( *v16 )
        {
          v28 = 0;
          goto LABEL_44;
        }
      }
    }
    while ( v17 == -1LL )
    {
      if ( (unsigned __int64)++v16 > v18 )
        goto LABEL_76;
      v17 = ~*v16;
    }
    _BitScanForward64(&v39, ~v17);
    v14 = v39 + ((unsigned int)(((__int64)v16 - v13) >> 3) << 6);
    v38 = v14 <= v15;
LABEL_75:
    if ( !v38 )
      goto LABEL_76;
LABEL_31:
    if ( v14 != -1 )
      break;
LABEL_32:
    a3 = v42;
LABEL_33:
    if ( !v6 )
      goto LABEL_82;
    v9 = v41;
    v27 = a2 + a3;
    if ( a2 + a3 > v3 )
      v27 = v3;
    v7 = v27 - 1;
    v6 = 0;
  }
  v14 -= v10;
LABEL_82:
  v8 = v14;
LABEL_83:
  if ( v8 != -1 )
    RtlClearBits(a1, v8, a2);
  return v8;
}
