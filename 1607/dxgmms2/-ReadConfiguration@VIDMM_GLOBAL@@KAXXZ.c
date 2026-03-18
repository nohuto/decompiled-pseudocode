/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0072568
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0072234 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00732F8 (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007350C (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0073AD8 (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ @ 0x1C0073BB8 (-ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008DC20 (-ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008E348 (-ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008E660 (-ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008EA9C (-ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008EFE8 (-ReadPowerConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008F0DC (-ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     ?ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008F43C (-ReadVPRConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 */

void VIDMM_GLOBAL::ReadConfiguration(void)
{
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  int v1; // ebx
  PPHYSICAL_MEMORY_RANGE v2; // rcx
  __int64 v3; // rax
  LARGE_INTEGER NumberOfBytes; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int *v10; // rsi
  ULONG v11; // r14d
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r8d
  unsigned int v25; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-C4h] BYREF
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  int v31; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+54h] [rbp-B4h] BYREF
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+64h] [rbp-A4h] BYREF
  int v37; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v39; // [rsp+70h] [rbp-98h] BYREF
  int v40; // [rsp+74h] [rbp-94h] BYREF
  int v41; // [rsp+78h] [rbp-90h] BYREF
  int v42; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v43; // [rsp+80h] [rbp-88h] BYREF
  int v44; // [rsp+84h] [rbp-84h] BYREF
  int v45; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v47; // [rsp+90h] [rbp-78h] BYREF
  int v48; // [rsp+94h] [rbp-74h] BYREF
  int v49; // [rsp+98h] [rbp-70h] BYREF
  int v50; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v51; // [rsp+A0h] [rbp-68h] BYREF
  int v52; // [rsp+A4h] [rbp-64h] BYREF
  int v53; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+ACh] [rbp-5Ch] BYREF
  int v55; // [rsp+B0h] [rbp-58h] BYREF
  int v56; // [rsp+B4h] [rbp-54h] BYREF
  int v57; // [rsp+B8h] [rbp-50h] BYREF
  int v58; // [rsp+BCh] [rbp-4Ch] BYREF
  int v59; // [rsp+C0h] [rbp-48h] BYREF
  int v60; // [rsp+C4h] [rbp-44h] BYREF
  int v61; // [rsp+C8h] [rbp-40h] BYREF
  int v62; // [rsp+CCh] [rbp-3Ch] BYREF
  int v63; // [rsp+D0h] [rbp-38h] BYREF
  int v64; // [rsp+D4h] [rbp-34h] BYREF
  int v65; // [rsp+D8h] [rbp-30h] BYREF
  int v66; // [rsp+DCh] [rbp-2Ch] BYREF
  int v67; // [rsp+E0h] [rbp-28h] BYREF
  int v68; // [rsp+E4h] [rbp-24h] BYREF
  int v69; // [rsp+E8h] [rbp-20h] BYREF
  int v70; // [rsp+ECh] [rbp-1Ch] BYREF
  int v71; // [rsp+F0h] [rbp-18h] BYREF
  int v72; // [rsp+F4h] [rbp-14h] BYREF
  int v73; // [rsp+F8h] [rbp-10h] BYREF
  int v74; // [rsp+FCh] [rbp-Ch] BYREF
  int v75; // [rsp+100h] [rbp-8h] BYREF
  int v76; // [rsp+104h] [rbp-4h] BYREF
  int v77; // [rsp+108h] [rbp+0h] BYREF
  int v78; // [rsp+10Ch] [rbp+4h] BYREF
  int v79; // [rsp+110h] [rbp+8h] BYREF
  int v80; // [rsp+114h] [rbp+Ch] BYREF
  int v81; // [rsp+118h] [rbp+10h] BYREF
  int v82; // [rsp+11Ch] [rbp+14h] BYREF
  int v83; // [rsp+120h] [rbp+18h] BYREF
  int v84; // [rsp+124h] [rbp+1Ch] BYREF
  int v85; // [rsp+128h] [rbp+20h] BYREF
  int v86; // [rsp+12Ch] [rbp+24h] BYREF
  int v87; // [rsp+130h] [rbp+28h] BYREF
  int v88; // [rsp+134h] [rbp+2Ch] BYREF
  struct _UNICODE_STRING Destination; // [rsp+138h] [rbp+30h] BYREF
  struct _UNICODE_STRING String; // [rsp+148h] [rbp+40h] BYREF
  __int128 v91; // [rsp+158h] [rbp+50h]
  __int128 v92; // [rsp+168h] [rbp+60h]
  __int128 v93; // [rsp+178h] [rbp+70h]
  __int64 v94; // [rsp+188h] [rbp+80h]
  struct _UNICODE_STRING DestinationString; // [rsp+190h] [rbp+88h] BYREF
  _OWORD v96[112]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v97; // [rsp+8A8h] [rbp+7A0h] BYREF
  _BYTE v98[64]; // [rsp+8B8h] [rbp+7B0h] BYREF

  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v1 = 0;
  v2 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
    v5 = 0;
    if ( NumberOfBytes.QuadPart )
    {
      v6 = qword_1C0035148;
      do
      {
        v6 += NumberOfBytes.QuadPart;
        ++v5;
        qword_1C0035148 = v6;
        NumberOfBytes = v2[v5].NumberOfBytes;
      }
      while ( NumberOfBytes.QuadPart );
    }
    ExFreePoolWithTag(v2, 0);
  }
  else
  {
    qword_1C0035148 = 0x20000000LL;
    _InterlockedAdd(&dword_1C003565C, 1u);
    v3 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v3 + 24) = 44LL;
    WdLogEvent5_WdLowResource(v3);
  }
  v29 = 25;
  v25 = 25;
  v59 = 0;
  v30 = 40;
  v26 = 40;
  v27 = 0;
  v64 = 0;
  v60 = 10;
  v61 = 15;
  v42 = 15;
  v62 = 5;
  v43 = 5;
  v63 = 300;
  v44 = 300;
  v7 = 1024;
  if ( (unsigned __int64)qword_1C0035148 <= 0x20000000 )
    v7 = 256;
  v41 = 10;
  v65 = v7;
  v32 = v7;
  v8 = 0x2000000;
  if ( (unsigned __int64)qword_1C0035148 <= 0x20000000 )
    v8 = 0x800000;
  v31 = 0;
  v67 = v8;
  v34 = v8;
  v9 = 0x1000000;
  if ( (unsigned __int64)qword_1C0035148 <= 0x20000000 )
    v9 = 0x400000;
  v66 = 4;
  v68 = v9;
  v35 = v9;
  v33 = 4;
  v69 = 10;
  v36 = 10;
  v71 = 1;
  v38 = 1;
  v72 = 1;
  v40 = 1;
  v70 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v37 = v70;
  v74 = 0x100000;
  v45 = 0x100000;
  v76 = 60;
  v47 = 60;
  v77 = 60;
  v48 = 60;
  v79 = 8;
  v50 = 8;
  v83 = 200;
  v73 = 1;
  v39 = 1;
  v75 = 0x800000;
  v46 = 0x800000;
  v78 = 1;
  v49 = 1;
  v80 = 2;
  v51 = 2;
  v81 = 0;
  v52 = 0;
  v82 = 0;
  v53 = 0;
  v54 = 200;
  v84 = 1;
  v55 = 1;
  v85 = 4096;
  v56 = 4096;
  v86 = 6;
  v57 = 6;
  v87 = 20;
  v58 = 20;
  *(_QWORD *)&v96[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v96[1] + 1) = &v25;
  *((_QWORD *)&v96[2] + 1) = &v29;
  *((_QWORD *)&v96[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v96[5] = &v26;
  *(_QWORD *)&v96[6] = &v30;
  *(_QWORD *)&v96[8] = L"PagesHistory";
  *((_QWORD *)&v96[8] + 1) = &v27;
  *((_QWORD *)&v96[9] + 1) = &v59;
  *((_QWORD *)&v96[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v96[12] = &v41;
  *(_QWORD *)&v96[13] = &v60;
  *(_QWORD *)&v96[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v96[15] + 1) = &v42;
  *((_QWORD *)&v96[16] + 1) = &v61;
  *((_QWORD *)&v96[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v96[19] = &v43;
  *(_QWORD *)&v96[20] = &v62;
  *(_QWORD *)&v96[22] = L"EventThrottleThreshold";
  *((_QWORD *)&v96[22] + 1) = &v44;
  *(_QWORD *)&v96[0] = 0LL;
  DWORD2(v96[0]) = 288;
  LODWORD(v96[2]) = 67108868;
  LODWORD(v96[3]) = 4;
  *((_QWORD *)&v96[3] + 1) = 0LL;
  LODWORD(v96[4]) = 288;
  DWORD2(v96[5]) = 67108868;
  DWORD2(v96[6]) = 4;
  *(_QWORD *)&v96[7] = 0LL;
  DWORD2(v96[7]) = 288;
  LODWORD(v96[9]) = 67108868;
  LODWORD(v96[10]) = 4;
  *((_QWORD *)&v96[10] + 1) = 0LL;
  LODWORD(v96[11]) = 288;
  DWORD2(v96[12]) = 67108868;
  DWORD2(v96[13]) = 4;
  *(_QWORD *)&v96[14] = 0LL;
  DWORD2(v96[14]) = 288;
  LODWORD(v96[16]) = 67108868;
  LODWORD(v96[17]) = 4;
  *((_QWORD *)&v96[17] + 1) = 0LL;
  LODWORD(v96[18]) = 288;
  DWORD2(v96[19]) = 67108868;
  DWORD2(v96[20]) = 4;
  *(_QWORD *)&v96[21] = 0LL;
  DWORD2(v96[21]) = 288;
  LODWORD(v96[23]) = 67108868;
  LODWORD(v96[24]) = 4;
  *((_QWORD *)&v96[23] + 1) = &v63;
  *((_QWORD *)&v96[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v96[26] = &v31;
  *(_QWORD *)&v96[27] = &v64;
  *(_QWORD *)&v96[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v96[29] + 1) = &v32;
  *((_QWORD *)&v96[30] + 1) = &v65;
  *((_QWORD *)&v96[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v96[33] = &v33;
  *(_QWORD *)&v96[34] = &v66;
  *(_QWORD *)&v96[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v96[36] + 1) = &v34;
  *((_QWORD *)&v96[37] + 1) = &v67;
  *((_QWORD *)&v96[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v96[40] = &v35;
  *(_QWORD *)&v96[41] = &v68;
  *(_QWORD *)&v96[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v96[43] + 1) = &v36;
  *((_QWORD *)&v96[44] + 1) = &v69;
  *((_QWORD *)&v96[46] + 1) = L"NbPagingHistoryRecords";
  *(_QWORD *)&v96[47] = &v37;
  *(_QWORD *)&v96[48] = &v70;
  *(_QWORD *)&v96[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v96[50] + 1) = &v38;
  *((_QWORD *)&v96[24] + 1) = 0LL;
  LODWORD(v96[25]) = 288;
  DWORD2(v96[26]) = 67108868;
  DWORD2(v96[27]) = 4;
  *(_QWORD *)&v96[28] = 0LL;
  DWORD2(v96[28]) = 288;
  LODWORD(v96[30]) = 67108868;
  LODWORD(v96[31]) = 4;
  *((_QWORD *)&v96[31] + 1) = 0LL;
  LODWORD(v96[32]) = 288;
  DWORD2(v96[33]) = 67108868;
  DWORD2(v96[34]) = 4;
  *(_QWORD *)&v96[35] = 0LL;
  DWORD2(v96[35]) = 288;
  LODWORD(v96[37]) = 67108868;
  LODWORD(v96[38]) = 4;
  *((_QWORD *)&v96[38] + 1) = 0LL;
  LODWORD(v96[39]) = 288;
  DWORD2(v96[40]) = 67108868;
  DWORD2(v96[41]) = 4;
  *(_QWORD *)&v96[42] = 0LL;
  DWORD2(v96[42]) = 288;
  LODWORD(v96[44]) = 67108868;
  LODWORD(v96[45]) = 4;
  *((_QWORD *)&v96[45] + 1) = 0LL;
  LODWORD(v96[46]) = 288;
  DWORD2(v96[47]) = 67108868;
  DWORD2(v96[48]) = 4;
  *(_QWORD *)&v96[49] = 0LL;
  DWORD2(v96[49]) = 288;
  LODWORD(v96[51]) = 67108868;
  *((_QWORD *)&v96[51] + 1) = &v71;
  *((_QWORD *)&v96[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v96[54] = &v40;
  *(_QWORD *)&v96[55] = &v72;
  *(_QWORD *)&v96[57] = L"UseUnreset";
  *((_QWORD *)&v96[57] + 1) = &v39;
  *((_QWORD *)&v96[58] + 1) = &v73;
  *((_QWORD *)&v96[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v96[61] = &v45;
  *(_QWORD *)&v96[62] = &v74;
  *(_QWORD *)&v96[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v96[64] + 1) = &v46;
  *((_QWORD *)&v96[65] + 1) = &v75;
  *((_QWORD *)&v96[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v96[68] = &v47;
  *(_QWORD *)&v96[69] = &v76;
  *(_QWORD *)&v96[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v96[71] + 1) = &v48;
  *((_QWORD *)&v96[72] + 1) = &v77;
  *((_QWORD *)&v96[74] + 1) = L"ProcessPendingOfferPeriod";
  *(_QWORD *)&v96[75] = &v49;
  *(_QWORD *)&v96[76] = &v78;
  *(_QWORD *)&v96[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v96[78] + 1) = &v50;
  *((_QWORD *)&v96[79] + 1) = &v79;
  LODWORD(v96[52]) = 4;
  *((_QWORD *)&v96[52] + 1) = 0LL;
  LODWORD(v96[53]) = 288;
  DWORD2(v96[54]) = 67108868;
  DWORD2(v96[55]) = 4;
  *(_QWORD *)&v96[56] = 0LL;
  DWORD2(v96[56]) = 288;
  LODWORD(v96[58]) = 67108868;
  LODWORD(v96[59]) = 4;
  *((_QWORD *)&v96[59] + 1) = 0LL;
  LODWORD(v96[60]) = 288;
  DWORD2(v96[61]) = 67108868;
  DWORD2(v96[62]) = 4;
  *(_QWORD *)&v96[63] = 0LL;
  DWORD2(v96[63]) = 288;
  LODWORD(v96[65]) = 67108868;
  LODWORD(v96[66]) = 4;
  *((_QWORD *)&v96[66] + 1) = 0LL;
  LODWORD(v96[67]) = 288;
  DWORD2(v96[68]) = 67108868;
  DWORD2(v96[69]) = 4;
  *(_QWORD *)&v96[70] = 0LL;
  DWORD2(v96[70]) = 288;
  LODWORD(v96[72]) = 67108868;
  LODWORD(v96[73]) = 4;
  *((_QWORD *)&v96[73] + 1) = 0LL;
  LODWORD(v96[74]) = 288;
  DWORD2(v96[75]) = 67108868;
  DWORD2(v96[76]) = 4;
  *(_QWORD *)&v96[77] = 0LL;
  DWORD2(v96[77]) = 288;
  LODWORD(v96[79]) = 67108868;
  LODWORD(v96[80]) = 4;
  *((_QWORD *)&v96[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v96[82] = &v51;
  *(_QWORD *)&v96[83] = &v80;
  *(_QWORD *)&v96[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v96[85] + 1) = &v52;
  *((_QWORD *)&v96[86] + 1) = &v81;
  *((_QWORD *)&v96[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v96[89] = &v53;
  *(_QWORD *)&v96[90] = &v82;
  *(_QWORD *)&v96[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v96[92] + 1) = &v54;
  *((_QWORD *)&v96[93] + 1) = &v83;
  *((_QWORD *)&v96[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v96[96] = &v55;
  *(_QWORD *)&v96[97] = &v84;
  *(_QWORD *)&v96[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v96[99] + 1) = &v56;
  *((_QWORD *)&v96[100] + 1) = &v85;
  *((_QWORD *)&v96[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v96[103] = &v57;
  *(_QWORD *)&v96[104] = &v86;
  *(_QWORD *)&v96[106] = L"SegmentCleanupTime";
  *((_QWORD *)&v96[106] + 1) = &v58;
  *((_QWORD *)&v96[107] + 1) = &v87;
  *((_QWORD *)&v96[80] + 1) = 0LL;
  LODWORD(v96[81]) = 288;
  DWORD2(v96[82]) = 67108868;
  DWORD2(v96[83]) = 4;
  *(_QWORD *)&v96[84] = 0LL;
  DWORD2(v96[84]) = 288;
  LODWORD(v96[86]) = 67108868;
  LODWORD(v96[87]) = 4;
  *((_QWORD *)&v96[87] + 1) = 0LL;
  LODWORD(v96[88]) = 288;
  DWORD2(v96[89]) = 67108868;
  DWORD2(v96[90]) = 4;
  *(_QWORD *)&v96[91] = 0LL;
  DWORD2(v96[91]) = 288;
  LODWORD(v96[93]) = 67108868;
  LODWORD(v96[94]) = 4;
  *((_QWORD *)&v96[94] + 1) = 0LL;
  LODWORD(v96[95]) = 288;
  DWORD2(v96[96]) = 67108868;
  DWORD2(v96[97]) = 4;
  *(_QWORD *)&v96[98] = 0LL;
  DWORD2(v96[98]) = 288;
  LODWORD(v96[100]) = 67108868;
  LODWORD(v96[101]) = 4;
  *((_QWORD *)&v96[101] + 1) = 0LL;
  LODWORD(v96[102]) = 288;
  DWORD2(v96[103]) = 67108868;
  DWORD2(v96[104]) = 4;
  *(_QWORD *)&v96[105] = 0LL;
  DWORD2(v96[105]) = 288;
  LODWORD(v96[107]) = 67108868;
  LODWORD(v96[108]) = 4;
  memset((char *)&v96[108] + 8, 0, 0x38uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v96, 0LL, 0LL);
  v10 = dword_1C0035170;
  memset(dword_1C0035170, 0, sizeof(dword_1C0035170));
  memset(v96, 0, sizeof(v96));
  v11 = 0;
  v12 = 0LL;
  do
  {
    memset(v98, 0, sizeof(v98));
    *(_DWORD *)&Destination.Length = 0x400000;
    Destination.Buffer = (PWSTR)v98;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v97;
      if ( RtlIntegerToUnicodeString(v11, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v92 = Destination.Buffer;
        *(_QWORD *)&v91 = 0LL;
        *((_QWORD *)&v92 + 1) = &v28;
        DWORD2(v91) = 288;
        *((_QWORD *)&v93 + 1) = &v88;
        v96[1] = v92;
        v96[0] = v91;
        LODWORD(v93) = 67108868;
        LODWORD(v94) = 4;
        v96[2] = v93;
        *(_QWORD *)&v96[3] = v94;
        v88 = 0;
        v28 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v96, 0LL, 0LL);
        v17 = v28;
        *v10 = v28;
        if ( v17 )
        {
          v18 = (v17 + 4095) & 0xFFFFF000;
          if ( v18 < 0x800000 )
            v18 = 0x800000;
          *v10 = v18;
          v19 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
          *(_QWORD *)(v19 + 24) = v12;
          *(_QWORD *)(v19 + 32) = *v10;
          WdLogEvent5_WdEvent(v19);
        }
      }
    }
    ++v11;
    ++v12;
    ++v10;
  }
  while ( v11 < 0x20 );
  v20 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
  *(_QWORD *)(v20 + 24) = v25;
  WdLogEvent5_WdEvent(v20);
  v21 = v29;
  if ( v25 < 0x5A )
    v21 = v25;
  dword_1C0035160 = v21;
  v22 = v30;
  if ( v26 < 0x5A )
    v22 = v26;
  dword_1C0035164 = v22;
  v23 = 0x7FFFFFF;
  dword_1C0035168 = 0;
  if ( v27 < 0x7FFFFFF )
    v23 = v27;
  dword_1C003516C = v23;
  dword_1C0035270 = v32;
  dword_1C0035274 = v33;
  dword_1C0035278 = v34;
  dword_1C003527C = v35;
  dword_1C0035280 = v36;
  dword_1C0035284 = v37;
  qword_1C0035288 = (unsigned int)(v41 << 20);
  v24 = (v38 != 0) | (2 * (v40 & 1 | (2 * (v39 & 1))));
  dword_1C0035290 = v42;
  dword_1C0035294 = v43;
  dword_1C00352A0 = v45;
  dword_1C00352A4 = v46;
  dword_1C00352C8 = v51;
  qword_1C0035298 = (unsigned int)(10000000 * v44);
  qword_1C00352A8 = (unsigned int)(10000000 * v47);
  qword_1C00352B0 = (unsigned int)(10000000 * v48);
  qword_1C00352B8 = (unsigned int)(10000000 * v49);
  qword_1C00352C0 = (unsigned int)(10000000 * v50);
  VIDMM_GLOBAL::_Config = (((((unsigned __int8)v31 ^ VIDMM_GLOBAL::_Config) & 1 ^ VIDMM_GLOBAL::_Config) & 0xF1 | (unsigned __int8)(2 * v24)) ^ (unsigned __int8)(16 * (v52 != 0))) & 0x10 ^ (((v31 ^ VIDMM_GLOBAL::_Config) & 1 ^ VIDMM_GLOBAL::_Config) & 0xFFFFFFF1 | (2 * v24));
  dword_1C0035134 = v53 != 0;
  qword_1C0035140 = (unsigned __int64)v54 << 20;
  LOBYTE(v1) = v55 != 0;
  qword_1C00352F8 = (unsigned int)(v56 << 10);
  dword_1C0035138 = v1;
  qword_1C0035308 = (unsigned int)(10000 * v58);
  dword_1C0035300 = v57;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadHeapConfiguration();
  VIDMM_GLOBAL::ReadPowerConfiguration();
  VIDMM_GLOBAL::ReadGpuVaConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadTestAndStagingConfiguration();
  VIDMM_GLOBAL::ReadVPRConfiguration();
  VIDMM_GLOBAL::ReadBudgetConfiguration();
}
