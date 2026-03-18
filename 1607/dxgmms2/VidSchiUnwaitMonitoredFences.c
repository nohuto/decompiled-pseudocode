/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000B590
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C00012B0 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000AA90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000CA60 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000E5CC (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchTimeoutSyncObject @ 0x1C0011E00 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0021790 (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0026F60 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000CF4C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000DF5C (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0010B94 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pqXR1PR1q @ 0x1C0022CB8 (Template_pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rsi
  unsigned int **v7; // rbx
  unsigned int *v8; // rdi
  unsigned int *v9; // rsi
  unsigned int v10; // r12d
  __int64 *v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 v15; // r14
  struct _VIDSCH_QUEUE_PACKET *v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  void **v21; // rax
  unsigned int *v22; // rcx
  _QWORD *v23; // rax
  unsigned __int64 v24; // r14
  char *v25; // r9
  char *v26; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 v28; // r12
  char *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  char *v32; // [rsp+40h] [rbp-40h]
  char v33; // [rsp+48h] [rbp-38h] BYREF
  int v34; // [rsp+50h] [rbp-30h]
  PVOID P; // [rsp+58h] [rbp-28h]
  char v36; // [rsp+60h] [rbp-20h] BYREF
  int v37; // [rsp+68h] [rbp-18h]

  v4 = (_QWORD *)(a1 + 984);
  v5 = a1;
  v6 = *(_QWORD **)(a1 + 984);
  if ( v6 != (_QWORD *)(a1 + 984) )
  {
    while ( 1 )
    {
      v15 = *(v6 - 1);
      v16 = (struct _VIDSCH_QUEUE_PACKET *)(v6 - 35);
      v6 = (_QWORD *)*v6;
      v17 = *((_QWORD *)v16 + 37);
      if ( *(_BYTE *)(v15 + 28) )
        break;
      v18 = *(unsigned __int64 **)(v15 + 56);
      if ( *(_BYTE *)(v15 + 29) )
      {
        a1 = *v18;
        if ( *v18 >= v17 )
          break;
      }
      else
      {
        a1 = (unsigned int)(*(_DWORD *)v18 - v17);
        if ( *(_DWORD *)v18 - (int)v17 >= 0 )
          break;
      }
LABEL_14:
      if ( v6 == v4 )
        goto LABEL_2;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v17, a3, a4);
    v23[3] = v15;
    v23[4] = **(_QWORD **)(v15 + 56);
    v23[5] = *((_QWORD *)v16 + 37);
    v23[6] = *(unsigned __int8 *)(v15 + 28);
    WdLogEvent5_WdEvent(v23);
    if ( (*((_DWORD *)v16 + 66) & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v16, 0);
    VidSchiUnwaitWaitQueuePacket(v16, 0LL);
    VidSchiCheckPendingDeviceCommand(*(_QWORD *)(*((_QWORD *)v16 + 11) + 104LL));
    goto LABEL_14;
  }
LABEL_2:
  v7 = (unsigned int **)(v5 + 1000);
  v8 = *v7;
  if ( *v7 == (unsigned int *)v7 )
    return;
  do
  {
    v9 = v8;
    v10 = 0;
    v8 = *(unsigned int **)v8;
    if ( !v9[26] )
      continue;
    do
    {
      v11 = (__int64 *)(*((_QWORD *)v9 + 4) + 16LL * v10);
      v12 = *v11;
      if ( *v11 )
      {
        v13 = v11[1];
        if ( !*(_BYTE *)(v12 + 28) )
        {
          v14 = *(unsigned __int64 **)(v12 + 56);
          if ( *(_BYTE *)(v12 + 29) )
          {
            a1 = *v14;
            if ( *v14 < v13 )
            {
LABEL_8:
              LOBYTE(a1) = 0;
              if ( (v9[28] & 1) == 0 )
                goto LABEL_9;
              goto LABEL_18;
            }
          }
          else
          {
            a1 = (unsigned int)(*(_DWORD *)v14 - v13);
            if ( *(_DWORD *)v14 - (int)v13 < 0 )
              goto LABEL_8;
          }
        }
        v19 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v13, a3, a4);
        v19[3] = v12;
        v19[4] = **(_QWORD **)(v12 + 56);
        v19[5] = v11[1];
        v19[6] = *(unsigned __int8 *)(v12 + 28);
        WdLogEvent5_WdEvent(v19);
      }
      LOBYTE(a1) = 1;
      if ( (v9[28] & 1) != 0 )
        goto LABEL_20;
LABEL_18:
      ++v10;
    }
    while ( v10 < v9[26] );
    if ( !(_BYTE)a1 )
      continue;
LABEL_20:
    KeSetEvent(*((PRKEVENT *)v9 + 2), 0, 0);
    if ( bTracingEnabled )
    {
      v24 = v9[26];
      v25 = 0LL;
      v26 = 0LL;
      v32 = 0LL;
      v34 = 0;
      P = 0LL;
      v37 = 0;
      if ( (unsigned int)v24 <= 1 )
      {
        v25 = &v33;
        v32 = &v33;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 8 )
          goto LABEL_53;
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v24, 0x4B677844u);
        v26 = (char *)P;
        v25 = PoolWithTag;
        v32 = PoolWithTag;
      }
      v34 = v24;
      if ( !v25 )
        goto LABEL_53;
      v28 = v24;
      memset(v25, 0, 8 * v24);
      v25 = v32;
      if ( v32 )
      {
        if ( (unsigned int)v24 <= 1 )
        {
          v26 = &v36;
          P = &v36;
          goto LABEL_44;
        }
        if ( 0xFFFFFFFFFFFFFFFFuLL / v24 >= 8 )
        {
          v29 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v24, 0x4B677844u);
          v25 = v32;
          v26 = v29;
          P = v29;
LABEL_44:
          v37 = v24;
          if ( !v26 )
            goto LABEL_53;
          memset(v26, 0, 8 * v24);
          v26 = (char *)P;
          if ( P )
          {
            if ( (_DWORD)v24 )
            {
              v31 = 0LL;
              v30 = 0LL;
              do
              {
                v31 += 8LL;
                v30 += 16LL;
                *(_QWORD *)&v32[v31 - 8] = *(_QWORD *)(v30 + *((_QWORD *)v9 + 4) - 16);
                *(_QWORD *)((char *)P + v31 - 8) = *(_QWORD *)(v30 + *((_QWORD *)v9 + 4) - 8);
                --v28;
              }
              while ( v28 );
              v26 = (char *)P;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              Template_pqXR1PR1q(
                (_DWORD)v26,
                v9[28] & 1,
                v30,
                *((_QWORD *)v9 + 2),
                v24,
                (__int64)v26,
                (__int64)v32,
                v9[28] & 1);
              v25 = v32;
              goto LABEL_52;
            }
          }
          v25 = v32;
LABEL_53:
          if ( v26 != &v36 && v26 )
          {
            ExFreePoolWithTag(v26, 0);
            v25 = v32;
          }
          if ( v25 != &v33 && v25 )
            ExFreePoolWithTag(v25, 0);
          goto LABEL_21;
        }
      }
LABEL_52:
      v26 = (char *)P;
      goto LABEL_53;
    }
LABEL_21:
    if ( (v9[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v9 + 2));
    v20 = *(_QWORD **)v9;
    v21 = (void **)*((_QWORD *)v9 + 1);
    if ( *(unsigned int **)(*(_QWORD *)v9 + 8LL) != v9 || *v21 != v9 )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = v21;
    v22 = (unsigned int *)*((_QWORD *)v9 + 4);
    if ( v22 != v9 + 10 )
    {
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
    }
    ExFreePoolWithTag(v9, 0);
LABEL_9:
    ;
  }
  while ( v8 != (unsigned int *)v7 );
}
