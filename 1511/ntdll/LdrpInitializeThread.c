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

__int64 __fastcall LdrpInitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  struct _TEB *v4; // rdi
  _PEB *ProcessEnvironmentBlock; // r14
  int ActivationContextStack; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  int Tls; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 i; // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // [rsp+30h] [rbp-B8h] BYREF
  int v16; // [rsp+38h] [rbp-B0h]
  _BYTE v17[56]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+80h] [rbp-68h] BYREF
  int v19; // [rsp+88h] [rbp-60h]
  _BYTE v20[56]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+10h] BYREF

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
      v21 = -3000000LL;
      ZwDelayExecution(0LL, &v21);
    }
    if ( ActivationContextStack < 0 )
    {
      ZwTerminateProcess(-1LL, (unsigned int)ActivationContextStack);
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
        v21 = -3000000LL;
        ZwDelayExecution(0LL, &v21);
      }
      if ( Tls < 0 )
      {
        ZwTerminateProcess(-1LL, (unsigned int)Tls);
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
            v14 = *(_QWORD *)(i + 56);
            if ( v14 )
            {
              if ( (v13 & 0x80004) == 0x80004 )
              {
                if ( byte_180145248 )
                  goto LABEL_24;
                v15 = 72LL;
                v16 = 1;
                memset(v17, 0, sizeof(v17));
                RtlActivateActivationContextUnsafeFast(&v15, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  LdrpCallTlsInitializers(2u, i);
                LdrpCallInitRoutine(v14, *(_QWORD *)(i + 48), 2LL, 0LL);
                RtlDeactivateActivationContextUnsafeFast(&v15);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_180145248 )
      {
        v18 = 72LL;
        v19 = 1;
        memset(v20, 0, sizeof(v20));
        RtlActivateActivationContextUnsafeFast(&v18, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(&v18);
      }
LABEL_24:
      LdrpReleaseLoaderLock(v11, 21, 0);
      return LdrpDropLastInProgressCount();
    }
  }
  return result;
}
