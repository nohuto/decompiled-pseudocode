/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x1400171EC
 * Callers:
 *     MiReplenishNonPagedSlists @ 0x140017040 (MiReplenishNonPagedSlists.c)
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140133D5C (ExpSaPageGroupAllocateMemory.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 *v4; // r12
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v20; // rdx
  unsigned __int64 *v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 *v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v39; // [rsp+68h] [rbp+10h]

  v3 = *a1;
  v4 = a1;
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
      v17 = -1LL;
LABEL_35:
      if ( !v8 )
        goto LABEL_12;
      v27 = a2 + a3;
      v8 = 0LL;
      if ( a2 + a3 > v3 )
        v27 = v3;
      v9 = v27 - 1;
    }
    v12 = v9 - a2 + 1;
    v13 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
    v14 = ((1LL << (v8 & 0x3F)) - 1) | *v13;
    v15 = v5 + 8 * ((v10 - a2 + 1) >> 6);
    if ( a2 > 0x7F )
    {
      if ( (v12 & 0x3F) != 0 )
        v15 += 8LL;
      if ( v14 )
      {
        if ( *++v13 )
          goto LABEL_50;
        v22 = !_BitScanReverse64((unsigned __int64 *)&v28, v14);
        if ( v22 )
          v29 = 64;
        else
          v29 = 63 - v28;
      }
      else
      {
        v29 = 0;
      }
      while ( 1 )
      {
        v17 = ((__int64)((__int64)v13 - v11) >> 3 << 6) - v29;
        if ( v17 > v12 )
          goto LABEL_33;
        v33 = &v13[(a2 - v29) >> 6];
        while ( ++v13 != v33 )
        {
          if ( *v13 )
            goto LABEL_50;
        }
        v30 = ((_BYTE)a2 - (_BYTE)v29) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v29) & 0x3F) == 0 )
          goto LABEL_11;
        v22 = !_BitScanForward64((unsigned __int64 *)&v31, *v13);
        if ( v22 )
          LODWORD(v31) = 64;
        if ( (unsigned int)v31 >= v30 )
          goto LABEL_11;
        do
        {
LABEL_50:
          if ( (unsigned __int64)v13 > v15 )
            goto LABEL_33;
          ++v13;
        }
        while ( *v13 );
        v22 = !_BitScanReverse64((unsigned __int64 *)&v32, *(v13 - 1));
        if ( v22 )
          v29 = 64;
        else
          v29 = 63 - v32;
      }
    }
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v20 = 0LL;
        v21 = (unsigned __int64 *)(v5 + 8 * (v10 >> 6));
        while ( v14 != -1 )
        {
LABEL_18:
          v22 = !_BitScanForward64((unsigned __int64 *)&v23, v14);
          if ( v22 )
            LODWORD(v23) = 64;
          if ( (unsigned int)(v20 + v23) >= a2 )
          {
            v25 = -v20;
LABEL_29:
            v17 = ((__int64)((__int64)v13 - v5) >> 3 << 6) + v25;
            goto LABEL_10;
          }
          v24 = a2;
          v25 = ~v14;
          while ( 1 )
          {
            v25 &= v25 >> (v24 >> 1);
            if ( !v25 )
              break;
            v24 -= v24 >> 1;
            if ( v24 <= 1 )
            {
              _BitScanForward64(&v25, v25);
              goto LABEL_29;
            }
          }
          if ( v13 == v21 )
            goto LABEL_33;
          v22 = !_BitScanReverse64((unsigned __int64 *)&v26, v14);
          if ( v22 )
            v20 = 64LL;
          else
            v20 = (unsigned int)(63 - v26);
          v14 = *++v13;
        }
        while ( (unsigned __int64)++v13 <= v15 )
        {
          v14 = *v13;
          if ( *v13 != -1LL )
          {
            v20 = 0LL;
            goto LABEL_18;
          }
        }
      }
      else
      {
        while ( v14 == -1 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_33;
          v14 = *v13;
        }
        _BitScanForward64(&v16, ~v14);
        v17 = v16 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
LABEL_10:
        if ( v17 <= v12 )
        {
LABEL_11:
          if ( v17 != -1LL )
          {
LABEL_12:
            v4 = a1;
            v18 = v17;
            goto LABEL_13;
          }
          goto LABEL_34;
        }
      }
LABEL_33:
      v17 = -1LL;
LABEL_34:
      v5 = v39;
      goto LABEL_35;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_33;
          v14 = *v13;
        }
        v22 = !_BitScanReverse64((unsigned __int64 *)&v34, v14);
        if ( v22 )
          v35 = 64;
        else
          v35 = 63 - v34;
        v17 = ((((__int64)((__int64)v13 - v11) >> 3) + 1) << 6) - v35;
        if ( v17 > v12 )
          goto LABEL_33;
        v36 = a2 - v35;
        if ( a2 == v35 )
          goto LABEL_11;
        v14 = *++v13;
        if ( v36 >= 0x40 )
          break;
LABEL_71:
        v22 = !_BitScanForward64(&v37, v14);
        if ( v22 )
          v37 = 64LL;
        if ( v37 >= v36 )
          goto LABEL_11;
      }
      if ( !v14 )
      {
        v36 -= 64LL;
        if ( !v36 )
          goto LABEL_11;
        v14 = *++v13;
        goto LABEL_71;
      }
    }
  }
  v18 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v18 != -1LL )
    RtlSetBitsEx(v4, v18, a2);
  return v18;
}
