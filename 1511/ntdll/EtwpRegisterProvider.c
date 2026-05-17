/*
 * XREFs of EtwpRegisterProvider @ 0x1800542E4
 * Callers:
 *     EtwNotificationRegister @ 0x1800541F0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180054738 (EtwpUpdateEnableInfoAndCallback.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A85D0 (NtTraceControl.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  char v6; // si
  _BYTE *v7; // rbx
  int v8; // edi
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // edi
  __int64 Heap; // rax
  unsigned int v15; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v16[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(v16, 0, sizeof(v16));
  v7 = v16;
  v8 = 160;
  if ( !byte_180145248 )
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
    *((_QWORD *)v7 + 4) = a2;
    v11 = NtTraceControl(15LL, v7, 160LL, v7, v8, &v15);
    if ( v11 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
    v6 = 1;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15);
    v8 = v15;
    v7 = (_BYTE *)Heap;
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
    *(_QWORD *)(a1 + 88) = *((_QWORD *)v7 + 3);
    if ( (unsigned int)(a3 - 2) <= 1 )
      EtwpUpdateEnableInfoAndCallback(a1, v7 + 40);
  }
  if ( v6 )
  {
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
  }
  return v12;
}
