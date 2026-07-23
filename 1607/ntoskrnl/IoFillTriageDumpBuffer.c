/*
 * XREFs of IoFillTriageDumpBuffer @ 0x1401C5708
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7CC4 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x14061C880 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IopIsAddressRangeValid @ 0x14014BA20 (IopIsAddressRangeValid.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401C5EEC (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401C6DFC (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1401C724C (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401C7384 (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x1401C78F8 (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x1401C7E98 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1401D108C (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x1401E7F6C (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x1401E807C (MmWriteUnloadedDriverInformation.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        int a4,
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
  __int16 v14; // r12
  char v15; // r15
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r13
  unsigned __int64 v22; // rcx
  int v23; // r14d
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rsi
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r15
  char *DpcStack; // rax
  char *v30; // r12
  unsigned __int64 v31; // rax
  unsigned int v32; // r15d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v36; // edx
  char *v37; // rcx
  int v38; // edx
  unsigned int v39; // ecx
  __int64 v40; // rdx
  size_t v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r15d
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r9
  _OWORD *v49; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v51; // rdx
  __int128 v52; // xmm1
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _OWORD *v56; // rax
  _OWORD *v57; // rcx
  __int128 v58; // xmm1
  __int64 v59; // rax
  _OWORD *v60; // rax
  __int128 v61; // xmm1
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // edi
  __int64 v65; // rax
  int v66; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-40h]
  int v68; // [rsp+80h] [rbp+8h] BYREF
  char v69; // [rsp+90h] [rbp+18h]
  int v70; // [rsp+98h] [rbp+20h]

  v70 = a4;
  v69 = a3;
  v13 = CmNtCSDVersion;
  v68 = 0;
  v14 = a4;
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
  if ( (v14 & 0x100) != 0 )
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
  if ( (v14 & 4) != 0 )
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
  if ( (v14 & 8) != 0 )
  {
    if ( v25 + 2000 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v25;
      v23 |= 8u;
      v25 += 2000;
    }
  }
  if ( (v14 & 0x10) != 0 )
  {
    if ( v25 + 2016 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v25;
      v23 |= 0x10u;
      v25 += 2016;
    }
  }
  v26 = a7;
  if ( (v14 & 0x20) != 0 && (*(_BYTE *)(a7 + 122) & 1) != 0 )
  {
    v27 = *(_QWORD *)(v19 + 152);
    v28 = *(_QWORD *)(a7 + 56);
    v67 = *(_QWORD *)(a7 + 48);
    if ( v67 > v27 || v27 >= v28 )
    {
      v27 = *(_QWORD *)(a7 + 48);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && (_KTHREAD *)a7 != KeGetCurrentPrcb()->IdleThread )
      {
        DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
        v30 = DpcStack + 80;
        if ( IopIsAddressRangeValid((__int64)DpcStack, 80LL) )
        {
          v31 = *((_QWORD *)v30 - 2);
          v14 = v70;
          if ( v67 <= v31 && v31 < v28 )
            v27 = v31;
        }
        else
        {
          v14 = v70;
        }
      }
    }
    if ( v28 - v27 >= 0x7FFF )
      v32 = 0x7FFF;
    else
      v32 = v28 - v27;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v27, v32);
    v15 = v69;
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
  if ( (v14 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v25 + 872 >= v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v25;
      v25 = (v25 + 879) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 872;
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
  if ( (v14 & 0x40) != 0 )
  {
    LOBYTE(v22) = v15;
    LoadedDriverInfo = IoGetLoadedDriverInfo(v22, &v68, &v66);
    if ( LoadedDriverInfo >= 0 )
    {
      v38 = v68;
      v39 = (144 * v68 + 7) & 0xFFFFFFF8;
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
    v66 = 0;
  }
  v40 = (v66 + 6 * v68 + 7) & 0xFFFFFFF8;
  if ( ((v66 + 6 * v68 + 7) & 0xFFFFFFF8) != 0 )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v42, v43, v44);
  }
  v45 = a10;
  if ( (v14 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v25 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v45, a11, v25, v21) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v23 |= 0x800u;
  }
  v46 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v46 )
    MmWriteTriageInformation((char *)v34 + v46);
  v47 = *((unsigned int *)a2 + 7);
  v48 = 128LL;
  if ( (_DWORD)v47 && v47 + 32448 <= (unsigned __int64)(unsigned int)v21 )
  {
    v49 = (_OWORD *)((char *)v34 + (unsigned int)v47);
    CurrentPrcb = KeGetCurrentPrcb();
    v51 = 253LL;
    do
    {
      *v49 = *(_OWORD *)&CurrentPrcb->MxCsr;
      v49[1] = *(_OWORD *)&CurrentPrcb->NextThread;
      v49[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
      v49[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
      v49[4] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.Cr0;
      v49[5] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.Cr3;
      v49[6] = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0;
      v49 += 8;
      v52 = *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr2;
      CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 128);
      *(v49 - 1) = v52;
      --v51;
    }
    while ( v51 );
    *v49 = *(_OWORD *)&CurrentPrcb->MxCsr;
    v49[1] = *(_OWORD *)&CurrentPrcb->NextThread;
    v49[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
    v49[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
  }
  v53 = *((unsigned int *)a2 + 8);
  v54 = 15LL;
  if ( (_DWORD)v53 )
  {
    v55 = (unsigned int)v53;
    if ( v53 + 2000 <= (unsigned __int64)(unsigned int)v21 )
    {
      v56 = *(_OWORD **)(v26 + 184);
      v57 = (_OWORD *)((char *)v34 + v55);
      v41 = 15LL;
      do
      {
        *v57 = *v56;
        v57[1] = v56[1];
        v57[2] = v56[2];
        v57[3] = v56[3];
        v57[4] = v56[4];
        v57[5] = v56[5];
        v57[6] = v56[6];
        v57 += 8;
        v58 = v56[7];
        v56 += 8;
        *(v57 - 1) = v58;
        --v41;
      }
      while ( v41 );
      *v57 = *v56;
      v57[1] = v56[1];
      v57[2] = v56[2];
      v57[3] = v56[3];
      v57[4] = v56[4];
    }
  }
  v59 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v59 && v59 + 2016 <= (unsigned __int64)(unsigned int)v21 )
  {
    v60 = (_OWORD *)((char *)v34 + (unsigned int)v59);
    do
    {
      *v60 = *(_OWORD *)v26;
      v60[1] = *(_OWORD *)(v26 + 16);
      v60[2] = *(_OWORD *)(v26 + 32);
      v60[3] = *(_OWORD *)(v26 + 48);
      v60[4] = *(_OWORD *)(v26 + 64);
      v60[5] = *(_OWORD *)(v26 + 80);
      v60[6] = *(_OWORD *)(v26 + 96);
      v60 += 8;
      v61 = *(_OWORD *)(v26 + 112);
      v26 += 128LL;
      *(v60 - 1) = v61;
      --v54;
    }
    while ( v54 );
    *v60 = *(_OWORD *)v26;
    v60[1] = *(_OWORD *)(v26 + 16);
    v60[2] = *(_OWORD *)(v26 + 32);
    v60[3] = *(_OWORD *)(v26 + 48);
    v60[4] = *(_OWORD *)(v26 + 64);
    v60[5] = *(_OWORD *)(v26 + 80);
  }
  v62 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v62 )
  {
    v41 = *((unsigned int *)a2 + 11);
    v54 = a2[9];
    if ( (int)v62 + (int)v41 <= (unsigned int)v21 )
      memmove((char *)v34 + v62, (const void *)v54, v41);
  }
  v63 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v63 && v63 + 872 <= (unsigned __int64)(unsigned int)v21 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v63, v54, v41, v48);
  if ( v45 )
    IopFillTriageDumpDataBlocks(a2, v45, a11, a2 - 1024);
  if ( (_DWORD)v21 != 253948 || a13 )
  {
    v64 = v25 + 4;
    if ( a13 )
      *a13 = v64 - 0x2000;
  }
  else
  {
    v64 = 0x40000;
  }
  if ( a5 )
    *a5 = v23;
  v65 = (unsigned int)(v64 - 4);
  *((_DWORD *)a2 + 1) = v64;
  *((_DWORD *)a2 + 2) = v65;
  if ( v65 - 0x2000 > (unsigned __int64)(unsigned int)v21 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v64 - 4) - 0x2000) = 1145524820;
  return result;
}
