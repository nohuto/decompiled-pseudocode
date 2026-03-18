/*
 * XREFs of MiUnloadSystemImage @ 0x140483468
 * Callers:
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MiDereferenceImports @ 0x1405444B8 (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x140545D68 (MmUnloadSystemImage.c)
 * Callees:
 *     MiManageSubsectionView @ 0x140013D20 (MiManageSubsectionView.c)
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025FB0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     MiProcessLoaderEntry @ 0x140084B4C (MiProcessLoaderEntry.c)
 *     MiGetPdeAddress @ 0x1400AB5EC (MiGetPdeAddress.c)
 *     MiDereferenceControlArea @ 0x1400B54C4 (MiDereferenceControlArea.c)
 *     MiGetSessionVm @ 0x1400C0E60 (MiGetSessionVm.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiDeleteSessionPdes @ 0x140125CE8 (MiDeleteSessionPdes.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14012CCA0 (MiFreePrivateFixupEntryForSystemImage.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14013018C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiSessionRemoveImage @ 0x140130440 (MiSessionRemoveImage.c)
 *     LdrUnloadAlternateResourceModule @ 0x140130B9C (LdrUnloadAlternateResourceModule.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E35E0 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1401EC6EC (MiInitPerfMemoryFlags.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PerfLogImageUnload @ 0x14042AC2C (PerfLogImageUnload.c)
 *     MiDereferenceImports @ 0x1405444B8 (MiDereferenceImports.c)
 *     MiUnlockDriverCode @ 0x14054480C (MiUnlockDriverCode.c)
 *     MiReturnSystemImageAddress @ 0x1405448F0 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x140544938 (MiReleaseDriverPtes.c)
 *     MiRememberUnloadedDriver @ 0x140545B24 (MiRememberUnloadedDriver.c)
 *     MiDeleteSessionDriverProtos @ 0x140546350 (MiDeleteSessionDriverProtos.c)
 *     KseDriverUnloadImage @ 0x140546854 (KseDriverUnloadImage.c)
 *     MiReturnSystemImageCommitment @ 0x140547384 (MiReturnSystemImageCommitment.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1405474F4 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiDereferencePerSessionProtos @ 0x140661CF8 (MiDereferencePerSessionProtos.c)
 *     MiUnmapLargeDriver @ 0x140662F2C (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter2, char a2)
{
  bool v2; // zf
  __int64 v5; // r14
  void *v6; // rsi
  void *v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 SessionVm; // rax
  ULONG_PTR v11; // r8
  unsigned int SessionId; // eax
  ULONG_PTR PdeAddress; // rdx
  ULONG_PTR v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  char v18; // r14
  __int64 *v19; // r14
  __int64 v20; // rax
  ULONG_PTR v21; // r12
  unsigned int inited; // eax
  ULONG_PTR PteAddress; // r12
  void *v24; // rcx
  void *v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  char *AnyMultiplexedVm; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  unsigned __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  _BYTE v37[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38[20]; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+160h] [rbp+60h]
  _QWORD *v40; // [rsp+168h] [rbp+68h]

  v30 = 0LL;
  v2 = *(_QWORD *)(BugCheckParameter2 + 136) == 1LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( !v2 )
  {
    if ( (a2 & 4) != 0 )
      v40 = (_QWORD *)(BugCheckParameter2 + 160);
    else
      v40 = 0LL;
    v5 = 0LL;
    v6 = *(void **)(BugCheckParameter2 + 48);
    v7 = *(void **)(BugCheckParameter2 + 112);
    v8 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
    if ( (unsigned __int64)v6 < qword_140326910 || (unsigned __int64)v6 >= qword_140326910 + 0x8000000000LL )
    {
      v17 = 1;
      v39 = 1;
    }
    else
    {
      v39 = 0;
      if ( !(unsigned int)MiSessionRemoveImage(BugCheckParameter2, &v34) )
        return;
      v5 = MiSectionControlArea((__int64)v7);
      if ( *(_QWORD *)BugCheckParameter2 )
        ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
      v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      if ( (a2 & 1) != 0 )
      {
        MiGetPteAddress((unsigned __int64)v6);
        SessionVm = MiGetSessionVm();
        MiDeleteSystemPagableVm(SessionVm, v5, v11, v8, 3, &v30);
        if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          MiDereferencePerSessionProtos(v5, SessionId);
        }
        MiGetPdeAddress((unsigned __int64)v6);
        if ( v34 )
          MiGetPdeAddress(v34);
        PdeAddress = MiGetPdeAddress((unsigned __int64)v6 + *(unsigned int *)(BugCheckParameter2 + 64) - 1);
        if ( v35 )
        {
          v15 = MiGetPdeAddress(v35);
          if ( v15 == PdeAddress )
            PdeAddress -= 8LL;
        }
        if ( PdeAddress >= v14 )
          MiDeleteSessionPdes(v14, PdeAddress);
      }
      v16 = v36;
      if ( v36 )
      {
        MiReturnCommit((__int64)MiSystemPartition, v36 - v31);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), -v16);
      }
      v8 = 0LL;
      if ( (a2 & 0x10) != 0 )
        MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
      v17 = 0;
    }
    v2 = (*(_WORD *)(BugCheckParameter2 + 108))-- == 1;
    if ( v2 )
    {
      if ( !v17 )
        MiDeleteSessionDriverProtos(v5);
      if ( (a2 & 2) != 0 )
      {
        VfDriverUnloadImage(BugCheckParameter2);
        KseDriverUnloadImage(BugCheckParameter2);
      }
      LdrUnloadAlternateResourceModule(v6);
      if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v6, 0xFFFFFFFFLL);
      if ( *(_QWORD *)BugCheckParameter2 && v8 )
        ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
      v18 = 0;
      if ( v8 && (a2 & 1) != 0 )
      {
        MiRememberUnloadedDriver(BugCheckParameter2 + 88, v6, v8 << 12);
        v19 = 0LL;
        if ( v7 )
        {
          v20 = MiSectionControlArea((__int64)v7);
          v19 = (__int64 *)v20;
          if ( *(_QWORD *)BugCheckParameter2 )
          {
            v38[0] = v20;
            MiManageSubsectionView(v38, v40, 4);
          }
        }
        _InterlockedExchangeAdd(&dword_140327920, -(int)v8);
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v21 = (ULONG_PTR)AnyMultiplexedVm;
        if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v6) )
        {
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          {
            inited = MiInitPerfMemoryFlags(0, 6);
            MiLogPerfMemoryRangeEvent((__int64)v6, 0LL, inited, (v8 + 511) & 0xFFFFFFFFFFFFFE00uLL);
          }
          MiUnmapLargeDriver(v6, v8);
          v18 = 1;
        }
        else
        {
          if ( v40 )
            MiUnlockDriverCode(BugCheckParameter2);
          qword_140326840 = BugCheckParameter2;
          PteAddress = MiGetPteAddress((unsigned __int64)v6);
          MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, (__int64)v19, PteAddress, v8, 5, &v30);
          if ( v19 )
            MiWalkEntireImage(v19, (__int64)v37, 4, 0xFFFFFFFFLL);
          qword_140326840 = 0LL;
          _InterlockedExchangeAdd((_DWORD *)&xmmword_140326868 + 3, v30 - v33);
          if ( !v7 )
            MiReleaseDriverPtes(0LL, PteAddress, (unsigned int)v8);
          v18 = 0;
          v21 = (ULONG_PTR)AnyMultiplexedVm;
        }
        if ( *(_QWORD *)BugCheckParameter2 )
          MiChargeWsles(v21, -(__int64)v8, 0);
      }
      if ( v39 == 1 )
      {
        MiReturnSystemImageCommitment(BugCheckParameter2, &v30);
        if ( (a2 & 0x10) != 0 )
          MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
      }
      v24 = *(void **)(BugCheckParameter2 + 136);
      if ( v24 != (void *)1 )
      {
        if ( v24 != (void *)-2LL && ((unsigned __int8)v24 & 1) == 0 )
          ExFreePoolWithTag(v24, 0);
        *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
      }
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        MiProcessLoaderEntry((int *)BugCheckParameter2, 0);
        if ( (PerfGlobalGroupMask & 4) != 0 )
          PerfLogImageUnload(
            (unsigned __int16 *)(BugCheckParameter2 + 72),
            0LL,
            0,
            v6,
            *(unsigned int *)(BugCheckParameter2 + 64),
            *(_DWORD *)(BugCheckParameter2 + 120),
            *(_BYTE *)(BugCheckParameter2 + 110) & 0xF,
            (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
            0);
      }
      v25 = *(void **)(BugCheckParameter2 + 80);
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
      if ( v7 )
      {
        if ( v40 )
        {
          v26 = v40[7];
          if ( v26 )
            MiReturnResidentAvailable(v26);
        }
        v27 = MiSectionControlArea((__int64)v7);
        v28 = v27;
        if ( !v18 && v6 != *(void **)(*(_QWORD *)v27 + 32LL) )
        {
          MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v6, 1);
          MiReturnSystemImageAddress(v6, *(unsigned int *)(BugCheckParameter2 + 64));
        }
        MiDereferenceControlArea(v28);
        ObDereferenceObjectDeferDelete(v7);
      }
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
    else if ( !v17 && (a2 & 2) != 0 )
    {
      VfDriverUnloadImage(BugCheckParameter2);
    }
  }
}
