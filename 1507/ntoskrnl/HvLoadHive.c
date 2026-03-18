/*
 * XREFs of HvLoadHive @ 0x1404AE98C
 * Callers:
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E0FAC (HvpMapHiveImageFromSystemCache.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404A0584 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404AF334 (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x1404AF854 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpMapHiveImageFromFile @ 0x1404AF8C8 (HvpMapHiveImageFromFile.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1404AF958 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     CmpInitializeActualPrimaryFileSize @ 0x1404AF970 (CmpInitializeActualPrimaryFileSize.c)
 *     HvpGetHiveHeader @ 0x1404AFA28 (HvpGetHiveHeader.c)
 *     HvViewMapCleanup @ 0x14055B2E4 (HvViewMapCleanup.c)
 *     HvpFreeAllocatedBins @ 0x14065B830 (HvpFreeAllocatedBins.c)
 *     HvViewMapPinForFileOffset @ 0x140663004 (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x140663100 (HvViewMapStart.c)
 *     HvpCleanMap @ 0x140663C74 (HvpCleanMap.c)
 *     HvpGetLogHeader @ 0x140664AE4 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406650F0 (HvpRecoverData.c)
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
  unsigned int v14; // r9d
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r9d
  int v19; // r10d
  int v20; // eax
  int v21; // eax
  int v23; // r9d
  __int64 v24; // r8
  int v25; // r8d
  int LogHeader; // eax
  int v27; // ecx
  int v28; // r9d
  int v29; // eax
  int v30; // r9d
  int v31; // r9d
  char v32; // dl
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r8d
  char v36; // cl
  int cData; // [rsp+28h] [rbp-79h]
  int cDataa; // [rsp+28h] [rbp-79h]
  int cDatab; // [rsp+28h] [rbp-79h]
  char v40; // [rsp+48h] [rbp-59h]
  _BYTE v41[7]; // [rsp+49h] [rbp-58h] BYREF
  _DWORD *v42; // [rsp+50h] [rbp-51h] BYREF
  int v43; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-45h] BYREF
  int v45; // [rsp+60h] [rbp-41h] BYREF
  _DWORD v46[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v47; // [rsp+70h] [rbp-31h] BYREF
  int v48; // [rsp+78h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  _QWORD *v50; // [rsp+A8h] [rbp+7h]
  int v51; // [rsp+B0h] [rbp+Fh]
  int v52; // [rsp+B4h] [rbp+13h]
  unsigned int *v53; // [rsp+B8h] [rbp+17h]
  int v54; // [rsp+C0h] [rbp+1Fh]
  int v55; // [rsp+C4h] [rbp+23h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v42 = 0LL;
  v46[1] = 0;
  v46[0] = 0;
  v40 = 0;
  v41[0] = 0;
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v42, &v47);
  v48 = HiveHeader;
  v5 = HiveHeader;
  if ( HiveHeader == 2 )
  {
    cData = 0;
    v11 = -1073741670;
    v23 = -1073741670;
    goto LABEL_28;
  }
  if ( !HiveHeader )
  {
    v11 = -1073741476;
    cData = 16;
    v23 = -1073741476;
    goto LABEL_28;
  }
  v6 = v42;
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
      v23 = -1073741801;
    }
    else
    {
      cData = 32;
      v11 = -1073741492;
      v23 = -1073741492;
    }
LABEL_28:
    SetFailureLocation(v1, 0, 6, v23, cData);
    v6 = v42;
    goto LABEL_79;
  }
LABEL_4:
  v7 = 0LL;
  if ( HiveHeader == 5 )
  {
    v25 = v42[2];
    goto LABEL_35;
  }
  if ( HiveHeader != 4 )
  {
    v6 = v42;
    v8 = v42[1];
    goto LABEL_7;
  }
LABEL_33:
  v25 = 0;
LABEL_35:
  LogHeader = HvpGetLogHeader(
                BugCheckParameter2,
                (unsigned int)&v47,
                v25,
                (unsigned int)v46,
                (__int64)&v43,
                (__int64)v41,
                v7);
  if ( LogHeader == 2 )
  {
    cDataa = 208;
    v11 = -1073741670;
    v30 = -1073741670;
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
    v27 = 0;
    *(_WORD *)(BugCheckParameter2 + 184) |= 0x40u;
    v6 = (_DWORD *)v7;
    if ( LogHeader == 6 )
      v27 = 4;
    *(_DWORD *)(v7 + 4088) = v27;
  }
  v8 = v43;
LABEL_7:
  *(_QWORD *)(BugCheckParameter2 + 64) = v6;
  v9 = v6[5] - 1;
  v43 = v8;
  *(_DWORD *)(BugCheckParameter2 + 196) = v6[6] + (v9 << 12);
  v10 = CmpInitializeActualPrimaryFileSize(BugCheckParameter2, &v42);
  v11 = v10;
  if ( v10 < 0 )
  {
    cDataa = 128;
LABEL_53:
    v30 = v10;
LABEL_78:
    SetFailureLocation(v1, 0, 6, v30, cDataa);
    goto LABEL_79;
  }
  v12 = (unsigned int)v42;
  if ( (unsigned int)v42 < v6[10] + 4096 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    if ( stru_14031EED0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14031EED0, 0x200000000000uLL) )
    {
      v52 = 0;
      v55 = 0;
      v50 = &v42;
      v53 = &v44;
      LODWORD(v42) = v28;
      v44 = v12;
      v51 = 4;
      v54 = 4;
      TlgWrite(&stru_14031EED0, &unk_1402A3C1D, 0LL, 0LL, 4u, &pData);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    v6[10] = (v12 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(v6[10] - 1) > 0x7FFFDFFF )
  {
    cDataa = 112;
LABEL_76:
    v11 = -1073741492;
    v30 = -1073741492;
    goto LABEL_78;
  }
  if ( (unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
  {
    v29 = HvViewMapStart(BugCheckParameter2 + 200, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 2664), v12, 0);
    v11 = v29;
    if ( v29 < 0 )
    {
      SetFailureLocation(v1, 0, 6, v29, 136);
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
    v15 = HvpMapHiveImageFromSystemCache(BugCheckParameter2, v13, v6[10], v14);
  else
    v15 = HvpMapHiveImageFromFile(BugCheckParameter2);
  v11 = v15;
  if ( v15 < 0 )
  {
    cDatab = 144;
LABEL_58:
    v31 = v11;
  }
  else
  {
    CmpTraceHiveMountBaseFileMounted(*(_QWORD *)(BugCheckParameter2 + 2664), (unsigned int)v6[10]);
    v16 = 0LL;
    v17 = v8;
    LODWORD(v42) = 0;
    LOBYTE(v18) = 0;
    v45 = v8;
    v47 = 0LL;
    while ( 1 )
    {
      v19 = v46[v16];
      if ( !v19 )
        break;
      v32 = v41[0];
      if ( v41[0] )
        *(_WORD *)(BugCheckParameter2 + 184) |= 0x80u;
      LOBYTE(v18) = v32;
      v33 = HvpRecoverData(BugCheckParameter2, v19, v17, v18, (__int64)&v45, (__int64)&v44);
      if ( v33 == 2 )
        v11 = -1073741670;
      if ( v33 == 1 )
        v11 = -1073741492;
      if ( (unsigned int)(v33 - 1) <= 1 )
      {
        cDatab = 160;
        goto LABEL_58;
      }
      v34 = v47;
      v35 = (int)v42;
      LOBYTE(v18) = 1;
      v40 = 1;
      v36 = -1;
      *(_WORD *)(BugCheckParameter2 + 184) |= LOWORD(v46[v47]) << (char)v42;
      if ( v44 < 0xFF )
        v36 = v44;
      *(_BYTE *)(v34 + BugCheckParameter2 + 186) = v36;
      v16 = v34 + 1;
      v17 = v45;
      LODWORD(v42) = v35 + 3;
      v47 = v16;
      if ( (unsigned int)(v35 + 3) >= 6 )
        goto LABEL_69;
    }
    if ( !(_BYTE)v18 )
    {
      v20 = v6[1];
      *(_DWORD *)(BugCheckParameter2 + 152) = v20;
      *(_DWORD *)(BugCheckParameter2 + 156) = v20;
      goto LABEL_18;
    }
LABEL_69:
    *(_DWORD *)(BugCheckParameter2 + 148) = v46[0];
    v20 = v43;
    *(_DWORD *)(BugCheckParameter2 + 152) = v17;
    *(_DWORD *)(BugCheckParameter2 + 156) = v17;
LABEL_18:
    *(_DWORD *)(BugCheckParameter2 + 164) = v20;
    v21 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)v6[10], 0LL);
    v11 = v21;
    if ( v21 < 0 )
    {
      cDatab = 176;
    }
    else
    {
      v21 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
      v11 = v21;
      if ( v21 >= 0 )
      {
        if ( v48 == 4 || v40 )
          v11 = 1073741833;
        *(_DWORD *)(BugCheckParameter2 + 144) |= 0x10000u;
        v6[2] = v6[1];
        v6[1023] = 0;
        return v11;
      }
      cDatab = 192;
    }
    v31 = v21;
  }
  SetFailureLocation(v1, 0, 6, v31, cDatab);
  HvpFreeAllocatedBins(BugCheckParameter2);
  HvpCleanMap(BugCheckParameter2);
LABEL_79:
  *(_BYTE *)(BugCheckParameter2 + 124) &= ~4u;
  LOBYTE(v24) = 1;
  HvViewMapCleanup(BugCheckParameter2 + 200, BugCheckParameter2, v24);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
      v6,
      *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 88) = 0;
  return v11;
}
