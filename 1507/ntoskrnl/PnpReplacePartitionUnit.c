/*
 * XREFs of PnpReplacePartitionUnit @ 0x14068E9D4
 * Callers:
 *     IoReplacePartitionUnit @ 0x14067AA18 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x1401FCB98 (PnprQueryReplaceFeatures.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnprGetMillisecondCounter @ 0x1403FFF10 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x14068F8C4 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14068FA7C (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x14068FDFC (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x140690040 (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x14069049C (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1406904E8 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x140690668 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x140690694 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x1406907C0 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x14069088C (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x140690C68 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x140690D70 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x140690F14 (PnprUnlockPagesForReplace.c)
 */

LONG __fastcall PnpReplacePartitionUnit(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  PVOID PoolWithTag; // rax
  SIZE_T v8; // rbx
  int PluginDriver; // esi
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _WORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // zf
  int v49; // eax
  int v50; // eax
  SIZE_T v51; // rcx
  int v52; // eax
  int v53; // edx
  SIZE_T v54; // rdx
  int v55; // ecx
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  char v59; // r15
  int ReplaceFeatures; // eax
  __int64 v61; // rcx
  int v62; // eax
  int v63; // edx
  int v64; // edx
  int v65; // eax
  unsigned __int16 v66; // r8
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  __int64 v71; // r8
  unsigned __int16 v72; // cx
  __int16 v73; // r8
  unsigned __int64 v74; // rcx
  unsigned int v75; // ecx
  ULONG_PTR v76; // r14
  void (*v77)(void); // rax
  __int64 v78; // r14
  void *v79; // rcx
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  unsigned int v84; // [rsp+30h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  int v87; // [rsp+60h] [rbp-A0h]
  int v88; // [rsp+64h] [rbp-9Ch]
  _QWORD v89[21]; // [rsp+68h] [rbp-98h] BYREF
  char v90[64]; // [rsp+110h] [rbp+10h] BYREF

  v1 = (unsigned int)KeNumberProcessors_0;
  v84 = KeNumberProcessors_0;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v3 = a1[1];
    if ( !v3 || (v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL)) == 0 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
    {
      if ( v3 )
      {
        IoAddTriageDumpDataBlock(v3, *(unsigned __int16 *)(v3 + 2));
        v29 = *(_QWORD *)(a1[1] + 8LL);
        if ( v29 )
        {
          IoAddTriageDumpDataBlock(v29, *(__int16 *)(v29 + 2));
          v30 = (_WORD *)(*(_QWORD *)(a1[1] + 8LL) + 56LL);
          if ( *v30 )
          {
            IoAddTriageDumpDataBlock((int)v30, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
          }
        }
        v31 = a1[1];
        if ( v31 )
          v32 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
        else
          v32 = 0LL;
        if ( v32 )
        {
          if ( v31 )
            v33 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
          else
            v33 = 0LL;
          if ( v31 )
            v34 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
          else
            LODWORD(v34) = 0;
          IoAddTriageDumpDataBlock(v34, 712);
          if ( *(_WORD *)(v33 + 40) )
          {
            IoAddTriageDumpDataBlock(v33 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v33 + 48), *(unsigned __int16 *)(v33 + 40));
          }
          v35 = a1[1];
          if ( v35 )
            v36 = *(_QWORD *)(*(_QWORD *)(v35 + 312) + 40LL);
          else
            v36 = 0LL;
          if ( *(_WORD *)(v36 + 56) )
          {
            if ( v35 )
              v37 = *(_QWORD *)(*(_QWORD *)(v35 + 312) + 40LL);
            else
              LODWORD(v37) = 0;
            IoAddTriageDumpDataBlock(v37 + 56, 2);
            v38 = a1[1];
            if ( v38 )
              v39 = *(_QWORD *)(*(_QWORD *)(v38 + 312) + 40LL);
            else
              v39 = 0LL;
            if ( v38 )
              v40 = *(_QWORD *)(*(_QWORD *)(v38 + 312) + 40LL);
            else
              v40 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v40 + 64), *(unsigned __int16 *)(v39 + 56));
          }
          v41 = a1[1];
          if ( v41 )
            v42 = *(_QWORD *)(*(_QWORD *)(v41 + 312) + 40LL);
          else
            v42 = 0LL;
          if ( *(_QWORD *)(v42 + 16) )
          {
            v43 = v41 ? *(_QWORD *)(*(_QWORD *)(v41 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v43 + 16) + 56LL) )
            {
              if ( v41 )
                v44 = *(_QWORD *)(*(_QWORD *)(v41 + 312) + 40LL);
              else
                v44 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v44 + 16) + 56, 2);
              v45 = a1[1];
              if ( v45 )
                v46 = *(_QWORD *)(*(_QWORD *)(v45 + 312) + 40LL);
              else
                v46 = 0LL;
              if ( v45 )
                v47 = *(_QWORD *)(*(_QWORD *)(v45 + 312) + 40LL);
              else
                v47 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v47 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v46 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a1[1], 0LL, 0LL);
    }
    v5 = *a1;
    if ( *a1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v6 && (*(_DWORD *)(v6 + 396) & 0x20000) == 0 )
      {
        PnprLogStartEvent(*a1, a1[1]);
        goto LABEL_9;
      }
      IoAddTriageDumpDataBlock(*a1, *(unsigned __int16 *)(v5 + 2));
      v10 = *(_QWORD *)(*a1 + 8LL);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, *(__int16 *)(v10 + 2));
        v11 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((int)v11, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
        }
      }
      v12 = *a1;
      if ( *a1 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      if ( v13 )
      {
        if ( v12 )
          v14 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
        else
          v14 = 0LL;
        if ( v12 )
          v15 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
        else
          LODWORD(v15) = 0;
        IoAddTriageDumpDataBlock(v15, 712);
        if ( *(_WORD *)(v14 + 40) )
        {
          IoAddTriageDumpDataBlock(v14 + 40, 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 48), *(unsigned __int16 *)(v14 + 40));
        }
        v16 = *a1;
        if ( *a1 )
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
        else
          v17 = 0LL;
        if ( *(_WORD *)(v17 + 56) )
        {
          if ( v16 )
            v18 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
          else
            LODWORD(v18) = 0;
          IoAddTriageDumpDataBlock(v18 + 56, 2);
          v19 = *a1;
          if ( *a1 )
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v20 = 0LL;
          if ( v19 )
            v21 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v21 = 0LL;
          IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 64), *(unsigned __int16 *)(v20 + 56));
        }
        v22 = *a1;
        if ( *a1 )
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
        else
          v23 = 0LL;
        if ( *(_QWORD *)(v23 + 16) )
        {
          v24 = v22 ? *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v24 + 16) + 56LL) )
          {
            if ( v22 )
              v25 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
            else
              v25 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v25 + 16) + 56, 2);
            v26 = *a1;
            if ( *a1 )
              v27 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
            else
              v27 = 0LL;
            if ( v26 )
              v28 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
            else
              v28 = 0LL;
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v28 + 16) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(v27 + 16) + 56LL));
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *a1, 0LL, 0LL);
  }
