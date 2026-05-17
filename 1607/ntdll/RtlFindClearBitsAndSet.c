/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180050380
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x1800500C0 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x1800501A0 (RtlFlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x1800506C0 (RtlSetBits.c)
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
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  bool v19; // cc
  unsigned int v20; // ebx
  int v22; // ecx
  unsigned __int64 *v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  unsigned int v26; // r10d
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // r8d
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edx
  unsigned __int64 v37; // rax
  char v38; // dl
  unsigned __int64 *v39; // r8
  unsigned int v40; // edx
  __int64 v41; // rax
  unsigned int v42; // [rsp+68h] [rbp+10h]
  unsigned int v43; // [rsp+70h] [rbp+18h]

  v43 = a3;
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
    v42 = v8;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = *(_QWORD *)(a1 + 8) - 4LL * v8;
      if ( v7 - v6 + 1 >= a2 )
        break;
      v18 = -1;
LABEL_39:
      if ( !v6 )
        goto LABEL_14;
      v30 = a2 + a3;
      if ( a2 + a3 > v3 )
        v30 = v3;
      v7 = v30 - 1;
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
      if ( !v15 )
      {
        v36 = 0;
        goto LABEL_65;
      }
      if ( *++v14 )
        goto LABEL_79;
      v24 = !_BitScanReverse64((unsigned __int64 *)&v35, v15);
      if ( !v24 )
      {
LABEL_64:
        v36 = 63 - v35;
        goto LABEL_65;
      }
      v36 = 64;
LABEL_65:
      while ( 1 )
      {
        v18 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) - v36;
        if ( v18 > v13 )
          goto LABEL_37;
        v37 = a2 - v36;
        v38 = a2 - v36;
        v39 = &v14[v37 >> 6];
        while ( ++v14 != v39 )
        {
          if ( *v14 )
            goto LABEL_79;
        }
        v40 = v38 & 0x3F;
        if ( !v40 )
          goto LABEL_12;
        v24 = !_BitScanForward64((unsigned __int64 *)&v41, *v14);
        if ( v24 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v40 )
          goto LABEL_12;
        do
        {
LABEL_79:
          if ( (unsigned __int64)v14 > v16 )
            goto LABEL_37;
          ++v14;
        }
        while ( *v14 );
        v24 = !_BitScanReverse64((unsigned __int64 *)&v35, *(v14 - 1));
        if ( !v24 )
          goto LABEL_64;
        v36 = 64;
      }
    }
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v22 = 0;
        v23 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
        while ( v15 != -1 )
        {
LABEL_23:
          v24 = !_BitScanForward64((unsigned __int64 *)&v25, v15);
          if ( v24 )
            LODWORD(v25) = 64;
          if ( v22 + (int)v25 >= a2 )
          {
            LODWORD(v29) = -v22;
LABEL_34:
            v18 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) + v29;
            v19 = v18 <= v13;
            goto LABEL_11;
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
              _BitScanForward64((unsigned __int64 *)&v29, v27);
              goto LABEL_34;
            }
          }
          if ( v14 == v23 )
            goto LABEL_37;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v28, v15);
          if ( v24 )
            v22 = 64;
          else
            v22 = 63 - v28;
          v15 = *++v14;
        }
        while ( (unsigned __int64)++v14 <= v16 )
        {
          v15 = *v14;
          if ( *v14 != -1LL )
          {
            v22 = 0;
            goto LABEL_23;
          }
        }
      }
      else
      {
        while ( v15 == -1 )
        {
          if ( (unsigned __int64)++v14 > v16 )
            goto LABEL_37;
          v15 = *v14;
        }
        _BitScanForward64(&v17, ~v15);
        v18 = v17 + ((unsigned int)(((__int64)v14 - v12) >> 3) << 6);
        v19 = v18 <= v13;
LABEL_11:
        if ( v19 )
        {
LABEL_12:
          if ( v18 != -1 )
          {
            v18 -= v9;
LABEL_14:
            v20 = v18;
            goto LABEL_15;
          }
          goto LABEL_38;
        }
      }
LABEL_37:
      v18 = -1;
LABEL_38:
      v8 = v42;
      a3 = v43;
      goto LABEL_39;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v15 < 0 )
        {
          if ( (unsigned __int64)++v14 > v16 )
            goto LABEL_37;
          v15 = *v14;
        }
        v24 = !_BitScanReverse64((unsigned __int64 *)&v31, v15);
        if ( v24 )
          v32 = 64;
        else
          v32 = 63 - v31;
        v18 = (((unsigned int)(((__int64)v14 - v12) >> 3) + 1) << 6) - v32;
        if ( v18 > v13 )
          goto LABEL_37;
        v33 = a2 - v32;
        if ( a2 == v32 )
          goto LABEL_12;
        v15 = *++v14;
        if ( v33 >= 0x40 )
          break;
LABEL_53:
        v24 = !_BitScanForward64((unsigned __int64 *)&v34, v15);
        if ( v24 )
          LODWORD(v34) = 64;
        if ( (unsigned int)v34 >= v33 )
          goto LABEL_12;
      }
      if ( !v15 )
      {
        v33 -= 64;
        if ( !v33 )
          goto LABEL_12;
        v15 = *++v14;
        goto LABEL_53;
      }
    }
  }
  v20 = v6 & 0xFFFFFFF8;
LABEL_15:
  if ( v20 != -1 )
    RtlSetBits(a1, v20, a2);
  return v20;
}
