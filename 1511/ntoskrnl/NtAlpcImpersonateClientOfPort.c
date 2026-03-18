/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140425460
 * Callers:
 *     NtImpersonateClientOfPort @ 0x14061F65C (NtImpersonateClientOfPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDestroyBlob @ 0x1404253D4 (AlpcpDestroyBlob.c)
 *     AlpcpImpersonateMessage @ 0x140425640 (AlpcpImpersonateMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcImpersonateClientOfPort(HANDLE Handle, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // ebx
  unsigned int v7; // edi
  NTSTATUS v8; // r14d
  __int64 v9; // r8
  PVOID v10; // rdi
  ULONG_PTR v11; // rbx
  int v12; // edi
  char v13; // cl
  signed __int64 v14; // rcx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (*(_WORD *)(a2 + 4) & 0x1000) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 16);
    v7 = *(_DWORD *)(a2 + 20);
  }
  else
  {
    if ( PreviousMode && (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_DWORD *)(a2 + 24);
    v7 = *(_DWORD *)(a2 + 32);
  }
  if ( v6 && a3 < 2 )
  {
    v8 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = v7;
      v10 = Object;
      v8 = AlpcpLookupMessage(Object, v6, v9, &BugCheckParameter2);
      if ( v8 >= 0 )
      {
        v11 = BugCheckParameter2;
        v8 = AlpcpImpersonateMessage(v10, BugCheckParameter2, a3 == 1);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v11);
        v12 = 0;
        v13 = *(_BYTE *)(v11 - 32);
        if ( (v13 & 1) != 0 )
        {
          v12 = 0x10000 - *(__int16 *)(v11 - 30);
          *(_BYTE *)(v11 - 32) = v13 & 0xFE;
          *(_WORD *)(v11 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
        KeAbPostRelease(v11 - 16);
        if ( v12 > 0 )
        {
          v14 = -v12 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v12);
          if ( v14 <= 0 )
          {
            if ( v14 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v14);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v10 = Object;
      }
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
