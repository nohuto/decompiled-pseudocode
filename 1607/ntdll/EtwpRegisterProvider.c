/*
 * XREFs of EtwpRegisterProvider @ 0x18002A4F4
 * Callers:
 *     EtwNotificationRegister @ 0x18002A400 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  char v6; // si
  _QWORD *v7; // rbx
  ULONG OutputBufferLength; // edi
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // edi
  _QWORD *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE InputBuffer[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v7 = InputBuffer;
  OutputBufferLength = 160;
  if ( !byte_180152408 )
  {
    v9 = RtlRunOnceExecuteOnce(&EtwpRegisterTpInitOnce, EtwpRegisterTpNotificationOnce, 0LL, 0LL);
    if ( v9 )
      return RtlNtStatusToDosError(v9);
  }
  while ( 1 )
  {
    v10 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)v7 + 4) = a3;
    *(_OWORD *)v7 = v10;
    *((_DWORD *)v7 + 5) = *(unsigned __int16 *)(a1 + 96);
    v7[4] = a2;
    v11 = NtTraceControl(EtwRegisterGuidsCode, v7, 0xA0u, v7, OutputBufferLength, &ReturnLength);
    if ( v11 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v6 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v7 = Heap;
    if ( !Heap )
    {
      v11 = -1073741801;
      break;
    }
  }
  if ( !v11 )
  {
    v12 = 0;
    goto LABEL_6;
  }
  v12 = RtlNtStatusToDosError(v11);
  if ( !v12 )
  {
LABEL_6:
    *(_QWORD *)(a1 + 88) = v7[3];
    if ( (unsigned int)(a3 - 2) <= 1 )
      EtwpUpdateEnableInfoAndCallback(a1, v7 + 5);
  }
  if ( v6 )
  {
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return v12;
}
