/*
 * XREFs of HvLoadHive @ 0x14047DA4C
 * Callers:
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14047DC5C (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14047DDB4 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpMapHiveImageFromFile @ 0x14047DE28 (HvpMapHiveImageFromFile.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14047DEC0 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     CmpInitializeActualFileSizes @ 0x14047F2D0 (CmpInitializeActualFileSizes.c)
 *     HvpGetHiveHeader @ 0x140480A1C (HvpGetHiveHeader.c)
 *     HvViewMapCleanup @ 0x1404D0F70 (HvViewMapCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvpFreeAllocatedBins @ 0x140603B18 (HvpFreeAllocatedBins.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 *     HvpCleanMap @ 0x140610824 (HvpCleanMap.c)
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r15
  int HiveHeader; // eax
  __int64 v4; // rdx
  int v5; // edi
  _DWORD *v6; // rsi
  __int64 v7; // r13
  int v8; // r12d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // r13d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r9d
  int v18; // r10d
  int v19; // eax
  int v20; // eax
  int v22; // r9d
  __int64 v23; // r8
  int v24; // r8d
  int LogHeader; // eax
  int v26; // ecx
  int v27; // r9d
  int v28; // eax
  int v29; // r9d
  int v30; // r9d
  char v31; // dl
  int v32; // eax
  __int64 v33; // rdx
  int v34; // r8d
  char v35; // cl
  int cData; // [rsp+28h] [rbp-79h]
  int cDataa; // [rsp+28h] [rbp-79h]
  int cDatab; // [rsp+28h] [rbp-79h]
  char v39; // [rsp+48h] [rbp-59h]
  _BYTE v40[7]; // [rsp+49h] [rbp-58h] BYREF
  _DWORD *v41; // [rsp+50h] [rbp-51h] BYREF
  int v42; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-45h] BYREF
  int v44; // [rsp+60h] [rbp-41h] BYREF
  _DWORD v45[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v46; // [rsp+70h] [rbp-31h] BYREF
  int v47; // [rsp+78h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  _QWORD *v49; // [rsp+A8h] [rbp+7h]
  int v50; // [rsp+B0h] [rbp+Fh]
  int v51; // [rsp+B4h] [rbp+13h]
  unsigned int *v52; // [rsp+B8h] [rbp+17h]
  int v53; // [rsp+C0h] [rbp+1Fh]
  int v54; // [rsp+C4h] [rbp+23h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v41 = 0LL;
  v45[1] = 0;
  v45[0] = 0;
  v39 = 0;
  v40[0] = 0;
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v41, &v46);
  v47 = HiveHeader;
  v5 = HiveHeader;
  if ( HiveHeader == 2 )
  {
    cData = 0;
    v11 = -1073741670;
    v22 = -1073741670;
    goto LABEL_28;
  }
  if ( !HiveHeader )
  {
    v11 = -1073741476;
    cData = 16;
    v22 = -1073741476;
    goto LABEL_28;
  }
  v6 = v41;
  if ( (unsigned int)(HiveHeader - 4) <= 1 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
    {
      if ( HiveHeader != 4 )
        goto LABEL_4;
      LOBYTE(v4) = 1;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v4, 875777347LL);
      if ( v7 )
        goto LABEL_33;
      v11 = -1073741801;
      cData = 48;
      v22 = -1073741801;
    }
    else
    {
      cData = 32;
      v11 = -1073741492;
      v22 = -1073741492;
    }
LABEL_28:
    SetFailureLocation(v1, 0, 6, v22, cData);
    v6 = v41;
    goto LABEL_79;
  }
LABEL_4:
  v7 = 0LL;
  if ( HiveHeader == 5 )
  {
    v24 = v41[2];
    goto LABEL_35;
  }
  if ( HiveHeader != 4 )
  {
    v6 = v41;
    v8 = v41[1];
    goto LABEL_7;
  }
LABEL_33:
  v24 = 0;
LABEL_35:
  LogHeader = HvpGetLogHeader(
                BugCheckParameter2,
                (unsigned int)&v46,
                v24,
                (unsigned int)v45,
                (__int64)&v42,
                (__int64)v40,
                v7);
  if ( LogHeader == 2 )
  {
    cDataa = 208;
    v11 = -1073741670;
    v29 = -1073741670;
    goto LABEL_78;
  }
  if ( LogHeader == 1 )
  {
    cDataa = 224;
    goto LABEL_76;
  }
  if ( v5 == 4 )
  {
    *(_DWORD *)(v7 + 28) = 0;
    v26 = 0;
    *(_WORD *)(BugCheckParameter2 + 184) |= 0x40u;
    v6 = (_DWORD *)v7;
    if ( LogHeader == 6 )
      v26 = 4;
    *(_DWORD *)(v7 + 4088) = v26;
  }
  v8 = v42;
LABEL_7:
  *(_QWORD *)(BugCheckParameter2 + 64) = v6;
  v9 = v6[5] - 1;
  v42 = v8;
  *(_DWORD *)(BugCheckParameter2 + 196) = v6[6] + (v9 << 12);
  v10 = CmpInitializeActualFileSizes(BugCheckParameter2, &v41);
  v11 = v10;
  if ( v10 < 0 )
  {
    cDataa = 128;
LABEL_53:
    v29 = v10;
LABEL_78:
    SetFailureLocation(v1, 0, 6, v29, cDataa);
    goto LABEL_79;
  }
  v12 = (unsigned int)v41;
  if ( (unsigned int)v41 < v6[10] + 4096 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 0x200000000000uLL) )
    {
      v51 = 0;
      v54 = 0;
      v49 = &v41;
      v52 = &v43;
      LODWORD(v41) = v27;
      v43 = v12;
      v50 = 4;
      v53 = 4;
      TlgWrite(&stru_1402F34E0, &unk_14027B4B2, 0LL, 0LL, 4u, &pData);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    v6[10] = (v12 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(v6[10] - 1) > 0x7FFFDFFF )
  {
    cDataa = 112;
LABEL_76:
    v11 = -1073741492;
    v29 = -1073741492;
    goto LABEL_78;
  }
  if ( (unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
  {
    v28 = HvViewMapStart(BugCheckParameter2 + 200, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 2664), v12, 0);
    v11 = v28;
    if ( v28 < 0 )
    {
      SetFailureLocation(v1, 0, 6, v28, 136);
      goto LABEL_79;
    }
    v10 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, 0LL, v12);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
      goto LABEL_11;
    }
    cDataa = 138;
    goto LABEL_53;
  }
LABEL_11:
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
    v14 = HvpMapHiveImageFromSystemCache(BugCheckParameter2, v13, v6[10]);
  else
    v14 = HvpMapHiveImageFromFile(BugCheckParameter2);
  v11 = v14;
  if ( v14 < 0 )
  {
    cDatab = 144;
LABEL_58:
    v30 = v11;
  }
  else
  {
    CmpTraceHiveMountBaseFileMounted(*(_QWORD *)(BugCheckParameter2 + 2664), (unsigned int)v6[10]);
    v15 = 0LL;
    v16 = v8;
    LODWORD(v41) = 0;
    LOBYTE(v17) = 0;
    v44 = v8;
    v46 = 0LL;
    while ( 1 )
    {
      v18 = v45[v15];
      if ( !v18 )
        break;
      v31 = v40[0];
      if ( v40[0] )
        *(_WORD *)(BugCheckParameter2 + 184) |= 0x80u;
      LOBYTE(v17) = v31;
      v32 = HvpRecoverData(BugCheckParameter2, v18, v16, v17, (__int64)&v44, (__int64)&v43);
      if ( v32 == 2 )
        v11 = -1073741670;
      if ( v32 == 1 )
        v11 = -1073741492;
      if ( (unsigned int)(v32 - 1) <= 1 )
      {
        cDatab = 160;
        goto LABEL_58;
      }
      v33 = v46;
      v34 = (int)v41;
      LOBYTE(v17) = 1;
      v39 = 1;
      v35 = -1;
      *(_WORD *)(BugCheckParameter2 + 184) |= LOWORD(v45[v46]) << (char)v41;
      if ( v43 < 0xFF )
        v35 = v43;
      *(_BYTE *)(v33 + BugCheckParameter2 + 186) = v35;
      v15 = v33 + 1;
      v16 = v44;
      LODWORD(v41) = v34 + 3;
      v46 = v15;
      if ( (unsigned int)(v34 + 3) >= 6 )
        goto LABEL_69;
    }
    if ( !(_BYTE)v17 )
    {
      v19 = v6[1];
      *(_DWORD *)(BugCheckParameter2 + 152) = v19;
      *(_DWORD *)(BugCheckParameter2 + 156) = v19;
      goto LABEL_18;
    }
LABEL_69:
    *(_DWORD *)(BugCheckParameter2 + 148) = v45[0];
    v19 = v42;
    *(_DWORD *)(BugCheckParameter2 + 152) = v16;
    *(_DWORD *)(BugCheckParameter2 + 156) = v16;
LABEL_18:
    *(_DWORD *)(BugCheckParameter2 + 164) = v19;
    v20 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)v6[10], 0LL);
    v11 = v20;
    if ( v20 < 0 )
    {
      cDatab = 176;
    }
    else
    {
      v20 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
      v11 = v20;
      if ( v20 >= 0 )
      {
        if ( v47 == 4 || v39 )
          v11 = 1073741833;
        *(_DWORD *)(BugCheckParameter2 + 144) |= 0x10000u;
        v6[2] = v6[1];
        v6[1023] = 0;
        return v11;
      }
      cDatab = 192;
    }
    v30 = v20;
  }
  SetFailureLocation(v1, 0, 6, v30, cDatab);
  HvpFreeAllocatedBins(BugCheckParameter2);
  HvpCleanMap(BugCheckParameter2);
LABEL_79:
  *(_BYTE *)(BugCheckParameter2 + 124) &= ~4u;
  LOBYTE(v23) = 1;
  HvViewMapCleanup(BugCheckParameter2 + 200, BugCheckParameter2, v23);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
      v6,
      *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 88) = 0;
  return v11;
}
