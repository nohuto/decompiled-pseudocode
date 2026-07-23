/*
 * XREFs of HvpAddBin @ 0x14047CC64
 * Callers:
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     RtlCopyBitMap @ 0x140076AF8 (RtlCopyBitMap.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpBoostActiveHiveWriter @ 0x14047C198 (CmpBoostActiveHiveWriter.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x14047C1B4 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpCanGrowHive @ 0x14047CB30 (CmpCanGrowHive.c)
 *     HvpExpandMap @ 0x14047CBA0 (HvpExpandMap.c)
 *     HvpFindFreeBin @ 0x14047D344 (HvpFindFreeBin.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14047DC5C (HvpAdjustHiveFreeDisplay.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpProtectBin @ 0x1404F71D0 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 *     HvpShrinkMap @ 0x1406108D0 (HvpShrinkMap.c)
 *     HvpReviveDiscardedBin @ 0x140610950 (HvpReviveDiscardedBin.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r12
  _QWORD *v5; // r15
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // r13d
  _QWORD *FreeBin; // rax
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
  void *v24; // rax
  bool v25; // zf
  void *v26; // rax
  void *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // ebx
  unsigned int v31; // r8d
  __int64 CellMap; // rax
  unsigned int v33; // r8d
  unsigned int v34; // r11d
  _QWORD *v35; // r10
  __int64 v36; // rax
  ULONG v37; // ebx
  __int64 v38; // rax
  ULONG v39; // edx
  _DWORD *v40; // rbx
  char v41; // al
  __int64 v42; // rbx
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // ebx
  ULONG v47; // eax
  __int64 v48; // rax
  ULONG v49; // eax
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  ULONG_PTR v52; // rax
  __int64 v53; // rcx
  unsigned int Size; // [rsp+40h] [rbp-59h]
  unsigned int Sizea; // [rsp+40h] [rbp-59h]
  _DWORD *v56; // [rsp+48h] [rbp-51h] BYREF
  size_t v57; // [rsp+50h] [rbp-49h]
  int v58; // [rsp+58h] [rbp-41h]
  ULONG StartingIndex; // [rsp+5Ch] [rbp-3Dh]
  _DWORD *v60; // [rsp+60h] [rbp-39h] BYREF
  void *v61; // [rsp+68h] [rbp-31h]
  void *v62; // [rsp+70h] [rbp-29h]
  void *v63; // [rsp+78h] [rbp-21h] BYREF
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
  v57 = 0xFFFFFFFF00000000uLL;
  v62 = 0LL;
  v5 = 0LL;
  v58 = 0;
  v6 = -1;
  v61 = 0LL;
  v7 = (a2 + 4127) & 0xFFFFF000;
  v63 = 0LL;
  v8 = 0;
  v60 = 0LL;
  v64 = 0LL;
  v56 = 0LL;
  v65 = 0LL;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  if ( v7 <= 0x3000 && v7 - (unsigned __int64)a2 - 32 < 0xE00 )
    v7 += 4096;
  if ( !*(_BYTE *)(BugCheckParameter2 + 4168) || a3 == 1 )
  {
    FreeBin = (_QWORD *)HvpFindFreeBin(BugCheckParameter2);
    v5 = FreeBin;
    if ( FreeBin )
    {
      v28 = *FreeBin;
      v29 = (_QWORD *)FreeBin[1];
      if ( *(_QWORD **)(v28 + 8) != v5 || (_QWORD *)*v29 != v5 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v30 = (_DWORD)v4 << 31;
      if ( !(unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
        goto LABEL_102;
      if ( (v5[3] & 1) != 0 )
      {
        v6 = *((_DWORD *)v5 + 5) + v30;
        v31 = 0;
        HIDWORD(v57) = v6;
        if ( v58 )
        {
          do
          {
            CellMap = HvpGetCellMap(BugCheckParameter2, v31 + v6);
            v35 = (_QWORD *)CellMap;
            if ( !CellMap )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v33 + v6, 0x38DuLL);
            *(_QWORD *)(CellMap + 8) &= ~2uLL;
            v36 = v33;
            v31 = v33 + 4096;
            *v35 = v36;
          }
          while ( v31 < v34 );
        }
        if ( !(_DWORD)v4 )
          HvpSetRangeProtection(BugCheckParameter2);
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
        v6 = HIDWORD(v57);
        goto LABEL_25;
      }
      v6 = *((_DWORD *)v5 + 5) + v30;
LABEL_23:
      HIDWORD(v57) = v6;
      goto LABEL_24;
    }
  }
  v66 = 632 * v4;
  v3 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400);
  v71 = v3;
  v8 = v7 + v3;
  Size = v7 + v3;
  if ( !(_DWORD)v4 && v7 <= 0x40000 && (((v3 + 4096) ^ (v8 + 4095)) & 0xFFFC0000) != 0 )
  {
    v71 = ((v3 + 266239) & 0xFFFC0000) - 4096;
    v8 = v7 + v71;
    Size = v7 + v71;
  }
  if ( v8 >= v3 && CmpCanGrowHive(BugCheckParameter2, v8) && (int)HvpExpandMap(BugCheckParameter2, v4, v3, v8) >= 0 )
  {
    v70 = 1;
    if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v8, (unsigned int)v4) < 0 )
      goto LABEL_68;
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
        LODWORD(v57) = v23;
        if ( *(_DWORD *)(BugCheckParameter2 + 92) >= v23 )
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *v20 = v22;
          v37 = v22 - v21;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v21, v22 - v21);
          v38 = *(_QWORD *)(BugCheckParameter2 + 104);
          v39 = StartingIndex;
          *(_DWORD *)(BugCheckParameter2 + 96) = v22;
          *(_QWORD *)(BugCheckParameter2 + 104) = v38;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v39, v37);
        }
        else
        {
          v62 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                          v23,
                          0LL,
                          959532355LL);
          if ( !v62
            || (v24 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                (unsigned int)v57,
                                0LL,
                                959532355LL),
                (v61 = v24) == 0LL) )
          {
            v8 = Size;
            goto LABEL_68;
          }
          v25 = *(_QWORD *)(BugCheckParameter2 + 80) == 0LL;
          Destination.Buffer = (unsigned int *)v62;
          Destination.SizeOfBitMap = v22;
          BitMapHeader.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)v24;
          if ( v25 )
          {
            memset(v62, 0, (unsigned int)v57);
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
            memset(v61, 0, (unsigned int)v57);
          }
          v26 = v62;
          v62 = 0LL;
          *(_QWORD *)(BugCheckParameter2 + 80) = v26;
          v27 = v61;
          v61 = 0LL;
          *v20 = v22;
          *(_QWORD *)(BugCheckParameter2 + 104) = v27;
          LODWORD(v27) = v57;
          *(_DWORD *)(BugCheckParameter2 + 96) = v22;
          *(_DWORD *)(BugCheckParameter2 + 92) = (_DWORD)v27;
        }
        v8 = Size;
        v69 = 1;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
      {
        CmpBoostActiveHiveWriter(v11, BugCheckParameter2 + 5464);
        if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v8 + 4096, 1LL) < 0 )
          goto LABEL_68;
        if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 5492) )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v3;
      }
    }
    v12 = v71;
    if ( v71 == v3 )
    {
LABEL_13:
      if ( (int)HvpAllocateBin(BugCheckParameter2, v7, v4, v12, 909200707, (__int64)&v65, (__int64)&v56) < 0 )
        goto LABEL_68;
      if ( v56 )
      {
        v13 = v56;
      }
      else
      {
        v13 = v65;
        if ( v65 )
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
        v15 = v63;
        v16 = (__int64)v60;
        v13[1] = v71 & 0x7FFFFFFF;
        *v13 = 1852400232;
        v13[2] = v7;
        v13[8] = v7 - 32;
        if ( v15 || v16 )
        {
          v17 = v71;
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v3 + ((_DWORD)v4 << 31), v64);
          v43 = (__int64 *)(BugCheckParameter2 + v66 + 2008);
          v44 = *v43;
          if ( *(__int64 **)(*v43 + 8) != v43 )
            __fastfail(3u);
          v45 = v64;
          *(_QWORD *)v64 = v44;
          *(_QWORD *)(v45 + 8) = v43;
          *(_QWORD *)(v44 + 8) = v45;
          *v43 = v45;
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
          HvpSetRangeProtection(BugCheckParameter2);
LABEL_22:
          v64 = 0LL;
          v63 = 0LL;
          v60 = 0LL;
          v65 = 0LL;
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
        v50 = v57;
        if ( v61 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v61, (unsigned int)v57);
        if ( v62 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v62, v50);
        if ( v63 || v60 )
        {
          v51 = v71;
          HvpFreeBin(BugCheckParameter2, v71 - v3, v4, (_DWORD)v63, (__int64)v60);
        }
        else
        {
          v51 = v71;
        }
        if ( v64 )
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v64, 32LL);
        if ( v65 || v18 )
          HvpFreeBin(BugCheckParameter2, v8 - v51, v4, (_DWORD)v65, v18);
        goto LABEL_102;
      }
LABEL_68:
      v18 = (__int64)v56;
      goto LABEL_85;
    }
    Sizea = v71 - v3;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v71 - v3, v4, v3, 808602947, (__int64)&v63, (__int64)&v60) < 0 )
      goto LABEL_68;
    if ( v60 )
    {
      v40 = v60;
    }
    else
    {
      v40 = v63;
      if ( v63 )
      {
        v41 = 0;
        goto LABEL_63;
      }
    }
    v41 = 1;
LABEL_63:
    if ( (int)HvpProtectBin(BugCheckParameter2, Sizea, v4, v3, (__int64)v40, v41) < 0 )
      goto LABEL_68;
    memset(v40, 0, Sizea);
    v40[7] = 0;
    v40[1] = v3 & 0x7FFFFFFF;
    v40[2] = Sizea;
    *v40 = 1852400232;
    v40[8] = Sizea - 32;
    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(32LL, 0LL, 825380163LL);
    v42 = v64;
    if ( !v64 )
      goto LABEL_68;
    *(_DWORD *)(v64 + 16) = Sizea;
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
      v52 = 632 * v4 + BugCheckParameter2 + 2008;
      v53 = *(_QWORD *)v52;
      if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != v52 )
        __fastfail(3u);
      *v5 = v53;
      v5[1] = v52;
      *(_QWORD *)(v53 + 8) = v5;
      *(_QWORD *)v52 = v5;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(BugCheckParameter2 + 32))(v5, 32LL);
    }
  }
  return v6;
}
