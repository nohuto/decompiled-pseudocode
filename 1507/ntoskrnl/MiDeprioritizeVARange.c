/*
 * XREFs of MiDeprioritizeVARange @ 0x140126B74
 * Callers:
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

char __fastcall MiDeprioritizeVARange(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v6; // r13
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  signed __int32 i; // edx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r9
  __int64 v15; // r14
  ULONG_PTR v16; // r14
  __int64 v17; // rdx
  char v18; // al
  unsigned int v19; // ebp
  unsigned __int64 Wsle; // rax
  __int64 v21; // r8
  unsigned __int64 v23; // [rsp+20h] [rbp-108h]
  int v24; // [rsp+28h] [rbp-100h]
  unsigned int v25; // [rsp+2Ch] [rbp-FCh]
  char v26; // [rsp+30h] [rbp-F8h]
  __int64 v27; // [rsp+38h] [rbp-F0h]
  unsigned int v28[40]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = 0;
  v28[0] = 0;
  v25 = a4 & 7;
  v24 = dword_14034F248;
  v6 = 0LL;
  v27 = *(_QWORD *)(a3 + 184);
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = v8 + 8 * a2;
  if ( (a4 & 0x10) != 0 )
  {
    CurrentIrql = 17;
    v26 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v26 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a3);
    }
    else
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)a3, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a3);
      for ( i = *(_DWORD *)a3; (*(_DWORD *)a3 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)a3 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a3, i | 0x40000000, i);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
      v4 = v28[0];
    }
  }
  LOBYTE(PteShadow) = MiIsAddressValid(v8);
  if ( !(_BYTE)PteShadow )
    v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v8 < v12 )
  {
    v13 = v8 + 0x90482413000LL;
    v14 = 0x8000000000000000uLL;
    do
    {
      if ( (v8 & 0xFFF) != 0 || (LOBYTE(PteShadow) = MiIsAddressValid(v8), (_BYTE)PteShadow) )
      {
        PteShadow = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 1) != 0 )
        {
          if ( v13 <= 0x7F8 )
          {
            PteShadow = MiReadPteShadow(v8, *(_QWORD *)v8);
            v12 = v23;
          }
          v15 = 3 * ((PteShadow >> 12) & 0xFFFFFFFFFLL);
          LOBYTE(PteShadow) = 0;
          v16 = 16 * v15 - 0x58000000000LL;
          if ( *(_QWORD *)v16 )
          {
            LOBYTE(PteShadow) = *(_BYTE *)(v16 + 35);
            if ( (PteShadow & 8) == 0 )
            {
              v17 = *(_QWORD *)(v16 + 8);
              if ( (v17 & v14) == 0 )
              {
                MiDemoteCombinedPte(v8, v14 | v17);
                v14 = 0x8000000000000000uLL;
              }
              v18 = *(_BYTE *)(v16 + 35);
              if ( (v18 & 8) != 0 )
                LODWORD(PteShadow) = 5;
              else
                LODWORD(PteShadow) = v18 & 7;
              if ( (a4 & 8) == 0 && v25 != (_DWORD)PteShadow )
              {
                v19 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    {
                      _mm_pause();
                    }
                    else
                    {
                      HvlNotifyLongSpinWait(v19);
                      v14 = 0x8000000000000000uLL;
                    }
                  }
                  while ( (*(_QWORD *)(v16 + 24) & v14) != 0 );
                }
                MiUpdatePfnPriority(v16, v25, 1);
                LOBYTE(PteShadow) = -1;
                _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v4 = v28[0];
              }
              if ( (a4 & 0x20) != 0 )
              {
                PteShadow = *(_QWORD *)(a3 + 184);
                if ( v6 >= *(_QWORD *)(PteShadow + 8) )
                {
                  Wsle = MiLocateWsle((__int64)(v8 << 25) >> 16, a3, *(_QWORD *)v16);
                  v6 = Wsle;
                  if ( v24
                    && (*(_BYTE *)v8 & 0x20) != 0
                    && (*(_DWORD *)(Wsle * *(unsigned int *)(v27 + 64) + *(_QWORD *)(v27 + 496)) & 0xE00LL) != 0xE00 )
                  {
                    MiLogPageAccess(a3, v8, v21);
                  }
                  LOBYTE(PteShadow) = v4;
                  *(_QWORD *)&v28[2 * v4 + 2] = v6;
                  v4 = v28[0] + 1;
                  v28[0] = v4;
                  if ( v4 == 19 )
                  {
                    LOBYTE(PteShadow) = MiFreeWsleList(a3, v28, 0);
                    v4 = 0;
                    v28[0] = 0;
                  }
                }
              }
              v12 = v23;
              v14 = 0x8000000000000000uLL;
            }
          }
        }
      }
      else
      {
        v8 += 4088LL;
        v13 += 4088LL;
      }
      v8 += 8LL;
      v13 += 8LL;
    }
    while ( v8 < v12 );
    CurrentIrql = v26;
    if ( v4 )
      LOBYTE(PteShadow) = MiFreeWsleList(a3, v28, 0);
  }
  if ( CurrentIrql != 17 )
    LOBYTE(PteShadow) = MiUnlockWorkingSetExclusive(a3, CurrentIrql);
  return PteShadow;
}
