/*
 * XREFs of HvpAddBin @ 0x1404AEB9C
 * Callers:
 *     HvpDoAllocateCell @ 0x14049ECFC (HvpDoAllocateCell.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlCopyBitMap @ 0x1400EF940 (RtlCopyBitMap.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvpPointMapEntriesToBuffer @ 0x14049F18C (HvpPointMapEntriesToBuffer.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpProtectBin @ 0x1404A01C4 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1404A022C (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 *     HvpFindFreeBin @ 0x1404AF27C (HvpFindFreeBin.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404AF334 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x1404AF490 (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x1404AF554 (CmpCanGrowHive.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1404AF5C0 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpBoostActiveHiveWriter @ 0x1404AF82C (CmpBoostActiveHiveWriter.c)
 *     HvpShrinkMap @ 0x140663D20 (HvpShrinkMap.c)
 *     HvpReviveDiscardedBin @ 0x14066490C (HvpReviveDiscardedBin.c)
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
  unsigned int *v12; // rbx
  ULONG v13; // ecx
  unsigned int v14; // r13d
  unsigned int v15; // eax
  ULONG v16; // ebx
  __int64 v17; // rax
  ULONG v18; // edx
  int v19; // ebx
  _DWORD *v20; // rbx
  char v21; // al
  void *v22; // rdx
  __int64 v23; // r8
  int v24; // ebx
  int v25; // r9d
  unsigned __int64 v26; // rdi
  void *v28; // rax
  bool v29; // zf
  void *v30; // rax
  void *v31; // rax
  __int64 v32; // rcx
  __int64 **v33; // rax
  int v34; // ebx
  unsigned int v35; // r8d
  unsigned int v36; // r11d
  __int64 CellMap; // rax
  unsigned int v38; // r8d
  _QWORD *v39; // r10
  __int64 v40; // rax
  _DWORD *v41; // rbx
  char v42; // al
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rcx
  int v47; // ebx
  ULONG v48; // eax
  __int64 v49; // rax
  ULONG v50; // eax
  unsigned int v51; // ebx
  int v52; // ebx
  __int64 *v53; // rax
  __int64 v54; // rcx
  unsigned int Size; // [rsp+40h] [rbp-59h]
  unsigned int Sizea; // [rsp+40h] [rbp-59h]
  _DWORD *v57; // [rsp+48h] [rbp-51h] BYREF
  int i; // [rsp+50h] [rbp-49h]
  size_t v59; // [rsp+54h] [rbp-45h]
  ULONG StartingIndex; // [rsp+5Ch] [rbp-3Dh]
  unsigned __int64 v61; // [rsp+60h] [rbp-39h] BYREF
  void *v62; // [rsp+68h] [rbp-31h]
  void *v63; // [rsp+70h] [rbp-29h] BYREF
  void *v64; // [rsp+78h] [rbp-21h]
  __int64 v65; // [rsp+80h] [rbp-19h]
  void *v66; // [rsp+88h] [rbp-11h] BYREF
  __int64 v67; // [rsp+90h] [rbp-9h]
  _RTL_BITMAP Destination; // [rsp+98h] [rbp-1h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+A8h] [rbp+Fh] BYREF
  char v70; // [rsp+100h] [rbp+67h]
  char v71; // [rsp+108h] [rbp+6Fh]
  int v72; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  v59 = 0LL;
  v64 = 0LL;
  v5 = 0LL;
  v6 = -1;
  v62 = 0LL;
  v7 = (a2 + 4127) & 0xFFFFF000;
  v66 = 0LL;
  v8 = 0;
  v61 = 0LL;
  v65 = 0LL;
  v57 = 0LL;
  v63 = 0LL;
  v72 = 0;
  i = -1;
  v71 = 0;
  v70 = 0;
  if ( v7 <= 0x3000 && v7 - (unsigned __int64)a2 - 32 < 0xE00 )
    v7 += 4096;
  if ( !*(_BYTE *)(BugCheckParameter2 + 4168) || a3 == 1 )
  {
    FreeBin = (__int64 *)HvpFindFreeBin(BugCheckParameter2);
    v5 = FreeBin;
    if ( FreeBin )
    {
      v32 = *FreeBin;
      v33 = (__int64 **)FreeBin[1];
      if ( *(__int64 **)(v32 + 8) != v5 || *v33 != v5 )
        __fastfail(3u);
      *v33 = (__int64 *)v32;
      *(_QWORD *)(v32 + 8) = v33;
      v34 = (_DWORD)v4 << 31;
      if ( !HvpMarkDirty(BugCheckParameter2, ((_DWORD)v4 << 31) + *((_DWORD *)v5 + 5), *((_DWORD *)v5 + 4), 0) )
        goto LABEL_102;
      if ( (v5[3] & 1) != 0 )
      {
        v6 = *((_DWORD *)v5 + 5) + v34;
        v35 = 0;
        v36 = HIDWORD(v59);
        for ( i = v6; v35 < v36; *v39 = v40 )
        {
          CellMap = HvpGetCellMap(BugCheckParameter2, v35 + v6);
          v39 = (_QWORD *)CellMap;
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v38 + v6, 0x38DuLL);
          *(_QWORD *)(CellMap + 8) &= ~2uLL;
          v40 = v38;
          v35 = v38 + 4096;
        }
        if ( !(_DWORD)v4 )
          HvpSetRangeProtection(BugCheckParameter2, v6, v36, 4u);
LABEL_37:
        if ( v6 != -1 )
          goto LABEL_38;
        v26 = (unsigned __int64)v57;
        if ( !v71 )
          goto LABEL_87;
        goto LABEL_86;
      }
      if ( (int)HvpReviveDiscardedBin(BugCheckParameter2) < 0 )
      {
LABEL_102:
        v6 = i;
        goto LABEL_38;
      }
      v6 = *((_DWORD *)v5 + 5) + v34;
LABEL_36:
      i = v6;
      goto LABEL_37;
    }
  }
  v67 = 632 * v4;
  v3 = *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400);
  v72 = v3;
  v8 = v7 + v3;
  Size = v7 + v3;
  if ( !(_DWORD)v4 && v7 <= 0x40000 && (((v3 + 4096) ^ (v8 + 4095)) & 0xFFFC0000) != 0 )
  {
    v72 = ((v3 + 266239) & 0xFFFC0000) - 4096;
    v8 = v7 + v72;
    Size = v7 + v72;
  }
  if ( v8 >= v3
    && (unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v8)
    && (int)HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v3, v8) >= 0 )
  {
    v71 = 1;
    if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v8, (unsigned int)v4) < 0 )
      goto LABEL_85;
    *(_DWORD *)(v67 + BugCheckParameter2 + 1400) = v8;
    if ( !(_DWORD)v4 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) == 0 )
      {
        v12 = (unsigned int *)(BugCheckParameter2 + 72);
        v13 = *(_DWORD *)(BugCheckParameter2 + 72);
        v14 = (v8 + 511) >> 9;
        StartingIndex = v13;
        v15 = (((v14 + 7) >> 3) + 3) & 0xFFFFFFFC;
        LODWORD(v59) = v15;
        if ( *(_DWORD *)(BugCheckParameter2 + 92) < v15 )
        {
          v64 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                          v15,
                          0LL,
                          959532355LL);
          if ( !v64
            || (v28 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                                (unsigned int)v59,
                                0LL,
                                959532355LL),
                (v62 = v28) == 0LL) )
          {
            v8 = Size;
            goto LABEL_85;
          }
          v29 = *(_QWORD *)(BugCheckParameter2 + 80) == 0LL;
          Destination.Buffer = (unsigned int *)v64;
          Destination.SizeOfBitMap = v14;
          BitMapHeader.SizeOfBitMap = v14;
          BitMapHeader.Buffer = (unsigned int *)v28;
          if ( v29 )
          {
            memset(v64, 0, (unsigned int)v59);
          }
          else
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 72), &Destination, 0);
            RtlClearBits(&Destination, StartingIndex, v14 - StartingIndex);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 80),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          if ( *(_QWORD *)(BugCheckParameter2 + 104) )
          {
            RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 96), &BitMapHeader, 0);
            RtlClearBits(&BitMapHeader, StartingIndex, v14 - StartingIndex);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 104),
              *(unsigned int *)(BugCheckParameter2 + 92));
          }
          else
          {
            memset(v62, 0, (unsigned int)v59);
          }
          v30 = v64;
          v64 = 0LL;
          *(_QWORD *)(BugCheckParameter2 + 80) = v30;
          v31 = v62;
          v62 = 0LL;
          *v12 = v14;
          *(_QWORD *)(BugCheckParameter2 + 104) = v31;
          LODWORD(v31) = v59;
          *(_DWORD *)(BugCheckParameter2 + 96) = v14;
          *(_DWORD *)(BugCheckParameter2 + 92) = (_DWORD)v31;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *v12 = v14;
          v16 = v14 - v13;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v13, v14 - v13);
          v17 = *(_QWORD *)(BugCheckParameter2 + 104);
          v18 = StartingIndex;
          *(_DWORD *)(BugCheckParameter2 + 96) = v14;
          *(_QWORD *)(BugCheckParameter2 + 104) = v17;
          RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v18, v16);
        }
        v8 = Size;
        v70 = 1;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
      {
        CmpBoostActiveHiveWriter(v11, BugCheckParameter2 + 5464);
        if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v8 + 4096, 1LL) < 0 )
          goto LABEL_85;
        if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 5492) )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v3;
      }
    }
    v19 = v72;
    if ( v72 == v3 )
    {
LABEL_23:
      if ( (int)HvpAllocateBin(BugCheckParameter2, v7, v4, v19, 0x36314D43u, (__int64 *)&v63, (__int64 *)&v57) < 0 )
        goto LABEL_85;
      if ( v57 )
      {
        v20 = v57;
      }
      else
      {
        v20 = v63;
        if ( v63 )
        {
          v21 = 0;
          goto LABEL_27;
        }
      }
      v21 = 1;
LABEL_27:
      if ( (int)HvpProtectBin(BugCheckParameter2, v7, v4, v72, (unsigned __int64)v20, v21) >= 0 )
      {
        memset(v20, 0, v7);
        v20[7] = 0;
        v22 = v66;
        v23 = v61;
        v20[1] = v72 & 0x7FFFFFFF;
        *v20 = 1852400232;
        v20[2] = v7;
        v20[8] = v7 - 32;
        if ( v22 || v23 )
        {
          v24 = v72;
          HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v22, v23, v72 - v3, v3 + ((_DWORD)v4 << 31), v65);
          v44 = v65;
          v45 = (__int64 *)(BugCheckParameter2 + v67 + 2008);
          v46 = *v45;
          *(_QWORD *)v65 = *v45;
          *(_QWORD *)(v44 + 8) = v45;
          if ( *(__int64 **)(v46 + 8) != v45 )
            __fastfail(3u);
          *(_QWORD *)(v46 + 8) = v44;
          *v45 = v44;
        }
        else
        {
          v24 = v72;
        }
        v25 = v7;
        v26 = (unsigned __int64)v57;
        v6 = ((_DWORD)v4 << 31) + v24;
        v72 = v6;
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v63, (__int64)v57, v25, v6, 0LL);
        if ( (_DWORD)v4 )
          goto LABEL_35;
        if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || HvpMarkDirty(BugCheckParameter2, v3, v8 - v3, 0) )
        {
          CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v8, v3);
          HvpSetRangeProtection(BugCheckParameter2, v3, v8 - v3, 4u);
LABEL_35:
          v65 = 0LL;
          v66 = 0LL;
          v61 = 0LL;
          v63 = 0LL;
          v57 = 0LL;
          goto LABEL_36;
        }
LABEL_86:
        HvpShrinkMap(BugCheckParameter2, (unsigned int)v4, v8, v3);
        *(_DWORD *)(632 * v4 + BugCheckParameter2 + 1400) = v3;
LABEL_87:
        if ( v70 )
        {
          *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
          *(_DWORD *)(BugCheckParameter2 + 72) = v3 >> 9;
          v47 = *(_DWORD *)(BugCheckParameter2 + 88);
          v48 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
          *(_DWORD *)(BugCheckParameter2 + 88) = v48;
          _InterlockedExchangeAdd(&CmpDirtySectorCount, v48 - v47);
          v49 = *(_QWORD *)(BugCheckParameter2 + 104);
          *(_DWORD *)(BugCheckParameter2 + 96) = v3 >> 9;
          *(_QWORD *)(BugCheckParameter2 + 104) = v49;
          v50 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
          v26 = (unsigned __int64)v57;
          *(_DWORD *)(BugCheckParameter2 + 112) = v50;
        }
        v51 = v59;
        if ( v62 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v62, (unsigned int)v59);
        if ( v64 )
          (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v64, v51);
        if ( v66 || v61 )
        {
          v52 = v72;
          HvpFreeBin(BugCheckParameter2, v72 - v3, v4, (unsigned __int64)v66, v61);
        }
        else
        {
          v52 = v72;
        }
        if ( v65 )
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v65, 32LL);
        if ( v63 || v26 )
          HvpFreeBin(BugCheckParameter2, v8 - v52, v4, (unsigned __int64)v63, v26);
        goto LABEL_102;
      }
LABEL_85:
      v26 = (unsigned __int64)v57;
      goto LABEL_86;
    }
    Sizea = v72 - v3;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v72 - v3, v4, v3, 0x30324D43u, (__int64 *)&v66, (__int64 *)&v61) < 0 )
      goto LABEL_85;
    if ( v61 )
    {
      v41 = (_DWORD *)v61;
    }
    else
    {
      v41 = v66;
      if ( v66 )
      {
        v42 = 0;
        goto LABEL_62;
      }
    }
    v42 = 1;
LABEL_62:
    if ( (int)HvpProtectBin(BugCheckParameter2, Sizea, v4, v3, (unsigned __int64)v41, v42) < 0 )
      goto LABEL_85;
    memset(v41, 0, Sizea);
    v41[7] = 0;
    v41[1] = v3 & 0x7FFFFFFF;
    v41[2] = Sizea;
    *v41 = 1852400232;
    v41[8] = Sizea - 32;
    v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(32LL, 0LL, 825380163LL);
    v43 = v65;
    if ( !v65 )
      goto LABEL_85;
    *(_DWORD *)(v65 + 16) = Sizea;
    *(_DWORD *)(v43 + 20) = v3;
    *(_DWORD *)(v43 + 24) = 1;
    v19 = v72;
    goto LABEL_23;
  }
LABEL_38:
  if ( v5 )
  {
    if ( v6 == -1 )
    {
      v53 = (__int64 *)(632 * v4 + BugCheckParameter2 + 2008);
      v54 = *v53;
      *v5 = *v53;
      v5[1] = (__int64)v53;
      if ( *(__int64 **)(v54 + 8) != v53 )
        __fastfail(3u);
      *(_QWORD *)(v54 + 8) = v5;
      *v53 = (__int64)v5;
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int64))(BugCheckParameter2 + 32))(v5, 32LL);
    }
  }
  return v6;
}
