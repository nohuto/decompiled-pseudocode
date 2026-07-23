/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x140412EC0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140027D10 (MiFreePoolPagesLeft.c)
 *     MmGetAvailablePages @ 0x14006D13C (MmGetAvailablePages.c)
 *     MiMaximumCommitmentAvailable @ 0x14007E550 (MiMaximumCommitmentAvailable.c)
 *     ExQueryPoolUsage @ 0x14008BA60 (ExQueryPoolUsage.c)
 *     MmGetTotalCommittedPages @ 0x1400A9660 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1400A9674 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1400A9688 (MmGetPeakCommitment.c)
 *     MmGetResidentAvailablePages @ 0x1400A969C (MmGetResidentAvailablePages.c)
 *     MmGetSystemPageCounts @ 0x1400AB770 (MmGetSystemPageCounts.c)
 *     MmGetSharedCommit @ 0x1400ABE54 (MmGetSharedCommit.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x1400BCD14 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetWorkingSetLeafSize @ 0x1400FCFAC (MmGetWorkingSetLeafSize.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PsQueryRuntimeProcess @ 0x1404A5C60 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  ULONG v3; // r11d
  LARGE_INTEGER v4; // rax
  ULONG v5; // ebx
  LARGE_INTEGER v6; // r9
  ULONG v7; // edi
  LARGE_INTEGER v8; // r10
  __int64 *v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edx
  int v14; // r8d
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 AvailablePages; // rax
  int v19; // ecx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int64 v21; // r8
  int v22; // edx
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int64 v24; // r8
  int v25; // ecx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // r8
  unsigned int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r10d
  int v33; // r11d
  int v34; // edi
  int v35; // esi
  int v36; // r15d
  int v37; // r12d
  int v38; // r13d
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rdx
  int v43; // r14d
  _DWORD *v44; // rcx
  unsigned __int64 WorkingSetLeafSize; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // ecx
  ULONG v51; // r10d
  unsigned int v52; // edx
  unsigned int v53; // r8d
  int v54; // r9d
  unsigned int v55; // r11d
  unsigned int v56; // edi
  unsigned int v57; // esi
  unsigned int v58; // r14d
  unsigned int v59; // r15d
  unsigned int v60; // r12d
  int v61; // r13d
  __int64 *v62; // rax
  _DWORD *v63; // rax
  int v64; // ebx
  bool v65; // zf
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  unsigned int v68; // [rsp+44h] [rbp-BCh]
  __int64 v69; // [rsp+48h] [rbp-B8h]
  __int64 *v70; // [rsp+50h] [rbp-B0h]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v72; // [rsp+80h] [rbp-80h]
  ULONG v73; // [rsp+84h] [rbp-7Ch]
  ULONG v74; // [rsp+88h] [rbp-78h]
  int v75; // [rsp+8Ch] [rbp-74h]
  int v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+94h] [rbp-6Ch]
  unsigned int v78; // [rsp+98h] [rbp-68h]
  int v79; // [rsp+9Ch] [rbp-64h]
  int v80; // [rsp+A0h] [rbp-60h]
  int v81; // [rsp+A4h] [rbp-5Ch]
  int v82; // [rsp+A8h] [rbp-58h]
  int v83; // [rsp+ACh] [rbp-54h]
  int v84; // [rsp+B0h] [rbp-50h]
  int v85; // [rsp+B4h] [rbp-4Ch]
  int v86; // [rsp+B8h] [rbp-48h]
  int v87; // [rsp+BCh] [rbp-44h]
  int v88; // [rsp+C0h] [rbp-40h]
  int v89; // [rsp+C4h] [rbp-3Ch]
  int v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+CCh] [rbp-34h]
  int v92; // [rsp+D0h] [rbp-30h] BYREF
  int v93; // [rsp+D4h] [rbp-2Ch] BYREF
  int v94; // [rsp+D8h] [rbp-28h] BYREF
  int v95; // [rsp+DCh] [rbp-24h] BYREF
  int v96; // [rsp+E0h] [rbp-20h] BYREF
  int v97[5]; // [rsp+E4h] [rbp-1Ch] BYREF
  int v98; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v99[5]; // [rsp+FCh] [rbp-4h] BYREF
  __int64 v100; // [rsp+110h] [rbp+10h]
  unsigned __int64 v101; // [rsp+118h] [rbp+18h]
  int v102; // [rsp+120h] [rbp+20h]
  ULONG v103; // [rsp+124h] [rbp+24h]
  unsigned __int64 v104; // [rsp+128h] [rbp+28h]
  unsigned __int64 v105; // [rsp+130h] [rbp+30h]
  unsigned __int64 v106; // [rsp+138h] [rbp+38h]
  __int64 v107; // [rsp+140h] [rbp+40h]
  __int64 v108; // [rsp+148h] [rbp+48h]
  __int64 v109; // [rsp+150h] [rbp+50h]
  __int64 v110; // [rsp+158h] [rbp+58h]
  __int64 v111; // [rsp+160h] [rbp+60h]
  __int64 v112; // [rsp+168h] [rbp+68h]
  __int64 v113; // [rsp+170h] [rbp+70h]
  __int64 v114; // [rsp+178h] [rbp+78h]
  __int64 v115; // [rsp+180h] [rbp+80h]
  int v116; // [rsp+188h] [rbp+88h]
  __int64 v117; // [rsp+18Ch] [rbp+8Ch]
  int v118; // [rsp+194h] [rbp+94h]
  __int64 v119; // [rsp+198h] [rbp+98h]
  __int64 v120; // [rsp+1A0h] [rbp+A0h]
  __int64 ResidentAvailablePages; // [rsp+1A8h] [rbp+A8h]
  __int64 SharedCommit; // [rsp+1B0h] [rbp+B0h]
  __int128 v123; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v124[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v128; // [rsp+248h] [rbp+148h]
  __int64 v129; // [rsp+248h] [rbp+148h]

  v3 = IoOtherOperationCount;
  v4 = IoOtherTransferCount;
  v5 = IoReadOperationCount;
  v6 = IoReadTransferCount;
  v7 = IoWriteOperationCount;
  v8 = IoWriteTransferCount;
  v70 = KiProcessorBlock;
  if ( a1 )
  {
    v9 = KiProcessorBlock;
    v10 = a1;
    do
    {
      v11 = *v9++;
      v3 += *(_DWORD *)(v11 + 11492);
      v5 += *(_DWORD *)(v11 + 11484);
      v7 += *(_DWORD *)(v11 + 11488);
      v8.QuadPart += *(_QWORD *)(v11 + 11504);
      v4.QuadPart += *(_QWORD *)(v11 + 11512);
      v6.QuadPart += *(_QWORD *)(v11 + 11496);
      --v10;
    }
    while ( v10 );
  }
  v72 = v5;
  v12 = 0;
  Src[1] = v6.QuadPart;
  v13 = 0;
  Src[2] = v8.QuadPart;
  v14 = 0;
  Src[3] = v4.QuadPart;
  v73 = v7;
  v74 = v3;
  if ( a1 )
  {
    v15 = KiProcessorBlock;
    v16 = a1;
    do
    {
      v17 = *v15++;
      v14 += *(_DWORD *)(v17 + 11452);
      v13 += *(_DWORD *)(v17 + 11448);
      --v16;
    }
    while ( v16 );
  }
  v116 = v14;
  v117 = 0LL;
  v118 = v13;
  AvailablePages = MmGetAvailablePages();
  v19 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v19 = AvailablePages;
  v75 = v19;
  TotalCommittedPages = MmGetTotalCommittedPages();
  v22 = v21;
  if ( TotalCommittedPages <= v21 )
    v22 = TotalCommittedPages;
  v76 = v22;
  TotalCommitLimit = MmGetTotalCommitLimit();
  v25 = v24;
  if ( TotalCommitLimit <= v24 )
    v25 = TotalCommitLimit;
  v77 = v25;
  PeakCommitment = MmGetPeakCommitment();
  v29 = v28;
  if ( PeakCommitment <= v28 )
    v29 = PeakCommitment;
  v78 = v29;
  if ( v29 < v27 )
    v78 = v27;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0LL;
  v128 = 0;
  v41 = 0LL;
  v67 = 0;
  v68 = 0;
  if ( a1 )
  {
    v42 = KiProcessorBlock;
    v69 = a1;
    v43 = 0;
    do
    {
      v44 = (_DWORD *)*v42++;
      v30 = (unsigned int)(v44[2852] + v30);
      v31 = (unsigned int)(v44[2853] + v31);
      v32 += v44[2854];
      v33 += v44[5946];
      v34 += v44[2855];
      v35 += v44[2856];
      v36 += v44[2857];
      v37 += v44[5947];
      v38 += v44[5948];
      v43 += v44[2858];
      v128 += v44[2859];
      v67 += v44[2860];
      v68 += v44[2861];
      --v69;
    }
    while ( v69 );
    v39 = v128;
    v40 = v67;
    v41 = v68;
  }
  else
  {
    v43 = 0;
  }
  v79 = v30;
  v80 = v31;
  v81 = v32;
  v82 = v33;
  v83 = v34;
  v84 = v35;
  v85 = v36;
  v86 = v37;
  v87 = v38;
  v88 = v43;
  v89 = v39;
  v90 = v40;
  v91 = v41;
  v97[1] = MmGetNumberOfFreeSystemPtes(v40, v41, v30, v31);
  MmGetSystemPageCounts(&v123);
  v97[2] = v123;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize();
  if ( WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v99[2] = WorkingSetLeafSize;
  v46 = MmGetWorkingSetLeafSize();
  if ( v46 > v47 )
    LODWORD(v46) = v47;
  v99[3] = v46;
  v97[4] = DWORD2(v123);
  v99[4] = DWORD1(v123);
  v97[3] = HIDWORD(v123);
  MiFreePoolPagesLeft(6);
  v48 = MiMaximumCommitmentAvailable();
  if ( v49 > v48 )
    LODWORD(v49) = v48;
  v99[1] = v49;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, v124);
  ExQueryPoolUsage(&v92, &v93, &v94, &v95, v99, &v96, v97, &v98);
  v50 = 0;
  v51 = CcFastMdlReadWait;
  v52 = 0;
  v100 = 0LL;
  v53 = 0;
  v101 = 0LL;
  v54 = 0;
  v102 = 0;
  v55 = 0;
  v103 = CcFastMdlReadWait;
  v56 = 0;
  v104 = 0LL;
  v57 = 0;
  v105 = 0LL;
  v58 = 0;
  v106 = 0LL;
  v59 = 0;
  v107 = 0LL;
  v60 = 0;
  v108 = 0LL;
  v61 = 0;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  if ( a1 )
  {
    v129 = a1;
    v62 = KiProcessorBlock;
    do
    {
      v63 = (_DWORD *)*v62;
      LODWORD(v100) = v63[2865] + v12;
      HIDWORD(v107) += v63[5926];
      v50 += v63[2866];
      v52 += v63[5936];
      v53 += v63[2867];
      v54 += v63[5920];
      v51 += v63[5921];
      v55 += v63[5938];
      v56 += v63[5922];
      v57 += v63[5923];
      v58 += v63[5924];
      v59 += v63[5939];
      v60 += v63[5940];
      v61 += v63[5925];
      LODWORD(v108) = v63[5927] + v108;
      HIDWORD(v108) += v63[5941];
      LODWORD(v109) = v63[5942] + v109;
      HIDWORD(v109) += v63[2868];
      LODWORD(v110) = v63[2869] + v110;
      HIDWORD(v110) += v63[2870];
      LODWORD(v111) = v63[5937] + v111;
      HIDWORD(v111) += v63[5928];
      LODWORD(v112) = v63[5929] + v112;
      HIDWORD(v112) += v63[5943];
      LODWORD(v113) = v63[5944] + v113;
      HIDWORD(v113) += v63[5945];
      LODWORD(v114) = v63[5931] + v114;
      HIDWORD(v114) += v63[5932];
      LODWORD(v115) = v63[5933] + v115;
      v64 = v63[5934] + HIDWORD(v115);
      v62 = v70 + 1;
      HIDWORD(v115) = v64;
      v65 = v129-- == 1;
      v12 = v100;
      ++v70;
    }
    while ( !v65 );
    HIDWORD(v100) = v50;
    v101 = __PAIR64__(v53, v52);
    v102 = v54;
    v103 = v51;
    v104 = __PAIR64__(v56, v55);
    v105 = __PAIR64__(v58, v57);
    v106 = __PAIR64__(v60, v59);
    LODWORD(v107) = v61;
  }
  v119 = CcGlobalDirtyPageStatistics;
  v120 = CcGlobalDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages();
  SharedCommit = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
