/*
 * XREFs of SepCaptureAuditPolicy @ 0x1406518F8
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureAuditPolicy(ULONG64 a1, char a2, __int64 a3, __int64 a4, int a5, int a6, _QWORD *a7)
{
  ULONG64 v8; // rcx
  _QWORD *PoolWithTag; // rax

  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + 30;
    if ( v8 > MmUserProbeAddress || v8 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1EuLL, 0x61506553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  PoolWithTag[2] = *(_QWORD *)(a1 + 16);
  *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(a1 + 24);
  *((_WORD *)PoolWithTag + 14) = *(_WORD *)(a1 + 28);
  return 0LL;
}
