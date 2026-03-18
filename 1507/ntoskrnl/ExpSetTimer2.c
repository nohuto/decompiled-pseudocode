/*
 * XREFs of ExpSetTimer2 @ 0x1400F4D70
 * Callers:
 *     NtSetTimer2 @ 0x1400F4D5C (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x14012C6B8 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x140131384 (NtSetIRTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1400F4D44 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, PVOID *a2, unsigned __int64 a3)
{
  HANDLE v3; // r10
  char v4; // si
  KPROCESSOR_MODE PreviousMode; // r9
  PVOID v6; // rbx
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  PVOID v9; // rdx
  PVOID v10; // rbx
  __int128 *v11; // [rsp+30h] [rbp-48h]
  PVOID Object[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v3 = Handle;
  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    if ( PreviousMode )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (PVOID *)MmUserProbeAddress;
      v6 = *a2;
      Object[1] = *a2;
      if ( a3 )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 + 16 > MmUserProbeAddress || a3 + 16 < a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v13 = *(_OWORD *)a3;
        v11 = &v13;
      }
    }
    else
    {
      v6 = *a2;
      if ( a3 )
      {
        v13 = *(_OWORD *)a3;
        v11 = &v13;
      }
    }
    v4 = 1;
  }
  if ( v11 && !ExpTimerSetParametersAreValid((__int64)v11) )
    return -1073741583;
  result = ObReferenceObjectByHandle(v3, 2u, ExpIRTimerObjectType, PreviousMode, Object, 0LL);
  v8 = result;
  if ( result >= 0 )
  {
    if ( v4 )
    {
      v9 = v6;
      v10 = Object[0];
      KeSetTimer2(Object[0], v9, 0LL, v11);
    }
    else
    {
      v10 = Object[0];
      KeCancelTimer2((__int64)Object[0]);
    }
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    return v8;
  }
  return result;
}
