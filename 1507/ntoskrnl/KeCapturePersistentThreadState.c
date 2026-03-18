/*
 * XREFs of KeCapturePersistentThreadState @ 0x1401F561C
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14066A954 (DbgkpWerCaptureLiveTriageDump.c)
 *     WheapCreateLiveTriageDump @ 0x1406FD08C (WheapCreateLiveTriageDump.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401F3664 (IoGetLoadedDriverInfo.c)
 *     sub_1401F4A40 @ 0x1401F4A40 (sub_1401F4A40.c)
 *     sub_1401F51D4 @ 0x1401F51D4 (sub_1401F51D4.c)
 *     IopWriteDriverList @ 0x1401F53D4 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1401FD7E8 (KdCopyDataBlock.c)
 *     MmIsAddressValid @ 0x1402175B0 (MmIsAddressValid.c)
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
  __int64 v16; // rdx
  unsigned int v17; // esi
  int v18; // eax
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rcx
  size_t v29; // r8
  int v30; // esi
  __int64 v31; // rcx
  size_t v32; // r8
  int v33; // esi
  void *volatile StackLimit; // rcx
  unsigned __int64 v35; // r11
  void *StackBase; // rax
  unsigned int v37; // eax
  const void *v38; // r11
  int v39; // edi
  size_t v40; // r8
  struct _KTHREAD *v41; // rax
  unsigned int v42; // edi
  int v43; // r14d
  unsigned int v44; // r15d
  int v45; // eax
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  __int64 v48; // r14
  unsigned __int64 v49; // r15
  int v50; // r12d
  unsigned int v51; // esi
  unsigned int v52; // edi
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
  v16 = 9LL;
  *(_DWORD *)(v8 + 4) = 875976004;
  *(_DWORD *)(v8 + 12) = 10240;
  *(_DWORD *)(v8 + 8) = 15;
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
  *(_DWORD *)(v8 + 48) = 34404;
  *(_DWORD *)(v8 + 52) = KeNumberProcessors_0;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_QWORD *)(v8 + 64) = a4;
  v17 = 8320;
  *(_DWORD *)(v8 + 56) = a3;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  v18 = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 4176) |= 0x10u;
  *(_DWORD *)(v8 + 4148) = v18;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4160) = MEMORY[0xFFFFF78000000264];
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  *(_DWORD *)(v8 + 0x2000) = CmNtCSDVersion;
  v19 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  v20 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v19 = *v20;
    v19[1] = v20[1];
    v19[2] = v20[2];
    v19[3] = v20[3];
    v19[4] = v20[4];
    v19[5] = v20[5];
    v19[6] = v20[6];
    v19 += 8;
    v21 = v20[7];
    v20 += 8;
    *(v19 - 1) = v21;
    --v16;
  }
  while ( v16 );
  v22 = *v20;
  LODWORD(Size) = 864;
  *v19 = v22;
  v19[1] = v20[1];
  v19[2] = v20[2];
  v19[3] = v20[3];
  v19[4] = v20[4];
  if ( sub_1401F51D4(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 864;
    KdCopyDataBlock(v8 + 8320, v23, v24, v25);
    v17 = 9184;
  }
  LODWORD(Size) = 32448;
  if ( sub_1401F51D4((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    v27 = v26;
    *(_DWORD *)(v8 + 8220) = v26;
    memmove((void *)(v8 + v26), KeGetCurrentPrcb(), (unsigned int)Size);
    v17 = Size + v27;
  }
  LODWORD(Size) = 1968;
  if ( sub_1401F51D4((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v29 = (unsigned int)Size;
    v30 = v28;
    *(_DWORD *)(v8 + 8224) = v28;
    memmove((void *)(v8 + v28), CurrentThread->ApcState.Process, v29);
    v17 = Size + v30;
  }
  LODWORD(Size) = 1984;
  if ( sub_1401F51D4((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v32 = (unsigned int)Size;
    v33 = v31;
    *(_DWORD *)(v8 + 8228) = v31;
    memmove((void *)(v8 + v31), CurrentThread, v32);
    v17 = Size + v33;
  }
  if ( (*((_BYTE *)&CurrentThread->MiscFlags + 6) & 1) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    v35 = *(_QWORD *)(a1 + 152);
    StackBase = CurrentThread->StackBase;
    if ( ((unsigned __int64)StackLimit > v35 || v35 >= (unsigned __int64)StackBase)
      && (v35 = (unsigned __int64)CurrentThread->StackLimit, StackBase <= StackLimit) )
    {
      v37 = 0;
    }
    else
    {
      v37 = (_DWORD)StackBase - v35;
    }
    if ( v37 >= 0x7FFF )
      v37 = 0x7FFF;
    LODWORD(Size) = sub_1401F4A40(v35, v37);
    if ( (_DWORD)Size )
    {
      if ( !sub_1401F51D4(v17, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v39 = Size;
      v40 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v17;
      *(_DWORD *)(v8 + 8236) = v39;
      *(_QWORD *)(v8 + 8264) = v38;
      memmove((void *)(v8 + v17), v38, v40);
      v17 += v39;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v41 = KeGetCurrentThread();
    v42 = (v17 + 7) & 0xFFFFFFF8;
    --v41->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(0, &v56, v57) >= 0 )
    {
      v43 = v56;
      LODWORD(Size) = (144 * v56 + 7) & 0xFFFFFFF8;
      if ( (_DWORD)Size && sub_1401F51D4(v42, (unsigned int *)&Size) )
      {
        v44 = v42 + Size;
        LODWORD(Size) = (v57[0] + 7 + 6 * v43) & 0xFFFFFFF8;
        if ( (_DWORD)Size && sub_1401F51D4(v44, (unsigned int *)&Size) )
        {
          if ( (int)IopWriteDriverList(v8, 0, v42, v44) >= 0 )
          {
            *(_DWORD *)(v8 + 4152) |= 0x40u;
            v45 = Size;
            *(_DWORD *)(v8 + 8240) = v42;
            *(_DWORD *)(v8 + 8244) = v43;
            *(_DWORD *)(v8 + 8248) = v44;
            v17 = v44 + v45;
            *(_DWORD *)(v8 + 8252) = v45;
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
    v46 = KeGetCurrentThread();
    v47 = v46->KernelApcDisable + 1;
    v46->KernelApcDisable = v47;
    if ( !v47
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
      && !v46->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  LODWORD(Size) = 4112;
  v48 = (v17 + 7) & 0xFFFFFFF8;
  sub_1401F51D4((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size);
  if ( (unsigned int)Size > 0x10 )
  {
    v49 = *(_QWORD *)(a1 + 248);
    v50 = Size - 16;
    v51 = 0;
    v52 = (unsigned int)(Size - 16) >> 1;
    if ( v49 < v52 )
      v52 = *(_QWORD *)(a1 + 248);
    if ( v52 )
    {
      do
      {
        if ( !MmIsAddressValid((PVOID)(v49 - v51)) )
          break;
        ++v51;
      }
      while ( v51 < v52 );
      if ( v51 )
      {
        v53 = sub_1401F4A40(*(_QWORD *)(a1 + 248) - v51 + 1LL, v50);
        if ( v53 )
        {
          *(_DWORD *)(v8 + 4152) |= 0x800u;
          *(_DWORD *)(v8 + 8312) = v48;
          v55 = ((_DWORD)v48 + 23) & 0xFFFFFFF8;
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
