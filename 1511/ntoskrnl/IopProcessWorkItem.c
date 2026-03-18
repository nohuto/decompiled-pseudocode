/*
 * XREFs of IopProcessWorkItem @ 0x14009FE90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspRevertContainerImpersonation @ 0x1400A019C (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400A02BC (PsImpersonateContainerOfThread.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PsImpersonateContainerOfProcess @ 0x1401F5938 (PsImpersonateContainerOfProcess.c)
 *     EtwTraceThreadWorkItem @ 0x14020E3F0 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  _WORD *v1; // rsi
  void (__fastcall *v3)(_WORD *, __int64, __int64); // r14
  int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 v8; // rdx
  struct _KTHREAD *result; // rax
  __int128 v10; // xmm0
  __int128 *v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  v1 = *(_WORD **)(a1 + 40);
  v3 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( !v5 )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v10 = *(_OWORD *)(a1 + 68);
    v11 = &v12;
    v12 = v10;
    EtwActivityIdControlKernel(2LL, &v11);
    v4 = 1;
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( (v6 & 1) != 0 )
      PsImpersonateContainerOfThread(v6 & 0xFFFFFFFFFFFFFFFEuLL);
    else
      PsImpersonateContainerOfProcess();
    v7 = (void *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1344LL);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v3(v1, v8, a1);
  }
  else if ( *v1 == 3 )
  {
    ((void (__fastcall *)(_WORD *, __int64))v3)(v1, v8);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, __int64))v3)(0LL, v8);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1345LL);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
  if ( v7 )
  {
    PspRevertContainerImpersonation();
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v3, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
