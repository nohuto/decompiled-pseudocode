/*
 * XREFs of MiClearNonPagedPtes @ 0x140065600
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140220498 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r9
  __int64 v4; // rsi
  unsigned __int64 Process; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned int v21; // esi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rbx
  __int64 updated; // rax
  unsigned __int64 v30; // r8
  signed __int32 v32[8]; // [rsp+0h] [rbp-168h] BYREF
  unsigned int v33; // [rsp+20h] [rbp-148h]
  __int64 v34; // [rsp+28h] [rbp-140h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-138h]
  int v36; // [rsp+38h] [rbp-130h]
  unsigned __int64 v37; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-120h]
  __int64 v39; // [rsp+50h] [rbp-118h]
  unsigned __int64 v40; // [rsp+58h] [rbp-110h]
  int v41; // [rsp+60h] [rbp-108h] BYREF
  __int16 v42; // [rsp+64h] [rbp-104h]
  __int64 v43; // [rsp+68h] [rbp-100h]
  __int64 v44; // [rsp+70h] [rbp-F8h]
  __int64 v45; // [rsp+78h] [rbp-F0h]

  v40 = a2;
  v39 = 0LL;
  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = 20LL;
  v41 = 0;
  v44 = 0LL;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v45 = 0LL;
  v4 = 0LL;
  v38 = v3;
  Process = 1LL;
  v36 = MmProtectFreedNonPagedPool;
  v6 = a2;
  v42 = 0;
  v7 = 0LL;
  v33 = 1;
  v35 = 0LL;
  if ( a2 )
  {
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      if ( (_DWORD)Process != 1 && (v2 & 0xFFF) != 0 )
        goto LABEL_22;
      if ( !(_DWORD)Process )
      {
        v3 += 8LL;
        v38 = v3;
      }
      a2 = *(_QWORD *)v3;
      v33 = 0;
      if ( v3 + 0x90482413000LL <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(Process, a2) && (a2 & 1) != 0 && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v9 = *(_QWORD *)(Process + 1520);
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              a2 |= 0x20uLL;
            if ( (v10 & 0x42) != 0 )
              a2 |= 0x42uLL;
          }
        }
        v7 = v35;
      }
      if ( (a2 & 0x80u) == 0LL )
      {
LABEL_22:
        v12 = v2 + 0x90482413000LL;
        while ( 1 )
        {
          v13 = *(_QWORD *)v2;
          if ( v12 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, a2)
            && (v13 & 1) != 0
            && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v14 = *(_QWORD *)(Process + 1520);
            if ( v14 )
            {
              v15 = *(_QWORD *)(v14 + 8 * ((v2 >> 3) & 0x1FF));
              if ( (v15 & 0x20) != 0 )
                v13 |= 0x20uLL;
              if ( (v15 & 0x42) != 0 )
                v13 |= 0x42uLL;
            }
          }
          v37 = v13;
          v16 = v13;
          if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v13)
            && (v13 & 1) != 0
            && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v17 = *(_QWORD *)(Process + 1520);
            if ( v17 )
            {
              v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v37 >> 3) & 0x1FF));
              if ( (v18 & 0x20) != 0 )
                v16 |= 0x20uLL;
              if ( (v18 & 0x42) != 0 )
                v16 |= 0x42uLL;
            }
          }
          v19 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v21 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            Process = 0x8000000000000000uLL;
            do
            {
              if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v21);
                Process = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
            v8 = 0x7FFFFFFFFFFFFFFFLL;
          }
          a2 = *(_QWORD *)v2;
          if ( v12 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, a2)
            && (a2 & 1) != 0
            && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v22 = *(_QWORD *)(Process + 1520);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 8 * ((v2 >> 3) & 0x1FF));
              if ( (v23 & 0x20) != 0 )
                a2 |= 0x20uLL;
              if ( (v23 & 0x42) != 0 )
                a2 |= 0x42uLL;
            }
          }
          if ( v13 == a2 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), v8);
          __writecr8(CurrentIrql);
        }
        v24 = *(_QWORD *)v2;
        if ( v12 <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v24)
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 8 * ((v2 >> 3) & 0x1FF));
            if ( (v26 & 0x20) != 0 )
              v24 |= 0x20uLL;
            if ( (v26 & 0x42) != 0 )
              v24 |= 0x42uLL;
          }
        }
        v4 = v19;
        v27 = *(_BYTE *)(v19 + 34) & 0xFD;
        v34 = v24;
        *(_BYTE *)(v19 + 34) = v27 | 5;
        *(_QWORD *)v19 = v39;
        *(_QWORD *)v2 = 0LL;
        v39 = v19;
        if ( v12 <= 0x7F8 )
          MiWritePteShadow(v2, 0LL);
        if ( CurrentIrql != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        v28 = 0LL;
        v34 = 0LL;
        if ( !v36 )
        {
          _InterlockedOr(v32, 0);
          updated = MiUpdatePageFileHighInPte(0LL, (unsigned int)KiTbFlushTimeStamp);
          v34 = updated;
          if ( v30 <= 0x7F8 )
            MiWritePteShadow(&v34, updated);
          v28 = v34;
          *(_QWORD *)v2 = v34;
          if ( v12 <= 0x7F8 )
            MiWritePteShadow(v2, v28);
        }
        if ( !MiGetPteTimeStamp(v28) )
          MiInsertTbFlushEntry(&v41, (__int64)(v2 << 25) >> 16, 1LL, 0LL);
        v3 = v38;
        v7 = v35 + 1;
        v6 = v40;
        v2 += 8LL;
        v8 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v11 = (4096 - (v2 & 0xFFF)) >> 3;
        if ( v7 + v11 > v6 )
          v11 = (unsigned int)(v6 - v7);
        v2 += 8 * v11;
        v7 += (unsigned int)v11;
      }
      Process = v33;
      v35 = v7;
    }
    while ( v7 < v6 );
  }
  MiFlushTbList(&v41);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && v4 )
    MiLogNonPagedPoolReleaseEvent(v4);
  return v4;
}
