/*
 * XREFs of EtwpSetProviderTraits @ 0x18002A1B4
 * Callers:
 *     EtwEventSetInformation @ 0x18002A170 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A95C (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // rax
  _BYTE *v8; // rdi
  int v9; // r14d
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  ULONG v12; // ebx
  __int64 Heap; // rax
  unsigned int v15; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v17; // [rsp+48h] [rbp-61h]
  _BYTE v18[120]; // [rsp+50h] [rbp-59h] BYREF

  if ( !HIWORD(a1)
    || (v5 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v12 = 6;
LABEL_17:
    RtlSetLastWin32Error(v12);
    return v12;
  }
  v6 = 120;
  memset(v18, 0, sizeof(v18));
  v7 = *(_QWORD *)(v5 + 88);
  v8 = v18;
  v17 = a3;
  v9 = 0;
  v16[0] = v7;
  v16[1] = a2;
  while ( 1 )
  {
    v10 = NtTraceControl(30LL, v16, 24LL, v8, v6, &v15);
    v11 = v10;
    if ( v10 != -1073741789 )
      break;
    if ( v8 != v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15);
    v6 = v15;
    v8 = (_BYTE *)Heap;
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
  if ( v15 )
    EtwpUpdateEnableInfoAndCallback(v5, v8);
LABEL_10:
  if ( v8 && v8 != v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
  if ( v12 )
    goto LABEL_17;
  return v12;
}
