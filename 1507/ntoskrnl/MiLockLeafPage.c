/*
 * XREFs of MiLockLeafPage @ 0x140037DE0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplacePageOfProtoPool @ 0x140037690 (MiReplacePageOfProtoPool.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiMakeImageReadOnly @ 0x14011B188 (MiMakeImageReadOnly.c)
 *     MiIsSubsectionClean @ 0x140211890 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, unsigned __int64 a2)
{
  int v3; // r15d
  __int64 v4; // r10
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v4 = 0xFFFFFFFFFLL;
  v5 = (unsigned __int64)(a1 + 0x12090482600LL);
  while ( 1 )
  {
    v6 = *a1;
    if ( v5 <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( a2 )
      {
        v7 = *(_QWORD *)(a2 + 8 * (((unsigned __int64)a1 >> 3) & 0x1FF));
        if ( (v7 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v7 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
    }
    v22 = v6;
    if ( (v6 & 1) != 0 )
    {
      v8 = v6;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v22 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      goto LABEL_26;
    }
    if ( (v6 & 0x400) != 0 || (v6 & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(v6, a2) )
    {
      v8 = MiReverseSwizzleInvalidPte(v6, a2, v11, v12);
LABEL_26:
      v13 = MI_IS_PFN(v4 & (v8 >> 12));
      v16 = 0x90482413000LL;
      if ( v13 )
      {
        v17 = 0;
        v18 = 48 * v14 - v15;
        if ( v3 )
        {
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            goto LABEL_44;
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v17);
          }
          while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
        }
        else
        {
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            goto LABEL_44;
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v17);
          }
          while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
        }
        v4 = 0xFFFFFFFFFLL;
LABEL_44:
        a2 = *a1;
        if ( v5 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v16, a2)
          && (a2 & 1) != 0
          && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
        {
          v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)a1 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              a2 |= 0x20uLL;
            if ( (v20 & 0x42) != 0 )
              a2 |= 0x42uLL;
          }
        }
        if ( a2 == v6 )
          return v18;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
}
