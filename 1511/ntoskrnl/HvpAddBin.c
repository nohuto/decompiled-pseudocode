/*
 * XREFs of HvpAddBin @ 0x1403D5214
 * Callers:
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     RtlCopyBitMap @ 0x1400220C8 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpCanGrowHive @ 0x1403D50E4 (CmpCanGrowHive.c)
 *     HvpExpandMap @ 0x1403D5150 (HvpExpandMap.c)
 *     HvpFindFreeBin @ 0x1403D5908 (HvpFindFreeBin.c)
 *     HvpFreeBin @ 0x1403D82E0 (HvpFreeBin.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1403D8368 (HvpAdjustHiveFreeDisplay.c)
 *     HvpProtectBin @ 0x1403D8E10 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1403D8E78 (HvpAllocateBin.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvpPointMapEntriesToBuffer @ 0x1403F79BC (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1404C5078 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpBoostActiveHiveWriter @ 0x1404C5F60 (CmpBoostActiveHiveWriter.c)
 *     HvpShrinkMap @ 0x1405EBD78 (HvpShrinkMap.c)
 *     HvpReviveDiscardedBin @ 0x1405EC2A4 (HvpReviveDiscardedBin.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r12
  __int64 *v5; // r15
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // r13d
  __int64 *FreeBin; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _DWORD *v13; // rbx
  char v14; // al
  void *v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdi
  unsigned int *v20; // rbx
  ULONG v21; // ecx
  unsigned int v22; // r13d
  unsigned int v23; // eax
  ULONG v24; // ebx
  __int64 v25; // rax
  ULONG v26; // edx
  __int64 v27; // rcx
  __int64 **v28; // rax
  int v29; // ebx
  unsigned int v30; // r8d
  __int64 CellMap; // rax
  unsigned int v32; // r8d
  unsigned int v33; // r11d
  _QWORD *v34; // r10
  __int64 v35; // rax
  void *v36; // rax
  bool v37; // zf
  void *v38; // rax
  void *v39; // rax
  _DWORD *v40; // rbx
  char v41; // al
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rcx
  int v46; // ebx
  ULONG v47; // eax
  __int64 v48; // rax
  ULONG v49; // eax
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  __int64 *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // [rsp+40h] [rbp-59h]
  unsigned int v55; // [rsp+40h] [rbp-59h]
  _DWORD *v56; // [rsp+48h] [rbp-51h] BYREF
  int v57; // [rsp+50h] [rbp-49h]
  size_t Size; // [rsp+54h] [rbp-45h]
  ULONG StartingIndex; // [rsp+5Ch] [rbp-3Dh]
  _DWORD *v60; // [rsp+60h] [rbp-39h] BYREF
  void *v61; // [rsp+68h] [rbp-31h]
  void *v62; // [rsp+70h] [rbp-29h] BYREF
  void *v63; // [rsp+78h] [rbp-21h]
  __int64 v64; // [rsp+80h] [rbp-19h]
  void *v65; // [rsp+88h] [rbp-11h] BYREF
  __int64 v66; // [rsp+90h] [rbp-9h]
  _RTL_BITMAP Destination; // [rsp+98h] [rbp-1h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+A8h] [rbp+Fh] BYREF
  char v69; // [rsp+100h] [rbp+67h]
  char v70; // [rsp+108h] [rbp+6Fh]
  unsigned int v71; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  Size = 0LL;
  v63 = 0LL;
  v5 = 0LL;
  v6 = -1;
  v61 = 0LL;
  v7 = (a2 + 4127) & 0xFFFFF000;
  v65 = 0LL;
  v8 = 0;
  v60 = 0LL;
  v64 = 0LL;
  v56 = 0LL;
  v62 = 0LL;
  v71 = 0;
  v57 = -1;
  v70 = 0;
  v69 = 0;
  if ( v7 <= 0x3000 && v7 - (unsigned __int64)a2 - 32 < 0xE00 )
    v7 += 4096;
  if ( !*(_BYTE *)(BugCheckParameter2 + 4168) || a3 == 1 )
  {
    FreeBin = (__int64 *)HvpFindFreeBin(BugCheckParameter2);
    v5 = FreeBin;
    if ( FreeBin )
    {
      v27 = *FreeBin;
      v28 = (__int64 **)FreeBin[1];
      if ( *(__int64 **)(v27 + 8) != v5 || *v28 != v5 )
        __fastfail(3u);
      *v28 = (__int64 *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      v29 = (_DWORD)v4 << 31;
      if ( !(unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
        goto LABEL_102;
      if ( (v5[3] & 1) != 0 )
      {
        v6 = *((_DWORD *)v5 + 5) + v29;
        v30 = 0;
        v57 = v6;
        if ( HIDWORD(Size) )
        {
          do
          {
            CellMap = HvpGetCellMap(BugCheckParameter2, v30 + v6);
            v34 = (_QWORD *)CellMap;
            if ( !CellMap )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v32 + v6, 0x38DuLL);
            *(_QWORD *)(CellMap + 8) &= ~2uLL;
            v35 = v32;
            v30 = v32 + 4096;
            *v34 = v35;
          }
          while ( v30 < v33 );
        }
        if ( !(_DWORD)v4 )
          HvpSetRangeProtection(BugCheckParameter2, v6);
LABEL_24:
        if ( v6 != -1 )
          goto LABEL_25;
        v18 = (__int64)v56;
        if ( !v70 )
          goto LABEL_86;
        goto LABEL_85;
      }
      if ( (int)HvpReviveDiscardedBin(BugCheckParameter2) < 0 )
      {
LABEL_102:
        v6 = v57;
        goto LABEL_25;
      }
      v6 = *((_DWORD *)v5 + 5) + v29;
LABEL_23:
      v57 = v6;
      goto LABEL_24;
    }
  }
  v66 = 632 * v4;
  v3 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400);
  v71 = v3;
  v8 = v7 + v3;
  v54 = v7 + v3;
  if ( !(_DWORD)v4 && v7 <= 0x40000 && (((v3 + 4096) ^ (v8 + 4095)) & 0xFFFC0000) != 0 )
  {
    v71 = ((v3 + 266239) & 0xFFFC0000) - 4096;
    v8 = v7 + v71;
    v54 = v7 + v71;
  }
  if ( v8 >= v3 && CmpCanGrowHive(BugCheckParameter2, v8) && (int)HvpExpandMap(BugCheckParameter2, v4, v3, v8) >= 0 )
  {
    v70 = 1;
    if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v8, (unsigned int)v4) < 0 )
      goto LABEL_70;
    *(_DWORD *)(v66 + BugCheckParameter2 + 1400) = v8;
    if ( !(_DWORD)v4 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) == 0 )
      {
        v20 = (unsigned int *)(BugCheckParameter2 + 72);
        v21 = *(_DWORD *)(BugCheckParameter2 + 72);
        v22 = (v8 + 511) >> 9;
        StartingIndex = v21;
        v23 = (((v22 + 7) >> 3) + 3) & 0xFFFFFFFC;
        LODWORD(Size) = v23;
        if ( *(_DWORD *)(BugCheckParameter2 + 92) < v23 )
        {
          v63 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                          v23,
                          0LL,
                          959532355LL);
          if ( !v63
            || (v36 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                (unsigned int)Size,
                                0LL,
                                959532355LL),
                (v61 = v36) == 0LL) )
          {
            v8 = v54;
            goto LABEL_70;
          }
          v37 = *(_QWORD *)(BugCheckParameter2 + 80) == 0LL;
          Destination.Buffer = (unsigned int *)v63;
          Destination.SizeOfBitMap = v22;
          BitMapHeader.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)v36;
          if ( v37 )
          {
            memset(v63, 0, (unsigned int)Size);
          }
          else
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 72), &Destination, 0);
            RtlClearBits(&Destination, StartingIndex, v22 - StartingIndex);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 80),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          if ( *(_QWORD *)(BugCheckParameter2 + 104) )
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 96), &BitMapHeader, 0);
            RtlClearBits(&BitMapHeader, StartingIndex, v22 - StartingIndex);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 104),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          else
          {
            memset(v61, 0, (unsigned int)Size);
          }
          v38 = v63;
          v63 = 0LL;
          *(_QWORD *)(BugCheckParameter2 + 80) = v38;
          v39 = v61;
          v61 = 0LL;
          *v20 = v22;
          *(_QWORD *)(BugCheckParameter2 + 104) = v39;
          LODWORD(v39) = Size;
          *(_DWORD *)(BugCheckParameter2 + 96) = v22;
          *(_DWORD *)(BugCheckParameter2 + 92) = (_DWORD)v39;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *v20 = v22;
          v24 = v22 - v21;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v21, v22 - v21);
          v25 = *(_QWORD *)(BugCheckParameter2 + 104);
          v26 = StartingIndex;
          *(_DWORD *)(BugCheckParameter2 + 96) = v22;
          *(_QWORD *)(BugCheckParameter2 + 104) = v25;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v26, v24);
        }
        v8 = v54;
        v69 = 1;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
      {
        CmpBoostActiveHiveWriter(v11, BugCheckParameter2 + 5464);
        if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v8 + 4096, 1LL) < 0 )
          goto LABEL_70;
        if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 5492) )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v3;
      }
    }
    v12 = v71;
    if ( v71 == v3 )
    {
LABEL_13:
      if ( (int)HvpAllocateBin(BugCheckParameter2, v7, v4, v12, 909200707, (__int64)&v62, (__int64)&v56) < 0 )
        goto LABEL_70;
      if ( v56 )
      {
        v13 = v56;
      }
      else
      {
        v13 = v62;
        if ( v62 )
        {
          v14 = 0;
          goto LABEL_17;
        }
      }
      v14 = 1;
LABEL_17:
      if ( (int)HvpProtectBin(BugCheckParameter2, v7, v4, v71, (__int64)v13, v14) >= 0 )
      {
        memset(v13, 0, v7);
        v13[7] = 0;
        v15 = v65;
        v16 = (__int64)v60;
        v13[1] = v71 & 0x7FFFFFFF;
        *v13 = 1852400232;
        v13[2] = v7;
        v13[8] = v7 - 32;
        if ( v15 || v16 )
        {
          v17 = v71;
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v3 + ((_DWORD)v4 << 31), v64);
          v43 = v64;
          v44 = (__int64 *)(BugCheckParameter2 + v66 + 2008);
          v45 = *v44;
          *(_QWORD *)v64 = *v44;
          *(_QWORD *)(v43 + 8) = v44;
          if ( *(__int64 **)(v45 + 8) != v44 )
            __fastfail(3u);
          *(_QWORD *)(v45 + 8) = v43;
          *v44 = v43;
        }
        else
        {
          v17 = v71;
        }
        v18 = (__int64)v56;
        v6 = ((_DWORD)v4 << 31) + v17;
        v71 = v6;
        HvpPointMapEntriesToBuffer(BugCheckParameter2, v6, 0LL);
        if ( (_DWORD)v4 )
          goto LABEL_22;
        if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
        {
          CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v8, v3);
          HvpSetRangeProtection(BugCheckParameter2, v3);
LABEL_22:
          v64 = 0LL;
          v65 = 0LL;
          v60 = 0LL;
          v62 = 0LL;
          v56 = 0LL;
          goto LABEL_23;
        }
LABEL_85:
        HvpShrinkMap(BugCheckParameter2, (unsigned int)v4, v8, v3);
        *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400) = v3;
LABEL_86:
        if ( v69 )
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *(_DWORD *)(BugCheckParameter2 + 72) = v3 >> 9;
          v46 = *(_DWORD *)(BugCheckParameter2 + 88);
          v47 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
          *(_DWORD *)(BugCheckParameter2 + 88) = v47;
          _InterlockedExchangeAdd(&CmpDirtySectorCount, v47 - v46);
          v48 = *(_QWORD *)(BugCheckParameter2 + 104);
          *(_DWORD *)(BugCheckParameter2 + 96) = v3 >> 9;
          *(_QWORD *)(BugCheckParameter2 + 104) = v48;
          v49 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
          v18 = (__int64)v56;
          *(_DWORD *)(BugCheckParameter2 + 112) = v49;
        }
        v50 = Size;
        if ( v61 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v61, (unsigned int)Size);
        if ( v63 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v63, v50);
        if ( v65 || v60 )
        {
          v51 = v71;
          HvpFreeBin(BugCheckParameter2, v71 - v3, v4, (_DWORD)v65, (__int64)v60);
        }
        else
        {
          v51 = v71;
        }
        if ( v64 )
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v64, 32LL);
        if ( v62 || v18 )
          HvpFreeBin(BugCheckParameter2, v8 - v51, v4, (_DWORD)v62, v18);
        goto LABEL_102;
      }
LABEL_70:
      v18 = (__int64)v56;
      goto LABEL_85;
    }
    v55 = v71 - v3;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v71 - v3, v4, v3, 808602947, (__int64)&v65, (__int64)&v60) < 0 )
      goto LABEL_70;
    if ( v60 )
    {
      v40 = v60;
    }
    else
    {
      v40 = v65;
      if ( v65 )
      {
        v41 = 0;
        goto LABEL_65;
      }
    }
    v41 = 1;
LABEL_65:
    if ( (int)HvpProtectBin(BugCheckParameter2, v55, v4, v3, (__int64)v40, v41) < 0 )
      goto LABEL_70;
    memset(v40, 0, v55);
    v40[7] = 0;
    v40[1] = v3 & 0x7FFFFFFF;
    v40[2] = v55;
    *v40 = 1852400232;
    v40[8] = v55 - 32;
    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(32LL, 0LL, 825380163LL);
    v42 = v64;
    if ( !v64 )
      goto LABEL_70;
    *(_DWORD *)(v64 + 16) = v55;
    *(_DWORD *)(v42 + 20) = v3;
    *(_DWORD *)(v42 + 24) = 1;
    v12 = v71;
    goto LABEL_13;
  }
LABEL_25:
  if ( v5 )
  {
    if ( v6 == -1 )
    {
      v52 = (__int64 *)(632 * v4 + BugCheckParameter2 + 2008);
      v53 = *v52;
      *v5 = *v52;
      v5[1] = (__int64)v52;
      if ( *(__int64 **)(v53 + 8) != v52 )
        __fastfail(3u);
      *(_QWORD *)(v53 + 8) = v5;
      *v52 = (__int64)v5;
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int64))(BugCheckParameter2 + 32))(v5, 32LL);
    }
  }
  return v6;
}
