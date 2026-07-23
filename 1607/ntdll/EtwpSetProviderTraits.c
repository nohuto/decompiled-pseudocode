/*
 * XREFs of EtwpSetProviderTraits @ 0x18002A1A4
 * Callers:
 *     EtwEventSetInformation @ 0x18002A160 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v5; // rsi
  ULONG OutputBufferLength; // r15d
  __int64 v7; // rax
  _BYTE *v8; // rdi
  int v9; // r14d
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  unsigned __int32 v12; // ebx
  _BYTE *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-79h] BYREF
  _QWORD InputBuffer[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v17; // [rsp+48h] [rbp-61h]
  _BYTE OutputBuffer[120]; // [rsp+50h] [rbp-59h] BYREF

  if ( !HIWORD(a1)
    || (v5 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v12 = 6;
LABEL_17:
    RtlSetLastWin32Error(v12);
    return v12;
  }
  OutputBufferLength = 120;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v7 = *(_QWORD *)(v5 + 88);
  v8 = OutputBuffer;
  v17 = a3;
  v9 = 0;
  InputBuffer[0] = v7;
  InputBuffer[1] = a2;
  while ( 1 )
  {
    v10 = NtTraceControl(EtwSetProviderTraitsCode, InputBuffer, 0x18u, v8, OutputBufferLength, &ReturnLength);
    v11 = v10;
    if ( v10 != -1073741789 )
      break;
    if ( v8 != OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v8 = Heap;
    if ( !Heap )
    {
      v11 = -1073741801;
      goto LABEL_15;
    }
    if ( (unsigned int)++v9 >= 0x10 )
      goto LABEL_15;
  }
  if ( !v10 )
  {
    v12 = 0;
    goto LABEL_8;
  }
LABEL_15:
  v12 = RtlNtStatusToDosError(v11);
  if ( v12 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v5 + 98) |= 0x4000u;
  if ( ReturnLength )
    EtwpUpdateEnableInfoAndCallback(v5, v8);
LABEL_10:
  if ( v8 && v8 != OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( v12 )
    goto LABEL_17;
  return v12;
}
