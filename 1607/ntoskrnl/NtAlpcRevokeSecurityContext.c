/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x140655930
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     AlpcReferenceBlobByHandle @ 0x14040BC58 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcRevokeSecurityContext(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rsi
  unsigned __int64 *v9; // rbp
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  int v12; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), a3, AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          v9 = (unsigned __int64 *)(v7 - 16);
          v10 = (_BYTE *)KeAbPreAcquire(v7 - 16, 0LL, 0);
          v11 = v10;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
            ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
          if ( v11 )
            v11[26] |= 1u;
          v12 = *(_DWORD *)(v8 + 104);
          if ( (v12 & 2) != 0 )
          {
            v5 = -1073741823;
          }
          else
          {
            *(_DWORD *)(v8 + 104) = v12 | 1;
            v5 = 0;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v8 - 16));
          KeAbPostRelease(v8 - 16);
          v6 = Object;
        }
        else
        {
          v5 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
