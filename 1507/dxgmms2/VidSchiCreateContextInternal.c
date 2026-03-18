/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C00062E4
 * Callers:
 *     VidSchCreateContext @ 0x1C00326F0 (VidSchCreateContext.c)
 *     VidSchiCreateDeviceInternal @ 0x1C00382EC (VidSchiCreateDeviceInternal.c)
 *     VidSchCreateSystemDevices @ 0x1C00449B0 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiFreeQueuePacket @ 0x1C0006730 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C0006980 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C001BEDC (Template_pqqqqqqqqppp.c)
 *     VidSchTerminateContext @ 0x1C002E1C0 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x1C00388C0 (VidSchSetPriorityContext.c)
 */

char *__fastcall VidSchiCreateContextInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // r14
  char *PoolWithTag; // rax
  char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  char *v13; // rax
  _QWORD *v14; // rdx
  char *v15; // rcx
  unsigned int v16; // ebx
  char *v17; // r13
  unsigned int v18; // eax
  int v19; // r12d
  SIZE_T v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  char *v23; // rsi
  char **v24; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r8d
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // r9
  bool v37; // zf
  __int64 v38; // rbx
  __int64 v39; // rdx
  SIZE_T v40; // [rsp+88h] [rbp-78h]
  _QWORD v41[4]; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v44[5]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3C0uLL, 0x68536956u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3C0uLL);
      *(_DWORD *)v8 = 1852785494;
      *((_QWORD *)v8 + 7) = a3;
      *((_QWORD *)v8 + 13) = a1;
      *((_QWORD *)v8 + 10) = KeGetCurrentThread();
      *((_OWORD *)v8 + 7) = *(_OWORD *)a2;
      *((_DWORD *)v8 + 32) = a2[4];
      v9 = a2[1];
      *((_DWORD *)v8 + 22) = v9;
      v10 = *(_QWORD *)(v4 + 8 * v9 + 368);
      *((_QWORD *)v8 + 12) = v10;
      *((_QWORD *)v8 + 17) = 1LL;
      memset(v8 + 312, 0, 0x38uLL);
      KeInitializeEvent((PRKEVENT)v8 + 13, SynchronizationEvent, 0);
      *((_QWORD *)v8 + 47) = v8 + 368;
      *((_QWORD *)v8 + 46) = v8 + 368;
      *((_QWORD *)v8 + 84) = v8 + 664;
      *((_QWORD *)v8 + 83) = v8 + 664;
      *((_QWORD *)v8 + 86) = v8 + 680;
      *((_QWORD *)v8 + 85) = v8 + 680;
      *((_QWORD *)v8 + 88) = v8 + 696;
      *((_QWORD *)v8 + 87) = v8 + 696;
      *((_QWORD *)v8 + 90) = v8 + 712;
      *((_QWORD *)v8 + 89) = v8 + 712;
      *((_QWORD *)v8 + 93) = v8 + 736;
      *((_QWORD *)v8 + 92) = v8 + 736;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1872), &LockHandle);
      if ( *(_BYTE *)(a1 + 864) || *(_BYTE *)(a1 + 865) )
      {
        *((_DWORD *)v8 + 44) |= 0x100u;
        v11 = v10 + 2600;
        v12 = *(_QWORD **)(v10 + 2608);
        v13 = v8 + 8;
        *((_QWORD *)v8 + 1) = v10 + 2600;
        *((_QWORD *)v8 + 2) = v12;
        if ( *v12 != v10 + 2600 )
          __fastfail(3u);
      }
      else
      {
        v11 = v10 + 2568;
        v12 = *(_QWORD **)(v10 + 2576);
        v13 = v8 + 8;
        *((_QWORD *)v8 + 1) = v10 + 2568;
        *((_QWORD *)v8 + 2) = v12;
        if ( *v12 != v10 + 2568 )
          __fastfail(3u);
      }
      *v12 = v13;
      *(_QWORD *)(v11 + 8) = v13;
      v14 = *(_QWORD **)(a1 + 80);
      v15 = v8 + 24;
      *((_QWORD *)v8 + 3) = a1 + 72;
      *((_QWORD *)v8 + 4) = v14;
      if ( *v14 != a1 + 72 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(a1 + 80) = v15;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *((_QWORD *)v8 + 60) = *(_QWORD *)(v4 + 2184);
      *((_QWORD *)v8 + 61) = *(_QWORD *)(v4 + 2232);
      *((_QWORD *)v8 + 57) = *((_QWORD *)v8 + 60);
      KeInitializeTimer((PKTIMER)v8 + 8);
      KeInitializeDpc((PRKDPC)v8 + 9, (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, v8);
      VidSchiIncrementContextReference(v8);
      v16 = *a2;
      if ( (*a2 & 4) != 0 )
      {
        if ( (v16 & 1) != 0 )
        {
          memset(v44, 0, 0x48uLL);
          *(_QWORD *)&v44[0] = 0LL;
          v26 = *((unsigned int *)v8 + 22);
          v27 = *(_QWORD *)(v4 + 8);
          DWORD2(v44[0]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * v26 + 368) + 8LL);
          HIDWORD(v44[0]) = 1 << *(_BYTE *)(*(_QWORD *)(v4 + 8 * v26 + 368) + 6LL);
          v28 = *(unsigned __int16 *)(v10 + 6);
          LODWORD(v44[1]) |= 1u;
          v29 = *(_QWORD *)(a1 + 16);
          LODWORD(v44[1]) ^= (LOBYTE(v44[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 1896LL)
                                                                          + 48 * v28
                                                                          + 40))) & 4;
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[17])(v27, v29, v44) < 0 )
          {
LABEL_40:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v37 = bTracingEnabled == 0;
          v31 = v44[1];
          v32 = *(_QWORD *)&v44[0];
          *(_OWORD *)(v8 + 872) = v44[0];
          *((_QWORD *)v8 + 8) = v32;
          v33 = v44[2];
          *(_OWORD *)(v8 + 888) = v31;
          v34 = v44[3];
          *(_OWORD *)(v8 + 904) = v33;
          *(_QWORD *)&v33 = *(_QWORD *)&v44[4];
          *(_OWORD *)(v8 + 920) = v34;
          *((_QWORD *)v8 + 117) = v33;
          if ( !v37 )
          {
            v36 = *(_QWORD *)(a1 + 8);
            if ( !v36 )
              LODWORD(v36) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              Template_pqqqqqqqqppp(
                v44[3],
                (unsigned int)&EventCreateContext,
                v30,
                v36,
                SBYTE8(v44[0]),
                SBYTE12(v44[0]),
                SBYTE4(v44[2]),
                SBYTE8(v44[2]),
                SBYTE12(v44[2]),
                v44[3],
                SBYTE4(v44[3]),
                (2 * ((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) & 0x10) != 0)) | 1,
                (char)v8);
          }
        }
        else if ( bTracingEnabled )
        {
          memset(v41, 0, sizeof(v41));
          v37 = ((v16 >> 6) & 1) == 0;
          v38 = *(_QWORD *)(a1 + 8);
          if ( !v38 )
            LODWORD(v38) = a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            v39 = *(_QWORD *)(v4 + 8LL * *((unsigned int *)v8 + 22) + 368);
            Template_pqqqqqqqqppp(
              HIDWORD(v41[0]),
              (unsigned int)&EventCreateContext,
              HIDWORD(v41[1]),
              v38,
              *(_WORD *)(v39 + 8),
              1 << *(_BYTE *)(v39 + 6),
              v41[0],
              SBYTE4(v41[0]),
              v41[1],
              SBYTE4(v41[1]),
              v41[2],
              (2 * (((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) & 0x10) != 0) | (2 * !v37))) | 1,
              (char)v8);
          }
        }
      }
      else
      {
        *((_QWORD *)v8 + 8) = *(_QWORD *)(a3 + 168);
      }
      if ( (int)VidSchSetPriorityContext(v8, a2[3], 1LL, a2[4]) >= 0 )
      {
        v17 = v8 + 736;
        v18 = *(_DWORD *)(v4 + 52) * (56 * *(_DWORD *)(v4 + 124) + 8) + 632;
        if ( v18 <= 0x320 )
          v18 = 800;
        v19 = 0;
        v20 = v18;
        v40 = v18;
        while ( 1 )
        {
          v21 = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x68536956u);
          v22 = v21;
          if ( !v21 )
            break;
          memset(v21, 0, v20);
          v23 = (char *)(v22 + 1);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1880), &v43);
          v24 = (char **)*((_QWORD *)v8 + 93);
          v22[1] = v17;
          v22[2] = v24;
          if ( *v24 != v17 )
            __fastfail(3u);
          *v24 = v23;
          *((_QWORD *)v8 + 93) = v23;
          if ( v8 != (char *)-752LL )
            ++*((_DWORD *)v8 + 188);
          KeReleaseInStackQueuedSpinLock(&v43);
          VidSchiFreeQueuePacket(v8);
          v20 = v40;
          if ( ++v19 >= 5 )
            return v8;
        }
      }
      goto LABEL_40;
    }
  }
  v35 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v35);
  return 0LL;
}
