/*
 * XREFs of PnpReplacePartitionUnit @ 0x1406431B8
 * Callers:
 *     IoReplacePartitionUnit @ 0x140629F3C (IoReplacePartitionUnit.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x1401D0350 (PnprQueryReplaceFeatures.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x1401D3C78 (KeFindFirstSetLeftAffinityEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnprGetMillisecondCounter @ 0x1403DBA40 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 *     MmUnloadSystemImage @ 0x1405462A8 (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x140644040 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1406441F8 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x140644578 (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x1406447BC (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140644C18 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x140644C64 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x140644DE4 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x140644E10 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x140644F3C (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x140645008 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x1406453E4 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x1406454EC (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x140645690 (PnprUnlockPagesForReplace.c)
 */

LONG __fastcall PnpReplacePartitionUnit(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  PVOID PoolWithTag; // rax
  SIZE_T v9; // rbx
  int PluginDriver; // esi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _WORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // eax
  int v51; // eax
  SIZE_T v52; // rcx
  int v53; // eax
  int v54; // edx
  int v55; // eax
  SIZE_T v56; // rdx
  int v57; // ecx
  int v58; // ecx
  SIZE_T v59; // rcx
  int v60; // eax
  int v61; // eax
  char v62; // r15
  int ReplaceFeatures; // eax
  __int64 v64; // rcx
  int v65; // eax
  int v66; // edx
  int v67; // edx
  SIZE_T v68; // rcx
  int v69; // eax
  int v70; // eax
  SIZE_T v71; // rcx
  int v72; // eax
  int v73; // eax
  __int64 v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  __int64 v78; // r8
  int v79; // eax
  unsigned int v80; // ecx
  ULONG_PTR v81; // r14
  void (*v82)(void); // rax
  __int64 v83; // r14
  void *v84; // rcx
  void *v85; // rcx
  void *v86; // rcx
  void *v87; // rcx
  ULONG v89; // [rsp+30h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v92; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v93[21]; // [rsp+68h] [rbp-98h] BYREF
  char v94[64]; // [rsp+110h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v89 = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v4 = a1[1];
    if ( !v4 || (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL)) == 0 || (*(_DWORD *)(v5 + 396) & 0x20000) != 0 )
    {
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(v4, *(unsigned __int16 *)(v4 + 2));
        v30 = *(_QWORD *)(a1[1] + 8LL);
        if ( v30 )
        {
          IoAddTriageDumpDataBlock(v30, *(__int16 *)(v30 + 2));
          v31 = (_WORD *)(*(_QWORD *)(a1[1] + 8LL) + 56LL);
          if ( *v31 )
          {
            IoAddTriageDumpDataBlock((int)v31, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
          }
        }
        v32 = a1[1];
        if ( v32 )
          v33 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
        else
          v33 = 0LL;
        if ( v33 )
        {
          if ( v32 )
            v34 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
          else
            v34 = 0LL;
          if ( v32 )
            v35 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
          else
            LODWORD(v35) = 0;
          IoAddTriageDumpDataBlock(v35, 720);
          if ( *(_WORD *)(v34 + 40) )
          {
            IoAddTriageDumpDataBlock(v34 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v34 + 48), *(unsigned __int16 *)(v34 + 40));
          }
          v36 = a1[1];
          if ( v36 )
            v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
          else
            v37 = 0LL;
          if ( *(_WORD *)(v37 + 56) )
          {
            if ( v36 )
              v38 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
            else
              LODWORD(v38) = 0;
            IoAddTriageDumpDataBlock(v38 + 56, 2);
            v39 = a1[1];
            if ( v39 )
              v40 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
            else
              v40 = 0LL;
            if ( v39 )
              v41 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
            else
              v41 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v41 + 64), *(unsigned __int16 *)(v40 + 56));
          }
          v42 = a1[1];
          if ( v42 )
            v43 = *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL);
          else
            v43 = 0LL;
          if ( *(_QWORD *)(v43 + 16) )
          {
            v44 = v42 ? *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v44 + 16) + 56LL) )
            {
              if ( v42 )
                v45 = *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL);
              else
                v45 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v45 + 16) + 56, 2);
              v46 = a1[1];
              if ( v46 )
                v47 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
              else
                v47 = 0LL;
              if ( v46 )
                v48 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
              else
                v48 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v48 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v47 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a1[1], 0LL, 0LL);
    }
    v6 = *a1;
    if ( *a1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v7 && (*(_DWORD *)(v7 + 396) & 0x20000) == 0 )
      {
        PnprLogStartEvent(*a1, a1[1]);
        goto LABEL_9;
      }
      IoAddTriageDumpDataBlock(*a1, *(unsigned __int16 *)(v6 + 2));
      v11 = *(_QWORD *)(*a1 + 8LL);
      if ( v11 )
      {
        IoAddTriageDumpDataBlock(v11, *(__int16 *)(v11 + 2));
        v12 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((int)v12, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
        }
      }
      v13 = *a1;
      if ( *a1 )
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
      else
        v14 = 0LL;
      if ( v14 )
      {
        if ( v13 )
          v15 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        else
          v15 = 0LL;
        if ( v13 )
          v16 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        else
          LODWORD(v16) = 0;
        IoAddTriageDumpDataBlock(v16, 720);
        if ( *(_WORD *)(v15 + 40) )
        {
          IoAddTriageDumpDataBlock(v15 + 40, 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 48), *(unsigned __int16 *)(v15 + 40));
        }
        v17 = *a1;
        if ( *a1 )
          v18 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
        else
          v18 = 0LL;
        if ( *(_WORD *)(v18 + 56) )
        {
          if ( v17 )
            v19 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
          else
            LODWORD(v19) = 0;
          IoAddTriageDumpDataBlock(v19 + 56, 2);
          v20 = *a1;
          if ( *a1 )
            v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
          else
            v21 = 0LL;
          if ( v20 )
            v22 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
          else
            v22 = 0LL;
          IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), *(unsigned __int16 *)(v21 + 56));
        }
        v23 = *a1;
        if ( *a1 )
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
        else
          v24 = 0LL;
        if ( *(_QWORD *)(v24 + 16) )
        {
          v25 = v23 ? *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v25 + 16) + 56LL) )
          {
            if ( v23 )
              v26 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
            else
              v26 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v26 + 16) + 56, 2);
            v27 = *a1;
            if ( *a1 )
              v28 = *(_QWORD *)(*(_QWORD *)(v27 + 312) + 40LL);
            else
              v28 = 0LL;
            if ( v27 )
              v29 = *(_QWORD *)(*(_QWORD *)(v27 + 312) + 40LL);
            else
              v29 = 0LL;
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v29 + 16) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(v28 + 16) + 56LL));
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *a1, 0LL, 0LL);
  }
