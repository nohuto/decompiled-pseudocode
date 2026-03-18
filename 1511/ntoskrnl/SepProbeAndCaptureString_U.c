/*
 * XREFs of SepProbeAndCaptureString_U @ 0x14046F5B0
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1403B584C (NtDeleteObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1404AC788 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404BB38C (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140509D38 (NtPrivilegeObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepProbeAndCaptureString_U(ULONG64 a1, __int64 a2)
{
  int v3; // ebx
  const void *v4; // rdi
  ULONG64 v5; // rcx
  _WORD *PoolWithTag; // rax
  unsigned int v8; // [rsp+24h] [rbp-34h]

  *(_QWORD *)a2 = 0LL;
  v8 = 0;
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v3 = *(_DWORD *)a1;
  v4 = *(const void **)(a1 + 8);
  if ( (unsigned __int16)*(_DWORD *)a1 )
  {
    if ( ((unsigned __int8)v4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (ULONG64)v4 + (unsigned __int16)v3;
    if ( v5 > MmUserProbeAddress || v5 < (unsigned __int64)v4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (v3 & 1) != 0 || (unsigned __int16)v3 == 65534 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v3 + 16LL, 0x73556553u);
    *(_QWORD *)a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = v3;
      *(_WORD *)(*(_QWORD *)a2 + 2LL) = v3;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)a2 + 16LL;
      if ( (_WORD)v3 )
        memmove(*(void **)(*(_QWORD *)a2 + 8LL), v4, (unsigned __int16)v3);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
