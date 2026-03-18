/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C000E6D8
 * Callers:
 *     VidSchCreateContext @ 0x1C0067490 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C006FC94 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiIncrementContextReference @ 0x1C0001CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E270 (VidSchiFreeQueuePacket.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C0026054 (Template_pqqqqqqqqppp.c)
 *     VidSchTerminateContext @ 0x1C00410C0 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x1C0066FC0 (VidSchSetPriorityContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // r15
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // r13d
  SIZE_T v18; // rsi
  PVOID v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // r14d
  int v25; // r13d
  PVOID v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // r8d
  bool v34; // zf
  __int128 v35; // xmm1
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // [rsp+88h] [rbp-78h]
  _QWORD v45[4]; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v47[5]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x3E0uLL, 0x68536956u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3E0uLL);
      *(_DWORD *)v8 = 1852785494;
      *(_QWORD *)(v8 + 56) = a3;
      *(_QWORD *)(v8 + 104) = a1;
      *(_QWORD *)(v8 + 80) = KeGetCurrentThread();
      *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
      *(_QWORD *)(v8 + 128) = *((_QWORD *)a2 + 2);
      v9 = (unsigned int)a2[1];
      *(_DWORD *)(v8 + 88) = v9;
      v44 = *(_QWORD *)(v4 + 8 * v9 + 408);
      *(_QWORD *)(v8 + 96) = v44;
      *(_QWORD *)(v8 + 136) = 1LL;
      memset((void *)(v8 + 312), 0, 0x38uLL);
      KeInitializeEvent((PRKEVENT)(v8 + 312), SynchronizationEvent, 0);
      *(_QWORD *)(v8 + 376) = v8 + 368;
      *(_QWORD *)(v8 + 368) = v8 + 368;
      *(_QWORD *)(v8 + 672) = v8 + 664;
      *(_QWORD *)(v8 + 664) = v8 + 664;
      *(_QWORD *)(v8 + 688) = v8 + 680;
      *(_QWORD *)(v8 + 680) = v8 + 680;
      *(_QWORD *)(v8 + 704) = v8 + 696;
      *(_QWORD *)(v8 + 696) = v8 + 696;
      *(_QWORD *)(v8 + 720) = v8 + 712;
      *(_QWORD *)(v8 + 712) = v8 + 712;
      if ( (*a2 & 0x100) != 0 )
      {
        *(_QWORD *)(v8 + 744) = v8 + 736;
        *(_QWORD *)(v8 + 736) = v8 + 736;
      }
      *(_QWORD *)(v8 + 768) = v8 + 760;
      *(_QWORD *)(v8 + 760) = v8 + 760;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1856), &LockHandle);
      if ( *(_BYTE *)(a1 + 988) || *(_BYTE *)(a1 + 989) )
      {
        *(_DWORD *)(v8 + 176) |= 0x100u;
        v10 = (_QWORD *)(v8 + 8);
        v11 = v44 + 2512;
        v12 = *(_QWORD **)(v44 + 2520);
        if ( *v12 != v44 + 2512 )
          __fastfail(3u);
      }
      else
      {
        v10 = (_QWORD *)(v8 + 8);
        v11 = v44 + 2480;
        v12 = *(_QWORD **)(v44 + 2488);
        if ( *v12 != v44 + 2480 )
          __fastfail(3u);
      }
      *v10 = v11;
      v10[1] = v12;
      *v12 = v10;
      *(_QWORD *)(v11 + 8) = v10;
      v13 = *(_QWORD **)(a1 + 72);
      v14 = (_QWORD *)(v8 + 24);
      if ( *v13 != a1 + 64 )
        __fastfail(3u);
      *v14 = a1 + 64;
      *(_QWORD *)(v8 + 32) = v13;
      *v13 = v14;
      *(_QWORD *)(a1 + 72) = v14;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *(_QWORD *)(v8 + 480) = *(_QWORD *)(v4 + 2424);
      *(_QWORD *)(v8 + 488) = *(_QWORD *)(v4 + 2472);
      *(_QWORD *)(v8 + 456) = *(_QWORD *)(v8 + 480);
      KeInitializeTimer((PKTIMER)(v8 + 512));
      KeInitializeDpc((PRKDPC)(v8 + 576), (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, (PVOID)v8);
      *(_BYTE *)(v8 + 897) = 1;
      VidSchiIncrementContextReference(v8);
      *(_BYTE *)(v8 + 897) = 0;
      v15 = *a2;
      if ( (*a2 & 0x204) != 0 )
      {
        if ( (v15 & 1) != 0 )
        {
          memset(v47, 0, 0x48uLL);
          *(_QWORD *)&v47[0] = 0LL;
          v30 = *(unsigned int *)(v8 + 88);
          v31 = *(_QWORD *)(v4 + 8);
          DWORD2(v47[0]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * v30 + 408) + 8LL);
          HIDWORD(v47[0]) = 1 << *(_BYTE *)(*(_QWORD *)(v4 + 8 * v30 + 408) + 6LL);
          LODWORD(v47[1]) = v47[1] & 0xFFFFFFF6 | ((v15 & 4 | (v15 >> 4) & 0x20) >> 2);
          v32 = *(_QWORD *)(a1 + 16);
          LODWORD(v47[1]) ^= (LOBYTE(v47[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 2040LL)
                                                                          + 48LL * *(unsigned __int16 *)(v44 + 6)
                                                                          + 40))) & 4;
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[17])(v31, v32, v47) < 0 )
          {
LABEL_46:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v34 = bTracingEnabled == 0;
          v35 = v47[1];
          v36 = *(_QWORD *)&v47[0];
          *(_OWORD *)(v8 + 904) = v47[0];
          *(_QWORD *)(v8 + 64) = v36;
          v37 = v47[2];
          *(_OWORD *)(v8 + 920) = v35;
          v38 = v47[3];
          *(_OWORD *)(v8 + 936) = v37;
          *(_QWORD *)&v37 = *(_QWORD *)&v47[4];
          *(_OWORD *)(v8 + 952) = v38;
          *(_QWORD *)(v8 + 968) = v37;
          if ( !v34 )
          {
            v40 = *(_QWORD *)(a1 + 8);
            if ( !v40 )
              LODWORD(v40) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              Template_pqqqqqqqqppp(
                v47[3],
                (unsigned int)&EventCreateContext,
                v33,
                v40,
                SBYTE8(v47[0]),
                SBYTE12(v47[0]),
                SBYTE4(v47[2]),
                SBYTE8(v47[2]),
                SBYTE12(v47[2]),
                v47[3],
                SBYTE4(v47[3]),
                (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0)) | 1,
                v8);
          }
        }
        else if ( bTracingEnabled )
        {
          memset(v45, 0, sizeof(v45));
          v41 = *(_QWORD *)(a1 + 8);
          if ( !v41 )
            LODWORD(v41) = a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v42 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v8 + 88) + 408);
            Template_pqqqqqqqqppp(
              HIDWORD(v45[0]),
              (unsigned int)&EventCreateContext,
              v45[0],
              v41,
              *(_WORD *)(v42 + 8),
              1 << *(_BYTE *)(v42 + 6),
              v45[0],
              SBYTE4(v45[0]),
              v45[1],
              SBYTE4(v45[1]),
              v45[2],
              (2 * (((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0) | (2 * (((v15 >> 6) & 1) != 0)))) | 1,
              v8);
          }
        }
      }
      else
      {
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 168);
      }
      if ( (int)VidSchSetPriorityContext(v8, (unsigned int)a2[3], 1LL, (unsigned int)a2[4]) >= 0 )
      {
        v16 = *(_DWORD *)(v4 + 128) * (48 * *(_DWORD *)(v4 + 56) + ((8 * *(_DWORD *)(v4 + 56) + 167) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 56) + 88);
        if ( v16 <= 0x370 )
          v16 = 880;
        v17 = 0;
        v18 = v16;
        do
        {
          v19 = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x68536956u);
          v20 = (__int64)v19;
          if ( !v19 )
          {
            v43 = WdLogNewEntry5_WdWarning();
            WdLogEvent5_WdWarning(v43);
            goto LABEL_46;
          }
          memset(v19, 0, v18);
          VidSchiInterlockedInsertTailList(
            (KSPIN_LOCK *)(v4 + 1864),
            v8 + 760,
            (_QWORD *)(v20 + 8),
            (_DWORD *)(v8 + 776));
          VidSchiFreeQueuePacket(v8, v20, v21, v22);
          ++v17;
        }
        while ( v17 < 5 );
        if ( (*a2 & 0x100) == 0 )
          return v8;
        v24 = a2[5];
        if ( v24 )
        {
          v25 = 0;
          while ( 1 )
          {
            v26 = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x68536956u);
            v27 = (__int64)v26;
            if ( !v26 )
              break;
            memset(v26, 0, v18);
            *(_DWORD *)(v27 + 64) |= 0x40u;
            VidSchiInterlockedInsertTailList(
              (KSPIN_LOCK *)(v4 + 1864),
              v8 + 760,
              (_QWORD *)(v27 + 8),
              (_DWORD *)(v8 + 776));
            VidSchiFreeQueuePacket(v8, v27, v28, v29);
            if ( ++v25 >= v24 )
              return v8;
          }
        }
      }
      goto LABEL_46;
    }
  }
  v39 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v39);
  return 0LL;
}
