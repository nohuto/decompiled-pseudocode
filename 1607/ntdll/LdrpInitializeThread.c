/*
 * XREFs of LdrpInitializeThread @ 0x180016100
 * Callers:
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 *     RtlAllocateActivationContextStack @ 0x18007A4D0 (RtlAllocateActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall LdrpInitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  struct _TEB *v4; // rdi
  _PEB *ProcessEnvironmentBlock; // r14
  NTSTATUS ActivationContextStack; // eax
  NTSTATUS v7; // ebx
  __int64 result; // rax
  NTSTATUS Tls; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // rcx
  __int64 i; // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+30h] [rbp-B8h] BYREF
  int v20; // [rsp+38h] [rbp-B0h]
  _BYTE v21[56]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-68h] BYREF
  int v23; // [rsp+88h] [rbp-60h]
  _BYTE v24[56]; // [rsp+90h] [rbp-58h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+F8h] [rbp+10h] BYREF

  v3 = a1;
  v4 = NtCurrentTeb();
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( UseCOR && (v4->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (__int64)NtCurrentTeb(), (*(_BYTE *)(result + 6126) & 0x20) != 0) )
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
    result = (v4->SameTebFlags >> 13) & 1;
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
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      for ( i = qword_1801523D0; (__int64 *)i != &qword_1801523D0; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(i + 48) )
        {
          v13 = *(_DWORD *)(i + 104);
          if ( (v13 & 0x40000) == 0 )
          {
            v14 = *(_QWORD *)(i + 56);
            if ( v14 )
            {
              if ( (v13 & 0x80004) == 0x80004 )
              {
                if ( byte_180152408 )
                  goto LABEL_24;
                v19 = 72LL;
                v20 = 1;
                memset(v21, 0, sizeof(v21));
                RtlActivateActivationContextUnsafeFast(&v19, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  LdrpCallTlsInitializers(2u, i);
                LdrpCallInitRoutine(v14, *(_QWORD *)(i + 48), 2LL, 0LL);
                RtlDeactivateActivationContextUnsafeFast(&v19);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_180152408 )
      {
        v22 = 72LL;
        v23 = 1;
        memset(v24, 0, sizeof(v24));
        RtlActivateActivationContextUnsafeFast(&v22, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(&v22);
      }
LABEL_24:
      LdrpReleaseLoaderLock(v11, 21LL);
      return LdrpDropLastInProgressCount(v16, v15, v17, v18);
    }
  }
  return result;
}