LABEL_9:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A38uLL, 0x51706E50u);
  v8 = (SIZE_T)PoolWithTag;
  if ( !PoolWithTag )
  {
    PluginDriver = -1073741670;
    goto LABEL_185;
  }
  memset(PoolWithTag, 0, 0x2A38uLL);
  v48 = KeDynamicPartitioningSupported == 0;
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 32) = a1[1];
  *(_DWORD *)(v8 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(v8 + 160) = v8 + 152;
  *(_QWORD *)(v8 + 152) = v8 + 152;
  PnprContext = v8;
  if ( v48 && *((int *)a1 + 4) >= 0 )
  {
    v49 = *(_DWORD *)(v8 + 10744);
    PluginDriver = -1073741637;
    if ( !v49 )
      v49 = 174;
    *(_DWORD *)(v8 + 10744) = v49;
    v50 = *(_DWORD *)(v8 + 10748);
    if ( !v50 )
      v50 = 2;
    *(_DWORD *)(v8 + 10748) = v50;
    goto LABEL_185;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v51 = PnprContext;
    v52 = *(_DWORD *)(PnprContext + 10744);
    if ( !v52 )
      v52 = 186;
    v53 = 7;
LABEL_181:
    PluginDriver = -1073741621;
LABEL_182:
    *(_DWORD *)(v51 + 10744) = v52;
    v58 = *(_DWORD *)(v51 + 10748);
    if ( !v58 )
      v58 = v53;
LABEL_184:
    *(_DWORD *)(v51 + 10748) = v58;
    goto LABEL_185;
  }
  PnprGetMillisecondCounter(1);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v90);
    PnprWakeDevices((__int64)v90);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_185;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v8, *(PDEVICE_OBJECT *)(v8 + 32));
  if ( PluginDriver < 0 )
  {
    v54 = PnprContext;
    v55 = *(_DWORD *)(PnprContext + 10744);
    if ( !v55 )
      v55 = 223;
    *(_DWORD *)(PnprContext + 10744) = v55;
    v56 = *(_DWORD *)(v54 + 10748);
    if ( !v56 )
      v56 = 3;
    *(_DWORD *)(v54 + 10748) = v56;
    goto LABEL_185;
  }
  PluginDriver = PnprCollectResources(v8, v8 + 32);
  if ( PluginDriver < 0 )
  {
    v51 = PnprContext;
    v57 = *(_DWORD *)(PnprContext + 10744);
    if ( !v57 )
      v57 = 236;
    *(_DWORD *)(PnprContext + 10744) = v57;
    v58 = *(_DWORD *)(v51 + 10748);
    if ( !v58 )
      v58 = 1;
    goto LABEL_184;
  }
  v59 = 0;
  PluginDriver = PnprLoadPluginDriver(v8 + 10624, v8 + 10648);
  if ( PluginDriver < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 24) + 4LL) )
    {
      v64 = 262;
LABEL_147:
      v51 = PnprContext;
      v1 = v84;
      v65 = *(_DWORD *)(PnprContext + 10744);
      if ( !v65 )
        v65 = v64;
      *(_DWORD *)(PnprContext + 10744) = v65;
      v58 = *(_DWORD *)(v51 + 10748);
      if ( !v58 )
        v58 = 1;
      goto LABEL_184;
    }
  }
  else
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v8 + 10648, (PDEVICE_OBJECT *)(v8 + 32));
    *(_DWORD *)(v8 + 64) |= ReplaceFeatures;
    v59 = ReplaceFeatures;
  }
  v61 = *(_QWORD *)(v8 + 24);
  if ( *(_DWORD *)(v61 + 4) )
  {
    v62 = *(_DWORD *)(v8 + 10656);
    if ( (v62 & 1) == 0 || !*(_QWORD *)(v8 + 10688) )
    {
      v63 = 277;
      goto LABEL_141;
    }
    if ( (v62 & 2) != 0 && !*(_QWORD *)(v8 + 10696) )
    {
      v63 = 285;
LABEL_141:
      v1 = v84;
LABEL_142:
      v51 = PnprContext;
      PluginDriver = -1073741637;
      v52 = *(_DWORD *)(PnprContext + 10744);
      if ( !v52 )
        v52 = v63;
      v53 = 9;
      goto LABEL_182;
    }
    PluginDriver = PnprMmConstruct(v61, v8 + 152);
    if ( PluginDriver < 0 )
    {
      v64 = 297;
      goto LABEL_147;
    }
    if ( (v59 & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v8 + 56) + 4LL) = 0;
    }
    else if ( !*(_QWORD *)(v8 + 10728) || (*(_DWORD *)(v8 + 64) & 0x20) != 0 )
    {
      v63 = 321;
      goto LABEL_141;
    }
    v1 = v84;
    PluginDriver = PnprAllocateMappingReserves(v8 + 136, v8 + 144, v84);
    if ( PluginDriver < 0 )
    {
      v51 = PnprContext;
      v52 = *(_DWORD *)(PnprContext + 10744);
      if ( !v52 )
        v52 = 336;
      v53 = 10;
      goto LABEL_182;
    }
    *(_QWORD *)(v8 + 168) = 0LL;
  }
  else
  {
    v1 = v84;
  }
  if ( (*(_DWORD *)(v8 + 64) & 0x20) != 0 && !*(_QWORD *)(v8 + 10736) )
  {
    v63 = 356;
    goto LABEL_142;
  }
  *(_DWORD *)(v8 + 176) = v1;
  v66 = KeActiveProcessors[0];
  v87 = KeActiveProcessors[0];
  v88 = 0;
  if ( LOWORD(KeActiveProcessors[0]) )
  {
    memmove(v89, qword_1403D15E8, 8LL * LOWORD(KeActiveProcessors[0]));
    v66 = v87;
  }
  v67 = *(_QWORD *)(v8 + 16);
  v68 = *(_DWORD *)(v67 + 8);
  if ( v68 )
  {
    v69 = *(_QWORD *)v67 - (_QWORD)v89;
    v70 = v89;
    v71 = v68;
    do
    {
      *v70 &= ~*(_QWORD *)((char *)v70 + v69);
      ++v70;
      --v71;
    }
    while ( v71 );
    v66 = v87;
  }
  v72 = 0;
  if ( !v66 )
  {
LABEL_178:
    v51 = PnprContext;
    v52 = *(_DWORD *)(PnprContext + 10744);
    if ( !v52 )
      v52 = 383;
    v53 = 6;
    goto LABEL_181;
  }
  while ( !v89[v72] )
  {
    if ( ++v72 >= v66 )
      goto LABEL_178;
  }
  if ( ((v89[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
  {
    *(_DWORD *)(v8 + 180) = 0;
  }
  else
  {
    v73 = v66 - 1;
    if ( v73 < 0 )
    {
LABEL_193:
      LODWORD(v74) = -1;
    }
    else
    {
      while ( 1 )
      {
        v74 = v89[v73];
        if ( v74 )
          break;
        if ( --v73 < 0 )
          goto LABEL_193;
      }
      _BitScanReverse64(&v74, v74);
      LODWORD(v74) = KiProcessorNumberToIndexMappingTable[(unsigned int)(v74 + (v73 << 6))];
    }
    *(_DWORD *)(v8 + 180) = v74;
  }
  v75 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8 + 180)];
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v75 >> 6);
  Affinity.Mask = 1LL << (v75 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  PluginDriver = PnprInitiateReplaceOperation();
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_185:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v8 + 10800) = PnprGetMillisecondCounter(0);
      PnprLogSuccessEvent();
    }
  }
  if ( v8 )
  {
    v76 = *(_QWORD *)(v8 + 10624);
    if ( v76 )
    {
      v77 = *(void (**)(void))(v8 + 10664);
      if ( v77 )
        v77();
      MmUnloadSystemImage(v76);
    }
    if ( *(_QWORD *)(v8 + 136) && *(_QWORD *)(v8 + 144) )
    {
      if ( (_DWORD)v1 )
      {
        v78 = 0LL;
        do
        {
          PnprFreeMappingReserve(v78 + *(_QWORD *)(v8 + 136));
          PnprFreeMappingReserve(v78 + *(_QWORD *)(v8 + 144));
          v78 += 24LL;
          --v1;
        }
        while ( v1 );
      }
      ExFreePoolWithTag(*(PVOID *)(v8 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v8 + 144), 0x51706E50u);
    }
    PnprMmFree(v8 + 152);
    v79 = *(void **)(v8 + 16);
    if ( v79 )
    {
      ExFreePoolWithTag(v79, 0x51706E50u);
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    v80 = *(void **)(v8 + 24);
    if ( v80 )
    {
      ExFreePoolWithTag(v80, 0x51706E50u);
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    v81 = *(void **)(v8 + 48);
    if ( v81 )
    {
      ExFreePoolWithTag(v81, 0x51706E50u);
      *(_QWORD *)(v8 + 48) = 0LL;
    }
    v82 = *(void **)(v8 + 56);
    if ( v82 )
    {
      ExFreePoolWithTag(v82, 0x51706E50u);
      *(_QWORD *)(v8 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v8, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
