/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1800561F0
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180055F30 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x180056010 (RtlFlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x180056540 (RtlSetBits.c)
 */

__int64 __fastcall RtlFindClearBitsAndSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // r15d
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  __int64 v12; // r14
  unsigned int v13; // ebp
  unsigned __int64 *v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  bool v20; // cc
  unsigned int v21; // ebx
  int v23; // edx
  unsigned __int64 *v24; // rdi
  __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // r10d
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r8
  unsigned __int64 *v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  unsigned int v40; // [rsp+68h] [rbp+10h]
  unsigned int v41; // [rsp+70h] [rbp+18h]

  v41 = a3;
  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    {
      v8 = 1;
      v9 = 32;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    v40 = v8;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = *(_QWORD *)(a1 + 8) - 4LL * v8;
      if ( v7 - v6 + 1 >= a2 )
        break;
      v19 = -1;
LABEL_40:
      if ( !v6 )
        goto LABEL_16;
      v8 = v40;
      v29 = a2 + a3;
      if ( a2 + a3 > v3 )
        v29 = v3;
      v7 = v29 - 1;
      v6 = 0;
    }
    v13 = v10 - a2 + 1;
    v14 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
    v15 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
    v16 = v12 + 8 * ((unsigned __int64)v13 >> 6);
    if ( a2 > 0x7F )
    {
      if ( (v13 & 0x3F) != 0 )
        v16 += 8LL;
      if ( v15 )
      {
        if ( *++v14 )
          goto LABEL_74;
        v33 = !_BitScanReverse64((unsigned __int64 *)&v34, v15);
        goto LABEL_63;
      }
      v35 = 0;
      while ( 1 )
      {
        v19 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) - v35;
        if ( v19 > v13 )
          goto LABEL_38;
        v36 = a2 - v35;
        v37 = &v14[(unsigned __int64)(a2 - v35) >> 6];
        while ( ++v14 != v37 )
        {
          if ( *v14 )
            goto LABEL_74;
        }
        v38 = v36 & 0x3F;
        if ( !v38 )
          goto LABEL_14;
        v33 = !_BitScanForward64((unsigned __int64 *)&v39, *v14);
        if ( v33 )
          LODWORD(v39) = 64;
        if ( (unsigned int)v39 >= v38 )
          goto LABEL_14;
        do
        {
LABEL_74:
          if ( (unsigned __int64)v14 > v16 )
            goto LABEL_38;
          ++v14;
        }
        while ( *v14 );
        v33 = !_BitScanReverse64((unsigned __int64 *)&v34, *(v14 - 1));
LABEL_63:
        if ( v33 )
          v35 = 64;
        else
          v35 = 63 - v34;
      }
    }
    v17 = 64;
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v23 = 0;
        v24 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
        while ( v15 != -1 )
        {
LABEL_25:
          v33 = !_BitScanForward64((unsigned __int64 *)&v25, v15);
          if ( v33 )
            LODWORD(v25) = 64;
          if ( (int)v25 + v23 >= a2 )
          {
            LODWORD(v27) = -v23;
LABEL_36:
            v19 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) + v27;
            v20 = v19 <= v13;
            goto LABEL_13;
          }
          v26 = a2;
          v27 = ~v15;
          while ( 1 )
          {
            v27 &= v27 >> (v26 >> 1);
            if ( !v27 )
              break;
            v26 -= v26 >> 1;
            if ( v26 <= 1 )
            {
              _BitScanForward64(&v27, v27);
              goto LABEL_36;
            }
          }
          if ( v14 == v24 )
            goto LABEL_38;
          v33 = !_BitScanReverse64((unsigned __int64 *)&v28, v15);
          if ( v33 )
            v23 = 64;
          else
            v23 = 63 - v28;
          v15 = *++v14;
        }
        while ( (unsigned __int64)++v14 <= v16 )
        {
          v15 = *v14;
          if ( *v14 != -1LL )
          {
            v23 = 0;
            goto LABEL_25;
          }
        }
      }
      else
      {
        while ( v15 == -1 )
        {
          if ( (unsigned __int64)++v14 > v16 )
            goto LABEL_38;
          v15 = *v14;
        }
        _BitScanForward64(&v18, ~v15);
        v19 = v18 + ((unsigned int)(((__int64)v14 - v12) >> 3) << 6);
        v20 = v19 <= v13;
LABEL_13:
        if ( v20 )
        {
LABEL_14:
          if ( v19 != -1 )
          {
            v19 -= v9;
LABEL_16:
            v21 = v19;
            goto LABEL_17;
          }
          goto LABEL_39;
        }
      }
LABEL_38:
      v19 = -1;
LABEL_39:
      a3 = v41;
      goto LABEL_40;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v15 < 0 )
        {
          if ( (unsigned __int64)++v14 > v16 )
            goto LABEL_38;
          v15 = *v14;
        }
        v33 = !_BitScanReverse64((unsigned __int64 *)&v30, v15);
        if ( !v33 )
          v17 = 63 - v30;
        v19 = (((unsigned int)(((__int64)v14 - v12) >> 3) + 1) << 6) - v17;
        if ( v19 > v13 )
          goto LABEL_38;
        v31 = a2 - v17;
        if ( a2 == v17 )
          goto LABEL_14;
        ++v14;
        v17 = 64;
        v15 = *v14;
        if ( v31 >= 0x40 )
          break;
LABEL_54:
        v33 = !_BitScanForward64((unsigned __int64 *)&v32, v15);
        if ( v33 )
          LODWORD(v32) = 64;
        if ( (unsigned int)v32 >= v31 )
          goto LABEL_14;
        v17 = 64;
      }
      if ( !v15 )
      {
        v31 -= 64;
        if ( !v31 )
          goto LABEL_14;
        v15 = *++v14;
        goto LABEL_54;
      }
    }
  }
  v21 = v6 & 0xFFFFFFF8;
LABEL_17:
  if ( v21 != -1 )
    RtlSetBits(a1, v21, a2);
  return v21;
}
