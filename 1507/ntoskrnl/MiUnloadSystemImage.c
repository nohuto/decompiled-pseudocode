/*
 * XREFs of MiUnloadSystemImage @ 0x140452B74
 * Callers:
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     MiDereferenceImports @ 0x140453090 (MiDereferenceImports.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModule @ 0x14002567C (LdrUnloadAlternateResourceModule.c)
 *     MiDereferenceControlArea @ 0x140025CDC (MiDereferenceControlArea.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     MiDeleteSessionPdes @ 0x14014BED8 (MiDeleteSessionPdes.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140156304 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiInitPerfMemoryFlags @ 0x140220484 (MiInitPerfMemoryFlags.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PerfLogImageUnload @ 0x1404253F4 (PerfLogImageUnload.c)
 *     MiDereferenceImports @ 0x140453090 (MiDereferenceImports.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404531A0 (ExCovReadjustUnloadedModuleEntry.c)
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     MiReturnSystemImageCommitment @ 0x140453288 (MiReturnSystemImageCommitment.c)
 *     MiUnlockDriverCode @ 0x1404532D8 (MiUnlockDriverCode.c)
 *     MiRememberUnloadedDriver @ 0x14045342C (MiRememberUnloadedDriver.c)
 *     MiReturnSystemImageAddress @ 0x140521A7C (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x1405833BC (MiDeleteSessionDriverProtos.c)
 *     MiUnmapLargeDriver @ 0x1406A1198 (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x140732000 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter2, char a2)
{
  bool v2; // zf
  char v3; // r15
  _QWORD *v5; // r13
  ULONG_PTR v6; // rsi
  void *v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  int v10; // eax
  __int64 *v11; // r15
  __int64 v12; // rax
  int v13; // r14d
  void *v14; // rcx
  void *v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rdx
  __int64 v23; // rdi
  unsigned int SessionId; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int inited; // eax
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  char v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36[22]; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+150h] [rbp+50h]
  unsigned __int64 v38; // [rsp+150h] [rbp+50h]
  int v40; // [rsp+160h] [rbp+60h]

  v28 = 0LL;
  v2 = *(_QWORD *)(BugCheckParameter2 + 136) == 1LL;
  v3 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !v2 )
  {
    if ( (a2 & 4) != 0 )
      v5 = (_QWORD *)(BugCheckParameter2 + 160);
    else
      v5 = 0LL;
    v6 = *(_QWORD *)(BugCheckParameter2 + 48);
    v7 = *(void **)(BugCheckParameter2 + 112);
    v8 = 0LL;
    v9 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
    if ( v6 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      v40 = 0;
      if ( !(unsigned int)MiSessionRemoveImage(BugCheckParameter2, &v32) )
        return;
      v8 = MiSectionControlArea((__int64)v7);
      if ( *(_QWORD *)BugCheckParameter2 )
        ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
      v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      v38 = v20;
      if ( (v3 & 1) != 0 )
      {
        MiDeleteSystemPagableVm(
          v20 + 2968,
          v8,
          (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          v9,
          3,
          &v28);
        if ( (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          MiDereferencePerSessionProtos((_QWORD *)v8, SessionId, v25, v26);
        }
        v21 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( v32 && ((v32 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v21 )
          v21 += 8LL;
        v22 = (((v6 + *(unsigned int *)(BugCheckParameter2 + 64) - 1LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( v33 && ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v22 )
          v22 = (((v6 + *(unsigned int *)(BugCheckParameter2 + 64) - 1LL) >> 18) & 0x3FFFFFF8) - 0x904C0000008LL;
        if ( v22 >= v21 )
          MiDeleteSessionPdes(v21, v22);
      }
      v23 = v34;
      if ( v34 )
      {
        MiReturnCommit((__int64)MiSystemPartition, v34 - v29);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 48), -v23);
      }
      v9 = 0LL;
      if ( (v3 & 0x10) != 0 )
        MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v40 = 1;
    }
    v2 = (*(_WORD *)(BugCheckParameter2 + 108))-- == 1;
    if ( v2 )
    {
      if ( !v10 )
        MiDeleteSessionDriverProtos(v8);
      if ( (v3 & 2) != 0 )
      {
        VfDriverUnloadImage(BugCheckParameter2);
        KseDriverUnloadImage(BugCheckParameter2);
      }
      LdrUnloadAlternateResourceModule((PVOID)v6);
      if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), v6, 0xFFFFFFFFLL);
      if ( *(_QWORD *)BugCheckParameter2 && v9 )
        ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
      v37 = 0;
      if ( v9 && (v3 & 1) != 0 )
      {
        MiRememberUnloadedDriver(BugCheckParameter2 + 88, v6, v9 << 12);
        v11 = 0LL;
        if ( v7 )
        {
          v12 = MiSectionControlArea((__int64)v7);
          v11 = (__int64 *)v12;
          if ( *(_QWORD *)BugCheckParameter2 )
          {
            v36[0] = v12;
            MiManageSubsectionView(v36, v5, 4);
          }
        }
        if ( *(char *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) < 0 )
        {
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          {
            inited = MiInitPerfMemoryFlags(0, 6);
            MiLogPerfMemoryRangeEvent(v6, 0LL, inited, (v9 + 511) & 0xFFFFFFFFFFFFFE00uLL);
          }
          MiUnmapLargeDriver(v6, v9);
          v13 = v9;
          v37 = 1;
        }
        else
        {
          if ( v5 )
            MiUnlockDriverCode(BugCheckParameter2);
          qword_14034EA30 = BugCheckParameter2;
          MiDeleteSystemPagableVm(
            (__int64)dword_14034FF40,
            (__int64)v11,
            (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            v9,
            5,
            &v28);
          v13 = v31;
          if ( v11 )
            MiValidateImagePages(v11, (int)&v35, 4, 0xFFFFFFFFLL);
          qword_14034EA30 = 0LL;
          _InterlockedExchangeAdd((_DWORD *)&xmmword_14034EA58 + 3, v28 - v13);
          if ( !v7 )
            MiReleaseDriverPtes(0LL, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v9);
        }
        _InterlockedExchangeAdd(&dword_14034FD18, -v13);
        if ( *(_QWORD *)BugCheckParameter2 )
          MiChargeWsles((__int64)dword_14034FF40, -(__int64)v9, 0);
        v3 = a2;
      }
      if ( v40 == 1 )
      {
        MiReturnSystemImageCommitment(BugCheckParameter2, &v28);
        if ( (v3 & 0x10) != 0 )
          MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
      }
      v14 = *(void **)(BugCheckParameter2 + 136);
      if ( v14 != (void *)1 )
      {
        if ( v14 != (void *)-2LL && ((unsigned __int8)v14 & 1) == 0 )
          ExFreePoolWithTag(v14, 0);
        *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
      }
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        MiProcessLoaderEntry((PVOID *)BugCheckParameter2, 0);
        if ( (PerfGlobalGroupMask & 4) != 0 )
          PerfLogImageUnload(
            (unsigned __int16 *)(BugCheckParameter2 + 72),
            0LL,
            0,
            (void *)v6,
            *(unsigned int *)(BugCheckParameter2 + 64),
            *(_DWORD *)(BugCheckParameter2 + 120),
            *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
            (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
            0);
      }
      v15 = *(void **)(BugCheckParameter2 + 80);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v7 )
      {
        if ( v5 )
        {
          v16 = v5[7];
          if ( v16 )
          {
            MiReturnResidentAvailable(v16);
            _InterlockedExchangeAdd64(&qword_14034FB20, v5[7]);
          }
        }
        v17 = MiSectionControlArea((__int64)v7);
        v19 = v17;
        if ( !v37 && v6 != *(_QWORD *)(*(_QWORD *)v17 + 32LL) )
        {
          MiFreePrivateFixupEntryForSystemImage(v6, 1);
          MiReturnSystemImageAddress(v6, *(unsigned int *)(BugCheckParameter2 + 64));
        }
        MiDereferenceControlArea(v19, v18);
        ObDereferenceObjectDeferDelete(v7);
      }
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
