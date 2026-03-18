/*
 * XREFs of MiUnmapLargeUserPages @ 0x14022FBF4
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 * Callees:
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiUnmapLargeUserPages(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v5; // r10
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 *v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  int v17; // r11d
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  volatile signed __int32 *v20; // r8
  int v21; // eax
  int v22; // r10d
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  unsigned __int64 *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG_PTR v30; // rdi
  unsigned int v31; // r15d
  int v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v36; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v38; // [rsp+44h] [rbp-BCh]
  int v39; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+4Ch] [rbp-B4h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]

  v3 = (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v4 = (((((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 7 )
  {
    v33 = 0;
  }
  else
  {
    v33 = 1;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      v2 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
      v1 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
      MiLogPerfMemoryRangeEvent(
        v1,
        (__int64)KeGetCurrentThread()->ApcState.Process,
        0x1Au,
        (((v2 - v1 + 1) & 0xFFF) != 0) + ((__int64)(v2 - v1 + 1) >> 12));
    }
  }
  v40 = 0;
  v5 = 0xFFFFFFFFFLL;
  v41 = 0LL;
  v6 = 0xFFFFFFFFFLL;
  v42 = 0LL;
  v7 = v3;
  v34 = 0xFFFFFFFFFLL;
  v37 = 1;
  v38 = 0;
  v39 = 20;
  if ( v3 <= v4 )
  {
    v8 = &STACK[0x90482413030];
    v9 = 2040LL;
    v36 = &STACK[0x90482413030];
    v10 = v3 + 0x90482413000LL;
    while ( 1 )
    {
      v11 = *(_QWORD *)v3;
      if ( v10 <= 0x7F8 && (unsigned int)MiPteHasShadow() && (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v13 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      v35 = v11;
      if ( (unsigned __int64)v8 <= v9
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)&v35 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v15 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      v16 = v5 & (v11 >> 12);
      *(_QWORD *)v3 = 0LL;
      if ( v10 <= v9 )
        MiWritePteShadow(v3, 0LL);
      MiInsertTbFlushEntry((__int64)&v37, (__int64)(v3 << 25) >> 16 << 25 >> 16, 1LL, 1);
      v17 = 1;
      if ( v33 != 1 )
      {
        v24 = 0x58000000000LL;
        goto LABEL_41;
      }
      LOBYTE(v18) = 1;
      v19 = (v16 >> 9) & 0x1F;
      v20 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v16 >> 14));
      if ( (unsigned __int64)(v19 + 1) > 0x20 )
      {
        if ( v19 )
        {
          v22 = (v16 >> 9) & 0x1F;
          _InterlockedAnd(v20++, ~(((1 << (32 - v22)) - 1) << v19));
          v18 = 1LL - (unsigned int)(32 - v22);
          if ( v18 >= 0x20 )
          {
            v23 = v18 >> 5;
            v18 += -32LL * (v18 >> 5);
            do
            {
              *v20++ = 0;
              --v23;
            }
            while ( v23 );
          }
          if ( !v18 )
            goto LABEL_39;
        }
        v21 = (1 << v18) - 1;
      }
      else
      {
        v21 = 1 << v19;
      }
      _InterlockedAnd(v20, ~v21);
LABEL_39:
      v24 = 0x58000000000LL;
      v34 = 48 * v16 - 0x58000000000LL;
      *(_QWORD *)v34 = v6;
LABEL_41:
      v25 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v26 = *v25;
      if ( (unsigned __int64)(v25 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && ((unsigned __int8)v26 & (unsigned __int8)v17) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * ((v27 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v29 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      v30 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - v24;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          v31 += v17;
          if ( (v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v31);
            v17 = 1;
          }
        }
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      *(_QWORD *)(v30 + 24) ^= (*(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v30, v17);
      if ( (*(_DWORD *)(v30 + 16) & 0x3FF0000) == 0 )
      {
        MiInsertTbFlushEntry((__int64)&v37, (__int64)(v7 << 25) >> 16, ((__int64)(v3 - v7) >> 3) + 1, 0);
        v7 = v10 - 0x90482412FF8LL;
        MiDeletePageTableHierarchy(&v37, v3);
      }
      v6 = v34;
      v3 += 8LL;
      v8 = v36;
      v10 += 8LL;
      v9 = 2040LL;
      v5 = 0xFFFFFFFFFLL;
      if ( v3 > v4 )
      {
        if ( v7 <= v4 )
          MiInsertTbFlushEntry((__int64)&v37, (__int64)(v7 << 25) >> 16, ((__int64)(v3 - v7 - 8) >> 3) + 1, 0);
        break;
      }
    }
  }
  MiFlushTbList((__int64)&v37);
  return v6;
}
