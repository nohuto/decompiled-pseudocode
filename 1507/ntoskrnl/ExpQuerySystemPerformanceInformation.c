/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x14042E030
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x1400140A8 (MiFreePoolPagesLeft.c)
 *     MiMaximumCommitmentAvailable @ 0x1400140D0 (MiMaximumCommitmentAvailable.c)
 *     MmGetWorkingSetLeafSize @ 0x14001411C (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x140014130 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x140014138 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x140014150 (ExQueryPoolUsage.c)
 *     MmGetSystemPageCounts @ 0x140014304 (MmGetSystemPageCounts.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x140014310 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetPeakCommitment @ 0x140014360 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x140014374 (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x140014388 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x14001439C (MmGetAvailablePages.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PsQueryRuntimeProcess @ 0x14042E5E8 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  ULONG v3; // r11d
  __int64 *v4; // r14
  LARGE_INTEGER v5; // rax
  ULONG v6; // ebx
  LARGE_INTEGER v7; // r9
  ULONG v8; // edi
  LARGE_INTEGER v9; // r10
  __int64 *v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // edx
  int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // r10d
  int v23; // r11d
  int v24; // edi
  int v25; // esi
  int v26; // r15d
  int v27; // r12d
  int v28; // r13d
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  __int64 *v32; // rdx
  int v33; // r14d
  _DWORD *v34; // rcx
  unsigned __int64 WorkingSetLeafSize; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // ecx
  ULONG v41; // r10d
  unsigned int v42; // edx
  unsigned int v43; // r8d
  int v44; // r9d
  unsigned int v45; // r11d
  unsigned int v46; // edi
  unsigned int v47; // esi
  unsigned int v48; // r15d
  unsigned int v49; // r12d
  unsigned int v50; // r13d
  _DWORD *v51; // rax
  bool v52; // zf
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  int v55; // [rsp+44h] [rbp-BCh]
  int v56; // [rsp+48h] [rbp-B8h]
  _QWORD Src[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v58; // [rsp+70h] [rbp-90h]
  ULONG v59; // [rsp+74h] [rbp-8Ch]
  ULONG v60; // [rsp+78h] [rbp-88h]
  int AvailablePages; // [rsp+7Ch] [rbp-84h]
  int TotalCommittedPages; // [rsp+80h] [rbp-80h]
  int TotalCommitLimit; // [rsp+84h] [rbp-7Ch]
  unsigned int PeakCommitment; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+8Ch] [rbp-74h]
  int v66; // [rsp+90h] [rbp-70h]
  int v67; // [rsp+94h] [rbp-6Ch]
  int v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+9Ch] [rbp-64h]
  int v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A4h] [rbp-5Ch]
  int v72; // [rsp+A8h] [rbp-58h]
  int v73; // [rsp+ACh] [rbp-54h]
  int v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B4h] [rbp-4Ch]
  int v76; // [rsp+B8h] [rbp-48h]
  int v77; // [rsp+BCh] [rbp-44h]
  int v78; // [rsp+C0h] [rbp-40h] BYREF
  int v79; // [rsp+C4h] [rbp-3Ch] BYREF
  int v80; // [rsp+C8h] [rbp-38h] BYREF
  int v81; // [rsp+CCh] [rbp-34h] BYREF
  int v82; // [rsp+D0h] [rbp-30h] BYREF
  int v83[5]; // [rsp+D4h] [rbp-2Ch] BYREF
  int v84; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v85[5]; // [rsp+ECh] [rbp-14h] BYREF
  __int64 v86; // [rsp+100h] [rbp+0h]
  unsigned __int64 v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+110h] [rbp+10h]
  ULONG v89; // [rsp+114h] [rbp+14h]
  unsigned __int64 v90; // [rsp+118h] [rbp+18h]
  unsigned __int64 v91; // [rsp+120h] [rbp+20h]
  unsigned __int64 v92; // [rsp+128h] [rbp+28h]
  __int64 v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  __int64 v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  __int64 v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]
  __int64 v99; // [rsp+160h] [rbp+60h]
  __int64 v100; // [rsp+168h] [rbp+68h]
  __int64 v101; // [rsp+170h] [rbp+70h]
  int v102; // [rsp+178h] [rbp+78h]
  __int64 v103; // [rsp+17Ch] [rbp+7Ch]
  int v104; // [rsp+184h] [rbp+84h]
  __int64 v105; // [rsp+188h] [rbp+88h]
  __int64 v106; // [rsp+190h] [rbp+90h]
  __int64 ResidentAvailablePages; // [rsp+198h] [rbp+98h]
  __int64 SharedCommit; // [rsp+1A0h] [rbp+A0h]
  __int128 v109; // [rsp+1B0h] [rbp+B0h] BYREF
  int v113; // [rsp+228h] [rbp+128h]
  __int64 v114; // [rsp+228h] [rbp+128h]

  v3 = IoOtherOperationCount;
  v4 = KiProcessorBlock;
  v5 = IoOtherTransferCount;
  v6 = IoReadOperationCount;
  v7 = IoReadTransferCount;
  v8 = IoWriteOperationCount;
  v9 = IoWriteTransferCount;
  if ( a1 )
  {
    v10 = KiProcessorBlock;
    v11 = a1;
    do
    {
      v12 = *v10++;
      v3 += *(_DWORD *)(v12 + 11492);
      v6 += *(_DWORD *)(v12 + 11484);
      v8 += *(_DWORD *)(v12 + 11488);
      v9.QuadPart += *(_QWORD *)(v12 + 11504);
      v5.QuadPart += *(_QWORD *)(v12 + 11512);
      v7.QuadPart += *(_QWORD *)(v12 + 11496);
      --v11;
    }
    while ( v11 );
  }
  v58 = v6;
  LODWORD(v13) = 0;
  Src[1] = v7.QuadPart;
  v14 = 0;
  Src[2] = v9.QuadPart;
  v15 = 0;
  Src[3] = v5.QuadPart;
  v59 = v8;
  v60 = v3;
  if ( a1 )
  {
    v16 = KiProcessorBlock;
    v17 = a1;
    do
    {
      v18 = *v16++;
      v15 += *(_DWORD *)(v18 + 11452);
      v14 += *(_DWORD *)(v18 + 11448);
      --v17;
    }
    while ( v17 );
  }
  v102 = v15;
  v103 = 0LL;
  v104 = v14;
  AvailablePages = MmGetAvailablePages();
  TotalCommittedPages = MmGetTotalCommittedPages();
  TotalCommitLimit = MmGetTotalCommitLimit();
  PeakCommitment = MmGetPeakCommitment();
  if ( PeakCommitment < v19 )
    PeakCommitment = v19;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v113 = 0;
  v31 = 0;
  v55 = 0;
  v56 = 0;
  v54 = 0;
  if ( a1 )
  {
    v13 = a1;
    v32 = KiProcessorBlock;
    v33 = 0;
    do
    {
      v34 = (_DWORD *)*v32++;
      v20 += v34[2852];
      v21 += v34[2853];
      v22 += v34[2854];
      v23 += v34[5946];
      v24 += v34[2855];
      v25 += v34[2856];
      v26 += v34[2857];
      v27 += v34[5947];
      v28 += v34[5948];
      v113 += v34[2858];
      v55 += v34[2859];
      v56 += v34[2860];
      v33 += v34[2861];
      --v13;
    }
    while ( v13 );
    v29 = v113;
    v30 = v55;
    v31 = v56;
    v54 = v33;
    v4 = KiProcessorBlock;
  }
  v74 = v29;
  v77 = v54;
  v65 = v20;
  v66 = v21;
  v67 = v22;
  v68 = v23;
  v69 = v24;
  v70 = v25;
  v71 = v26;
  v72 = v27;
  v73 = v28;
  v75 = v30;
  v76 = v31;
  v83[1] = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v109);
  v83[2] = v109;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2);
  if ( WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v85[2] = WorkingSetLeafSize;
  v36 = MmGetWorkingSetLeafSize(3);
  if ( v36 > v37 )
    LODWORD(v36) = v37;
  v85[3] = v36;
  v83[4] = DWORD2(v109);
  v85[4] = DWORD1(v109);
  v83[3] = HIDWORD(v109);
  MiFreePoolPagesLeft(6);
  v38 = MiMaximumCommitmentAvailable();
  if ( v39 > v38 )
    LODWORD(v39) = v38;
  v85[1] = v39;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, &v54);
  ExQueryPoolUsage(&v78, &v79, &v80, &v81, v85, &v82, v83, &v84);
  v40 = 0;
  v41 = CcFastMdlReadWait;
  v42 = 0;
  v86 = 0LL;
  v43 = 0;
  v87 = 0LL;
  v44 = 0;
  v88 = 0;
  v45 = 0;
  v89 = CcFastMdlReadWait;
  v46 = 0;
  v90 = 0LL;
  v47 = 0;
  v91 = 0LL;
  v48 = 0;
  v92 = 0LL;
  v49 = 0;
  v93 = 0LL;
  v50 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  if ( a1 )
  {
    v114 = a1;
    do
    {
      v51 = (_DWORD *)*v4++;
      LODWORD(v86) = v51[2865] + v13;
      LODWORD(v93) = v51[5925] + v93;
      HIDWORD(v93) += v51[5926];
      LODWORD(v94) = v51[5927] + v94;
      v40 += v51[2866];
      v42 += v51[5936];
      v43 += v51[2867];
      v44 += v51[5920];
      v41 += v51[5921];
      v45 += v51[5938];
      v46 += v51[5922];
      v47 += v51[5923];
      v48 += v51[5924];
      v49 += v51[5939];
      v50 += v51[5940];
      HIDWORD(v94) += v51[5941];
      LODWORD(v95) = v51[5942] + v95;
      HIDWORD(v95) += v51[2868];
      LODWORD(v96) = v51[2869] + v96;
      HIDWORD(v96) += v51[2870];
      LODWORD(v97) = v51[5937] + v97;
      HIDWORD(v97) += v51[5928];
      LODWORD(v98) = v51[5929] + v98;
      HIDWORD(v98) += v51[5943];
      LODWORD(v99) = v51[5944] + v99;
      HIDWORD(v99) += v51[5945];
      LODWORD(v100) = v51[5931] + v100;
      HIDWORD(v100) += v51[5932];
      LODWORD(v101) = v51[5933] + v101;
      v52 = v114-- == 1;
      HIDWORD(v101) += v51[5934];
      LODWORD(v13) = v86;
    }
    while ( !v52 );
    HIDWORD(v86) = v40;
    v87 = __PAIR64__(v43, v42);
    v88 = v44;
    v89 = v41;
    v90 = __PAIR64__(v46, v45);
    v91 = __PAIR64__(v48, v47);
    v92 = __PAIR64__(v50, v49);
  }
  v105 = CcGlobalDirtyPageStatistics;
  v106 = CcGlobalDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages();
  SharedCommit = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
