/*
 * XREFs of MiWalkVaRange @ 0x14007F5DC
 * Callers:
 *     MiResetVirtualMemory @ 0x14012B0A4 (MiResetVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404FBD58 (MiSetPriorityVaRanges.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeProtoLeafValid @ 0x140224CAC (MiMakeProtoLeafValid.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // r15
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v11; // ebx
  signed __int32 v12; // edx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 NextPageTable; // rbx
  int v17; // eax
  ULONG_PTR ProtoPteAddress; // r14
  int v19; // r12d
  volatile __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 ProtoLeafValid; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG_PTR v29; // r8
  int v30; // eax
  __int64 v31; // rbx
  int v32; // ebx
  __int64 v33; // rdx
  unsigned __int8 v34; // r14
  unsigned int v35; // ebx
  signed __int32 i; // edx
  __int64 v37; // rdx
  unsigned int v38; // ebx
  signed __int32 v39; // edx
  __int64 v40; // rdx
  char v42[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  int v45; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v46; // [rsp+58h] [rbp-A8h]
  unsigned int v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-98h]
  _BYTE v50[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+90h] [rbp-70h] BYREF
  __int16 v55; // [rsp+94h] [rbp-6Ch]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]

  v56 = 20LL;
  v54 = 1;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = a3;
  v6 = a3;
  v47 = a4;
  v42[0] = 17;
  v55 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v43 = 0;
  v46 = 0LL;
  v49 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    while ( 1 )
    {
      v12 = *v9;
      if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v12 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, v12 | 0x40000000, v12);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  v13 = v49;
  if ( v5 <= v49 )
  {
    while ( 1 )
    {
      LOBYTE(a4) = CurrentIrql;
      NextPageTable = MiGetNextPageTable(v5, v13, (unsigned __int64)&v54, a4, 1, &v48);
      v17 = 1;
      v45 = 1;
      if ( NextPageTable != v5 )
      {
        if ( (*(_DWORD *)(v6 + 48) & 0x8000) == 0
          && *(_QWORD *)(v6 + 80)
          && MiGetProtoPteAddress(v6, (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12, 1LL, v50) )
        {
          v17 = 0;
          v45 = 0;
        }
        else
        {
          v7 = -1073740748;
          v43 = -1073740748;
          if ( !NextPageTable )
            break;
          v17 = v45;
          v5 = NextPageTable;
        }
      }
      if ( v48 == 1 )
      {
        v5 += 4096LL;
        goto LABEL_119;
      }
      while ( 1 )
      {
        ProtoPteAddress = 0LL;
        v19 = 0;
        if ( !v17 )
          goto LABEL_124;
        v20 = *(_QWORD *)v5;
        if ( v5 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(v15, v14)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v14 )
          {
            v21 = *(_QWORD *)(v14 + 8 * ((v5 >> 3) & 0x1FF));
            if ( (v21 & 0x20) != 0 )
              v20 |= 0x20uLL;
            if ( (v21 & 0x42) != 0 )
              v20 |= 0x42uLL;
          }
        }
        if ( !v20 )
        {
LABEL_124:
          if ( (*(_DWORD *)(v44 + 48) & 0x8000) == 0 && *(_QWORD *)(v44 + 80) )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v44, (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12, 1LL, v50);
            if ( ProtoPteAddress )
              goto LABEL_58;
            if ( !v45 )
            {
              v19 = 1;
              v5 -= 8LL;
              goto LABEL_68;
            }
          }
          goto LABEL_69;
        }
        if ( (v20 & 1) != 0 || (v20 & 0x400) == 0 )
          goto LABEL_69;
        if ( v47 == 2 && !(unsigned int)MiIsPrototypePteVadLookup(v20) && (v20 & 0x800) != 0 )
        {
          ProtoPteAddress = MiGetPrototypePteDirect(v20, v22, v23, v24);
          goto LABEL_57;
        }
        if ( (unsigned int)MiIsPrototypePteVadLookup(v20) || (v20 & 0x800) == 0 )
        {
          if ( v5 == 0xFFFFF680003FFF00uLL && (HIDWORD(Process[2].ReadyListHead.Blink) & 1) == 0 )
          {
LABEL_50:
            v43 = -1073740748;
LABEL_68:
            v6 = v44;
            goto LABEL_81;
          }
          if ( (*(_DWORD *)(v44 + 48) & 0x8000) != 0 || !*(_QWORD *)(v44 + 80) )
          {
LABEL_56:
            ProtoPteAddress = MiGetPrototypePteDirect(v20, v14, v25, a4);
            if ( (_DWORD)v14 != 2 )
              goto LABEL_50;
          }
          else
          {
            ProtoPteAddress = MiGetProtoPteAddress(v44, (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12, 1LL, v50);
            if ( !(unsigned int)MiIsPrototypePteVadLookup(v20)
              && ProtoPteAddress != MiGetPrototypePteDirect(v20, v14, v27, v28) )
            {
              v14 = v47;
              goto LABEL_56;
            }
          }
LABEL_57:
          if ( ProtoPteAddress )
          {
LABEL_58:
            if ( ((v46 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            {
              if ( v8 )
              {
                LOBYTE(v14) = v42[0];
                MiUnlockProtoPoolPage(v8, v14);
                v46 = 0LL;
              }
              v8 = MiLockProtoPoolPage(ProtoPteAddress, v42);
              if ( !v8 )
              {
                MiFlushTbList(&v54);
                LOBYTE(v33) = CurrentIrql;
                MiUnlockWorkingSetExclusive(v9, v33);
                MmAccessFault(2uLL, ProtoPteAddress);
                v34 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
                {
                  v35 = 0;
                  if ( _interlockedbittestandset(v9, 0x1Fu) )
                    v35 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
                  for ( i = *v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *v9 )
                  {
                    if ( (i & 0x40000000) == 0 )
                      _InterlockedCompareExchange(v9, i | 0x40000000, i);
                    if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v35);
                  }
                  goto LABEL_118;
                }
LABEL_107:
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
LABEL_118:
                CurrentIrql = v34;
                v6 = v44;
                goto LABEL_119;
              }
              v46 = ProtoPteAddress;
            }
            goto LABEL_71;
          }
LABEL_69:
          if ( v8 )
          {
            LOBYTE(v14) = v42[0];
            MiUnlockProtoPoolPage(v8, v14);
            v8 = 0LL;
            v46 = 0LL;
          }
LABEL_71:
          v29 = ProtoPteAddress;
          v6 = v44;
          v30 = MiActOnPte(v44, v5, v29, v47, a5, &v52, &v51);
          if ( v30 )
          {
            if ( v30 == 274 )
            {
              v19 = 1;
              MiInsertTbFlushEntry(&v54, (__int64)(v5 << 25) >> 16, 1LL, 0LL);
              MiFlushTbList(&v54);
              MiCopyOnWriteEx((__int64)(v5 << 25) >> 16, (volatile __int64 *)v5, -1LL, CurrentIrql, 0);
              v5 -= 8LL;
            }
            else if ( v30 == -1073741791 )
            {
              MiInsertTbFlushEntry(&v54, (__int64)(v5 << 25) >> 16, 1LL, 0LL);
            }
            else
            {
              v43 = v30;
            }
          }
          v31 = v51;
          if ( v51 )
          {
            if ( v8 )
            {
              LOBYTE(v14) = v42[0];
              MiUnlockProtoPoolPage(v8, v14);
              v8 = 0LL;
              v46 = 0LL;
            }
            MiReleasePageFileInfo(v52, v31, 1LL);
          }
          goto LABEL_81;
        }
        if ( (_DWORD)v14 == 1 )
          goto LABEL_50;
        if ( v8 )
        {
          LOBYTE(v14) = v42[0];
          MiUnlockProtoPoolPage(v8, v14);
          v8 = 0LL;
          v46 = 0LL;
        }
        MiFlushTbList(&v54);
        ProtoLeafValid = MiMakeProtoLeafValid(v5);
        v6 = v44;
        if ( ProtoLeafValid == v5 )
          v5 -= 8LL;
        else
          v43 = -1073740748;
LABEL_81:
        v5 += 8LL;
        v32 = 0;
        if ( v19 == 1 || v5 > v49 || (v5 & 0xFFF) == 0 )
          v32 = 1;
        if ( (v5 & 0x78) == 0 && (*v9 & 0x40000000) != 0 || KeShouldYieldProcessor() )
          v32 |= 2u;
        if ( v32 )
          break;
        v17 = v45;
      }
      if ( v8 )
      {
        LOBYTE(v14) = v42[0];
        MiUnlockProtoPoolPage(v8, v14);
        v8 = 0LL;
        v46 = 0LL;
      }
      if ( (v32 & 2) != 0 )
      {
        MiFlushTbList(&v54);
        LOBYTE(v37) = CurrentIrql;
        MiUnlockWorkingSetExclusive(v9, v37);
        v34 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          goto LABEL_107;
        v38 = 0;
        if ( _interlockedbittestandset(v9, 0x1Fu) )
          v38 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
        while ( 1 )
        {
          v39 = *v9;
          if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v39 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v9, v39 | 0x40000000, v39);
          if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v38);
        }
        goto LABEL_118;
      }
LABEL_119:
      v13 = v49;
      if ( v5 > v49 )
      {
        v7 = v43;
        break;
      }
    }
  }
  MiFlushTbList(&v54);
  LOBYTE(v40) = CurrentIrql;
  MiUnlockWorkingSetExclusive(v9, v40);
  return v7;
}
