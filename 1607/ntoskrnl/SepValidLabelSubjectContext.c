/*
 * XREFs of SepValidLabelSubjectContext @ 0x14051B374
 * Callers:
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14000DC90 (SepCopyTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlSidDominates @ 0x140076140 (RtlSidDominates.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(__int64 *a1, void *a2, char a3)
{
  PSID SeMediumMandatorySid; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  BOOLEAN result; // al
  PSID Sid1; // [rsp+20h] [rbp-18h]
  BOOLEAN Dominates; // [rsp+40h] [rbp+8h] BYREF

  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
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
    if ( RtlSidDominates(SeMediumMandatorySid, SeExports->SeMediumMandatorySid, &Dominates) < 0 )
      return 0;
    if ( !Dominates )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( RtlSidDominates(Sid1, SeMediumMandatorySid, &Dominates) < 0 )
    return 0;
  result = Dominates;
  if ( !Dominates )
    return SeSinglePrivilegeCheck(SeRelabelPrivilege, 1);
  return result;
}
