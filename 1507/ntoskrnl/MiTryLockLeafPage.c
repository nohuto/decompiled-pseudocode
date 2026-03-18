/*
 * XREFs of MiTryLockLeafPage @ 0x1400E2750
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400E2554 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiTryLockLeafPage(_KPROCESS *Process, __int64 a2)
{
  _KPROCESS *v2; // r11
  unsigned __int64 p_ReadyListHead; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r11
  __int64 v6; // rax
  unsigned __int64 v7; // r10
  char v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = Process;
  p_ReadyListHead = (unsigned __int64)&Process[0x32BC88773LL].ReadyListHead;
  while ( 1 )
  {
    v4 = *(_QWORD *)&v2->Header.Lock;
    if ( p_ReadyListHead <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      a2 = *(_QWORD *)&Process[2].ProcessLock;
      if ( a2 )
      {
        v6 = *(_QWORD *)(a2 + 8 * ((v5 >> 3) & 0x1FF));
        if ( (v6 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v6 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    v19 = v4;
    if ( (v4 & 1) != 0 )
    {
      v7 = v4;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, a2)
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v19 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
      }
      goto LABEL_26;
    }
    if ( (v4 & 0x400) != 0 || (v4 & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(v4, a2) )
    {
      v7 = MiReverseSwizzleInvalidPte(Process, a2, v11, v12);
LABEL_26:
      if ( MI_IS_PFN((v7 >> 12) & 0xFFFFFFFFFLL) )
      {
        v15 = 48 * v14 - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          return 0LL;
        a2 = *(_QWORD *)&v2->Header.Lock;
        if ( p_ReadyListHead <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, a2)
          && (a2 & 1) != 0
          && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v16 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)v2 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              a2 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              a2 |= 0x42uLL;
          }
        }
        if ( a2 == v13 )
          return v15;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
}
