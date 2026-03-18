/*
 * XREFs of MiLockTransitionLeafPage @ 0x140082F6C
 * Callers:
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiReplacePageTablePage @ 0x14010F190 (MiReplacePageTablePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x140129CD0 (MiSetProtectionOnTransitionPte.c)
 *     MiGetPageForWriteCluster @ 0x14013B604 (MiGetPageForWriteCluster.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(_KPROCESS *BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 *v2; // r14
  unsigned __int64 p_ReadyListHead; // r12
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v18; // esi

  v2 = (unsigned __int8 *)a2;
  p_ReadyListHead = (unsigned __int64)&BugCheckParameter2[0x32BC88773LL].ReadyListHead;
  v4 = (ULONG_PTR)BugCheckParameter2;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)v4;
      if ( p_ReadyListHead <= 0x7F8
        && (unsigned int)MiPteHasShadow(BugCheckParameter2, a2)
        && (v5 & 1) != 0
        && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( a2 )
        {
          v6 = *(_QWORD *)(a2 + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v6 & 0x20) != 0 )
            v5 |= 0x20uLL;
          if ( (v6 & 0x42) != 0 )
            v5 |= 0x42uLL;
        }
      }
      if ( (unsigned __int64)v2 > 1 && ((v5 & 1) != 0 || (v5 & 0x400) != 0) || (v5 & 0x800) == 0 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(v5, a2) )
      {
        v9 = MiReverseSwizzleInvalidPte(BugCheckParameter2, a2, v7, v8);
        if ( (unsigned int)MI_IS_PFN((v9 >> 12) & 0xFFFFFFFFFLL) )
          break;
      }
    }
    v11 = 48 * v10 - 0x58000000000LL;
    if ( (unsigned __int64)v2 <= 1 )
    {
      if ( v2 == (unsigned __int8 *)1 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          return 0LL;
      }
      else
      {
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v18);
          }
          while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0 );
        }
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v13 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        BugCheckParameter2 = (_KPROCESS *)0x8000000000000000LL;
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v13);
            BugCheckParameter2 = (_KPROCESS *)0x8000000000000000LL;
          }
        }
        while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
      }
      *v2 = CurrentIrql;
    }
    a2 = *(_QWORD *)v4;
    if ( p_ReadyListHead <= 0x7F8
      && (unsigned int)MiPteHasShadow(BugCheckParameter2, a2)
      && (a2 & 1) != 0
      && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
    {
      BugCheckParameter2 = KeGetCurrentThread()->ApcState.Process;
      v14 = *(_QWORD *)&BugCheckParameter2[2].ProcessLock;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8 * ((v4 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          a2 |= 0x20uLL;
        if ( (v15 & 0x42) != 0 )
          a2 |= 0x42uLL;
      }
    }
    if ( a2 == v5 )
      break;
    if ( (unsigned __int64)v2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v16 = *v2;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v16);
    }
  }
  if ( (unsigned __int64)v2 <= 1 && (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != v4 )
    KeBugCheckEx(0x1Au, 0x411uLL, v4, v5, *(_QWORD *)(v11 + 8));
  return v11;
}
