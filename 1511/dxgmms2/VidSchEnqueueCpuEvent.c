/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C00382C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001C68 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiFreeQueuePacket @ 0x1C000F82C (VidSchiFreeQueuePacket.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
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
  struct _VIDSCH_QUEUE_PACKET **v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r12
  _DWORD *QueuePacket; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rax
  PVOID v31; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  char v33; // [rsp+40h] [rbp-48h] BYREF
  int v34; // [rsp+50h] [rbp-38h]
  unsigned __int8 v35; // [rsp+A0h] [rbp+18h]

  v35 = a3;
  v4 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 0x41 && a2 )
  {
    v6 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v31, 0LL);
    v11 = v6;
    if ( v6 < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v25 + 24) = v11;
      WdLogEvent5_WdAssertion(v25);
      return (unsigned int)v11;
    }
    P = 0LL;
    v34 = 0;
    v12 = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(&P, v4);
    v13 = (struct _VIDSCH_QUEUE_PACKET **)v12;
    if ( v12 )
    {
      v14 = 0;
      if ( !(_DWORD)v4 )
        goto LABEL_13;
      v15 = v12;
      v16 = a2 - v12;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + v15);
        QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v17, *(_DWORD *)(v17 + 772) == 0);
        *(_QWORD *)v15 = QueuePacket;
        if ( !QueuePacket )
          break;
        *QueuePacket = 1953189969;
        *(_DWORD *)(*(_QWORD *)v15 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v15 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v15 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v15 + 80LL) = v17;
        *(_QWORD *)(*(_QWORD *)v15 + 88LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v15 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v15 + 256LL) ^= (v35 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v15 + 256LL)) & 1;
        *(_DWORD *)(*(_QWORD *)v15 + 256LL) |= 2u;
        *(_QWORD *)(*(_QWORD *)v15 + 520LL) = v31;
        *(_QWORD *)(*(_QWORD *)v15 + 776LL) = 0LL;
        if ( v14 )
        {
          *(_QWORD *)(*(_QWORD *)v15 + 784LL) = v13[v14 - 1];
          *((_QWORD *)v13[v14 - 1] + 97) = *(_QWORD *)v15;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v15 + 784LL) = 0LL;
        }
        ++v14;
        v15 += 8LL;
        if ( v14 >= (unsigned int)v4 )
        {
          v23 = v4;
          do
          {
            VidSchiSubmitCommandPacketToQueue(*v13++);
            --v23;
          }
          while ( v23 );
          goto LABEL_13;
        }
      }
      v26 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      *(_QWORD *)(v26 + 32) = 8321LL;
      WdLogEvent5_WdAssertion(v26);
      if ( v14 )
      {
        v29 = v14;
        do
        {
          VidSchiFreeQueuePacket(v17, (__int64)*v13++, v27, v28);
          --v29;
        }
        while ( v29 );
      }
    }
    LODWORD(v11) = -1073741801;
LABEL_13:
    if ( P != &v33 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v11;
  }
  v30 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
  *(_QWORD *)(v30 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v30);
  return 3221225485LL;
}
