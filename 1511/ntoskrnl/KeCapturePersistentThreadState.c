/*
 * XREFs of KeCapturePersistentThreadState @ 0x1401BA414
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x1405F1C5C (DbgkpWerCaptureLiveTriageDump.c)
 *     WheapCreateLiveTriageDump @ 0x140678870 (WheapCreateLiveTriageDump.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401B8298 (IoGetLoadedDriverInfo.c)
 *     sub_1401B9758 @ 0x1401B9758 (sub_1401B9758.c)
 *     sub_1401B9FCC @ 0x1401B9FCC (sub_1401B9FCC.c)
 *     IopWriteDriverList @ 0x1401BA1CC (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1401C1C50 (KdCopyDataBlock.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  void *v14; // r8
  unsigned __int64 v15; // rdx
  ULONG ActiveProcessorCount; // eax
  __int64 v17; // rdx
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rcx
  size_t v31; // r8
  int v32; // esi
  __int64 v33; // rcx
  size_t v34; // r8
  int v35; // esi
  void *volatile StackLimit; // rcx
  unsigned __int64 v37; // r11
  void *StackBase; // rax
  unsigned int v39; // eax
  const void *v40; // r11
  int v41; // edi
  size_t v42; // r8
  struct _KTHREAD *v43; // rax
  unsigned int v44; // edi
  int v45; // r14d
  unsigned int v46; // r15d
  int v47; // eax
  unsigned int v48; // esi
  unsigned __int64 v49; // r9
  unsigned int v50; // r8d
  unsigned int v51; // edi
  int v52; // r10d
  unsigned int v53; // eax
  const void *v54; // r11
  __int64 v55; // rcx
  int v56; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v57[3]; // [rsp+24h] [rbp-Ch] BYREF

  v8 = Size;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  memset((void *)Size, 0, 0x40000uLL);
  v14 = (void *)v8;
  v15 = 2048LL;
  if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)v8 = 1162297680;
    v14 = (void *)(v8 + 4);
    v15 = 2047LL;
  }
  memset64(v14, 0x4547415045474150uLL, v15 >> 1);
  if ( (v15 & 1) != 0 )
    *((_DWORD *)v14 + v15 - 1) = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *(_DWORD *)(v8 + 4) = 875976004;
  *(_DWORD *)(v8 + 12) = 10586;
  *(_DWORD *)(v8 + 8) = 15;
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
  *(_DWORD *)(v8 + 48) = 34404;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  v17 = 9LL;
  *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_QWORD *)(v8 + 64) = a4;
  v18 = 8320;
  *(_DWORD *)(v8 + 56) = a3;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  v19 = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 4176) |= 0x10u;
  *(_DWORD *)(v8 + 4148) = v19;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4160) = MEMORY[0xFFFFF78000000264];
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v20 = CmNtCSDVersion;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v20;
  v21 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  v22 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    v21[6] = v22[6];
    v21 += 8;
    v23 = v22[7];
    v22 += 8;
    *(v21 - 1) = v23;
    --v17;
  }
  while ( v17 );
  v24 = *v22;
  LODWORD(Size) = 864;
  *v21 = v24;
  v21[1] = v22[1];
  v21[2] = v22[2];
  v21[3] = v22[3];
  v21[4] = v22[4];
  if ( sub_1401B9FCC(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 864;
    KdCopyDataBlock(v8 + 8320, v25, v26, v27);
    v18 = 9184;
  }
  LODWORD(Size) = 32448;
  if ( sub_1401B9FCC((v18 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    v29 = v28;
    *(_DWORD *)(v8 + 8220) = v28;
    memmove((void *)(v8 + v28), KeGetCurrentPrcb(), (unsigned int)Size);
    v18 = Size + v29;
  }
  LODWORD(Size) = 1944;
  if ( sub_1401B9FCC((v18 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v31 = (unsigned int)Size;
    v32 = v30;
    *(_DWORD *)(v8 + 8224) = v30;
    memmove((void *)(v8 + v30), CurrentThread->ApcState.Process, v31);
    v18 = Size + v32;
  }
  LODWORD(Size) = 1984;
  if ( sub_1401B9FCC((v18 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v34 = (unsigned int)Size;
    v35 = v33;
    *(_DWORD *)(v8 + 8228) = v33;
    memmove((void *)(v8 + v33), CurrentThread, v34);
    v18 = Size + v35;
  }
  if ( (*((_BYTE *)&CurrentThread->MiscFlags + 6) & 1) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    v37 = *(_QWORD *)(a1 + 152);
    StackBase = CurrentThread->StackBase;
    if ( ((unsigned __int64)StackLimit > v37 || v37 >= (unsigned __int64)StackBase)
      && (v37 = (unsigned __int64)CurrentThread->StackLimit, StackBase <= StackLimit) )
    {
      v39 = 0;
    }
    else
    {
      v39 = (_DWORD)StackBase - v37;
    }
    if ( v39 >= 0x7FFF )
      v39 = 0x7FFF;
    LODWORD(Size) = sub_1401B9758(v37, v39);
    if ( (_DWORD)Size )
    {
      if ( !sub_1401B9FCC(v18, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v41 = Size;
      v42 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v18;
      *(_DWORD *)(v8 + 8236) = v41;
      *(_QWORD *)(v8 + 8264) = v40;
      memmove((void *)(v8 + v18), v40, v42);
      v18 += v41;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v43 = KeGetCurrentThread();
    v44 = (v18 + 7) & 0xFFFFFFF8;
    --v43->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(0, &v56, v57) >= 0 )
    {
      v45 = v56;
      LODWORD(Size) = (144 * v56 + 7) & 0xFFFFFFF8;
      if ( (_DWORD)Size && sub_1401B9FCC(v44, (unsigned int *)&Size) )
      {
        v46 = v44 + Size;
        LODWORD(Size) = (v57[0] + 7 + 6 * v45) & 0xFFFFFFF8;
        if ( (_DWORD)Size && sub_1401B9FCC(v46, (unsigned int *)&Size) )
        {
          if ( (int)IopWriteDriverList(v8, 0, v44, v46) >= 0 )
          {
            *(_DWORD *)(v8 + 4152) |= 0x40u;
            v47 = Size;
            *(_DWORD *)(v8 + 8240) = v44;
            *(_DWORD *)(v8 + 8244) = v45;
            *(_DWORD *)(v8 + 8248) = v46;
            v18 = v46 + v47;
            *(_DWORD *)(v8 + 8252) = v47;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 8260) |= 0x100u;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  LODWORD(Size) = 4112;
  v48 = (v18 + 7) & 0xFFFFFFF8;
  sub_1401B9FCC(v48, (unsigned int *)&Size);
  if ( (unsigned int)Size > 0x10 )
  {
    v49 = *(_QWORD *)(a1 + 248);
    v50 = 0;
    v51 = (unsigned int)(Size - 16) >> 1;
    if ( v49 < v51 )
      v51 = *(_QWORD *)(a1 + 248);
    if ( v51 )
    {
      do
      {
        if ( !MiIsAddressValid(v49 - v50) )
          break;
        ++v50;
      }
      while ( v50 < v51 );
      if ( v50 )
      {
        v53 = sub_1401B9758(*(_QWORD *)(a1 + 248) - v50 + 1LL, v52);
        if ( v53 )
        {
          *(_DWORD *)(v8 + 4152) |= 0x800u;
          *(_DWORD *)(v8 + 8312) = v48;
          v55 = (v48 + 23) & 0xFFFFFFF8;
          *(_DWORD *)(v8 + 8316) = 1;
          *(_DWORD *)(v48 + v8 + 8) = v55;
          *(_QWORD *)(v48 + v8) = v54;
          *(_DWORD *)(v48 + v8 + 12) = v53;
          memmove((void *)(v8 + v55), v54, v53);
        }
      }
    }
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
