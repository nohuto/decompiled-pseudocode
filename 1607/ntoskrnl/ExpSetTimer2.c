/*
 * XREFs of ExpSetTimer2 @ 0x1400EC4C0
 * Callers:
 *     NtCancelTimer2 @ 0x1400B0D38 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x1400B395C (NtSetIRTimer.c)
 *     NtSetTimer2 @ 0x1400EC618 (NtSetTimer2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1400EC62C (ExpTimerSetParametersAreValid.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, unsigned __int64 a2, unsigned __int64 a3)
{
  HANDLE v3; // r10
  char v4; // si
  __int64 v5; // r9
  PVOID v6; // rbx
  __int128 *v7; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // r14d
  __int64 v10; // rdx
  PVOID v11; // rbx
  PVOID Object[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v3 = Handle;
  v4 = 0;
  v5 = (unsigned __int8)KeGetCurrentThread()->gap0[10];
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    if ( (_BYTE)v5 )
    {
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      v6 = *(PVOID *)a2;
      Object[1] = *(PVOID *)a2;
      if ( a3 )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 + 16 > 0x7FFFFFFF0000LL || a3 + 16 < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v13 = *(_OWORD *)a3;
        v7 = &v13;
      }
      else
      {
        v7 = 0LL;
      }
    }
    else
    {
      v6 = *(PVOID *)a2;
      if ( a3 )
      {
        v13 = *(_OWORD *)a3;
        v7 = &v13;
      }
    }
    v4 = 1;
  }
  if ( v7 && !(unsigned __int8)ExpTimerSetParametersAreValid(v7, a2, a3, v5) )
    return -1073741583;
  result = ObReferenceObjectByHandle(v3, 2u, ExpIRTimerObjectType, v5, Object, 0LL);
  v9 = result;
  if ( result >= 0 )
  {
    if ( v4 )
    {
      v10 = (__int64)v6;
      v11 = Object[0];
      KeSetTimer2((__int64)Object[0], v10, 0LL, (__int64)v7);
    }
    else
    {
      v11 = Object[0];
      KeCancelTimer2(Object[0], 0LL);
    }
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    return v9;
  }
  return result;
}
