/*
 * XREFs of HvInitializeHive @ 0x1403D0F54
 * Callers:
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmGetSystemControlValues @ 0x140754FCC (CmGetSystemControlValues.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     HvViewMapUnpinFile @ 0x1401AAC50 (HvViewMapUnpinFile.c)
 *     CmpTraceHiveMountStart @ 0x1403D06C8 (CmpTraceHiveMountStart.c)
 *     HvpFillFileName @ 0x1403D15FC (HvpFillFileName.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     CmpTraceHiveMountStop @ 0x1403D3A00 (CmpTraceHiveMountStop.c)
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1403D3D68 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvpHeaderCheckSum @ 0x1403D44F8 (HvpHeaderCheckSum.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1403D8368 (HvpAdjustHiveFreeDisplay.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404BF534 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvResetLogFileStatusAll @ 0x1404C4490 (HvResetLogFileStatusAll.c)
 *     HvpBuildMapForLoaderHive @ 0x14053265C (HvpBuildMapForLoaderHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1405E4888 (HvIsInPlaceBaseBlockValid.c)
 *     HvViewMapStart @ 0x1405EB210 (HvViewMapStart.c)
 *     HvpBuildMap @ 0x1405EBAB0 (HvpBuildMap.c)
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
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 Hive; // r15
  _DWORD *v26; // r15
  __int64 v27; // rdx
  int v28; // r12d
  __int64 v29; // rax
  _OWORD *v30; // rax
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  int v33; // eax
  int v34; // ebx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // r9d
  int v38; // r10d
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // [rsp+20h] [rbp-38h]
  bool v46; // [rsp+68h] [rbp+10h]

  v12 = *(_QWORD *)(BugCheckParameter2 + 56);
  v13 = a2;
  if ( a2 > 5 )
  {
    v45 = 0;
    goto LABEL_124;
  }
  if ( (a3 & 0xFFF97CEC) != 0 )
  {
    v45 = 16;
    goto LABEL_124;
  }
  if ( a4 > 2 )
  {
    v45 = 32;
    goto LABEL_124;
  }
  if ( (unsigned int)(a7 - 1) > 7 )
  {
    v45 = 48;
    goto LABEL_124;
  }
  if ( !a5 && ((a2 - 1) & 0xFFFFFFFC) == 0 && a2 != 2 )
  {
    v45 = 64;
LABEL_124:
    v34 = -1073741811;
    goto LABEL_125;
  }
  if ( (a3 & 1) != 0 && a4 )
  {
    v45 = 80;
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
  v46 = (v20 & 1) == 0;
  *(_QWORD *)(BugCheckParameter2 + 176) = MEMORY[0xFFFFF78000000014];
  memset((void *)(BugCheckParameter2 + 200), 0, 0x4B0uLL);
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 174) = 1;
  if ( !v13 )
  {
    LOBYTE(v22) = v46;
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 116),
                      v22,
                      825314627LL);
    if ( !v26 )
    {
      v45 = 96;
LABEL_78:
      v34 = -1073741670;
      goto LABEL_125;
    }
    if ( (((a7 << 9) - 1) & (unsigned int)v26) != 0 )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
        v26,
        *(unsigned int *)(BugCheckParameter2 + 116));
      LOBYTE(v35) = 1;
      v26 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                        4096LL,
                        v35,
                        842091843LL);
      if ( !v26 )
      {
        v45 = 112;
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
    v26[36] = 0;
    v26[5] = 1;
    v26[6] = 3;
    *(_DWORD *)(BugCheckParameter2 + 196) = 3;
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
    if ( !(unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      return 0LL;
    v36 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, 4096LL, 0LL);
    v34 = v36;
    if ( v36 >= 0 )
    {
      v36 = HvViewMapStart(
              BugCheckParameter2 + 200,
              BugCheckParameter2,
              *(_QWORD *)(BugCheckParameter2 + 2664),
              4096LL,
              1);
      v34 = v36;
      if ( v36 >= 0 )
      {
        *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
        return 0LL;
      }
      v45 = 120;
    }
    else
    {
      v45 = 116;
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
      v45 = 128;
LABEL_94:
      v34 = -1073741492;
      goto LABEL_125;
    }
    v39 = a5[6] + ((a5[5] - v38) << 12);
    *(_BYTE *)(BugCheckParameter2 + 124) &= ~2u;
    *(_DWORD *)(BugCheckParameter2 + 196) = v39;
    *(_QWORD *)(BugCheckParameter2 + 64) = a5;
    *(_DWORD *)(BugCheckParameter2 + 192) = v38;
    a5[1022] = 0;
    v40 = a5[1];
    *(_DWORD *)(BugCheckParameter2 + 152) = v40;
    *(_DWORD *)(BugCheckParameter2 + 164) = v40;
    *(_DWORD *)(BugCheckParameter2 + 156) = v40;
    v36 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
    v34 = v36;
    if ( v36 < 0 )
    {
      v45 = 144;
      goto LABEL_87;
    }
    if ( !(unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      goto LABEL_100;
    v36 = HvViewMapStart(
            BugCheckParameter2 + 200,
            BugCheckParameter2,
            *(_QWORD *)(BugCheckParameter2 + 2664),
            (unsigned int)(a5[10] + 4096),
            1);
    v34 = v36;
    if ( v36 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
LABEL_100:
      if ( (int)HvpBuildMap(BugCheckParameter2) < 0 )
      {
        v45 = 160;
        goto LABEL_94;
      }
LABEL_69:
      if ( a12 )
        *a12 = 0;
      return 0LL;
    }
    v45 = 152;
LABEL_87:
    v37 = v36;
LABEL_126:
    SetFailureLocation(v12, 0, 2, v37, v45);
    return (unsigned int)v34;
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
      goto LABEL_32;
    *(_BYTE *)(BugCheckParameter2 + 174) = 0;
    LODWORD(Hive) = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    if ( (int)Hive < 0 )
    {
      HvFreeHive(BugCheckParameter2);
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
    v43 = *(_QWORD *)(BugCheckParameter2 + 64);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 0x100u;
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
    v34 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, (unsigned int)(*(_DWORD *)(v43 + 40) + 4096), 1LL);
    if ( v34 >= 0 )
    {
      v34 = HvWriteHivePrimaryFile(BugCheckParameter2);
      LOBYTE(v44) = 1;
      if ( v34 >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 164) = *(_DWORD *)(BugCheckParameter2 + 152);
        v34 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v44, 0LL, 0LL);
        if ( v34 >= 0 )
        {
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
          *(_DWORD *)(BugCheckParameter2 + 88) = 0;
          *(_DWORD *)(BugCheckParameter2 + 112) = 0;
          HvResetLogFileStatusAll(BugCheckParameter2);
          *(_DWORD *)(BugCheckParameter2 + 160) = 0;
LABEL_32:
          HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
          HvpSetRangeProtection(BugCheckParameter2, 0LL);
          if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
            HvViewMapUnpinFile((unsigned int *)(BugCheckParameter2 + 200));
          return 0LL;
        }
        HvFreeHive(BugCheckParameter2);
        *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
        v45 = 288;
      }
      else
      {
        HvFreeHive(BugCheckParameter2);
        *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
        v45 = 272;
      }
    }
    else
    {
      HvFreeHive(BugCheckParameter2);
      *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
      v45 = 264;
    }
LABEL_125:
    v37 = v34;
    goto LABEL_126;
  }
  if ( *a5 != 1718052210
    || a5[7]
    || a5[8] != 1
    || a5[5] > 1u
    || (unsigned int)(a5[6] - 3) > 2
    || a5[10] > 0x7FFFE000u
    || (unsigned int)HvpHeaderCheckSum(a5) != a5[127] )
  {
    v45 = 176;
    goto LABEL_94;
  }
  LOBYTE(v27) = v46;
  v28 = 858869059;
  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
          *(unsigned int *)(BugCheckParameter2 + 116),
          v27,
          858869059LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v29;
  if ( !v29 )
  {
    v45 = 192;
    goto LABEL_78;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v29) == 0 )
    goto LABEL_59;
  (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v29, *(unsigned int *)(BugCheckParameter2 + 116));
  v28 = 875646275;
  LOBYTE(v41) = 1;
  v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v41, 875646275LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v42;
  if ( !v42 )
  {
    v45 = 208;
    goto LABEL_78;
  }
  *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
LABEL_59:
  if ( a12 )
    *a12 = v28;
  v30 = *(_OWORD **)(BugCheckParameter2 + 64);
  v31 = a5;
  do
  {
    *v30 = *v31;
    v30[1] = v31[1];
    v30[2] = v31[2];
    v30[3] = v31[3];
    v30[4] = v31[4];
    v30[5] = v31[5];
    v30[6] = v31[6];
    v30 += 8;
    v32 = v31[7];
    v31 += 8;
    *(v30 - 1) = v32;
    --v23;
  }
  while ( v23 );
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
  v33 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 152) = v33;
  *(_DWORD *)(BugCheckParameter2 + 164) = v33;
  *(_DWORD *)(BugCheckParameter2 + 156) = v33;
  *(_DWORD *)(BugCheckParameter2 + 196) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        + ((*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) - 1) << 12);
  v34 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
  if ( v34 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
      *(_QWORD *)(BugCheckParameter2 + 64),
      *(unsigned int *)(BugCheckParameter2 + 116));
    *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
    v45 = 224;
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
  v34 = -1073741492;
  SetFailureLocation(v12, 0, 2, -1073741492, 240);
  (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
    *(_QWORD *)(BugCheckParameter2 + 64),
    *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  return (unsigned int)v34;
}
