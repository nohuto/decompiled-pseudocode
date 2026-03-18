/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C000F9D0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0038994 (VidSchiCreateDeviceInternal.c)
 *     VidSchCreateContext @ 0x1C005FA70 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C0069E2C (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C000F82C (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C00101E0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C00221E0 (Template_pqqqqqqqqppp.c)
 *     VidSchSetPriorityContext @ 0x1C003AD60 (VidSchSetPriorityContext.c)
 *     VidSchTerminateContext @ 0x1C003C380 (VidSchTerminateContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // r14
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // esi
  SIZE_T v19; // r15
  PVOID v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r8d
  __int128 v30; // xmm1
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // r9
  bool v36; // zf
  __int64 v37; // rbx
  __int64 v38; // rdx
  _QWORD v39[4]; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v41[5]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x3C0uLL, 0x68536956u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3C0uLL);
      *(_DWORD *)v8 = 1852785494;
      *(_QWORD *)(v8 + 56) = a3;
      *(_QWORD *)(v8 + 104) = a1;
      *(_QWORD *)(v8 + 80) = KeGetCurrentThread();
      *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
      *(_DWORD *)(v8 + 128) = a2[4];
      v9 = a2[1];
      *(_DWORD *)(v8 + 88) = v9;
      v10 = *(_QWORD *)(v4 + 8 * v9 + 376);
      *(_QWORD *)(v8 + 96) = v10;
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
      *(_QWORD *)(v8 + 744) = v8 + 736;
      *(_QWORD *)(v8 + 736) = v8 + 736;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1824), &LockHandle);
      if ( *(_BYTE *)(a1 + 992) || *(_BYTE *)(a1 + 993) )
      {
        *(_DWORD *)(v8 + 176) |= 0x100u;
        v11 = v10 + 2472;
        v12 = *(__int64 **)(v10 + 2480);
        v13 = v8 + 8;
        *(_QWORD *)(v8 + 8) = v10 + 2472;
        *(_QWORD *)(v8 + 16) = v12;
        if ( *v12 != v10 + 2472 )
          __fastfail(3u);
      }
      else
      {
        v11 = v10 + 2440;
        v12 = *(__int64 **)(v10 + 2448);
        v13 = v8 + 8;
        *(_QWORD *)(v8 + 8) = v10 + 2440;
        *(_QWORD *)(v8 + 16) = v12;
        if ( *v12 != v10 + 2440 )
          __fastfail(3u);
      }
      *v12 = v13;
      *(_QWORD *)(v11 + 8) = v13;
      v14 = *(__int64 **)(a1 + 80);
      v15 = v8 + 24;
      *(_QWORD *)(v8 + 24) = a1 + 72;
      *(_QWORD *)(v8 + 32) = v14;
      if ( *v14 != a1 + 72 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(a1 + 80) = v15;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *(_QWORD *)(v8 + 480) = *(_QWORD *)(v4 + 2136);
      *(_QWORD *)(v8 + 488) = *(_QWORD *)(v4 + 2184);
      *(_QWORD *)(v8 + 456) = *(_QWORD *)(v8 + 480);
      KeInitializeTimer((PKTIMER)(v8 + 512));
      KeInitializeDpc((PRKDPC)(v8 + 576), VidSchiDelayReadyRoutine, (PVOID)v8);
      VidSchiIncrementContextReference(v8);
      v16 = *a2;
      if ( (*a2 & 4) != 0 )
      {
        if ( (v16 & 1) != 0 )
        {
          memset(v41, 0, 0x48uLL);
          *(_QWORD *)&v41[0] = 0LL;
          v25 = *(unsigned int *)(v8 + 88);
          v26 = *(_QWORD *)(v4 + 8);
          DWORD2(v41[0]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * v25 + 376) + 8LL);
          HIDWORD(v41[0]) = 1 << *(_BYTE *)(*(_QWORD *)(v4 + 8 * v25 + 376) + 6LL);
          v27 = *(unsigned __int16 *)(v10 + 6);
          LODWORD(v41[1]) |= 1u;
          v28 = *(_QWORD *)(a1 + 16);
          LODWORD(v41[1]) ^= (LOBYTE(v41[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 1904LL)
                                                                          + 48 * v27
                                                                          + 40))) & 4;
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[17])(v26, v28, v41) < 0 )
          {
LABEL_37:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v36 = bTracingEnabled == 0;
          v30 = v41[1];
          v31 = *(_QWORD *)&v41[0];
          *(_OWORD *)(v8 + 872) = v41[0];
          *(_QWORD *)(v8 + 64) = v31;
          v32 = v41[2];
          *(_OWORD *)(v8 + 888) = v30;
          v33 = v41[3];
          *(_OWORD *)(v8 + 904) = v32;
          *(_QWORD *)&v32 = *(_QWORD *)&v41[4];
          *(_OWORD *)(v8 + 920) = v33;
          *(_QWORD *)(v8 + 936) = v32;
          if ( !v36 )
          {
            v35 = *(_QWORD *)(a1 + 8);
            if ( !v35 )
              LODWORD(v35) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              Template_pqqqqqqqqppp(
                v41[3],
                (unsigned int)&EventCreateContext,
                v29,
                v35,
                SBYTE8(v41[0]),
                SBYTE12(v41[0]),
                SBYTE4(v41[2]),
                SBYTE8(v41[2]),
                SBYTE12(v41[2]),
                v41[3],
                SBYTE4(v41[3]),
                (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0)) | 1,
                v8);
          }
        }
        else if ( bTracingEnabled )
        {
          memset(v39, 0, sizeof(v39));
          v36 = ((v16 >> 6) & 1) == 0;
          v37 = *(_QWORD *)(a1 + 8);
          if ( !v37 )
            LODWORD(v37) = a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            v38 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v8 + 88) + 376);
            Template_pqqqqqqqqppp(
              HIDWORD(v39[0]),
              (unsigned int)&EventCreateContext,
              HIDWORD(v39[1]),
              v37,
              *(_WORD *)(v38 + 8),
              1 << *(_BYTE *)(v38 + 6),
              v39[0],
              SBYTE4(v39[0]),
              v39[1],
              SBYTE4(v39[1]),
              v39[2],
              (2 * (((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0) | (2 * !v36))) | 1,
              v8);
          }
        }
      }
      else
      {
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 168);
      }
      if ( (int)VidSchSetPriorityContext(v8, a2[3], 1LL, a2[4]) >= 0 )
      {
        v17 = *(_DWORD *)(v4 + 52) * ((*(_DWORD *)(v4 + 124) << 6) + 8) + 632;
        if ( v17 <= 0x320 )
          v17 = 800;
        v18 = 0;
        v19 = v17;
        while ( 1 )
        {
          v20 = ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x68536956u);
          v21 = (__int64)v20;
          if ( !v20 )
            break;
          memset(v20, 0, v19);
          VidSchiInterlockedInsertTailList(
            (KSPIN_LOCK *)(v4 + 1832),
            v8 + 736,
            (_QWORD *)(v21 + 8),
            (_DWORD *)(v8 + 752));
          VidSchiFreeQueuePacket(v8, v21, v22, v23);
          if ( ++v18 >= 5 )
            return v8;
        }
      }
      goto LABEL_37;
    }
  }
  v34 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v34);
  return 0LL;
}