LABEL_9:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A38uLL, 0x51706E50u);
  v9 = (SIZE_T)PoolWithTag;
  if ( !PoolWithTag )
  {
    PluginDriver = -1073741670;
    goto LABEL_189;
  }
  memset(PoolWithTag, 0, 0x2A38uLL);
  v49 = KeDynamicPartitioningSupported == 0;
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 32) = a1[1];
  *(_DWORD *)(v9 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(v9 + 160) = v9 + 152;
  *(_QWORD *)(v9 + 152) = v9 + 152;
  PnprContext = v9;
  if ( v49 && *((int *)a1 + 4) >= 0 )
  {
    v50 = *(_DWORD *)(v9 + 10744);
    if ( !v50 )
      v50 = 174;
    *(_DWORD *)(v9 + 10744) = v50;
    v51 = *(_DWORD *)(v9 + 10748);
    if ( !v51 )
      v51 = 2;
    *(_DWORD *)(v9 + 10748) = v51;
LABEL_115:
    PluginDriver = -1073741637;
    goto LABEL_189;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v52 = PnprContext;
    PluginDriver = -1073741621;
    v53 = *(_DWORD *)(PnprContext + 10744);
    if ( !v53 )
      v53 = 186;
    v54 = 7;
LABEL_120:
    *(_DWORD *)(v52 + 10744) = v53;
    v55 = *(_DWORD *)(v52 + 10748);
    if ( !v55 )
      v55 = v54;
    *(_DWORD *)(v52 + 10748) = v55;
    goto LABEL_189;
  }
  PnprGetMillisecondCounter(1);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v94);
    PnprWakeDevices((__int64)v94);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_189;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v9, *(PDEVICE_OBJECT *)(v9 + 32));
  if ( PluginDriver < 0 )
  {
    v56 = PnprContext;
    v57 = *(_DWORD *)(PnprContext + 10744);
    if ( !v57 )
      v57 = 223;
    *(_DWORD *)(PnprContext + 10744) = v57;
    v58 = *(_DWORD *)(v56 + 10748);
    if ( !v58 )
      v58 = 3;
    *(_DWORD *)(v56 + 10748) = v58;
    goto LABEL_189;
  }
  PluginDriver = PnprCollectResources(v9, v9 + 32);
  if ( PluginDriver < 0 )
  {
    v59 = PnprContext;
    v60 = *(_DWORD *)(PnprContext + 10744);
    if ( !v60 )
      v60 = 236;
    *(_DWORD *)(PnprContext + 10744) = v60;
    v61 = *(_DWORD *)(v59 + 10748);
    if ( !v61 )
      v61 = 1;
    goto LABEL_136;
  }
  v62 = 0;
  PluginDriver = PnprLoadPluginDriver(v9 + 10624, v9 + 10648);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v9 + 10648, (PDEVICE_OBJECT *)(v9 + 32));
    *(_DWORD *)(v9 + 64) |= ReplaceFeatures;
    v62 = ReplaceFeatures;
    goto LABEL_139;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL) )
  {
LABEL_139:
    v64 = *(_QWORD *)(v9 + 24);
    if ( *(_DWORD *)(v64 + 4) )
    {
      v65 = *(_DWORD *)(v9 + 10656);
      if ( (v65 & 1) == 0 || !*(_QWORD *)(v9 + 10688) )
      {
        v66 = 277;
        goto LABEL_165;
      }
      if ( (v65 & 2) != 0 && !*(_QWORD *)(v9 + 10696) )
      {
        v66 = 285;
LABEL_165:
        v71 = PnprContext;
        v3 = v89;
        v72 = *(_DWORD *)(PnprContext + 10744);
        if ( !v72 )
          v72 = v66;
        *(_DWORD *)(PnprContext + 10744) = v72;
        v73 = *(_DWORD *)(v71 + 10748);
        if ( !v73 )
          v73 = 9;
        *(_DWORD *)(v71 + 10748) = v73;
        goto LABEL_115;
      }
      PluginDriver = PnprMmConstruct(v64, v9 + 152);
      if ( PluginDriver < 0 )
      {
        v67 = 297;
        goto LABEL_147;
      }
      if ( (v62 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v9 + 10728) || (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
      {
        v66 = 321;
        goto LABEL_165;
      }
      v3 = v89;
      PluginDriver = PnprAllocateMappingReserves(v9 + 136, v9 + 144, v89);
      if ( PluginDriver < 0 )
      {
        v52 = PnprContext;
        v53 = *(_DWORD *)(PnprContext + 10744);
        if ( !v53 )
          v53 = 336;
        v54 = 10;
        goto LABEL_120;
      }
      *(_QWORD *)(v9 + 168) = 0LL;
    }
    else
    {
      v3 = v89;
    }
    if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 && !*(_QWORD *)(v9 + 10736) )
    {
      v52 = PnprContext;
      PluginDriver = -1073741637;
      v53 = *(_DWORD *)(PnprContext + 10744);
      if ( !v53 )
        v53 = 356;
      v54 = 9;
      goto LABEL_120;
    }
    *(_DWORD *)(v9 + 176) = v3;
    KeCopyAffinityEx((__int64)&v92, (unsigned __int16 *)KeActiveProcessors);
    v74 = *(_QWORD *)(v9 + 16);
    v75 = *(_DWORD *)(v74 + 8);
    if ( v75 )
    {
      v76 = *(_QWORD *)v74 - (_QWORD)v93;
      v77 = v93;
      v78 = v75;
      do
      {
        *v77 &= ~*(_QWORD *)((char *)v77 + v76);
        ++v77;
        --v78;
      }
      while ( v78 );
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v92) )
    {
      if ( ((v93[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
        *(_DWORD *)(v9 + 180) = 0;
      else
        *(_DWORD *)(v9 + 180) = KeFindFirstSetLeftAffinityEx(&v92);
      v80 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v9 + 180)];
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v80 >> 6);
      Affinity.Mask = 1LL << (v80 & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      PluginDriver = PnprInitiateReplaceOperation();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      goto LABEL_189;
    }
    v59 = PnprContext;
    PluginDriver = -1073741621;
    v79 = *(_DWORD *)(PnprContext + 10744);
    if ( !v79 )
      v79 = 383;
    *(_DWORD *)(PnprContext + 10744) = v79;
    v61 = *(_DWORD *)(v59 + 10748);
    if ( !v61 )
      v61 = 6;
LABEL_136:
    *(_DWORD *)(v59 + 10748) = v61;
    goto LABEL_189;
  }
  v67 = 262;
LABEL_147:
  v68 = PnprContext;
  v3 = v89;
  v69 = *(_DWORD *)(PnprContext + 10744);
  if ( !v69 )
    v69 = v67;
  *(_DWORD *)(PnprContext + 10744) = v69;
  v70 = *(_DWORD *)(v68 + 10748);
  if ( !v70 )
    v70 = 1;
  *(_DWORD *)(v68 + 10748) = v70;
LABEL_189:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v9 + 10800) = PnprGetMillisecondCounter(0);
      PnprLogSuccessEvent();
    }
  }
  if ( v9 )
  {
    v81 = *(_QWORD *)(v9 + 10624);
    if ( v81 )
    {
      v82 = *(void (**)(void))(v9 + 10664);
      if ( v82 )
        v82();
      MmUnloadSystemImage(v81);
    }
    if ( *(_QWORD *)(v9 + 136) && *(_QWORD *)(v9 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v83 = 0LL;
        do
        {
          PnprFreeMappingReserve(v83 + *(_QWORD *)(v9 + 136));
          PnprFreeMappingReserve(v83 + *(_QWORD *)(v9 + 144));
          v83 += 24LL;
          --v3;
        }
        while ( v3 );
      }
      ExFreePoolWithTag(*(PVOID *)(v9 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v9 + 144), 0x51706E50u);
    }
    PnprMmFree(v9 + 152);
    v84 = *(void **)(v9 + 16);
    if ( v84 )
    {
      ExFreePoolWithTag(v84, 0x51706E50u);
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    v85 = *(void **)(v9 + 24);
    if ( v85 )
    {
      ExFreePoolWithTag(v85, 0x51706E50u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v86 = *(void **)(v9 + 48);
    if ( v86 )
    {
      ExFreePoolWithTag(v86, 0x51706E50u);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    v87 = *(void **)(v9 + 56);
    if ( v87 )
    {
      ExFreePoolWithTag(v87, 0x51706E50u);
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
