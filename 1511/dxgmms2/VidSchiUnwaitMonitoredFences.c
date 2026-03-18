/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000C8B0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000DF90 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000FDC8 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0013EBC (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C0014608 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001EF3C (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00229D0 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013124 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pqXR1PR1q @ 0x1C001FC6C (Template_pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(unsigned __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rsi
  unsigned int **v4; // rbx
  unsigned int *v5; // rdi
  unsigned int *v6; // rsi
  unsigned int v7; // r12d
  __int64 *v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  __int64 v12; // r14
  struct _VIDSCH_QUEUE_PACKET *v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  void **v18; // rax
  unsigned int *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // r14
  char *v22; // r9
  char *v23; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 v25; // r12
  char *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  char *v29; // [rsp+40h] [rbp-40h]
  char v30; // [rsp+48h] [rbp-38h] BYREF
  int v31; // [rsp+50h] [rbp-30h]
  PVOID P; // [rsp+58h] [rbp-28h]
  char v33; // [rsp+60h] [rbp-20h] BYREF
  int v34; // [rsp+68h] [rbp-18h]

  v1 = (_QWORD *)(a1 + 952);
  v2 = a1;
  v3 = *(_QWORD **)(a1 + 952);
  if ( v3 != (_QWORD *)(a1 + 952) )
  {
    while ( 1 )
    {
      v12 = *(v3 - 1);
      v13 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 34);
      v3 = (_QWORD *)*v3;
      v14 = *((_QWORD *)v13 + 36);
      if ( *(_BYTE *)(v12 + 28) )
        break;
      v15 = *(unsigned __int64 **)(v12 + 56);
      if ( *(_BYTE *)(v12 + 29) )
      {
        a1 = *v15;
        if ( *v15 >= v14 )
          break;
      }
      else
      {
        a1 = (unsigned int)(*(_DWORD *)v15 - v14);
        if ( *(_DWORD *)v15 - (int)v14 >= 0 )
          break;
      }
LABEL_14:
      if ( v3 == v1 )
        goto LABEL_2;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v14);
    v20[3] = v12;
    v20[4] = **(_QWORD **)(v12 + 56);
    v20[5] = *((_QWORD *)v13 + 36);
    v20[6] = *(unsigned __int8 *)(v12 + 28);
    WdLogEvent5_WdEvent(v20);
    if ( (*((_DWORD *)v13 + 64) & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v13, 0);
    VidSchiUnwaitWaitQueuePacket(v13, 0LL);
    VidSchiCheckPendingDeviceCommand(*(_QWORD *)(*((_QWORD *)v13 + 10) + 104LL));
    goto LABEL_14;
  }
LABEL_2:
  v4 = (unsigned int **)(v2 + 968);
  v5 = *v4;
  if ( *v4 == (unsigned int *)v4 )
    return;
  do
  {
    v6 = v5;
    v7 = 0;
    v5 = *(unsigned int **)v5;
    if ( !v6[26] )
      continue;
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
            {
LABEL_8:
              LOBYTE(a1) = 0;
              if ( (v6[28] & 1) == 0 )
                goto LABEL_9;
              goto LABEL_18;
            }
          }
          else
          {
            a1 = (unsigned int)(*(_DWORD *)v11 - v10);
            if ( *(_DWORD *)v11 - (int)v10 < 0 )
              goto LABEL_8;
          }
        }
        v16 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v10);
        v16[3] = v9;
        v16[4] = **(_QWORD **)(v9 + 56);
        v16[5] = v8[1];
        v16[6] = *(unsigned __int8 *)(v9 + 28);
        WdLogEvent5_WdEvent(v16);
      }
      LOBYTE(a1) = 1;
      if ( (v6[28] & 1) != 0 )
        goto LABEL_20;
LABEL_18:
      ++v7;
    }
    while ( v7 < v6[26] );
    if ( !(_BYTE)a1 )
      continue;
LABEL_20:
    KeSetEvent(*((PRKEVENT *)v6 + 2), 0, 0);
    if ( bTracingEnabled )
    {
      v21 = v6[26];
      v22 = 0LL;
      v23 = 0LL;
      v29 = 0LL;
      v31 = 0;
      P = 0LL;
      v34 = 0;
      if ( (unsigned int)v21 <= 1 )
      {
        v22 = &v30;
        v29 = &v30;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 8 )
          goto LABEL_53;
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v21, 0x4B677844u);
        v23 = (char *)P;
        v22 = PoolWithTag;
        v29 = PoolWithTag;
      }
      v31 = v21;
      if ( !v22 )
        goto LABEL_53;
      v25 = v21;
      memset(v22, 0, 8 * v21);
      v22 = v29;
      if ( v29 )
      {
        if ( (unsigned int)v21 <= 1 )
        {
          v23 = &v33;
          P = &v33;
          goto LABEL_44;
        }
        if ( 0xFFFFFFFFFFFFFFFFuLL / v21 >= 8 )
        {
          v26 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v21, 0x4B677844u);
          v22 = v29;
          v23 = v26;
          P = v26;
LABEL_44:
          v34 = v21;
          if ( !v23 )
            goto LABEL_53;
          memset(v23, 0, 8 * v21);
          v23 = (char *)P;
          if ( P )
          {
            if ( (_DWORD)v21 )
            {
              v28 = 0LL;
              v27 = 0LL;
              do
              {
                v28 += 8LL;
                v27 += 16LL;
                *(_QWORD *)&v29[v28 - 8] = *(_QWORD *)(v27 + *((_QWORD *)v6 + 4) - 16);
                *(_QWORD *)((char *)P + v28 - 8) = *(_QWORD *)(v27 + *((_QWORD *)v6 + 4) - 8);
                --v25;
              }
              while ( v25 );
              v23 = (char *)P;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            {
              Template_pqXR1PR1q(
                (_DWORD)v23,
                v6[28] & 1,
                v27,
                *((_QWORD *)v6 + 2),
                v21,
                (__int64)v23,
                (__int64)v29,
                v6[28] & 1);
              v22 = v29;
              goto LABEL_52;
            }
          }
          v22 = v29;
LABEL_53:
          if ( v23 != &v33 && v23 )
          {
            ExFreePoolWithTag(v23, 0);
            v22 = v29;
          }
          if ( v22 != &v30 && v22 )
            ExFreePoolWithTag(v22, 0);
          goto LABEL_21;
        }
      }
LABEL_52:
      v23 = (char *)P;
      goto LABEL_53;
    }
LABEL_21:
    if ( (v6[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v6 + 2));
    v17 = *(_QWORD **)v6;
    v18 = (void **)*((_QWORD *)v6 + 1);
    if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || *v18 != v6 )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = v18;
    v19 = (unsigned int *)*((_QWORD *)v6 + 4);
    if ( v19 != v6 + 10 )
    {
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    ExFreePoolWithTag(v6, 0);
LABEL_9:
    ;
  }
  while ( v5 != (unsigned int *)v4 );
}
