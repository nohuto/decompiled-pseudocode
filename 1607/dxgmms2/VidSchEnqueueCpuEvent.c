/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C0040000
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001000 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E270 (VidSchiFreeQueuePacket.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(__int64 a1, __int64 a2, unsigned __int8 a3, void *a4)
{
  __int64 v4; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  struct _VIDSCH_QUEUE_PACKET **v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r12
  _DWORD *QueuePacket; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  PVOID v27; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  char v29; // [rsp+40h] [rbp-48h] BYREF
  int v30; // [rsp+50h] [rbp-38h]

  v4 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 0x41 && a2 )
  {
    v6 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v27, 0LL);
    v9 = v6;
    if ( v6 < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v21 + 24) = v9;
      WdLogEvent5_WdAssertion(v21);
      return (unsigned int)v9;
    }
    P = 0LL;
    v30 = 0;
    v10 = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(&P, v4);
    v11 = (struct _VIDSCH_QUEUE_PACKET **)v10;
    if ( v10 )
    {
      v12 = 0;
      if ( !(_DWORD)v4 )
        goto LABEL_13;
      v13 = v10;
      v14 = a2 - v10;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + v13);
        QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v15, *(_DWORD *)(v15 + 796) == 0);
        *(_QWORD *)v13 = QueuePacket;
        if ( !QueuePacket )
          break;
        *QueuePacket = 1953189969;
        *(_DWORD *)(*(_QWORD *)v13 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v13 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v13 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v13 + 88LL) = v15;
        *(_QWORD *)(*(_QWORD *)v13 + 96LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v13 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v13 + 264LL) ^= (a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v13 + 264LL)) & 1;
        *(_DWORD *)(*(_QWORD *)v13 + 264LL) |= 2u;
        *(_QWORD *)(*(_QWORD *)v13 + 528LL) = v27;
        *(_QWORD *)(*(_QWORD *)v13 + 784LL) = 0LL;
        if ( v12 )
        {
          *(_QWORD *)(*(_QWORD *)v13 + 792LL) = v11[v12 - 1];
          *((_QWORD *)v11[v12 - 1] + 98) = *(_QWORD *)v13;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v13 + 792LL) = 0LL;
        }
        ++v12;
        v13 += 8LL;
        if ( v12 >= (unsigned int)v4 )
        {
          v19 = v4;
          do
          {
            VidSchiSubmitCommandPacketToQueue(*v11++);
            --v19;
          }
          while ( v19 );
          goto LABEL_13;
        }
      }
      v22 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v22 + 24) = -1073741801LL;
      *(_QWORD *)(v22 + 32) = 8612LL;
      WdLogEvent5_WdAssertion(v22);
      if ( v12 )
      {
        v25 = v12;
        do
        {
          VidSchiFreeQueuePacket(v15, (__int64)*v11++, v23, v24);
          --v25;
        }
        while ( v25 );
      }
    }
    LODWORD(v9) = -1073741801;
LABEL_13:
    if ( P != &v29 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v9;
  }
  v26 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v26 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v26);
  return 3221225485LL;
}
