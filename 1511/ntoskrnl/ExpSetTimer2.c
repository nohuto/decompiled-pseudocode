/*
 * XREFs of ExpSetTimer2 @ 0x140034460
 * Callers:
 *     NtSetTimer2 @ 0x140034440 (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x1400F07BC (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x1400F3D24 (NtSetIRTimer.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1400352C8 (ExpTimerSetParametersAreValid.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, __int64 *a2, unsigned __int64 a3)
{
  HANDLE v3; // r10
  char v4; // si
  __int64 v5; // r9
  __int64 v6; // rbx
  __int128 *v7; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // r14d
  __int64 v10; // rdx
  PVOID v11; // rbx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+48h] [rbp-30h] BYREF

  v3 = Handle;
  v4 = 0;
  v5 = (unsigned __int8)KeGetCurrentThread()->gap0[10];
  v6 = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    if ( (_BYTE)v5 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v6 = *a2;
      v14 = *a2;
      if ( a3 )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 + 16 > MmUserProbeAddress || a3 + 16 < a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v15 = *(_OWORD *)a3;
        v7 = &v15;
        v13 = &v15;
      }
      else
      {
        v7 = v13;
      }
    }
    else
    {
      v6 = *a2;
      if ( a3 )
      {
        v15 = *(_OWORD *)a3;
        v7 = &v15;
      }
    }
    v4 = 1;
  }
  if ( v7 && !(unsigned __int8)ExpTimerSetParametersAreValid(v7, a2, a3, v5) )
    return -1073741583;
  result = ObReferenceObjectByHandle(v3, 2u, ExpIRTimerObjectType, v5, &Object, 0LL);
  v9 = result;
  if ( result >= 0 )
  {
    if ( v4 )
    {
      v10 = v6;
      v11 = Object;
      KeSetTimer2(Object, v10, 0LL, v7);
    }
    else
    {
      v11 = Object;
      KeCancelTimer2(Object, 0LL);
    }
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    return v9;
  }
  return result;
}
