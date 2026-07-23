/*
 * XREFs of EtwpSendReplyDataBlock @ 0x1404959D0
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     EtwpQueueReply @ 0x140495948 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpSendReplyDataBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v6 = ObReferenceObjectByHandle(v3, 4u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v9 = Object;
    if ( (*((_BYTE *)Object + 98) & 2) != 0 )
    {
      if ( v4 >= 4 )
      {
        v6 = -1073741811;
      }
      else
      {
        v10 = _InterlockedExchange64((volatile __int64 *)Object + v4 + 6, 0LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 32);
          if ( (*(_BYTE *)(v11 + 98) & 0x40) != 0 )
            v6 = -1073741055;
          else
            v6 = EtwpQueueReply(*(PRKQUEUE *)(v11 + 48), (unsigned int *)a1);
          EtwpReleaseQueueEntry((char *)v10, 2);
        }
        else
        {
          v6 = -1073741811;
        }
        v9 = Object;
      }
    }
    else
    {
      v6 = -1073741816;
    }
    ObfDereferenceObject(v9);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v7, v8);
  return (unsigned int)v6;
}
