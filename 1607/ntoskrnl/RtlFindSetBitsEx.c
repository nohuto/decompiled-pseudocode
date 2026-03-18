/*
 * XREFs of RtlFindSetBitsEx @ 0x1401129F0
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1403DB010 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403DB694 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
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
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
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
    {
      if ( (v10 & 0x3F) != 0 )
        v13 += 8LL;
      if ( v12 )
      {
        if ( *++v11 != -1LL )
          goto LABEL_43;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v25, v12);
        if ( v20 )
          v26 = 64;
        else
          v26 = 63 - v25;
      }
      else
      {
        v26 = 0;
      }
      while ( 1 )
      {
        v15 = ((__int64)((__int64)v11 - v5) >> 3 << 6) - v26;
        if ( v15 > v10 )
          goto LABEL_31;
        v30 = &v11[(a2 - v26) >> 6];
        while ( ++v11 != v30 )
        {
          if ( *v11 != -1LL )
            goto LABEL_43;
        }
        v27 = ((_BYTE)a2 - (_BYTE)v26) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v26) & 0x3F) == 0 )
          goto LABEL_11;
        v20 = !_BitScanForward64((unsigned __int64 *)&v28, ~*v11);
        if ( v20 )
          LODWORD(v28) = 64;
        if ( (unsigned int)v28 >= v27 )
          goto LABEL_11;
        do
        {
LABEL_43:
          if ( (unsigned __int64)v11 > v13 )
            goto LABEL_31;
          ++v11;
        }
        while ( *v11 != -1LL );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v29, ~*(v11 - 1));
        if ( v20 )
          v26 = 64;
        else
          v26 = 63 - v29;
      }
    }
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
          v20 = !_BitScanReverse64((unsigned __int64 *)&v31, v12);
          if ( v20 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v15 = ((((__int64)((__int64)v11 - v5) >> 3) + 1) << 6) - v32;
          if ( v15 > v10 )
            goto LABEL_31;
          v33 = a2 - v32;
          if ( a2 == v32 )
            goto LABEL_11;
          v12 = ~*++v11;
          if ( v33 >= 0x40 )
            break;
LABEL_64:
          v20 = !_BitScanForward64(&v34, v12);
          if ( v20 )
            v34 = 64LL;
          if ( v34 >= v33 )
            goto LABEL_11;
        }
        if ( *v11 == -1LL )
        {
          v33 -= 64LL;
          if ( !v33 )
            goto LABEL_11;
          v12 = ~*++v11;
          goto LABEL_64;
        }
      }
    }
    if ( a2 > 1 )
    {
      v18 = 0LL;
      v19 = (_QWORD *)(v5 + 8 * (v9 >> 6));
      while ( v12 != -1LL )
      {
LABEL_16:
        v20 = !_BitScanForward64((unsigned __int64 *)&v21, v12);
        if ( v20 )
          LODWORD(v21) = 64;
        if ( (unsigned int)(v18 + v21) >= a2 )
        {
          v23 = -v18;
LABEL_27:
          v15 = ((__int64)((__int64)v11 - v5) >> 3 << 6) + v23;
          goto LABEL_10;
        }
        v22 = a2;
        v23 = ~v12;
        while ( 1 )
        {
          v23 &= v23 >> (v22 >> 1);
          if ( !v23 )
            break;
          v22 -= v22 >> 1;
          if ( v22 <= 1 )
          {
            _BitScanForward64(&v23, v23);
            goto LABEL_27;
          }
        }
        if ( v11 == v19 )
          goto LABEL_31;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v12);
        if ( v20 )
          v18 = 64LL;
        else
          v18 = (unsigned int)(63 - v24);
        v12 = ~*++v11;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v11 > v13 )
          goto LABEL_31;
        v12 = ~*v11;
        if ( *v11 )
        {
          v18 = 0LL;
          goto LABEL_16;
        }
      }
    }
    while ( v12 == -1LL )
    {
      if ( (unsigned __int64)++v11 > v13 )
        goto LABEL_31;
      v12 = ~*v11;
    }
    _BitScanForward64(&v14, ~v12);
    v15 = v14 + ((__int64)((__int64)v11 - v5) >> 3 << 6);
LABEL_10:
    if ( v15 <= v10 )
      break;
LABEL_31:
    v15 = -1LL;
LABEL_74:
    if ( !v7 )
      return v15;
    v35 = a2 + a3;
    v7 = 0LL;
    if ( a2 + a3 > v3 )
      v35 = v3;
    v8 = v35 - 1;
  }
LABEL_11:
  if ( v15 == -1LL )
    goto LABEL_74;
  return v15;
}
