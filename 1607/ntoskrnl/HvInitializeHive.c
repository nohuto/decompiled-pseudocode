/*
 * XREFs of HvInitializeHive @ 0x14047E8F8
 * Callers:
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvViewMapUnpinFile @ 0x1401B6620 (HvViewMapUnpinFile.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14047DC5C (HvpAdjustHiveFreeDisplay.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14047DEC0 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvpFillFileName @ 0x14047EF84 (HvpFillFileName.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14047F024 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 *     CmpTraceHiveMountStop @ 0x140480C3C (CmpTraceHiveMountStop.c)
 *     CmpTraceHiveMountStart @ 0x140480C90 (CmpTraceHiveMountStart.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvResetLogFileStatusAll @ 0x1404D2BE8 (HvResetLogFileStatusAll.c)
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     HvpBuildMapForLoaderHive @ 0x140564290 (HvpBuildMapForLoaderHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140603AB8 (HvIsInPlaceBaseBlockValid.c)
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 *     HvpBuildMap @ 0x140610608 (HvpBuildMap.c)
 */

__int64 __fastcall HvInitializeHive(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        __int64 a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        int *a12)
{
  __int64 v12; // r15
  int v13; // r12d
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 Hive; // r14
  _DWORD *v26; // r14
  int v27; // eax
  __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // rax
  _OWORD *v31; // rax
  _OWORD *v32; // rcx
  __int128 v33; // xmm1
  int v34; // eax
  int v35; // ebx
  __int64 v36; // rdx
  int v37; // eax
  int v38; // r9d
  int v39; // r10d
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  bool v45; // zf
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // [rsp+20h] [rbp-48h]
  bool v50; // [rsp+78h] [rbp+10h]

  v12 = *(_QWORD *)(BugCheckParameter2 + 56);
  v13 = a2;
  if ( a2 > 5 )
  {
    v49 = 0;
    goto LABEL_128;
  }
  if ( (a3 & 0xFFE17CEC) != 0 )
  {
    v49 = 16;
    goto LABEL_128;
  }
  if ( a4 > 2 )
  {
    v49 = 32;
    goto LABEL_128;
  }
  if ( (unsigned int)(a7 - 1) > 7 )
  {
    v49 = 48;
    goto LABEL_128;
  }
  if ( !a5 && ((a2 - 1) & 0xFFFFFFFC) == 0 && a2 != 2 )
  {
    v49 = 64;
LABEL_128:
    v35 = -1073741811;
    goto LABEL_129;
  }
  if ( a11 )
    *a11 = 0;
  *(_DWORD *)BugCheckParameter2 = -1092567328;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  }
  if ( a4 )
  {
    v15 = 4;
    if ( a4 == 1 )
      v15 = 1;
    *(_DWORD *)(BugCheckParameter2 + 148) = v15;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 148) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 144) = a3;
  *(_DWORD *)(BugCheckParameter2 + 120) = a7;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  *(_DWORD *)(BugCheckParameter2 + 192) = 2;
  v16 = 24LL;
  *(_DWORD *)(BugCheckParameter2 + 2056) = -1;
  *(_DWORD *)(BugCheckParameter2 + 2032) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2040) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 2048) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 2656) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2648) = BugCheckParameter2 + 2640;
  *(_QWORD *)(BugCheckParameter2 + 2640) = BugCheckParameter2 + 2640;
  v17 = (_QWORD *)(BugCheckParameter2 + 2080);
  do
  {
    *((_DWORD *)v17 - 2) = 0;
    *v17 = 0LL;
    *((_DWORD *)v17 - 4) = 0;
    v17 += 3;
    --v16;
  }
  while ( v16 );
  *(_DWORD *)(BugCheckParameter2 + 1400) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  v18 = 24LL;
  *(_QWORD *)(BugCheckParameter2 + 1416) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1424) = -1;
  *(_DWORD *)(BugCheckParameter2 + 2024) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2016) = BugCheckParameter2 + 2008;
  *(_QWORD *)(BugCheckParameter2 + 2008) = BugCheckParameter2 + 2008;
  v19 = (_QWORD *)(BugCheckParameter2 + 1448);
  do
  {
    *((_DWORD *)v19 - 2) = 0;
    *v19 = 0LL;
    *((_DWORD *)v19 - 4) = 0;
    v19 += 3;
    --v18;
  }
  while ( v18 );
  *(_BYTE *)(BugCheckParameter2 + 124) &= 0xFCu;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 72) = 0;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  v20 = *(_BYTE *)(BugCheckParameter2 + 144);
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 125) = 0;
  *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
  *(_DWORD *)(BugCheckParameter2 + 96) = 0;
  *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 128) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 136) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 160) = 0;
  *(_WORD *)(BugCheckParameter2 + 172) = 0;
  *(_BYTE *)(BugCheckParameter2 + 175) = 0;
  v21 = MEMORY[0xFFFFF78000000014];
  v50 = (v20 & 1) == 0;
  *(_QWORD *)(BugCheckParameter2 + 176) = MEMORY[0xFFFFF78000000014];
  memset((void *)(BugCheckParameter2 + 200), 0, 0x4B0uLL);
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 174) = 1;
  if ( !v13 )
  {
    LOBYTE(v22) = v50;
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 116),
                      v22,
                      825314627LL);
    if ( !v26 )
    {
      v49 = 96;
LABEL_77:
      v35 = -1073741670;
      goto LABEL_129;
    }
    if ( (((a7 << 9) - 1) & (unsigned int)v26) != 0 )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
        v26,
        *(unsigned int *)(BugCheckParameter2 + 116));
      LOBYTE(v36) = 1;
      v26 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                        4096LL,
                        v36,
                        842091843LL);
      if ( !v26 )
      {
        v49 = 112;
        goto LABEL_77;
      }
      *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
      if ( a12 )
        *a12 = 842091843;
    }
    else if ( a12 )
    {
      *a12 = 825314627;
    }
    memset(v26, 0, 0x1000uLL);
    v26[9] = -1;
    *v26 = 1718052210;
    v26[1] = 1;
    v26[2] = 1;
    v26[7] = 0;
    v26[8] = 1;
    v26[10] = 0;
    v26[11] = 1;
    v26[127] = 0;
    HvpFillFileName(v26, a8);
    v27 = 0;
    v26[5] = 1;
    if ( (a3 & 0x80000) != 0 )
      v27 = 2;
    v26[36] = v27;
    if ( (a3 & 0x80000) != 0 )
    {
      v26[6] = 6;
      *(_DWORD *)(BugCheckParameter2 + 196) = 6;
    }
    else
    {
      v26[6] = 3;
      *(_DWORD *)(BugCheckParameter2 + 196) = 3;
    }
    v26[41] = 1836346738;
    *(_DWORD *)(BugCheckParameter2 + 152) = 1;
    *(_DWORD *)(BugCheckParameter2 + 164) = 1;
    *(_DWORD *)(BugCheckParameter2 + 156) = 1;
    *(_QWORD *)(v26 + 3) = v21;
    if ( a9 )
    {
      *((_OWORD *)v26 + 7) = *a9;
      *((_OWORD *)v26 + 8) = *a9;
    }
    if ( a10 )
      *(_OWORD *)(v26 + 37) = *a10;
    *(_QWORD *)(BugCheckParameter2 + 64) = v26;
    v26[1022] = 0;
    if ( !HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      return 0LL;
    v37 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, 0x1000uLL, 0);
    v35 = v37;
    if ( v37 >= 0 )
    {
      v37 = HvViewMapStart(
              BugCheckParameter2 + 200,
              BugCheckParameter2,
              *(_QWORD *)(BugCheckParameter2 + 2664),
              4096LL,
              1);
      v35 = v37;
      if ( v37 >= 0 )
      {
        *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
        return 0LL;
      }
      v49 = 120;
    }
    else
    {
      v49 = 116;
    }
    goto LABEL_87;
  }
  v23 = 4LL;
  if ( v13 == 4 )
  {
    *(_QWORD *)(BugCheckParameter2 + 64) = a5;
    *(_DWORD *)(BugCheckParameter2 + 196) = a5[6] + ((a5[5] - 1) << 12);
    *(_BYTE *)(BugCheckParameter2 + 124) |= 3u;
    *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
    *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
    *(_DWORD *)(BugCheckParameter2 + 1400) = a5[10];
    *(_DWORD *)(BugCheckParameter2 + 192) = 1;
    goto LABEL_70;
  }
  if ( v13 == 3 )
  {
    if ( !(unsigned __int8)HvIsInPlaceBaseBlockValid(a5) )
    {
      v49 = 128;
LABEL_94:
      v35 = -1073741492;
      goto LABEL_129;
    }
    v40 = a5[6] + ((a5[5] - v39) << 12);
    *(_BYTE *)(BugCheckParameter2 + 124) &= ~2u;
    *(_DWORD *)(BugCheckParameter2 + 196) = v40;
    *(_QWORD *)(BugCheckParameter2 + 64) = a5;
    *(_DWORD *)(BugCheckParameter2 + 192) = v39;
    a5[1022] = 0;
    v41 = a5[1];
    *(_DWORD *)(BugCheckParameter2 + 152) = v41;
    *(_DWORD *)(BugCheckParameter2 + 164) = v41;
    *(_DWORD *)(BugCheckParameter2 + 156) = v41;
    v37 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
    v35 = v37;
    if ( v37 < 0 )
    {
      v49 = 144;
      goto LABEL_87;
    }
    if ( !HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      goto LABEL_100;
    v37 = HvViewMapStart(
            BugCheckParameter2 + 200,
            BugCheckParameter2,
            *(_QWORD *)(BugCheckParameter2 + 2664),
            (unsigned int)(a5[10] + 4096),
            1);
    v35 = v37;
    if ( v37 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
LABEL_100:
      if ( (int)HvpBuildMap(BugCheckParameter2) < 0 )
      {
        v49 = 160;
        goto LABEL_94;
      }
LABEL_70:
      if ( a12 )
        *a12 = 0;
      return 0LL;
    }
    v49 = 152;
LABEL_87:
    v38 = v37;
LABEL_130:
    SetFailureLocation(v12, 0, 2, v38, v49);
    return (unsigned int)v35;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 5 )
      v13 = 2;
    if ( v13 != 2 )
      return 3221225485LL;
    CmpTraceHiveMountStart();
    Hive = (unsigned int)HvLoadHive(BugCheckParameter2);
    CmpTraceHiveMountStop(Hive);
    if ( (_DWORD)Hive && (_DWORD)Hive != 1073741833 )
    {
      SetFailureLocation(v12, 0, 2, -1073741491, 256);
      return (unsigned int)Hive;
    }
    if ( a12 )
      *a12 = 825445699;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 && a11 )
      *a11 = 1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
    if ( (_DWORD)Hive != 1073741833 )
      goto LABEL_31;
    *(_BYTE *)(BugCheckParameter2 + 174) = 0;
    LODWORD(Hive) = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    if ( (int)Hive < 0 )
    {
      LOBYTE(v44) = 1;
      HvFreeHive(BugCheckParameter2, v44);
      *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
      SetFailureLocation(v12, 0, 2, Hive, 260);
      return (unsigned int)Hive;
    }
    if ( a11 )
      *a11 = 1;
    memmove(
      *(void **)(BugCheckParameter2 + 104),
      *(const void **)(BugCheckParameter2 + 80),
      *(unsigned int *)(BugCheckParameter2 + 92));
    *(_DWORD *)(BugCheckParameter2 + 112) = *(_DWORD *)(BugCheckParameter2 + 88);
    RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
    *(_DWORD *)(BugCheckParameter2 + 144) |= 0x100u;
    v45 = (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0;
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
    if ( !v45 )
    {
LABEL_125:
      *(_DWORD *)(BugCheckParameter2 + 88) = 0;
LABEL_31:
      HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
      HvpSetRangeProtection(BugCheckParameter2);
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
        HvViewMapUnpinFile((unsigned int *)(BugCheckParameter2 + 200));
      return 0LL;
    }
    v35 = CmpDoFileSetSizeEx(
            BugCheckParameter2,
            0,
            (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) + 4096),
            1);
    if ( v35 < 0 )
    {
      LOBYTE(v46) = 1;
      HvFreeHive(BugCheckParameter2, v46);
      *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
      v49 = 264;
      goto LABEL_129;
    }
    v35 = HvWriteHivePrimaryFile(BugCheckParameter2);
    LOBYTE(v47) = 1;
    if ( v35 < 0 )
    {
      HvFreeHive(BugCheckParameter2, v47);
      *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
      v49 = 272;
      goto LABEL_129;
    }
    *(_DWORD *)(BugCheckParameter2 + 164) = *(_DWORD *)(BugCheckParameter2 + 152);
    v35 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v47, 0LL, 0LL);
    if ( v35 >= 0 )
    {
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
      *(_DWORD *)(BugCheckParameter2 + 88) = 0;
      *(_DWORD *)(BugCheckParameter2 + 112) = 0;
      HvResetLogFileStatusAll(BugCheckParameter2);
      *(_DWORD *)(BugCheckParameter2 + 160) = 0;
      goto LABEL_125;
    }
    LOBYTE(v48) = 1;
    HvFreeHive(BugCheckParameter2, v48);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
    v49 = 288;
