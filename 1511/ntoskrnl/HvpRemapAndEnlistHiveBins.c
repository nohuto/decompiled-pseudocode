/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1403D8960
 * Callers:
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvpFreeMap @ 0x1403D4688 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x1403D82E0 (HvpFreeBin.c)
 *     HvpEnlistBinInMap @ 0x1403D8A90 (HvpEnlistBinInMap.c)
 *     HvpAllocateBin @ 0x1403D8E78 (HvpAllocateBin.c)
 *     HvpValidateLoadedBin @ 0x1403D8FD8 (HvpValidateLoadedBin.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvpPointMapEntriesToBuffer @ 0x1403F79BC (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2)
{
  _DWORD *v1; // r13
  char v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // r12d
  __int64 CellMap; // rax
  unsigned __int64 v7; // r11
  unsigned int v8; // r15d
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  _DWORD *v11; // r14
  unsigned int v12; // r10d
  int v13; // eax
  int Bin; // esi
  unsigned int v15; // r9d
  char *v17; // rcx
  char *v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // r14d
  char *v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // r12
  unsigned __int64 v28; // rcx
  char *v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // r14d
  void *v34; // [rsp+40h] [rbp-39h] BYREF
  __int64 v35; // [rsp+48h] [rbp-31h] BYREF
  void *v36; // [rsp+50h] [rbp-29h] BYREF
  _DWORD *v37; // [rsp+58h] [rbp-21h] BYREF
  __int64 v38; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-11h]
  unsigned __int64 v40; // [rsp+70h] [rbp-9h]
  void *v41; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp+7h]
  char v43; // [rsp+E0h] [rbp+67h]
  unsigned int Size; // [rsp+E8h] [rbp+6Fh]
  unsigned int Sizea; // [rsp+E8h] [rbp+6Fh]
  int v46; // [rsp+F0h] [rbp+77h]
  unsigned __int64 v47; // [rsp+F0h] [rbp+77h]
  unsigned int v48; // [rsp+F8h] [rbp+7Fh]

  v1 = 0LL;
  v48 = 0;
  v2 = 0;
  v3 = 0;
  v43 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  v39 = v5;
  if ( v5 )
  {
    do
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v3);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x5B4uLL);
      v7 = *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v8 = *(_DWORD *)(CellMap + 32);
      v9 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = *(_QWORD *)(BugCheckParameter2 + 64);
      v11 = (_DWORD *)v9;
      v42 = v7;
      if ( v7 )
        v11 = (_DWORD *)v7;
      v40 = v9;
      if ( (unsigned __int8)HvpValidateLoadedBin(v11, v3, *(unsigned int *)(v10 + 40)) )
      {
        v12 = v11[2];
        if ( v12 == v8 )
        {
          v13 = HvpEnlistBinInMap(BugCheckParameter2, v3);
          Bin = v13;
          if ( v13 < 0 )
            return (unsigned int)Bin;
          if ( v13 == 1073741833 )
          {
            HvpMarkDirty(BugCheckParameter2);
            v43 = 1;
          }
          v3 += v11[2];
        }
        else if ( v12 >= v8 )
        {
          v19 = v8 + v3;
          while ( v8 < v12 )
          {
            v20 = HvpGetCellMap(BugCheckParameter2, v19);
            if ( !v20 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0x6B5uLL);
            v22 = *(_DWORD *)(v20 + 32);
            v8 += v22;
            v19 = v22 + v21;
          }
          Bin = HvpAllocateBin(BugCheckParameter2, v8, 0, v3, 825445699, (__int64)&v38, (__int64)&v34);
          if ( Bin < 0 )
            return (unsigned int)Bin;
          v23 = v3;
          v24 = (char *)v38;
          if ( v34 )
            v24 = (char *)v34;
          Sizea = 0;
          if ( v8 )
          {
            do
            {
              v25 = HvpGetCellMap(BugCheckParameter2, v23);
              if ( !v25 )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v23, 0x6E4uLL);
              v27 = *(unsigned int *)(v25 + 32);
              v28 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
              v29 = (char *)v28;
              v30 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v47 = v28;
              v40 = v30;
              if ( v30 )
                v29 = (char *)v30;
              if ( v24 != v29 )
              {
                memmove(v24, v29, (unsigned int)v27);
                v28 = v47;
                v26 = Sizea;
              }
              Sizea = v27 + v26;
              v24 += v27;
              v23 += v27;
              HvpFreeBin(BugCheckParameter2, v27, 0, v28, v40);
            }
            while ( Sizea < v8 );
            v5 = v39;
          }
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v3, 0LL);
          v38 = 0LL;
          v34 = 0LL;
        }
        else
        {
          v48 = v11[2];
          v46 = v12 + v3;
          Bin = HvpAllocateBin(BugCheckParameter2, v12, 0, v3, 825445699, (__int64)&v37, (__int64)&v41);
          if ( Bin < 0 )
            return (unsigned int)Bin;
          v1 = v37;
          if ( v41 )
            v1 = v41;
          if ( v11 != v1 )
            memmove(v1, v11, (unsigned int)v11[2]);
          Size = v8 - v11[2];
          Bin = HvpAllocateBin(BugCheckParameter2, Size, 0, v46, 825445699, (__int64)&v35, (__int64)&v36);
          if ( Bin < 0 )
            goto LABEL_18;
          v17 = (char *)v35;
          if ( v36 )
            v17 = (char *)v36;
          v18 = (char *)v11 + (unsigned int)v11[2];
          if ( v17 != v18 )
            memmove(v17, v18, Size);
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v46, 0LL);
          Bin = HvpEnlistBinInMap(BugCheckParameter2, v3);
          HvpFreeBin(BugCheckParameter2, v8, 0, v40, v42);
          if ( Bin == 1073741833 )
          {
            HvpMarkDirty(BugCheckParameter2);
            v43 = 1;
          }
          if ( Bin < 0 )
            return (unsigned int)Bin;
          v3 += v1[2];
          v1 = 0LL;
          v37 = 0LL;
          v41 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
        }
        v2 = v43;
      }
      else
      {
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
          return (unsigned int)-1073741492;
        v11[1] = v3;
        v11[2] = 4096;
        *v11 = 1852400232;
        v11[8] = 4064;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        HvpMarkDirty(BugCheckParameter2);
        v2 = 1;
        v43 = 1;
      }
    }
    while ( v3 < v5 );
  }
  while ( v3 < *(_DWORD *)(BugCheckParameter2 + 1400) )
  {
    v31 = HvpGetCellMap(BugCheckParameter2, v3);
    v32 = v31;
    if ( !v31 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x755uLL);
    v33 = *(_DWORD *)(v31 + 32);
    HvpFreeBin(
      BugCheckParameter2,
      v33,
      0,
      *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0uLL,
      *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    while ( v33 )
    {
      *(_QWORD *)(v32 + 8) = 0LL;
      v3 += 4096;
      *(_QWORD *)(v32 + 16) = 0LL;
      *(_QWORD *)v32 = 0LL;
      *(_DWORD *)(v32 + 32) = 0;
      v33 -= 4096;
      if ( !v33 )
        break;
      v32 = HvpGetCellMap(BugCheckParameter2, v3);
      if ( !v32 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x770uLL);
    }
  }
  v15 = *(_DWORD *)(BugCheckParameter2 + 1400);
  if ( v5 < v15 )
    HvpFreeMap(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 1408), ((v5 - 1) >> 21) + 1, (v15 - 1) >> 21);
  *(_DWORD *)(BugCheckParameter2 + 1400) = v5;
  if ( v2 )
  {
    return 1073741833;
  }
  else
  {
    Bin = 0;
LABEL_18:
    if ( v1 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(v1, v48);
  }
  return (unsigned int)Bin;
}
