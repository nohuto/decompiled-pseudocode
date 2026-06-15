/*
 * XREFs of PdcPortOpen @ 0x180031748
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x1800315E0 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180031964 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     PdcpAlpcReleaseResources @ 0x18008E5F4 (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        __int64 a1,
        __int64 a2,
        void *a3,
        PVOID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        RTL_SRWLOCK **a8)
{
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v11; // rdi
  PVOID v12; // rax
  RTL_SRWLOCK *v13; // rsi
  int v14; // eax
  int Ptr; // ebx
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v19[96]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v20[10]; // [rsp+388h] [rbp+280h] BYREF

  *a8 = 0LL;
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
  v11 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  memset(Heap, 0, 0x50uLL);
  v12 = *a4;
  v11[8].Ptr = *a4;
  if ( !v12 )
  {
    Ptr = -1073741583;
    goto LABEL_13;
  }
  LODWORD(v11->Ptr) = 1348691024;
  v11[7].Ptr = a3;
  LODWORD(v11[9].Ptr) = 1950565456;
  HIDWORD(v11[5].Ptr) = 1;
  v11[2].Ptr = 0LL;
  v11[3].Ptr = 0LL;
  InitializeSRWLock(v11 + 2);
  RtlInitUnicodeString(&DestinationString, L"\\PdcPort");
  memset(v20, 0, 0x48uLL);
  v20[4] = 0x20000LL;
  LODWORD(v20[0]) = 0x20000;
  v20[2] = 768LL;
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[5]) = 0;
  v19[6] = 0x700000028LL;
  v19[7] = v11 + 9;
  if ( a7 )
    RtlStringCchCopyW((char *)&v19[29] + 4, 64LL);
  v17 = 768LL;
  v13 = v11 + 1;
  v19[0] = 50332376LL;
  v19[1] = 0LL;
  v19[2] = 0LL;
  v14 = ZwAlpcConnectPort(&v11[1], &DestinationString, 0LL, v20, 655360, 0LL, v19, &v17, 0LL, 0LL, 0LL);
  Ptr = v14;
  if ( v14 == -1073741759 )
  {
    Ptr = (int)v13->Ptr;
    v13->Ptr = 0LL;
  }
  else
  {
    if ( v14 < 0 )
      goto LABEL_13;
    if ( v11[8].Ptr )
    {
      Ptr = TpAllocAlpcCompletion(&v11[4], v13->Ptr, PdcpAlpcCallback, v11, 0LL);
      if ( Ptr < 0 )
        goto LABEL_13;
    }
    *a8 = v11;
    Ptr = 0;
  }
  if ( Ptr < 0 )
LABEL_13:
    PdcpAlpcReleaseResources(v11);
  return (unsigned int)Ptr;
}
