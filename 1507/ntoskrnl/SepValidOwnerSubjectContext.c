/*
 * XREFs of SepValidOwnerSubjectContext @ 0x14053E024
 * Callers:
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SepIdAssignableAsOwner @ 0x14053E154 (SepIdAssignableAsOwner.c)
 */

BOOLEAN __fastcall SepValidOwnerSubjectContext(__int64 *a1, void *a2, char a3)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // esi
  char v7; // di
  unsigned int v8; // ebp
  __int64 v9; // r15
  char v10; // al
  struct _ERESOURCE *v11; // rcx
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  __int16 v17; // ax

  if ( a2 )
  {
    if ( a3 || (v4 = *a1) == 0 )
      v4 = a1[2];
    if ( *(_DWORD *)(v4 + 192) != 2 || *(int *)(v4 + 196) >= 2 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = 0;
      --CurrentThread->KernelApcDisable;
      v7 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 48), 1u);
      v8 = *(_DWORD *)(v4 + 124);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v4 + 152);
        while ( !RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v6)) )
        {
          if ( ++v6 >= v8 )
            goto LABEL_21;
        }
        v10 = SepIdAssignableAsOwner(v4, v6);
        v11 = *(struct _ERESOURCE **)(v4 + 48);
        if ( v10 )
        {
          ExReleaseResourceLite(v11);
          v12 = KeGetCurrentThread();
          v13 = v12->KernelApcDisable + 1;
          v12->KernelApcDisable = v13;
          if ( !v13
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
            && !v12->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return v7;
        }
        ExReleaseResourceLite(v11);
        v15 = KeGetCurrentThread();
        v16 = v15->KernelApcDisable + 1;
        v15->KernelApcDisable = v16;
        if ( !v16 )
          goto LABEL_22;
      }
      else
      {
LABEL_21:
        ExReleaseResourceLite(*(PERESOURCE *)(v4 + 48));
        v15 = KeGetCurrentThread();
        v17 = v15->KernelApcDisable + 1;
        v15->KernelApcDisable = v17;
        if ( !v17 )
        {
LABEL_22:
          if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
            && !v15->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
      return SeSinglePrivilegeCheck(SeRestorePrivilege, 1);
    }
  }
  return 0;
}
