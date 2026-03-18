/*
 * XREFs of SepValidOwnerSubjectContext @ 0x1404AC868
 * Callers:
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SepIdAssignableAsOwner @ 0x1404AC960 (SepIdAssignableAsOwner.c)
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
            goto LABEL_13;
        }
        v10 = SepIdAssignableAsOwner(v4, v6);
        v11 = *(struct _ERESOURCE **)(v4 + 48);
        if ( v10 )
        {
          ExReleaseResourceLite(v11);
          KeLeaveCriticalRegion();
          return v7;
        }
      }
      else
      {
LABEL_13:
        v11 = *(struct _ERESOURCE **)(v4 + 48);
      }
      ExReleaseResourceLite(v11);
      KeLeaveCriticalRegion();
      return SeSinglePrivilegeCheck(SeRestorePrivilege, 1);
    }
  }
  return 0;
}
