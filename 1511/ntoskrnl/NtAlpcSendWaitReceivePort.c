/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x140427E70
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpTrackPortReferences @ 0x1404AC7D4 (AlpcpTrackPortReferences.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        void *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        unsigned __int64 *a6,
        int *Address,
        LARGE_INTEGER *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  unsigned __int8 v12; // r14
  int v13; // esi
  int v14; // r9d
  PVOID v15; // rdi
  unsigned __int8 v18; // al
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+78h] [rbp-40h]
  PVOID v22; // [rsp+80h] [rbp-38h]
  __int64 v23; // [rsp+88h] [rbp-30h]
  _QWORD v24[2]; // [rsp+90h] [rbp-28h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24[0] = 0LL;
  v24[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v20, 0, sizeof(v20));
  --CurrentThread->KernelApcDisable;
  v11 = a2 & 0xFFFF0000;
  v12 = KeGetCurrentThread()->gap0[10];
  v13 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, v12, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v15 = Object;
    if ( (v11 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v11 & 0x20000) != 0 )
    {
      if ( a3 && (v11 & 0x10000) == 0 && (v11 & 0x1000000) == 0 )
      {
        if ( a5 )
        {
          if ( (v11 & 0x100000) != 0 )
            v18 = 1;
          else
            v18 = v12;
          v13 = AlpcpProcessSynchronousRequest((__int64)v15, v11, a3, a4, a5, a6, Address, a8, v12, v18);
        }
        else
        {
          v13 = -1073740027;
        }
        goto LABEL_9;
      }
    }
    else
    {
      v20[0] = v15;
      LODWORD(v24[0]) = v11;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v13 = AlpcpReceiveMessage((unsigned int)v20, a5, (_DWORD)a6, (_DWORD)Address, (__int64)a8);
        if ( _bittestandreset((signed __int32 *)v24, 2u) )
        {
          AlpcpSignal((__int64)v20, 0, 0, v14);
          if ( v22 )
            ObfDereferenceObject(v22);
        }
        goto LABEL_9;
      }
      if ( (v11 & 0x1000000) == 0 )
      {
        v22 = 0LL;
        LODWORD(v24[0]) = v11 | 4;
        v21 = 0LL;
        v23 = 0LL;
        v13 = AlpcpSendMessage(v20, a3, a4, v12);
        if ( v13 >= 0 )
          goto LABEL_6;
LABEL_9:
        ObfDereferenceObject(v15);
        goto LABEL_10;
      }
    }
    v13 = -1073741584;
    goto LABEL_9;
  }
LABEL_10:
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
