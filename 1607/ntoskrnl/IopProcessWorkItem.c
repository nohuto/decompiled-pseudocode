/*
 * XREFs of IopProcessWorkItem @ 0x140086970
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     PsImpersonateContainerOfThread @ 0x1400CF4D0 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400D1BC0 (PspRevertContainerImpersonation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwTraceThreadWorkItem @ 0x1402260D0 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  _WORD *v1; // rsi
  void (__fastcall *v3)(_WORD *, __int64, __int64); // r14
  int v4; // ebp
  __int64 v5; // rcx
  void *v6; // rdi
  __int64 v7; // rdx
  struct _KTHREAD *result; // rax
  __int128 v9; // xmm0
  __int128 *v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF

  v1 = *(_WORD **)(a1 + 40);
  v3 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( !v5 )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v9 = *(_OWORD *)(a1 + 68);
    v10 = &v11;
    v11 = v9;
    EtwActivityIdControlKernel(2LL, &v10);
    v4 = 1;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    PsImpersonateContainerOfThread();
    v6 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1344LL);
  v7 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v3(v1, v7, a1);
  }
  else if ( *v1 == 3 )
  {
    ((void (__fastcall *)(_WORD *, __int64))v3)(v1, v7);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, __int64))v3)(0LL, v7);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1345LL);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
  if ( v6 )
  {
    PspRevertContainerImpersonation(KeGetCurrentThread());
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v3, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
