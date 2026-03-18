/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C0077DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0005794 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiFreeQueuePacket @ 0x1C0006730 (VidSchiFreeQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  __int64 v4; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v14; // rax
  struct _VIDSCH_QUEUE_PACKET **v15; // rbx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 *QueuePacket; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  PVOID v29; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  char v31; // [rsp+40h] [rbp-48h] BYREF
  int v32; // [rsp+50h] [rbp-38h]
  unsigned __int8 v33; // [rsp+A0h] [rbp+18h]

  v33 = a3;
  v4 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 0x41 && a2 )
  {
    v6 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v29, 0LL);
    v11 = v6;
    if ( v6 < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdAssertion(v12);
      return (unsigned int)v11;
    }
    P = 0LL;
    v32 = 0;
    v14 = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(&P, v4);
    v15 = (struct _VIDSCH_QUEUE_PACKET **)v14;
    if ( v14 )
    {
      v16 = 0;
      if ( !(_DWORD)v4 )
        goto LABEL_21;
      v17 = v14;
      v18 = a2 - v14;
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + v17);
        QueuePacket = VidSchiAllocateQueuePacket(v19, *(_DWORD *)(v19 + 772) == 0);
        *(_QWORD *)v17 = QueuePacket;
        if ( !QueuePacket )
          break;
        *(_DWORD *)QueuePacket = 1953189969;
        *(_DWORD *)(*(_QWORD *)v17 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v17 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v17 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v17 + 80LL) = v19;
        *(_QWORD *)(*(_QWORD *)v17 + 88LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v17 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v17 + 256LL) ^= (v33 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v17 + 256LL)) & 1;
        *(_DWORD *)(*(_QWORD *)v17 + 256LL) |= 2u;
        *(_QWORD *)(*(_QWORD *)v17 + 520LL) = v29;
        *(_QWORD *)(*(_QWORD *)v17 + 776LL) = 0LL;
        if ( v16 )
        {
          *(_QWORD *)(*(_QWORD *)v17 + 784LL) = v15[v16 - 1];
          *((_QWORD *)v15[v16 - 1] + 97) = *(_QWORD *)v17;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v17 + 784LL) = 0LL;
        }
        ++v16;
        v17 += 8LL;
        if ( v16 >= (unsigned int)v4 )
        {
          v25 = v4;
          do
          {
            VidSchiSubmitCommandPacketToQueue(*v15++);
            --v25;
          }
          while ( v25 );
          goto LABEL_21;
        }
      }
      v26 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      *(_QWORD *)(v26 + 32) = 8352LL;
      WdLogEvent5_WdAssertion(v26);
      if ( v16 )
      {
        v27 = v16;
        do
        {
          VidSchiFreeQueuePacket(v19, (__int64)*v15++);
          --v27;
        }
        while ( v27 );
      }
    }
    LODWORD(v11) = -1073741801;
LABEL_21:
    if ( P != &v31 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v11;
  }
  v28 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
  *(_QWORD *)(v28 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v28);
  return 3221225485LL;
}
