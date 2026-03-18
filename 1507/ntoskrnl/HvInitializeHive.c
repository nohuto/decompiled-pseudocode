/*
 * XREFs of HvInitializeHive @ 0x1404AD7D4
 * Callers:
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     HvViewMapUnpinFile @ 0x1401E098C (HvViewMapUnpinFile.c)
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     HvpFillFileName @ 0x1404ADE7C (HvpFillFileName.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404ADF1C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpTraceHiveMountStop @ 0x1404AE938 (CmpTraceHiveMountStop.c)
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404AF334 (HvpAdjustHiveFreeDisplay.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1404AF958 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 *     CmpTraceHiveMountStart @ 0x1404AFFF4 (CmpTraceHiveMountStart.c)
 *     HvResetLogFileStatusAll @ 0x14055BA34 (HvResetLogFileStatusAll.c)
 *     HvpBuildMapForLoaderHive @ 0x1405A9BB0 (HvpBuildMapForLoaderHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x14065B7D0 (HvIsInPlaceBaseBlockValid.c)
 *     HvViewMapStart @ 0x140663100 (HvViewMapStart.c)
 *     HvpBuildMap @ 0x140663A58 (HvpBuildMap.c)
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
  __int64 v12; // r14
  int v13; // r12d
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // al
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 Hive; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // eax
  _DWORD *v30; // r15
  __int64 v31; // rdx
  int v32; // r12d
  __int64 v33; // rax
  _OWORD *v34; // rax
  _OWORD *v35; // rcx
  __int128 v36; // xmm1
  int v37; // eax
  int v38; // ebx
  __int64 v39; // rdx
  int v40; // eax
  int v41; // r9d
  int v42; // r10d
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // [rsp+20h] [rbp-38h]
  bool v54; // [rsp+68h] [rbp+10h]

  v12 = *(_QWORD *)(BugCheckParameter2 + 56);
  v13 = a2;
  if ( a2 > 5 )
  {
    v53 = 0;
    goto LABEL_124;
  }
  if ( (a3 & 0xFFF97CEC) != 0 )
  {
    v53 = 16;
    goto LABEL_124;
  }
  if ( a4 > 2 )
  {
    v53 = 32;
    goto LABEL_124;
  }
  if ( (unsigned int)(a7 - 1) > 7 )
  {
    v53 = 48;
    goto LABEL_124;
  }
  if ( !a5 && ((a2 - 1) & 0xFFFFFFFC) == 0 && a2 != 2 )
  {
    v53 = 64;
LABEL_124:
    v38 = -1073741811;
    goto LABEL_125;
  }
  if ( (a3 & 1) != 0 && a4 )
  {
    v53 = 80;
    goto LABEL_124;
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
    v29 = 4;
    if ( a4 == 1 )
      v29 = 1;
    *(_DWORD *)(BugCheckParameter2 + 148) = v29;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 148) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 144) = a3;
  *(_DWORD *)(BugCheckParameter2 + 120) = a7;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  *(_DWORD *)(BugCheckParameter2 + 192) = 2;
  v15 = 24LL;
  *(_DWORD *)(BugCheckParameter2 + 2056) = -1;
  *(_DWORD *)(BugCheckParameter2 + 2032) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2040) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 2048) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 2656) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2648) = BugCheckParameter2 + 2640;
  *(_QWORD *)(BugCheckParameter2 + 2640) = BugCheckParameter2 + 2640;
  v16 = (_QWORD *)(BugCheckParameter2 + 2080);
  do
  {
    *((_DWORD *)v16 - 2) = 0;
    *v16 = 0LL;
    *((_DWORD *)v16 - 4) = 0;
    v16 += 3;
    --v15;
  }
  while ( v15 );
  *(_DWORD *)(BugCheckParameter2 + 1400) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  v17 = 24LL;
  *(_QWORD *)(BugCheckParameter2 + 1416) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1424) = -1;
  *(_DWORD *)(BugCheckParameter2 + 2024) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2016) = BugCheckParameter2 + 2008;
  *(_QWORD *)(BugCheckParameter2 + 2008) = BugCheckParameter2 + 2008;
  v18 = (_QWORD *)(BugCheckParameter2 + 1448);
  do
  {
    *((_DWORD *)v18 - 2) = 0;
    *v18 = 0LL;
    *((_DWORD *)v18 - 4) = 0;
    v18 += 3;
    --v17;
  }
  while ( v17 );
  *(_BYTE *)(BugCheckParameter2 + 124) &= 0xFCu;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 72) = 0;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  v19 = *(_BYTE *)(BugCheckParameter2 + 144);
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
  v20 = MEMORY[0xFFFFF78000000014];
  v54 = (v19 & 1) == 0;
  *(_QWORD *)(BugCheckParameter2 + 176) = MEMORY[0xFFFFF78000000014];
  memset((void *)(BugCheckParameter2 + 200), 0, 0x4B0uLL);
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 174) = 1;
  if ( !v13 )
  {
    LOBYTE(v21) = v54;
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 116),
                      v21,
                      825314627LL);
    if ( !v30 )
    {
      v53 = 96;
LABEL_78:
      v38 = -1073741670;
      goto LABEL_125;
    }
    if ( (((a7 << 9) - 1) & (unsigned int)v30) != 0 )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
        v30,
        *(unsigned int *)(BugCheckParameter2 + 116));
      LOBYTE(v39) = 1;
      v30 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                        4096LL,
                        v39,
                        842091843LL);
      if ( !v30 )
      {
        v53 = 112;
        goto LABEL_78;
      }
      *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
      if ( a12 )
        *a12 = 842091843;
    }
    else if ( a12 )
    {
      *a12 = 825314627;
    }
    memset(v30, 0, 0x1000uLL);
    v30[9] = -1;
    *v30 = 1718052210;
    v30[1] = 1;
    v30[2] = 1;
    v30[7] = 0;
    v30[8] = 1;
    v30[10] = 0;
    v30[11] = 1;
    v30[127] = 0;
    HvpFillFileName(v30, a8);
    v30[36] = 0;
    v30[5] = 1;
    v30[6] = 3;
    *(_DWORD *)(BugCheckParameter2 + 196) = 3;
    v30[41] = 1836346738;
    *(_DWORD *)(BugCheckParameter2 + 152) = 1;
    *(_DWORD *)(BugCheckParameter2 + 164) = 1;
    *(_DWORD *)(BugCheckParameter2 + 156) = 1;
    *(_QWORD *)(v30 + 3) = v20;
    if ( a9 )
    {
      *((_OWORD *)v30 + 7) = *a9;
      *((_OWORD *)v30 + 8) = *a9;
    }
    if ( a10 )
      *(_OWORD *)(v30 + 37) = *a10;
    *(_QWORD *)(BugCheckParameter2 + 64) = v30;
    v30[1022] = 0;
    if ( !(unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      return 0LL;
    v40 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, 4096LL, 0LL);
    v38 = v40;
    if ( v40 >= 0 )
    {
      v40 = HvViewMapStart(
              BugCheckParameter2 + 200,
              BugCheckParameter2,
              *(_QWORD *)(BugCheckParameter2 + 2664),
              4096LL,
              1);
      v38 = v40;
      if ( v40 >= 0 )
      {
        *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
        return 0LL;
      }
      v53 = 120;
    }
    else
    {
      v53 = 116;
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
    goto LABEL_69;
  }
  if ( v13 == 3 )
  {
    if ( !(unsigned __int8)HvIsInPlaceBaseBlockValid(a5) )
    {
      v53 = 128;
LABEL_94:
      v38 = -1073741492;
      goto LABEL_125;
    }
    v43 = a5[6] + ((a5[5] - v42) << 12);
    *(_BYTE *)(BugCheckParameter2 + 124) &= ~2u;
    *(_DWORD *)(BugCheckParameter2 + 196) = v43;
    *(_QWORD *)(BugCheckParameter2 + 64) = a5;
    *(_DWORD *)(BugCheckParameter2 + 192) = v42;
    a5[1022] = 0;
    v44 = a5[1];
    *(_DWORD *)(BugCheckParameter2 + 152) = v44;
    *(_DWORD *)(BugCheckParameter2 + 164) = v44;
    *(_DWORD *)(BugCheckParameter2 + 156) = v44;
    v40 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
    v38 = v40;
    if ( v40 < 0 )
    {
      v53 = 144;
      goto LABEL_87;
    }
    if ( !(unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      goto LABEL_100;
    v40 = HvViewMapStart(
            BugCheckParameter2 + 200,
            BugCheckParameter2,
            *(_QWORD *)(BugCheckParameter2 + 2664),
            (unsigned int)(a5[10] + 4096),
            1);
    v38 = v40;
    if ( v40 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
LABEL_100:
      if ( (int)HvpBuildMap(BugCheckParameter2) < 0 )
      {
        v53 = 160;
        goto LABEL_94;
      }
LABEL_69:
      if ( a12 )
        *a12 = 0;
      return 0LL;
    }
    v53 = 152;
LABEL_87:
    v41 = v40;
LABEL_126:
    SetFailureLocation(v12, 0, 2, v41, v53);
    return (unsigned int)v38;
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
      goto LABEL_30;
    *(_BYTE *)(BugCheckParameter2 + 174) = 0;
    LODWORD(Hive) = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    if ( (int)Hive < 0 )
    {
      HvFreeHive(BugCheckParameter2, 1, v47);
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
    v48 = *(_QWORD *)(BugCheckParameter2 + 64);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 0x100u;
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
    v38 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, (unsigned int)(*(_DWORD *)(v48 + 40) + 4096), 1LL);
    if ( v38 >= 0 )
    {
      v38 = HvWriteHivePrimaryFile(BugCheckParameter2);
      LOBYTE(v51) = 1;
      if ( v38 >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 164) = *(_DWORD *)(BugCheckParameter2 + 152);
        v38 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v51, 0LL, 0LL);
        if ( v38 >= 0 )
        {
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
          *(_DWORD *)(BugCheckParameter2 + 88) = 0;
          *(_DWORD *)(BugCheckParameter2 + 112) = 0;
          HvResetLogFileStatusAll(BugCheckParameter2);
          *(_DWORD *)(BugCheckParameter2 + 160) = 0;
LABEL_30:
          HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
          HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2u);
          if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
            HvViewMapUnpinFile((unsigned int *)(BugCheckParameter2 + 200), v25, v26, v27);
          return 0LL;
        }
        HvFreeHive(BugCheckParameter2, 1, v52);
        *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
        v53 = 288;
      }
      else
      {
        HvFreeHive(BugCheckParameter2, 1, v50);
        *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
        v53 = 272;
      }
    }
    else
    {
      HvFreeHive(BugCheckParameter2, 1, v49);
      *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
      v53 = 264;
    }
LABEL_125:
    v41 = v38;
    goto LABEL_126;
  }
  if ( *a5 != 1718052210
    || a5[7]
    || a5[8] != 1
    || a5[5] > 1u
    || (unsigned int)(a5[6] - 3) > 2
    || a5[10] > 0x7FFFE000u
    || (unsigned int)HvpHeaderCheckSum(a5, v21, v22) != a5[127] )
  {
    v53 = 176;
    goto LABEL_94;
  }
  LOBYTE(v31) = v54;
  v32 = 858869059;
  v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
          *(unsigned int *)(BugCheckParameter2 + 116),
          v31,
          858869059LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v33;
  if ( !v33 )
  {
    v53 = 192;
    goto LABEL_78;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v33) == 0 )
    goto LABEL_59;
  (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v33, *(unsigned int *)(BugCheckParameter2 + 116));
  v32 = 875646275;
  LOBYTE(v45) = 1;
  v46 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v45, 875646275LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v46;
  if ( !v46 )
  {
    v53 = 208;
    goto LABEL_78;
  }
  *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
LABEL_59:
  if ( a12 )
    *a12 = v32;
  v34 = *(_OWORD **)(BugCheckParameter2 + 64);
  v35 = a5;
  do
  {
    *v34 = *v35;
    v34[1] = v35[1];
    v34[2] = v35[2];
    v34[3] = v35[3];
    v34[4] = v35[4];
    v34[5] = v35[5];
    v34[6] = v35[6];
    v34 += 8;
    v36 = v35[7];
    v35 += 8;
    *(v34 - 1) = v36;
    --v23;
  }
  while ( v23 );
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
  v37 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 152) = v37;
  *(_DWORD *)(BugCheckParameter2 + 164) = v37;
  *(_DWORD *)(BugCheckParameter2 + 156) = v37;
  *(_DWORD *)(BugCheckParameter2 + 196) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        + ((*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) - 1) << 12);
  v38 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
  if ( v38 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
      *(_QWORD *)(BugCheckParameter2 + 64),
      *(unsigned int *)(BugCheckParameter2 + 116));
    *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
    v53 = 224;
    goto LABEL_125;
  }
  if ( (int)HvpBuildMapForLoaderHive(BugCheckParameter2) >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 && a11 )
      *a11 = 1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
    return 0LL;
  }
  v38 = -1073741492;
  SetFailureLocation(v12, 0, 2, -1073741492, 240);
  (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
    *(_QWORD *)(BugCheckParameter2 + 64),
    *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  return (unsigned int)v38;
}
