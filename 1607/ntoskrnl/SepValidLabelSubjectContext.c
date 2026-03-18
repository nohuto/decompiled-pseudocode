/*
 * XREFs of SepValidLabelSubjectContext @ 0x1404A2F74
 * Callers:
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14000E110 (SepCopyTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlSidDominates @ 0x1400760C0 (RtlSidDominates.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(__int64 *a1, char *a2, char a3)
{
  char *SeMediumMandatorySid; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  BOOLEAN result; // al
  char *Buf1; // [rsp+20h] [rbp-18h]
  BOOLEAN v12; // [rsp+40h] [rbp+8h] BYREF

  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  v5 = *a1;
  if ( !*a1 )
    v5 = a1[2];
  if ( *(_DWORD *)(v5 + 192) == 2 && *(int *)(v5 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 48), 1u);
  SepCopyTokenIntegrity();
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(SeMediumMandatorySid, (char *)SeExports->SeMediumMandatorySid, (bool *)&v12) < 0 )
      return 0;
    if ( !v12 )
      SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  }
  if ( (int)RtlSidDominates(Buf1, SeMediumMandatorySid, (bool *)&v12) < 0 )
    return 0;
  result = v12;
  if ( !v12 )
    return SeSinglePrivilegeCheck(SeRelabelPrivilege, 1);
  return result;
}
