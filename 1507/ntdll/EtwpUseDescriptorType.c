/*
 * XREFs of EtwpUseDescriptorType @ 0x180002AD8
 * Callers:
 *     EtwEventSetInformation @ 0x18000E180 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceControl @ 0x180095360 (NtTraceControl.c)
 */

__int64 __fastcall EtwpUseDescriptorType(__int64 a1, char *a2)
{
  __int64 v2; // rdi
  char v3; // si
  NTSTATUS v4; // eax
  unsigned __int32 v5; // ebx
  ULONG v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+40h] [rbp-28h]

  if ( !HIWORD(a1)
    || (v2 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v5 = 6;
    goto LABEL_13;
  }
  v3 = *a2;
  if ( (unsigned __int8)*a2 >= 2u )
  {
    v5 = 87;
    goto LABEL_13;
  }
  v8 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x58);
  v9 = v3;
  v4 = NtTraceControl(EtwUseDescriptorTypeCode, &v8, 0x10u, 0LL, 0, &v7);
  if ( v4 )
  {
    v5 = RtlNtStatusToDosError(v4);
    if ( !v5 )
      goto LABEL_7;
LABEL_13:
    RtlSetLastWin32Error(v5);
    return v5;
  }
  v5 = 0;
LABEL_7:
  *(_WORD *)(v2 + 98) &= ~0x4000u;
  *(_WORD *)(v2 + 98) |= (v3 & 1) << 14;
  return v5;
}
