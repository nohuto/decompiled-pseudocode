/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1404F7584
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvpFreeMap @ 0x1404CC7DC (HvpFreeMap.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpValidateLoadedBin @ 0x1404F7398 (HvpValidateLoadedBin.c)
 *     HvpEnlistBinInMap @ 0x1404F73D0 (HvpEnlistBinInMap.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2)
{
  int *v1; // r13
  char v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // r12d
  __int64 CellMap; // rax
  unsigned __int64 v7; // r11
  unsigned int v8; // r15d
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  int *v11; // r14
  __int64 v12; // r11
  unsigned int v13; // r10d
  int v14; // eax
  int Bin; // esi
  unsigned int v16; // r9d
  char *v18; // rcx
  char *v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rax
  unsigned int v22; // r8d
  int v23; // eax
  unsigned int v24; // r14d
  char *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // r12
  unsigned __int64 v29; // rcx
  char *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // r14d
  void *v35; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-31h]
  int *v37; // [rsp+50h] [rbp-29h] BYREF
  void *v38; // [rsp+58h] [rbp-21h] BYREF
  __int64 v39; // [rsp+60h] [rbp-19h] BYREF
  void *v40; // [rsp+68h] [rbp-11h] BYREF
  __int64 v41; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-1h]
  unsigned __int64 v43; // [rsp+80h] [rbp+7h]
  char v44; // [rsp+E0h] [rbp+67h]
  unsigned int Size; // [rsp+E8h] [rbp+6Fh]
  unsigned int Sizea; // [rsp+E8h] [rbp+6Fh]
  unsigned int Sizeb; // [rsp+E8h] [rbp+6Fh]
  int v48; // [rsp+F0h] [rbp+77h]
  int v49; // [rsp+F0h] [rbp+77h]
  unsigned int v50; // [rsp+F8h] [rbp+7Fh]

  v1 = 0LL;
  v50 = 0;
  v2 = 0;
  v3 = 0;
  v44 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  v36 = v5;
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
      v11 = (int *)v9;
      v43 = v7;
      if ( v7 )
        v11 = (int *)v7;
      v42 = v9;
      Size = *(_DWORD *)(v10 + 40);
      if ( HvpValidateLoadedBin(v11, v3, Size) )
      {
        v13 = v11[2];
        if ( v13 == v8 )
        {
          v14 = HvpEnlistBinInMap(BugCheckParameter2, Size, v9, v12, v3);
          Bin = v14;
          if ( v14 < 0 )
            return (unsigned int)Bin;
          if ( v14 == 1073741833 )
          {
            HvpMarkDirty(BugCheckParameter2, v3, v11[2], 0);
            v44 = 1;
          }
          v3 += v11[2];
        }
        else if ( v13 >= v8 )
        {
          v20 = v8 + v3;
          while ( v8 < v13 )
          {
            v21 = HvpGetCellMap(BugCheckParameter2, v20);
            if ( !v21 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v22, 0x6B5uLL);
            v23 = *(_DWORD *)(v21 + 32);
            v8 += v23;
            v20 = v23 + v22;
          }
          Bin = HvpAllocateBin(BugCheckParameter2, v8, 0, v3, 0x31334D43u, &v41, (__int64 *)&v35);
          if ( Bin < 0 )
            return (unsigned int)Bin;
          v24 = v3;
          v25 = (char *)v41;
          if ( v35 )
            v25 = (char *)v35;
          Sizeb = 0;
          if ( v8 )
          {
            do
            {
              v26 = HvpGetCellMap(BugCheckParameter2, v24);
              if ( !v26 )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v24, 0x6E4uLL);
              v28 = *(unsigned int *)(v26 + 32);
              v29 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
              v30 = (char *)v29;
              v31 = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v49 = v29;
              v42 = v31;
              if ( v31 )
                v30 = (char *)v31;
              if ( v25 != v30 )
              {
                memmove(v25, v30, (unsigned int)v28);
                LODWORD(v29) = v49;
                v27 = Sizeb;
              }
              Sizeb = v28 + v27;
              v25 += v28;
              v24 += v28;
              HvpFreeBin(BugCheckParameter2, v28, 0, v29, v42);
            }
            while ( Sizeb < v8 );
            v5 = v36;
          }
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v41, (__int64)v35, v8, v3, 0LL);
          v41 = 0LL;
          v35 = 0LL;
        }
        else
        {
          v50 = v11[2];
          v48 = v13 + v3;
          Bin = HvpAllocateBin(BugCheckParameter2, v13, 0, v3, 0x31334D43u, (__int64 *)&v37, (__int64 *)&v38);
          if ( Bin < 0 )
            return (unsigned int)Bin;
          v1 = v37;
          if ( v38 )
            v1 = (int *)v38;
          if ( v11 != v1 )
            memmove(v1, v11, (unsigned int)v11[2]);
          Sizea = v8 - v11[2];
          Bin = HvpAllocateBin(BugCheckParameter2, Sizea, 0, v48, 0x31334D43u, &v39, (__int64 *)&v40);
          if ( Bin < 0 )
            goto LABEL_18;
          v18 = (char *)v39;
          if ( v40 )
            v18 = (char *)v40;
          v19 = (char *)v11 + (unsigned int)v11[2];
          if ( v18 != v19 )
            memmove(v18, v19, Sizea);
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v39, (__int64)v40, Sizea, v48, 0LL);
          Bin = HvpEnlistBinInMap(
                  BugCheckParameter2,
                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
                  (__int64)v37,
                  (__int64)v38,
                  v3);
          HvpFreeBin(BugCheckParameter2, v8, 0, v42, v43);
          if ( Bin == 1073741833 )
          {
            HvpMarkDirty(BugCheckParameter2, v3, v1[2], 0);
            v44 = 1;
          }
          if ( Bin < 0 )
            return (unsigned int)Bin;
          v3 += v1[2];
          v1 = 0LL;
          v37 = 0LL;
          v38 = 0LL;
          v39 = 0LL;
          v40 = 0LL;
        }
        v2 = v44;
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
        HvpMarkDirty(BugCheckParameter2, v11[1], 4096, 0);
        v2 = 1;
        v44 = 1;
      }
    }
    while ( v3 < v5 );
  }
  while ( v3 < *(_DWORD *)(BugCheckParameter2 + 1400) )
  {
    v32 = HvpGetCellMap(BugCheckParameter2, v3);
    v33 = v32;
    if ( !v32 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x755uLL);
    v34 = *(_DWORD *)(v32 + 32);
    HvpFreeBin(
      BugCheckParameter2,
      v34,
      0,
      *(_DWORD *)(v32 + 8) & 0xFFFFFFF0,
      *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    while ( v34 )
    {
      *(_QWORD *)(v33 + 8) = 0LL;
      v3 += 4096;
      *(_QWORD *)(v33 + 16) = 0LL;
      *(_QWORD *)v33 = 0LL;
      *(_DWORD *)(v33 + 32) = 0;
      v34 -= 4096;
      if ( !v34 )
        break;
      v33 = HvpGetCellMap(BugCheckParameter2, v3);
      if ( !v33 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x770uLL);
    }
  }
  v16 = *(_DWORD *)(BugCheckParameter2 + 1400);
  if ( v5 < v16 )
    HvpFreeMap(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 1408), ((v5 - 1) >> 21) + 1, (v16 - 1) >> 21);
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
      (*(void (__fastcall **)(int *, _QWORD))(BugCheckParameter2 + 32))(v1, v50);
  }
  return (unsigned int)Bin;
}
