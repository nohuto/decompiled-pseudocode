/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x14073E6DC
 * Callers:
 *     VfFreeCommonBuffer @ 0x14073BB9C (VfFreeCommonBuffer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v1; // bl
  __int64 *v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  v3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_1407631F8);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1407631F8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_1407631F8);
  }
  v5 = (__int64 *)ViDomainCommonBufferList;
  if ( (__int64 *)ViDomainCommonBufferList != &ViDomainCommonBufferList )
  {
    while ( 1 )
    {
      v3 = v5;
      if ( v5[2] == *a1 )
        break;
      v5 = (__int64 *)*v5;
      if ( v5 == &ViDomainCommonBufferList )
        goto LABEL_8;
    }
    v6 = *v5;
    v1 = 1;
    v7 = (__int64 *)v5[1];
    if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_1407631F8, retaddr);
  else
    _InterlockedAnd64(&qword_1407631F8, 0LL);
  __writecr8(CurrentIrql);
  if ( v1 )
    ExFreePoolWithTag(v3, 0);
  return v1;
}
