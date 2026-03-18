/*
 * XREFs of MiUnloadSystemImage @ 0x1403CF92C
 * Callers:
 *     MmUnloadSystemImage @ 0x1403CBF50 (MmUnloadSystemImage.c)
 *     MiDereferenceImports @ 0x1403CBF88 (MiDereferenceImports.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 * Callees:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140002318 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiProcessLoaderEntry @ 0x14001A270 (MiProcessLoaderEntry.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     LdrUnloadAlternateResourceModule @ 0x1400DD16C (LdrUnloadAlternateResourceModule.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiDeleteSessionPdes @ 0x140116E90 (MiDeleteSessionPdes.c)
 *     MiSessionRemoveImage @ 0x14011F8FC (MiSessionRemoveImage.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140120244 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1401DB928 (MiInitPerfMemoryFlags.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiDereferenceImports @ 0x1403CBF88 (MiDereferenceImports.c)
 *     PerfLogImageUnload @ 0x1403F52F4 (PerfLogImageUnload.c)
 *     MiReturnSystemImageAddress @ 0x1404A6B98 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     MiUnlockDriverCode @ 0x1404C32F0 (MiUnlockDriverCode.c)
 *     MiRememberUnloadedDriver @ 0x1404C4BD0 (MiRememberUnloadedDriver.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     MiReturnSystemImageCommitment @ 0x1404C616C (MiReturnSystemImageCommitment.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404C64C4 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiDeleteSessionDriverProtos @ 0x14050BE0C (MiDeleteSessionDriverProtos.c)
 *     MiUnmapLargeDriver @ 0x140621B08 (MiUnmapLargeDriver.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 *     VfDriverUnloadImage @ 0x1406B2000 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter2, char a2)
{
  bool v2; // zf
  _QWORD *v5; // r13
  void *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  int v10; // eax
  char v11; // r15
  __int64 *v12; // r15
  __int64 v13; // rax
  int v14; // r14d
  void *v15; // rcx
  void *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // r15
  ULONG_PTR PteAddress; // rax
  ULONG_PTR PdeAddress; // rdx
  ULONG_PTR v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int SessionId; // eax
  unsigned int inited; // eax
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  ULONG_PTR v32; // [rsp+70h] [rbp-90h]
  unsigned __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  char v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37[20]; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+160h] [rbp+60h]
  PVOID Object; // [rsp+168h] [rbp+68h]

  v28 = 0LL;
  v2 = *(_QWORD *)(BugCheckParameter2 + 136) == 1LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !v2 )
  {
    if ( (a2 & 4) != 0 )
      v5 = (_QWORD *)(BugCheckParameter2 + 160);
    else
      v5 = 0LL;
    v6 = *(void **)(BugCheckParameter2 + 48);
    v7 = *(_QWORD *)(BugCheckParameter2 + 112);
    v8 = 0LL;
    v9 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
    Object = (PVOID)v7;
    if ( (unsigned __int64)v6 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      v38 = 0;
      if ( !(unsigned int)MiSessionRemoveImage(BugCheckParameter2, &v33) )
        return;
      v8 = MiSectionControlArea(v7);
      if ( *(_QWORD *)BugCheckParameter2 )
        ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
      v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      if ( (a2 & 1) != 0 )
      {
        PteAddress = MiGetPteAddress((unsigned __int64)v6);
        MiDeleteSystemPagableVm((volatile LONG *)(v20 + 2968), v8, PteAddress, v9, 3, &v28);
        if ( (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          MiDereferencePerSessionProtos(v8, SessionId);
        }
        MiGetPdeAddress((unsigned __int64)v6);
        if ( v33 )
          MiGetPdeAddress(v33);
        PdeAddress = MiGetPdeAddress((unsigned __int64)v6 + *(unsigned int *)(BugCheckParameter2 + 64) - 1);
        if ( v34 )
        {
          v24 = MiGetPdeAddress(v34);
          if ( v24 == PdeAddress )
            PdeAddress -= 8LL;
        }
        if ( PdeAddress >= v23 )
          MiDeleteSessionPdes(v23, PdeAddress);
      }
      v25 = v35;
      if ( v35 )
      {
        MiReturnCommit((__int64)MiSystemPartition, v35 - v29);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 48), -v25);
      }
      v9 = 0LL;
      if ( (a2 & 0x10) != 0 )
        MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v38 = 1;
    }
    v2 = (*(_WORD *)(BugCheckParameter2 + 108))-- == 1;
    if ( v2 )
    {
      if ( !v10 )
        MiDeleteSessionDriverProtos(v8);
      if ( (a2 & 2) != 0 )
      {
        VfDriverUnloadImage(BugCheckParameter2);
        KseDriverUnloadImage(BugCheckParameter2);
      }
      LdrUnloadAlternateResourceModule(v6);
      if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v6, 0xFFFFFFFFLL);
      if ( *(_QWORD *)BugCheckParameter2 && v9 )
        ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
      v11 = 0;
      if ( v9 && (a2 & 1) != 0 )
      {
        MiRememberUnloadedDriver(BugCheckParameter2 + 88, v6, v9 << 12);
        v12 = 0LL;
        if ( Object )
        {
          v13 = MiSectionControlArea((__int64)Object);
          v12 = (__int64 *)v13;
          if ( *(_QWORD *)BugCheckParameter2 )
          {
            v37[0] = v13;
            MiManageSubsectionView((__int64)v37, v5, 4);
          }
        }
        if ( *(char *)MiGetPdeAddress((unsigned __int64)v6) < 0 )
        {
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          {
            inited = MiInitPerfMemoryFlags(0, 6);
            MiLogPerfMemoryRangeEvent((__int64)v6, 0LL, inited, (v9 + 511) & 0xFFFFFFFFFFFFFE00uLL);
          }
          MiUnmapLargeDriver(v6, v9);
          v14 = v9;
          v11 = 1;
        }
        else
        {
          if ( v5 )
            MiUnlockDriverCode(BugCheckParameter2);
          qword_1402FE570 = BugCheckParameter2;
          v32 = MiGetPteAddress((unsigned __int64)v6);
          MiDeleteSystemPagableVm(&dword_1402FFA80, (__int64)v12, v32, v9, 5, &v28);
          v14 = v31;
          if ( v12 )
            MiValidateImagePages(v12, (int)&v36, 4, 0xFFFFFFFF);
          qword_1402FE570 = 0LL;
          _InterlockedExchangeAdd((_DWORD *)&xmmword_1402FE598 + 3, v28 - v14);
          if ( !Object )
            MiReleaseDriverPtes(0LL, v32, (unsigned int)v9);
          v11 = 0;
        }
        _InterlockedExchangeAdd(&dword_1402FF858, -v14);
        if ( *(_QWORD *)BugCheckParameter2 )
          MiChargeWsles((ULONG_PTR)&dword_1402FFA80, -(__int64)v9, 0LL);
      }
      if ( v38 == 1 )
      {
        MiReturnSystemImageCommitment(BugCheckParameter2, &v28);
        if ( (a2 & 0x10) != 0 )
          MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
      }
      v15 = *(void **)(BugCheckParameter2 + 136);
      if ( v15 != (void *)1 )
      {
        if ( v15 != (void *)-2LL && ((unsigned __int8)v15 & 1) == 0 )
          ExFreePoolWithTag(v15, 0);
        *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
      }
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        MiProcessLoaderEntry((_QWORD *)BugCheckParameter2, 0);
        if ( (PerfGlobalGroupMask & 4) != 0 )
          PerfLogImageUnload(
            BugCheckParameter2 + 72,
            0LL,
            0LL,
            v6,
            *(unsigned int *)(BugCheckParameter2 + 64),
            *(_DWORD *)(BugCheckParameter2 + 120),
            *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
            (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
            0);
      }
      v16 = *(void **)(BugCheckParameter2 + 80);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      if ( Object )
      {
        if ( v5 )
        {
          v17 = v5[7];
          if ( v17 )
          {
            MiReturnResidentAvailable(v17);
            _InterlockedExchangeAdd64(&qword_1402FF660, v5[7]);
          }
        }
        v18 = MiSectionControlArea((__int64)Object);
        v19 = v18;
        if ( !v11 && v6 != *(void **)(*(_QWORD *)v18 + 32LL) )
        {
          MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v6, 1);
          MiReturnSystemImageAddress(v6, *(unsigned int *)(BugCheckParameter2 + 64));
        }
        MiDereferenceControlArea(v19);
        ObDereferenceObjectDeferDelete(Object);
      }
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
