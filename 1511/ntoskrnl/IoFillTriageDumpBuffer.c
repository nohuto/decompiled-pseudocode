/*
 * XREFs of IoFillTriageDumpBuffer @ 0x1401B7B00
 * Callers:
 *     IoWriteCrashDump @ 0x1401B87D0 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401B9FF8 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x1405F256C (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401B8298 (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401B9170 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1401B95C4 (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401B96FC (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x1401B9C2C (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x1401BA1CC (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1401C1C50 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x1401D68AC (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x1401D69BC (MmWriteUnloadedDriverInformation.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        __int16 a4,
        int *a5,
        __int64 a6,
        __int64 a7,
        int LoadedDriverInfo,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v13; // edi
  char v15; // r12
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r15
  unsigned __int64 v22; // rcx
  int v23; // r14d
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  unsigned __int64 v31; // rax
  unsigned int v32; // r10d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v36; // edx
  char *v37; // rcx
  int v38; // edx
  unsigned int v39; // ecx
  __int64 v40; // rdx
  size_t v41; // r8
  unsigned int v42; // r12d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r9
  _OWORD *v46; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v48; // rdx
  __int128 v49; // xmm1
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _OWORD *v53; // rax
  _OWORD *v54; // rcx
  __int128 v55; // xmm1
  __int64 v56; // rax
  _OWORD *v57; // rax
  __int128 v58; // xmm1
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // edi
  __int64 v62; // rax
  int v63[18]; // [rsp+30h] [rbp-48h] BYREF
  int v64; // [rsp+80h] [rbp+8h] BYREF
  char v65; // [rsp+90h] [rbp+18h]

  v65 = a3;
  v13 = CmNtCSDVersion;
  v64 = 0;
  v15 = a3;
  LoadedDriverInfo = 0;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
    return 3221225495LL;
  memset(a2, 0, 0x80uLL);
  v19 = a6;
  v20 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  v21 = a1 - 4;
  v22 = (unsigned int)v21;
  *((_DWORD *)a2 + 2) = v20 - 4;
  v23 = 130;
  *(_DWORD *)((char *)a2 + v21) = 0;
  v24 = a9;
  *(_DWORD *)a2 = v13;
  if ( v19 )
    v23 = 131;
  *((_DWORD *)a2 + 3) = 840;
  *((_DWORD *)a2 + 4) = 3840;
  *((_DWORD *)a2 + 16) = 0;
  v25 = 8320;
  *((_DWORD *)a2 + 17) = v24;
  if ( (a4 & 0x100) != 0 )
  {
    if ( (unsigned int)v21 <= 0x20D0 )
    {
      *((_DWORD *)a2 + 17) = v24 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v23 |= 0x100u;
      v25 = 8400;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    if ( v25 + 32448 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v25;
      v23 |= 4u;
      v25 += 32448;
    }
  }
  if ( (a4 & 8) != 0 )
  {
    if ( v25 + 1944 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v25;
      v23 |= 8u;
      v25 += 1944;
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    if ( v25 + 1984 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v25;
      v23 |= 0x10u;
      v25 += 1984;
    }
  }
  v26 = a7;
  if ( (a4 & 0x20) != 0 && (*(_BYTE *)(a7 + 122) & 1) != 0 )
  {
    v27 = *(_QWORD *)(v19 + 152);
    v28 = *(_QWORD *)(a7 + 48);
    v29 = *(_QWORD *)(a7 + 56);
    if ( v28 > v27 || v27 >= v29 )
    {
      v27 = *(_QWORD *)(a7 + 48);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && (_KTHREAD *)a7 != KeGetCurrentPrcb()->IdleThread )
      {
        if ( IopIsAddressRangeValid((__int64)KeGetPcr()->Prcb.DpcStack, 80LL) )
        {
          v31 = *(_QWORD *)(v30 - 16);
          if ( v28 <= v31 && v31 < v29 )
            v27 = *(_QWORD *)(v30 - 16);
        }
      }
    }
    if ( v29 - v27 >= 0x7FFF )
      v32 = 0x7FFF;
    else
      v32 = v29 - v27;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v27, v32);
    v15 = v65;
    if ( MaxValidMemorySize )
    {
      if ( MaxValidMemorySize + v25 >= (unsigned int)v21 )
      {
        *((_DWORD *)a2 + 17) |= 0x100u;
      }
      else
      {
        *((_DWORD *)a2 + 10) = v25;
        v25 = (MaxValidMemorySize + v25 + 7) & 0xFFFFFFF8;
        *((_DWORD *)a2 + 11) = MaxValidMemorySize;
        v23 |= 0x20u;
        a2[9] = v27;
      }
    }
    v22 = (unsigned int)v21;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v25 + 864 >= v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v25;
      v25 = (v25 + 871) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 864;
      v23 |= 0x400u;
    }
  }
  v34 = a2 - 1024;
  if ( !v15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v36 = v25 + ((MmUnloadedDrivers != 0LL ? 2815 : 15) & 0xFFFFFFF8);
  if ( v36 >= (unsigned int)v21 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v23 |= 0x40u;
    *((_DWORD *)a2 + 6) = v25;
    v37 = (char *)v34 + v25;
    v25 = v36;
    MmWriteUnloadedDriverInformation(v37);
  }
  if ( (a4 & 0x40) != 0 )
  {
    LOBYTE(v22) = v15;
    LoadedDriverInfo = IoGetLoadedDriverInfo(v22, &v64, v63);
    if ( LoadedDriverInfo >= 0 )
    {
      v38 = v64;
      v39 = (144 * v64 + 7) & 0xFFFFFFF8;
      if ( v39 )
      {
        if ( v39 + v25 >= (unsigned int)v21 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 12) = v25;
          v23 |= 0x40u;
          v25 += v39;
          *((_DWORD *)a2 + 13) = v38;
        }
      }
    }
  }
  else
  {
    v63[0] = 0;
  }
  v40 = (v63[0] + 6 * v64 + 7) & 0xFFFFFFF8;
  if ( ((v63[0] + 6 * v64 + 7) & 0xFFFFFFF8) != 0 )
  {
    if ( (unsigned int)v40 + v25 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v25;
      v25 = (v40 + v25 + 7) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 15) = v40;
    }
  }
  v41 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v41 )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      LOBYTE(v40) = v15;
      LoadedDriverInfo = IopWriteDriverList(a2 - 1024, v40);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v15 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v42 = a10;
  if ( (a4 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v25 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v42, a11, v25, v21) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v23 |= 0x800u;
  }
  v43 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v43 )
    MmWriteTriageInformation((char *)v34 + v43);
  v44 = *((unsigned int *)a2 + 7);
  v45 = 128LL;
  if ( (_DWORD)v44 && v44 + 32448 <= (unsigned __int64)(unsigned int)v21 )
  {
    v46 = (_OWORD *)((char *)v34 + (unsigned int)v44);
    CurrentPrcb = KeGetCurrentPrcb();
    v48 = 253LL;
    do
    {
      *v46 = *(_OWORD *)&CurrentPrcb->MxCsr;
      v46[1] = *(_OWORD *)&CurrentPrcb->NextThread;
      v46[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
      v46[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
      v46[4] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.Cr0;
      v46[5] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.Cr3;
      v46[6] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0;
      v46 += 8;
      v49 = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr2;
      CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 128);
      *(v46 - 1) = v49;
      --v48;
    }
    while ( v48 );
    *v46 = *(_OWORD *)&CurrentPrcb->MxCsr;
    v46[1] = *(_OWORD *)&CurrentPrcb->NextThread;
    v46[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
    v46[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
  }
  v50 = *((unsigned int *)a2 + 8);
  v51 = 15LL;
  if ( (_DWORD)v50 )
  {
    v52 = (unsigned int)v50;
    if ( v50 + 1944 <= (unsigned __int64)(unsigned int)v21 )
    {
      v53 = *(_OWORD **)(v26 + 184);
      v54 = (_OWORD *)((char *)v34 + v52);
      v41 = 15LL;
      do
      {
        *v54 = *v53;
        v54[1] = v53[1];
        v54[2] = v53[2];
        v54[3] = v53[3];
        v54[4] = v53[4];
        v54[5] = v53[5];
        v54[6] = v53[6];
        v54 += 8;
        v55 = v53[7];
        v53 += 8;
        *(v54 - 1) = v55;
        --v41;
      }
      while ( v41 );
      *v54 = *v53;
      *((_QWORD *)v54 + 2) = *((_QWORD *)v53 + 2);
    }
  }
  v56 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v56 && v56 + 1984 <= (unsigned __int64)(unsigned int)v21 )
  {
    v57 = (_OWORD *)((char *)v34 + (unsigned int)v56);
    do
    {
      *v57 = *(_OWORD *)v26;
      v57[1] = *(_OWORD *)(v26 + 16);
      v57[2] = *(_OWORD *)(v26 + 32);
      v57[3] = *(_OWORD *)(v26 + 48);
      v57[4] = *(_OWORD *)(v26 + 64);
      v57[5] = *(_OWORD *)(v26 + 80);
      v57[6] = *(_OWORD *)(v26 + 96);
      v57 += 8;
      v58 = *(_OWORD *)(v26 + 112);
      v26 += 128LL;
      *(v57 - 1) = v58;
      --v51;
    }
    while ( v51 );
    *v57 = *(_OWORD *)v26;
    v57[1] = *(_OWORD *)(v26 + 16);
    v57[2] = *(_OWORD *)(v26 + 32);
    v57[3] = *(_OWORD *)(v26 + 48);
  }
  v59 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v59 )
  {
    v41 = *((unsigned int *)a2 + 11);
    v51 = a2[9];
    if ( (int)v59 + (int)v41 <= (unsigned int)v21 )
      memmove((char *)v34 + v59, (const void *)v51, v41);
  }
  v60 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v60 && v60 + 864 <= (unsigned __int64)(unsigned int)v21 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v60, v51, v41, v45);
  if ( v42 )
    IopFillTriageDumpDataBlocks(a2, v42, a11, a2 - 1024);
  if ( (_DWORD)v21 != 253948 || a13 )
  {
    v61 = v25 + 4;
    if ( a13 )
      *a13 = v61 - 0x2000;
  }
  else
  {
    v61 = 0x40000;
  }
  if ( a5 )
    *a5 = v23;
  v62 = (unsigned int)(v61 - 4);
  *((_DWORD *)a2 + 1) = v61;
  *((_DWORD *)a2 + 2) = v62;
  if ( v62 - 0x2000 > (unsigned __int64)(unsigned int)v21 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v61 - 4) - 0x2000) = 1145524820;
  return result;
}
