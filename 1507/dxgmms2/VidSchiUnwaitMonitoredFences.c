/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C00059CC
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0003F58 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C0004AC8 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0005914 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C0006CC0 (VidSchSubmitWaitFromCpu.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012C90 (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C001D100 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchTimeoutSyncObject @ 0x1C001D4A4 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0006E1C (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00137C4 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     Template_pqXR1PR1q @ 0x1C001420C (Template_pqXR1PR1q.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(unsigned __int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v2; // r15
  _QWORD *v3; // rsi
  _QWORD *v4; // r12
  _QWORD *v5; // r15
  _DWORD *v6; // rbx
  unsigned int v7; // r14d
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _VIDSCH_QUEUE_PACKET *v16; // rbx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  char *v24; // r9
  char *v25; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 v27; // r14
  char *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  char *v32; // [rsp+40h] [rbp-40h]
  char v33; // [rsp+48h] [rbp-38h] BYREF
  int v34; // [rsp+50h] [rbp-30h]
  PVOID P; // [rsp+58h] [rbp-28h]
  char v36; // [rsp+60h] [rbp-20h] BYREF
  int v37; // [rsp+68h] [rbp-18h]

  v1 = (_QWORD *)(a1 + 944);
  v2 = a1;
  v3 = *(_QWORD **)(a1 + 944);
  while ( v3 != v1 )
  {
    v16 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 34);
    v17 = *(v3 - 1);
    v3 = (_QWORD *)*v3;
    v18 = *((_QWORD *)v16 + 36);
    if ( *(_BYTE *)(v17 + 28) )
      goto LABEL_28;
    v19 = *(unsigned __int64 **)(v17 + 56);
    if ( *(_BYTE *)(v17 + 29) )
    {
      a1 = *v19;
      if ( *v19 >= v18 )
        goto LABEL_28;
    }
    else
    {
      a1 = (unsigned int)(*(_DWORD *)v19 - v18);
      if ( *(_DWORD *)v19 - (int)v18 >= 0 )
      {
LABEL_28:
        v20 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v18);
        v20[3] = v17;
        v20[4] = **(_QWORD **)(v17 + 56);
        v20[5] = *((_QWORD *)v16 + 36);
        v20[6] = *(unsigned __int8 *)(v17 + 28);
        WdLogEvent5_WdEvent(v20);
        if ( (*((_DWORD *)v16 + 64) & 4) != 0 )
          VidSchiUnblockUnorderedWaitQueuePacket(v16, 0);
        VidSchiUnwaitWaitQueuePacket(v16, 0LL);
        VidSchiCheckPendingDeviceCommand(*(_QWORD **)(*((_QWORD *)v16 + 10) + 104LL), v21, v22);
      }
    }
  }
  v4 = (_QWORD *)(v2 + 960);
  v5 = *(_QWORD **)(v2 + 960);
LABEL_4:
  while ( v5 != v4 )
  {
    v6 = v5;
    v7 = 0;
    v5 = (_QWORD *)*v5;
    if ( v6[26] )
    {
      do
      {
        v8 = (__int64 *)(*((_QWORD *)v6 + 4) + 16LL * v7);
        v9 = *v8;
        if ( *v8 )
        {
          v10 = v8[1];
          if ( !*(_BYTE *)(v9 + 28) )
          {
            v11 = *(unsigned __int64 **)(v9 + 56);
            if ( *(_BYTE *)(v9 + 29) )
            {
              a1 = *v11;
              if ( *v11 < v10 )
                goto LABEL_10;
            }
            else
            {
              a1 = (unsigned int)(*(_DWORD *)v11 - v10);
              if ( *(_DWORD *)v11 - (int)v10 < 0 )
              {
LABEL_10:
                LOBYTE(a1) = 0;
                if ( (v6[28] & 1) == 0 )
                  goto LABEL_4;
                goto LABEL_14;
              }
            }
          }
          v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v10);
          v12[3] = v9;
          v12[4] = **(_QWORD **)(v9 + 56);
          v12[5] = v8[1];
          v12[6] = *(unsigned __int8 *)(v9 + 28);
          WdLogEvent5_WdEvent(v12);
        }
        LOBYTE(a1) = 1;
        if ( (v6[28] & 1) != 0 )
          goto LABEL_16;
LABEL_14:
        ++v7;
      }
      while ( v7 < v6[26] );
      if ( !(_BYTE)a1 )
        continue;
LABEL_16:
      KeSetEvent(*((PRKEVENT *)v6 + 2), 0, 0);
      if ( bTracingEnabled )
      {
        v23 = (unsigned int)v6[26];
        v24 = 0LL;
        v34 = 0;
        v25 = 0LL;
        v37 = 0;
        v32 = 0LL;
        P = 0LL;
        if ( (unsigned int)v23 > 1 )
        {
          v13 = 0xFFFFFFFFFFFFFFFFuLL % v23;
          if ( 0xFFFFFFFFFFFFFFFFuLL / v23 >= 8 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v23, 0x4B677844u);
            v25 = (char *)P;
            v24 = PoolWithTag;
            v32 = PoolWithTag;
            goto LABEL_37;
          }
          goto LABEL_52;
        }
        v24 = &v33;
        v32 = &v33;
LABEL_37:
        v34 = v23;
        if ( !v24 )
        {
LABEL_52:
          if ( v25 != &v36 && v25 )
          {
            ExFreePoolWithTag(v25, 0);
            v24 = v32;
          }
          if ( v24 != &v33 && v24 )
            ExFreePoolWithTag(v24, 0);
          goto LABEL_17;
        }
        v27 = v23;
        memset(v24, 0, 8 * v23);
        v24 = v32;
        if ( v32 )
        {
          if ( (unsigned int)v23 <= 1 )
          {
            v25 = &v36;
            P = &v36;
LABEL_43:
            v37 = v23;
            if ( !v25 )
              goto LABEL_52;
            memset(v25, 0, 8 * v23);
            v25 = (char *)P;
            if ( !P )
              goto LABEL_58;
            if ( (_DWORD)v23 )
            {
              v30 = 0LL;
              v29 = 0LL;
              do
              {
                v31 = *(_QWORD *)(v29 + *((_QWORD *)v6 + 4));
                v29 += 16LL;
                *(_QWORD *)&v32[v30] = v31;
                *(_QWORD *)((char *)P + v30) = *(_QWORD *)(v29 + *((_QWORD *)v6 + 4) - 8);
                v30 += 8LL;
                --v27;
              }
              while ( v27 );
              v25 = (char *)P;
            }
            LODWORD(v13) = v6[28] & 1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
            {
LABEL_58:
              v24 = v32;
              goto LABEL_52;
            }
            Template_pqXR1PR1q((_DWORD)v25, v13, v29, *((_QWORD *)v6 + 2), v23, (__int64)v25, (__int64)v32, v6[28] & 1);
            v24 = v32;
          }
          else
          {
            v13 = 0xFFFFFFFFFFFFFFFFuLL % v23;
            if ( 0xFFFFFFFFFFFFFFFFuLL / v23 >= 8 )
            {
              v28 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v23, 0x4B677844u);
              v24 = v32;
              v25 = v28;
              P = v28;
              goto LABEL_43;
            }
          }
        }
        v25 = (char *)P;
        goto LABEL_52;
      }
LABEL_17:
      if ( (v6[28] & 2) != 0 )
        ObfDereferenceObject(*((PVOID *)v6 + 2));
      v14 = *(_QWORD *)v6;
      v15 = (_QWORD *)*((_QWORD *)v6 + 1);
      if ( *(_DWORD **)(*(_QWORD *)v6 + 8LL) != v6 || (_DWORD *)*v15 != v6 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      VIDSCH_CPU_WAITER::`scalar deleting destructor'((VIDSCH_CPU_WAITER *)v6, v13);
    }
  }
}
