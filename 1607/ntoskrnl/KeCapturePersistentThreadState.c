/*
 * XREFs of KeCapturePersistentThreadState @ 0x1401C80E8
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14061BF68 (DbgkpWerCaptureLiveTriageDump.c)
 *     WheapCreateLiveTriageDump @ 0x1406BB0E0 (WheapCreateLiveTriageDump.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlGetNtProductType @ 0x1400AB154 (RtlGetNtProductType.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401C5EEC (IoGetLoadedDriverInfo.c)
 *     IopGetMaxValidSectionSize @ 0x1401C73F8 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x1401C7438 (IopGetMaxValidSectionSizeDown.c)
 *     IopValidateSectionSize @ 0x1401C7C98 (IopValidateSectionSize.c)
 *     IopWriteDriverList @ 0x1401C7E98 (IopWriteDriverList.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1401CB7FC (SecureDump_GetSecureDumpSettings.c)
 *     KdCopyDataBlock @ 0x1401D108C (KdCopyDataBlock.c)
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
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  void *v14; // r8
  unsigned __int64 v15; // rdx
  ULONG ActiveProcessorCount; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  _OWORD *v20; // rcx
  int v21; // eax
  _OWORD *v22; // rax
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
  const void *StackLimit; // rcx
  void *StackBase; // rax
  const void *v38; // r14
  unsigned int v39; // eax
  int v40; // edi
  size_t v41; // r8
  struct _KTHREAD *v42; // rax
  unsigned int v43; // edi
  int v44; // r14d
  unsigned int v45; // r15d
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  unsigned int v51; // edi
  unsigned int MaxValidSectionSizeDown; // eax
  const void *v53; // rsi
  unsigned int MaxValidSectionSize; // eax
  __int64 v55; // rcx
  int v56; // [rsp+20h] [rbp-20h] BYREF
  int v57; // [rsp+24h] [rbp-1Ch] BYREF
  char v58; // [rsp+28h] [rbp-18h] BYREF
  __int64 v59; // [rsp+29h] [rbp-17h]
  __int16 v60; // [rsp+31h] [rbp-Fh]
  char v61; // [rsp+33h] [rbp-Dh]

  v8 = Size;
  result = 0LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 0;
  CurrentThread = a2;
  v61 = 0;
  if ( Size )
  {
    if ( !a2 )
      CurrentThread = KeGetCurrentThread();
    if ( !ForceDumpDisabled )
    {
      if ( (int)SecureDump_GetSecureDumpSettings(&v58) < 0 || v58 )
      {
        return 0LL;
      }
      else
      {
        memset((void *)v8, 0, 0x40000uLL);
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
        *(_DWORD *)(v8 + 12) = 14393;
        *(_DWORD *)(v8 + 8) = 15;
        *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(v8 + 24) = MmPfnDatabase;
        *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
        *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
        *(_DWORD *)(v8 + 48) = 34404;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        *(_QWORD *)(v8 + 3848) = 0LL;
        *(_DWORD *)(v8 + 3864) = 0;
        *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
        *(_QWORD *)(v8 + 72) = a5;
        *(_QWORD *)(v8 + 80) = a6;
        *(_QWORD *)(v8 + 88) = a7;
        *(_DWORD *)(v8 + 56) = a3;
        *(_QWORD *)(v8 + 64) = a4;
        *(_DWORD *)(v8 + 3840) = -2147483645;
        *(_DWORD *)(v8 + 3844) = 1;
        *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(v8 + 4000) = 0x40000LL;
        *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
        *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
        v17 = MEMORY[0xFFFFF7800000000C];
        *(_DWORD *)(v8 + 4176) |= 0x10u;
        *(_DWORD *)(v8 + 4148) = v17;
        *(_DWORD *)(v8 + 3992) = 4;
        *(_DWORD *)(v8 + 4152) = 130;
        RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
        v18 = 9LL;
        *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
        v19 = 8320;
        v20 = (_OWORD *)a1;
        *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
        *(_DWORD *)(v8 + 8260) = 0;
        v21 = CmNtCSDVersion;
        *(_DWORD *)(v8 + 8256) = 0;
        *(_DWORD *)(v8 + 0x2000) = v21;
        v22 = (_OWORD *)(v8 + 840);
        *(_DWORD *)(v8 + 8196) = 0x40000;
        *(_DWORD *)(v8 + 8208) = 3840;
        *(_DWORD *)(v8 + 4152) |= 1u;
        *(_DWORD *)(v8 + 8204) = 840;
        do
        {
          *v22 = *v20;
          v22[1] = v20[1];
          v22[2] = v20[2];
          v22[3] = v20[3];
          v22[4] = v20[4];
          v22[5] = v20[5];
          v22[6] = v20[6];
          v22 += 8;
          v23 = v20[7];
          v20 += 8;
          *(v22 - 1) = v23;
          --v18;
        }
        while ( v18 );
        v24 = *v20;
        LODWORD(Size) = 872;
        *v22 = v24;
        v22[1] = v20[1];
        v22[2] = v20[2];
        v22[3] = v20[3];
        v22[4] = v20[4];
        if ( IopValidateSectionSize(0x2080u, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 0x400u;
          *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
          *(_DWORD *)(v8 + 8304) = 8320;
          *(_DWORD *)(v8 + 8308) = 872;
          KdCopyDataBlock(v8 + 8320, v25, v26, v27);
          v19 = 9192;
        }
        LODWORD(Size) = 32448;
        if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 4u;
          v29 = v28;
          *(_DWORD *)(v8 + 8220) = v28;
          memmove((void *)(v8 + v28), KeGetCurrentPrcb(), (unsigned int)Size);
          v19 = Size + v29;
        }
        LODWORD(Size) = 2000;
        if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 8u;
          v31 = (unsigned int)Size;
          v32 = v30;
          *(_DWORD *)(v8 + 8224) = v30;
          memmove((void *)(v8 + v30), CurrentThread->ApcState.Process, v31);
          v19 = Size + v32;
        }
        LODWORD(Size) = 2016;
        if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 0x10u;
          v34 = (unsigned int)Size;
          v35 = v33;
          *(_DWORD *)(v8 + 8228) = v33;
          memmove((void *)(v8 + v33), CurrentThread, v34);
          v19 = Size + v35;
        }
        if ( (*((_BYTE *)&CurrentThread->MiscFlags + 6) & 1) != 0 )
        {
          StackLimit = CurrentThread->StackLimit;
          StackBase = CurrentThread->StackBase;
          v38 = *(const void **)(a1 + 152);
          if ( (StackLimit > v38 || v38 >= StackBase) && (v38 = StackLimit, StackBase <= StackLimit) )
            v39 = 0;
          else
            v39 = (_DWORD)StackBase - (_DWORD)v38;
          if ( v39 >= 0x7FFF )
            v39 = 0x7FFF;
          LODWORD(Size) = IopGetMaxValidSectionSize((__int64)v38, v39);
          if ( (_DWORD)Size )
          {
            if ( !IopValidateSectionSize(v19, (unsigned int *)&Size) )
              *(_DWORD *)(v8 + 8260) |= 0x100u;
            *(_DWORD *)(v8 + 4152) |= 0x20u;
            v40 = Size;
            v41 = (unsigned int)Size;
            *(_DWORD *)(v8 + 8232) = v19;
            *(_DWORD *)(v8 + 8236) = v40;
            *(_QWORD *)(v8 + 8264) = v38;
            memmove((void *)(v8 + v19), v38, v41);
            v19 += v40;
          }
        }
        if ( KeGetCurrentIrql() < 2u )
        {
          v42 = KeGetCurrentThread();
          v43 = (v19 + 7) & 0xFFFFFFF8;
          --v42->KernelApcDisable;
          ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
          if ( (int)IoGetLoadedDriverInfo(0, &v56, &v57) >= 0 )
          {
            v44 = v56;
            LODWORD(Size) = (144 * v56 + 7) & 0xFFFFFFF8;
            if ( (_DWORD)Size && IopValidateSectionSize(v43, (unsigned int *)&Size) )
            {
              v45 = v43 + Size;
              LODWORD(Size) = (v57 + 7 + 6 * v44) & 0xFFFFFFF8;
              if ( (_DWORD)Size && IopValidateSectionSize(v45, (unsigned int *)&Size) )
              {
                if ( (int)IopWriteDriverList(v8, 0, v43, v45) >= 0 )
                {
                  *(_DWORD *)(v8 + 4152) |= 0x40u;
                  v46 = Size;
                  *(_DWORD *)(v8 + 8240) = v43;
                  *(_DWORD *)(v8 + 8244) = v44;
                  *(_DWORD *)(v8 + 8248) = v45;
                  v19 = v45 + v46;
                  *(_DWORD *)(v8 + 8252) = v46;
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v47, v48, v49);
        }
        LODWORD(Size) = 4112;
        v50 = (v19 + 7) & 0xFFFFFFF8;
        IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size);
        if ( (unsigned int)Size > 0x10 )
        {
          v51 = Size - 16;
          MaxValidSectionSizeDown = IopGetMaxValidSectionSizeDown(*(_QWORD *)(a1 + 248), (unsigned int)(Size - 16) >> 1);
          if ( MaxValidSectionSizeDown )
          {
            v53 = (const void *)(*(_QWORD *)(a1 + 248) - MaxValidSectionSizeDown + 1LL);
            MaxValidSectionSize = IopGetMaxValidSectionSize((__int64)v53, v51);
            if ( MaxValidSectionSize )
            {
              *(_DWORD *)(v8 + 4152) |= 0x800u;
              *(_DWORD *)(v8 + 8312) = v50;
              v55 = ((_DWORD)v50 + 23) & 0xFFFFFFF8;
              *(_DWORD *)(v8 + 8316) = 1;
              *(_DWORD *)(v50 + v8 + 8) = v55;
              *(_QWORD *)(v50 + v8) = v53;
              *(_DWORD *)(v50 + v8 + 12) = MaxValidSectionSize;
              memmove((void *)(v8 + v55), v53, MaxValidSectionSize);
            }
          }
        }
        *(_DWORD *)(v8 + 8200) = 262140;
        result = 0x40000LL;
        *(_DWORD *)(v8 + 262140) = 1145524820;
      }
    }
  }
  return result;
}
