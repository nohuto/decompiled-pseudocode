/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x140054C90
 * Callers:
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiUnlockPage @ 0x14017E538 (MiUnlockPage.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

void __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 Process, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r13d
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  ULONG_PTR v20; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v22; // edi
  char v23; // al
  __int64 v24; // r8
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  char v30; // cl
  unsigned int v31; // eax
  unsigned __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0x90482413000LL;
  v3 = a2;
  v4 = Process;
  v5 = Process + 0x90482413000LL;
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    if ( v5 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      a2 = *(_QWORD *)(Process + 1520);
      if ( a2 )
      {
        v7 = *(_QWORD *)(a2 + 8 * ((v4 >> 3) & 0x1FF));
        if ( (v7 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v7 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
    }
    v32 = v6;
    if ( (v6 & 1) != 0 )
    {
      v8 = v6;
      if ( (unsigned __int64)&v32 + v2 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, a2)
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v32 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      v11 = 6;
    }
    else
    {
      if ( (v6 & 0x400) != 0 || (v6 & 0x800) == 0 || !(unsigned int)MiInvalidPteConforms(v6, a2) )
        return;
      v8 = MiReverseSwizzleInvalidPte(v13, v12, v14, v15);
      v11 = 2;
    }
    if ( !(unsigned int)MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL) )
      return;
    v20 = 48 * v17 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v22);
          v18 = 0x8000000000000000uLL;
        }
      }
      while ( (*(_QWORD *)(v20 + 24) & v18) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
      v19 = 0x7FFFFFFFFFLL;
    }
    if ( (v18 | *(_QWORD *)(v20 + 8)) != v4 )
    {
      v16 = 0x200000000000000LL;
      if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0 || v4 + 0x98000000000LL > v19 )
        break;
    }
    v23 = *(_BYTE *)(v20 + 34) & 7;
    if ( v11 == 6 )
    {
      if ( v23 == 6 )
        goto LABEL_50;
      MiUnlockPage(v20, CurrentIrql);
      if ( v4 + v24 > v25 )
        goto LABEL_2;
      Process = (__int64)(v4 << 25) >> 16;
      v26 = Process + v24;
      v2 = 0x90482413000LL;
      if ( v26 > v25 )
      {
        a2 = qword_14034EC70;
        if ( Process >= qword_14034EC70
          && Process < qword_14034EC70 + (qword_14034EC60 << 21)
          && Process + 0x80000000000LL > v25 )
        {
          return;
        }
      }
    }
    else
    {
      if ( (unsigned __int8)(v23 - 2) <= 2u )
      {
        v16 = 0x4000000000000000LL;
        if ( (*(_QWORD *)(v20 + 24) & 0x4000000000000000LL) == 0 )
        {
LABEL_50:
          v27 = *(_QWORD *)v4;
          if ( v5 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v16, v27)
            && (v27 & 1) != 0
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 8 * ((v4 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                v27 |= 0x20uLL;
              if ( (v29 & 0x42) != 0 )
                v27 |= 0x42uLL;
            }
          }
          if ( v6 == v27 )
          {
            v30 = *(_BYTE *)(v20 + 35);
            if ( (v30 & 8) != 0 )
              v31 = 5;
            else
              v31 = v30 & 7;
            if ( v3 != v31 && v3 >= v31 )
            {
              if ( (*(_BYTE *)(v20 + 34) & 7) == 2 )
                MiRelinkStandbyPage(v20, v3, 0x3FEu);
              else
                *(_BYTE *)(v20 + 35) = v30 ^ (v3 ^ v30) & 7;
            }
            break;
          }
        }
      }
      MiUnlockPage(v20, CurrentIrql);
LABEL_2:
      v2 = 0x90482413000LL;
    }
  }
  MiUnlockPage(v20, CurrentIrql);
}
