/*
 * XREFs of RtlpAllocateActivationContextStackFrame @ 0x180042128
 * Callers:
 *     RtlActivateActivationContextEx @ 0x180042000 (RtlActivateActivationContextEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlpInitializeActivationContextStackFrameList @ 0x1800428C0 (RtlpInitializeActivationContextStackFrameList.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpAllocateActivationContextStackFrame(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  __int64 *i; // rsi
  __int64 *v7; // rbp
  int v8; // edx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  __int64 v11; // rax
  PVOID Heap; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // r8
  __int64 v17; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-D8h] BYREF

  v3 = 0;
  if ( a3 && (*a3 = 0LL, a2) )
  {
    v5 = (__int64 *)(a2 + 8);
    for ( i = *(__int64 **)(a2 + 8); i != v5; i = (__int64 *)*i )
    {
      v7 = i - 1;
      if ( *((_DWORD *)i - 2) != 1953721414 )
      {
        HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1LL;
        ExceptionRecord.ExceptionInformation[1] = 1LL;
        ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)v5;
        ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(i - 1);
        ExceptionRecord.ExceptionCode = -1072365547;
        *(_QWORD *)&ExceptionRecord.ExceptionFlags = 1LL;
        RtlRaiseException(&ExceptionRecord);
      }
      v8 = *((_DWORD *)v7 + 1);
      if ( v8 != 32 )
      {
        v9 = 0;
        v10 = v7 + 6;
        while ( (*v10 & 4) == 0 )
        {
          ++v9;
          v10 += 96;
          if ( v9 >= 0x20 )
            goto LABEL_17;
        }
        *((_DWORD *)v7 + 1) = v8 + 1;
        *((_DWORD *)v7 + 7) = ~(v8 + 1);
        v11 = (__int64)&v7[12 * v9 + 4];
        if ( v11 )
          goto LABEL_11;
      }
LABEL_17:
      ;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC20uLL);
    if ( Heap )
    {
      RtlpInitializeActivationContextStackFrameList(Heap, v14, Heap);
      *(_DWORD *)(v15 + 4) = 1;
      v11 = v15 + 32;
      *(_DWORD *)(v15 + 28) = -2;
      v16 = (__int64 *)(v15 + 8);
      v17 = *v5;
      *v16 = *v5;
      v16[1] = (__int64)v5;
      if ( *(__int64 **)(v17 + 8) != v5 )
        __fastfail(3u);
      *(_QWORD *)(v17 + 8) = v16;
      *v5 = (__int64)v16;
LABEL_11:
      *(_DWORD *)(v11 + 16) = 8;
      *a3 = v11;
      return v3;
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