LABEL_129:
    v38 = v35;
    goto LABEL_130;
  }
  if ( *a5 != 1718052210
    || a5[7]
    || a5[8] != 1
    || a5[5] > 1u
    || (unsigned int)(a5[6] - 3) > 3
    || a5[10] > 0x7FFFE000u
    || (unsigned int)HvpHeaderCheckSum(a5) != a5[127] )
  {
    v49 = 176;
    goto LABEL_94;
  }
  LOBYTE(v28) = v50;
  v29 = 858869059;
  v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
          *(unsigned int *)(BugCheckParameter2 + 116),
          v28,
          858869059LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v30;
  if ( !v30 )
  {
    v49 = 192;
    goto LABEL_77;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v30) == 0 )
    goto LABEL_60;
  (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v30, *(unsigned int *)(BugCheckParameter2 + 116));
  v29 = 875646275;
  LOBYTE(v42) = 1;
  v43 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v42, 875646275LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v43;
  if ( !v43 )
  {
    v49 = 208;
    goto LABEL_77;
  }
  *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
LABEL_60:
  if ( a12 )
    *a12 = v29;
  v31 = *(_OWORD **)(BugCheckParameter2 + 64);
  v32 = a5;
  do
  {
    *v31 = *v32;
    v31[1] = v32[1];
    v31[2] = v32[2];
    v31[3] = v32[3];
    v31[4] = v32[4];
    v31[5] = v32[5];
    v31[6] = v32[6];
    v31 += 8;
    v33 = v32[7];
    v32 += 8;
    *(v31 - 1) = v33;
    --v23;
  }
  while ( v23 );
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
  v34 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 152) = v34;
  *(_DWORD *)(BugCheckParameter2 + 164) = v34;
  *(_DWORD *)(BugCheckParameter2 + 156) = v34;
  *(_DWORD *)(BugCheckParameter2 + 196) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        + ((*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) - 1) << 12);
  v35 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
  if ( v35 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
      *(_QWORD *)(BugCheckParameter2 + 64),
      *(unsigned int *)(BugCheckParameter2 + 116));
    *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
    v49 = 224;
    goto LABEL_129;
  }
  if ( (int)HvpBuildMapForLoaderHive(BugCheckParameter2) >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 && a11 )
      *a11 = 1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
    return 0LL;
  }
  v35 = -1073741492;
  SetFailureLocation(v12, 0, 2, -1073741492, 240);
  (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
    *(_QWORD *)(BugCheckParameter2 + 64),
    *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  return (unsigned int)v35;
}
