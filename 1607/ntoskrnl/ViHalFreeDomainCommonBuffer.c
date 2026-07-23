/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x140709A4C
 * Callers:
 *     VfFreeCommonBuffer @ 0x1407072B0 (VfFreeCommonBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v2; // bl
  __int64 *v3; // rdi
  KIRQL v4; // r8
  __int64 *v5; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_14072C1D8);
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
        goto LABEL_4;
    }
    v7 = *v5;
    v2 = 1;
    v8 = (__int64 *)v5[1];
    if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
LABEL_4:
  KeReleaseSpinLock(&qword_14072C1D8, v4);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
