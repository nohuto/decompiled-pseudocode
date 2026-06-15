/*
 * XREFs of PdcPortOpen @ 0x18003D72C
 * Callers:
 *     PdcActivationClientRegister @ 0x18003D674 (PdcActivationClientRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     PdcpAlpcReleaseResources @ 0x1800A7E14 (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(__int64 a1, __int64 a2, void *a3, PVOID *a4, __int64 a5, __int64 a6, RTL_SRWLOCK **a7)
{
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v10; // rdi
  RTL_SRWLOCK *v11; // rsi
  int v12; // eax
  int Ptr; // ebx
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v17[5]; // [rsp+88h] [rbp-80h] BYREF
  int v18; // [rsp+B0h] [rbp-58h]
  int v19; // [rsp+B8h] [rbp-50h]
  int v20; // [rsp+BCh] [rbp-4Ch]
  RTL_SRWLOCK *v21; // [rsp+C0h] [rbp-48h]
  _DWORD v22[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v23; // [rsp+188h] [rbp+80h]
  __int64 v24; // [rsp+198h] [rbp+90h]

  *a7 = 0LL;
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
  v10 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  memset_0(Heap, 0, 0x50uLL);
  v10[8].Ptr = *a4;
  LODWORD(v10[9].Ptr) = 1950565456;
  LODWORD(v10->Ptr) = 1348691024;
  v10[7].Ptr = a3;
  HIDWORD(v10[5].Ptr) = 1;
  v10[2].Ptr = 0LL;
  v10[3].Ptr = 0LL;
  InitializeSRWLock(v10 + 2);
  RtlInitUnicodeString(&DestinationString, L"\\PdcPort");
  memset_0(v22, 0, 0x48uLL);
  v24 = 0x20000LL;
  v22[0] = 0x20000;
  v23 = 240LL;
  memset_0(v17, 0, 0xF0uLL);
  v15 = 240LL;
  v11 = v10 + 1;
  v18 = 0;
  v19 = 40;
  v20 = 2;
  v21 = v10 + 9;
  v17[0] = 15728840LL;
  v17[1] = 0LL;
  v17[2] = 0LL;
  v12 = ZwAlpcConnectPort(&v10[1], &DestinationString, 0LL, v22, 655360, 0LL, v17, &v15, 0LL, 0LL, 0LL);
  Ptr = v12;
  if ( v12 == -1073741759 )
  {
    Ptr = (int)v11->Ptr;
    v11->Ptr = 0LL;
  }
  else
  {
    if ( v12 < 0 )
      goto LABEL_9;
    if ( v10[8].Ptr )
    {
      Ptr = TpAllocAlpcCompletion(&v10[4], v11->Ptr, PdcpAlpcCalback, v10, 0LL);
      if ( Ptr < 0 )
        goto LABEL_9;
    }
    *a7 = v10;
    Ptr = 0;
  }
  if ( Ptr < 0 )
LABEL_9:
    PdcpAlpcReleaseResources(v10);
  return (unsigned int)Ptr;
}
