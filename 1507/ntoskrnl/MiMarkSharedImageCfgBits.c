/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x14003A5B0
 * Callers:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiGetControlAreaCfg @ 0x14002D808 (MiGetControlAreaCfg.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiIsCfgBitMapPageShared @ 0x14003A868 (MiIsCfgBitMapPageShared.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiLockNestedVad @ 0x140533E1C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14053BDD0 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // r13
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int16 *v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v12; // ett
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdi
  int IsCfgBitMapPageShared; // eax
  int v16; // esi
  __int64 v17; // rsi
  int v18; // ebp
  signed __int32 v19; // ett
  unsigned int v21; // r12d
  unsigned int v22; // esi
  signed __int32 v23; // ett
  unsigned __int64 v24; // [rsp+40h] [rbp-88h]
  unsigned __int64 v25; // [rsp+48h] [rbp-80h]
  _BYTE v26[8]; // [rsp+58h] [rbp-70h] BYREF
  _KPROCESS *v27; // [rsp+60h] [rbp-68h]
  _BYTE v28[8]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v29; // [rsp+70h] [rbp-58h] BYREF
  int v30; // [rsp+78h] [rbp-50h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = **(_QWORD **)(a2 + 72);
  v27 = Process;
  MiGetControlAreaCfg(v3);
  v5 = *(unsigned int *)(v4 + 24);
  v7 = v6[2];
  v8 = *v6 + ((2 * (((v5 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 8) & 0xFFFFFFFFFFFFFFFLL)) >> 3);
  v24 = v8;
  v9 = (2
      * (((((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) + 1) << 12)
        - ((v5 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12)) >> 4)) >> 3;
  MiLockNestedVad(v7);
  if ( *(int *)(v7 + 48) < 0 )
  {
    MiUnlockNestedVad(v7);
    return 3221225738LL;
  }
  else
  {
    v10 = &Process[1].IdealNode[8];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
    }
    else
    {
      _m_prefetchw(v10);
      v12 = *(_DWORD *)v10 & 0x7FFFFFFF;
      if ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v10, v12 + 1, v12) )
        ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    }
    v25 = v8 + v9;
    v13 = (v8 + v9) | 0xFFF;
    v29 = 0LL;
    v14 = v8 & 0xFFFFFFFFFFFFF000uLL;
    v30 = 0;
    if ( (v8 & 0xFFFFFFFFFFFFF000uLL) <= (v25 | 0xFFF) )
    {
      do
      {
        IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v14, v7, CurrentIrql);
        v16 = IsCfgBitMapPageShared;
        if ( IsCfgBitMapPageShared != 1 )
        {
          if ( (unsigned int)(IsCfgBitMapPageShared - 2) > 1 )
          {
            if ( v14 >= v8 )
              v21 = 0;
            else
              v21 = v8 - v14;
            if ( v14 + 4096 <= v25 )
            {
              v22 = 4096 - v21;
            }
            else
            {
              v22 = v25 - v14 - v21;
              if ( (_DWORD)v25 - (_DWORD)v14 == v21 )
                break;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)v10, 0xBFFFFFFF);
              _InterlockedDecrement((volatile signed __int32 *)v10);
            }
            __writecr8(CurrentIrql);
            v18 = MiCopyToCfgBitMap((void *)(v14 + v21), (__int64)&v29, v22, 0);
            if ( v18 < 0 )
              goto LABEL_20;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10);
            }
            else
            {
              _m_prefetchw(v10);
              v23 = *(_DWORD *)v10 & 0x7FFFFFFF;
              if ( v23 != _InterlockedCompareExchange((volatile signed __int32 *)v10, v23 + 1, v23) )
                ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)v10);
            }
            v8 = v24;
            LODWORD(Process) = (_DWORD)v27;
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)v10, 0xBFFFFFFF);
              _InterlockedDecrement((volatile signed __int32 *)v10);
            }
            __writecr8(CurrentIrql);
            if ( v16 == 3 )
            {
              v17 = v14 | 0x1FFFFF;
              if ( (v14 | 0x1FFFFF) > v13 )
                v17 = v13;
            }
            else
            {
              v17 = v14 | 0xFFF;
            }
            v18 = MiSetProtectionOnSection((_DWORD)Process, v7, v14, v17, 2, 0, (__int64)v26, (__int64)v28);
            if ( v18 < 0 )
              goto LABEL_20;
            v14 = v17 - 4095;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10);
            }
            else
            {
              _m_prefetchw(v10);
              v19 = *(_DWORD *)v10 & 0x7FFFFFFF;
              if ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)v10, v19 + 1, v19) )
                ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)v10);
            }
          }
        }
        v14 += 4096LL;
      }
      while ( v14 <= v13 );
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)v10, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)v10);
    }
    __writecr8(CurrentIrql);
    v18 = 0;
LABEL_20:
    MiUnlockNestedVad(v7);
    return (unsigned int)v18;
  }
}
