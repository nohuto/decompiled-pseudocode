/*
 * XREFs of RtlFindSetBitsEx @ 0x140118404
 * Callers:
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1403AEF08 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403AF608 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiCleanPhysicalProcessPages @ 0x140626B7C (MiCleanPhysicalProcessPages.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  _QWORD *v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  bool v21; // zf
  __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  _QWORD *v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r10
  __int64 v31; // rcx
  unsigned int v32; // r9d
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // r9

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( !a2 )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    v9 = v8;
    if ( v8 - v7 + 1 < a2 )
      goto LABEL_31;
    v10 = v8 - a2 + 1;
    v11 = (_QWORD *)(v5 + 8 * (v7 >> 6));
    v12 = ((1LL << (v7 & 0x3F)) - 1) | ~*v11;
    v13 = v5 + 8 * ((v9 - a2 + 1) >> 6);
    if ( a2 > 0x7F )
      break;
    v14 = 64;
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( (v12 & 0x8000000000000000uLL) != 0 )
          {
            if ( (unsigned __int64)++v11 > v13 )
              goto LABEL_31;
            v12 = ~*v11;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v29, v12);
          if ( !v21 )
            v14 = 63 - v29;
          v16 = ((((__int64)((__int64)v11 - v5) >> 3) + 1) << 6) - v14;
          if ( v16 > v10 )
            goto LABEL_31;
          v30 = a2 - v14;
          if ( a2 == v14 )
            goto LABEL_11;
          ++v11;
          v14 = 64;
          v12 = ~*v11;
          if ( v30 >= 0x40 )
            break;
LABEL_56:
          v21 = !_BitScanForward64((unsigned __int64 *)&v31, v12);
          if ( v21 )
            LODWORD(v31) = 64;
          if ( (unsigned int)v31 >= v30 )
            goto LABEL_11;
          v14 = 64;
        }
        if ( *v11 == -1LL )
        {
          v30 -= 64LL;
          if ( !v30 )
            goto LABEL_11;
          v12 = ~*++v11;
          goto LABEL_56;
        }
      }
    }
    if ( a2 > 1 )
    {
      v19 = 0LL;
      v20 = (_QWORD *)(v5 + 8 * (v9 >> 6));
      while ( v12 != -1LL )
      {
LABEL_16:
        v21 = !_BitScanForward64((unsigned __int64 *)&v22, v12);
        if ( v21 )
          LODWORD(v22) = 64;
        if ( (unsigned int)(v19 + v22) >= a2 )
        {
          v24 = -v19;
LABEL_23:
          v16 = ((__int64)((__int64)v11 - v5) >> 3 << 6) + v24;
          goto LABEL_10;
        }
        v23 = a2;
        v24 = ~v12;
        while ( 1 )
        {
          v24 &= v24 >> (v23 >> 1);
          if ( !v24 )
            break;
          v23 -= v23 >> 1;
          if ( v23 <= 1 )
          {
            _BitScanForward64(&v24, v24);
            goto LABEL_23;
          }
        }
        if ( v11 == v20 )
          goto LABEL_31;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v25, v12);
        if ( v21 )
          v19 = 64LL;
        else
          v19 = (unsigned int)(63 - v25);
        v12 = ~*++v11;
      }
      while ( (unsigned __int64)++v11 <= v13 )
      {
        v12 = ~*v11;
        if ( *v11 )
        {
          v19 = 0LL;
          goto LABEL_16;
        }
      }
    }
    else
    {
      while ( v12 == -1LL )
      {
        if ( (unsigned __int64)++v11 > v13 )
          goto LABEL_31;
        v12 = ~*v11;
      }
      _BitScanForward64(&v15, ~v12);
      v16 = v15 + ((__int64)((__int64)v11 - v5) >> 3 << 6);
LABEL_10:
      if ( v16 <= v10 )
        goto LABEL_11;
    }
LABEL_31:
    v16 = -1LL;
LABEL_32:
    if ( !v7 )
      return v16;
    v35 = a2 + a3;
    v7 = 0LL;
    if ( a2 + a3 > v3 )
      v35 = v3;
    v8 = v35 - 1;
  }
  if ( (v10 & 0x3F) != 0 )
    v13 += 8LL;
  if ( !v12 )
  {
    v27 = 0;
    goto LABEL_43;
  }
  if ( *++v11 == -1LL )
  {
    v21 = !_BitScanReverse64((unsigned __int64 *)&v34, v12);
    if ( !v21 )
    {
      v27 = 63 - v34;
      goto LABEL_43;
    }
    goto LABEL_72;
  }
  do
  {
    do
    {
LABEL_39:
      if ( (unsigned __int64)v11 > v13 )
        goto LABEL_31;
      ++v11;
    }
    while ( *v11 != -1LL );
    v21 = !_BitScanReverse64((unsigned __int64 *)&v26, ~*(v11 - 1));
    if ( v21 )
LABEL_72:
      v27 = 64;
    else
      v27 = 63 - v26;
LABEL_43:
    v16 = ((__int64)((__int64)v11 - v5) >> 3 << 6) - v27;
    if ( v16 > v10 )
      goto LABEL_31;
    v28 = &v11[(a2 - v27) >> 6];
    while ( ++v11 != v28 )
    {
      if ( *v11 != -1LL )
        goto LABEL_39;
    }
    v32 = ((_BYTE)a2 - (_BYTE)v27) & 0x3F;
    if ( (((_BYTE)a2 - (_BYTE)v27) & 0x3F) == 0 )
      break;
    v21 = !_BitScanForward64((unsigned __int64 *)&v33, ~*v11);
    if ( v21 )
      LODWORD(v33) = 64;
  }
  while ( (unsigned int)v33 < v32 );
LABEL_11:
  if ( v16 == -1LL )
    goto LABEL_32;
  return v16;
}
