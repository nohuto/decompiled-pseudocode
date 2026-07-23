/*
 * XREFs of LdrpInitializeThread @ 0x180012D60
 * Callers:
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     RtlAllocateActivationContextStack @ 0x180078390 (RtlAllocateActivationContextStack.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

int __fastcall LdrpInitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  struct _TEB *v4; // rdi
  _PEB *ProcessEnvironmentBlock; // r14
  NTSTATUS ActivationContextStack; // eax
  NTSTATUS v7; // ebx
  struct _TEB *v8; // rax
  NTSTATUS Tls; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // rcx
  __int64 i; // rbx
  int v13; // eax
  _RTL_DYNAMIC_HASH_TABLE *v14; // rdi
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  int v17; // [rsp+38h] [rbp-B0h]
  _BYTE v18[56]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+80h] [rbp-68h] BYREF
  int v20; // [rsp+88h] [rbp-60h]
  _BYTE v21[56]; // [rsp+90h] [rbp-58h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+F8h] [rbp+10h] BYREF

  v3 = a1;
  v4 = NtCurrentTeb();
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( UseCOR && (v4->SameTebFlags & 0x400) != 0 )
  {
    a3 = (unsigned int)MEMORY[0x7FFE0330];
    a2 = __ROR8__(LdrpCorExeMainRoutine, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ (unsigned int)MEMORY[0x7FFE0330];
  }
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (v8 = NtCurrentTeb(), (v8->SameTebFlags & 0x20) != 0) )
  {
    while ( 1 )
    {
      ActivationContextStack = RtlAllocateActivationContextStack(&v4->ActivationContextStackPointer, a2, a3, v3);
      v7 = ActivationContextStack;
      if ( ActivationContextStack != -1073741801 )
        break;
      DelayInterval.QuadPart = -3000000LL;
      ZwDelayExecution(0, &DelayInterval);
    }
    if ( ActivationContextStack < 0 )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ActivationContextStack);
      RtlRaiseStatus(v7);
    }
    LODWORD(v8) = (v4->SameTebFlags >> 13) & 1;
    if ( (v4->SameTebFlags & 0x2000) == 0 )
    {
      while ( 1 )
      {
        Tls = LdrpAllocateTls();
        v10 = Tls;
        if ( Tls != -1073741801 )
          break;
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      if ( Tls < 0 )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, Tls);
        RtlRaiseStatus(v10);
      }
      LdrpDrainWorkQueue(0LL);
      LdrpAcquireLoaderLock();
      for ( i = qword_180145210; (__int64 *)i != &qword_180145210; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(i + 48) )
        {
          v13 = *(_DWORD *)(i + 104);
          if ( (v13 & 0x40000) == 0 )
          {
            v14 = *(_RTL_DYNAMIC_HASH_TABLE **)(i + 56);
            if ( v14 )
            {
              if ( (v13 & 0x80004) == 0x80004 )
              {
                if ( byte_180145248 )
                  goto LABEL_24;
                v16 = 72LL;
                v17 = 1;
                memset(v18, 0, sizeof(v18));
                RtlActivateActivationContextUnsafeFast(&v16, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  LdrpCallTlsInitializers(2LL, i);
                LdrpCallInitRoutine(v14);
                RtlDeactivateActivationContextUnsafeFast(&v16);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_180145248 )
      {
        v19 = 72LL;
        v20 = 1;
        memset(v21, 0, sizeof(v21));
        RtlActivateActivationContextUnsafeFast(&v19, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(&v19);
      }
LABEL_24:
      LdrpReleaseLoaderLock(v11, 21, 0);
      LODWORD(v8) = LdrpDropLastInProgressCount();
    }
  }
  return (int)v8;
}
