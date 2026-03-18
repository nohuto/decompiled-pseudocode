/*
 * XREFs of IoFillTriageDumpBuffer @ 0x1401F2E8C
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F5200 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x14066B298 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopIsAddressRangeValid @ 0x14016F880 (IopIsAddressRangeValid.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401F3664 (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F4458 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1401F48AC (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401F49E4 (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x1401F4EA4 (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x1401F53D4 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1401FD7E8 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x140218D8C (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x140218E9C (MmWriteUnloadedDriverInformation.c)
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
  char v15; // r15
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r13
  unsigned __int64 v22; // rcx
  int v23; // r14d
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r15
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
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  unsigned int v44; // r15d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  _OWORD *v48; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v50; // rdx
  __int128 v51; // xmm1
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _OWORD *v55; // rax
  _OWORD *v56; // rcx
  __int128 v57; // xmm1
  __int64 v58; // rax
  _OWORD *v59; // rax
  __int128 v60; // xmm1
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // edi
  __int64 v64; // rax
  int v65[18]; // [rsp+30h] [rbp-48h] BYREF
  int v66; // [rsp+80h] [rbp+8h] BYREF
  char v67; // [rsp+90h] [rbp+18h]

  v67 = a3;
  v13 = CmNtCSDVersion;
  v66 = 0;
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
    if ( v25 + 1968 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v25;
      v23 |= 8u;
      v25 += 1968;
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
    v15 = v67;
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
  v36 = v25 + ((qword_140350048 != 0LL ? 2815 : 15) & 0xFFFFFFF8);
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
    LoadedDriverInfo = IoGetLoadedDriverInfo(v22, &v66, v65);
    if ( LoadedDriverInfo >= 0 )
    {
      v38 = v66;
      v39 = (144 * v66 + 7) & 0xFFFFFFF8;
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
    v65[0] = 0;
  }
  v40 = (v65[0] + 6 * v66 + 7) & 0xFFFFFFF8;
  if ( ((v65[0] + 6 * v66 + 7) & 0xFFFFFFF8) != 0 )
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
    v42 = KeGetCurrentThread();
    v43 = v42->KernelApcDisable + 1;
    v42->KernelApcDisable = v43;
    if ( !v43
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
      && !v42->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v44 = a10;
  if ( (a4 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v25 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v44, a11, v25, v21) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v23 |= 0x800u;
  }
  v45 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v45 )
    MmWriteTriageInformation((char *)v34 + v45);
  v46 = *((unsigned int *)a2 + 7);
  v47 = 128LL;
  if ( (_DWORD)v46 && v46 + 32448 <= (unsigned __int64)(unsigned int)v21 )
  {
    v48 = (_OWORD *)((char *)v34 + (unsigned int)v46);
    CurrentPrcb = KeGetCurrentPrcb();
    v50 = 253LL;
    do
    {
      *v48 = *(_OWORD *)&CurrentPrcb->MxCsr;
      v48[1] = *(_OWORD *)&CurrentPrcb->NextThread;
      v48[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
      v48[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
      v48[4] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.Cr0;
      v48[5] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.Cr3;
      v48[6] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0;
      v48 += 8;
      v51 = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr2;
      CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 128);
      *(v48 - 1) = v51;
      --v50;
    }
    while ( v50 );
    *v48 = *(_OWORD *)&CurrentPrcb->MxCsr;
    v48[1] = *(_OWORD *)&CurrentPrcb->NextThread;
    v48[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
    v48[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
  }
  v52 = *((unsigned int *)a2 + 8);
  v53 = 15LL;
  if ( (_DWORD)v52 )
  {
    v54 = (unsigned int)v52;
    if ( v52 + 1968 <= (unsigned __int64)(unsigned int)v21 )
    {
      v55 = *(_OWORD **)(v26 + 184);
      v56 = (_OWORD *)((char *)v34 + v54);
      v41 = 15LL;
      do
      {
        *v56 = *v55;
        v56[1] = v55[1];
        v56[2] = v55[2];
        v56[3] = v55[3];
        v56[4] = v55[4];
        v56[5] = v55[5];
        v56[6] = v55[6];
        v56 += 8;
        v57 = v55[7];
        v55 += 8;
        *(v56 - 1) = v57;
        --v41;
      }
      while ( v41 );
      *v56 = *v55;
      v56[1] = v55[1];
      v56[2] = v55[2];
    }
  }
  v58 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v58 && v58 + 1984 <= (unsigned __int64)(unsigned int)v21 )
  {
    v59 = (_OWORD *)((char *)v34 + (unsigned int)v58);
    do
    {
      *v59 = *(_OWORD *)v26;
      v59[1] = *(_OWORD *)(v26 + 16);
      v59[2] = *(_OWORD *)(v26 + 32);
      v59[3] = *(_OWORD *)(v26 + 48);
      v59[4] = *(_OWORD *)(v26 + 64);
      v59[5] = *(_OWORD *)(v26 + 80);
      v59[6] = *(_OWORD *)(v26 + 96);
      v59 += 8;
      v60 = *(_OWORD *)(v26 + 112);
      v26 += 128LL;
      *(v59 - 1) = v60;
      --v53;
    }
    while ( v53 );
    *v59 = *(_OWORD *)v26;
    v59[1] = *(_OWORD *)(v26 + 16);
    v59[2] = *(_OWORD *)(v26 + 32);
    v59[3] = *(_OWORD *)(v26 + 48);
  }
  v61 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v61 )
  {
    v41 = *((unsigned int *)a2 + 11);
    v53 = a2[9];
    if ( (int)v61 + (int)v41 <= (unsigned int)v21 )
      memmove((char *)v34 + v61, (const void *)v53, v41);
  }
  v62 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v62 && v62 + 864 <= (unsigned __int64)(unsigned int)v21 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v62, v53, v41, v47);
  if ( v44 )
    IopFillTriageDumpDataBlocks(a2, v44, a11, a2 - 1024);
  if ( (_DWORD)v21 != 253948 || a13 )
  {
    v63 = v25 + 4;
    if ( a13 )
      *a13 = v63 - 0x2000;
  }
  else
  {
    v63 = 0x40000;
  }
  if ( a5 )
    *a5 = v23;
  v64 = (unsigned int)(v63 - 4);
  *((_DWORD *)a2 + 1) = v63;
  *((_DWORD *)a2 + 2) = v64;
  if ( v64 - 0x2000 > (unsigned __int64)(unsigned int)v21 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v63 - 4) - 0x2000) = 1145524820;
  return result;
}
