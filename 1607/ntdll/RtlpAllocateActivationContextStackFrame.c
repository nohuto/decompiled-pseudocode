/*
 * XREFs of RtlpAllocateActivationContextStackFrame @ 0x180068D58
 * Callers:
 *     RtlActivateActivationContextEx @ 0x180068C30 (RtlActivateActivationContextEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlpInitializeActivationContextStackFrameList @ 0x180069650 (RtlpInitializeActivationContextStackFrameList.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpAllocateActivationContextStackFrame(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rdi
  _QWORD *i; // rsi
  _QWORD *v7; // rbp
  int v8; // edx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  __int64 v11; // rax
  PVOID Heap; // rax
  __int64 v14; // r8
  _QWORD *v15; // r8
  __int64 v16; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-D8h] BYREF

  v3 = 0;
  if ( a3 && (*a3 = 0LL, a2) )
  {
    v5 = a2 + 8;
    for ( i = *(_QWORD **)(a2 + 8); i != (_QWORD *)v5; i = (_QWORD *)*i )
    {
      v7 = i - 1;
      if ( *((_DWORD *)i - 2) != 1953721414 )
      {
        HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1LL;
        ExceptionRecord.ExceptionInformation[1] = 1LL;
        ExceptionRecord.ExceptionInformation[2] = v5;
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
            goto LABEL_14;
        }
        *((_DWORD *)v7 + 1) = v8 + 1;
        *((_DWORD *)v7 + 7) = ~(v8 + 1);
        v11 = (__int64)&v7[12 * v9 + 4];
        if ( v11 )
          goto LABEL_11;
      }
LABEL_14:
      ;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC20uLL);
    if ( Heap )
    {
      RtlpInitializeActivationContextStackFrameList(Heap);
      *(_DWORD *)(v14 + 4) = 1;
      v11 = v14 + 32;
      *(_DWORD *)(v14 + 28) = -2;
      v15 = (_QWORD *)(v14 + 8);
      v16 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
        __fastfail(3u);
      *v15 = v16;
      v15[1] = v5;
      *(_QWORD *)(v16 + 8) = v15;
      *(_QWORD *)v5 = v15;
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
