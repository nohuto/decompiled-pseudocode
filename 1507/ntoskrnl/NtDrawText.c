/*
 * XREFs of NtDrawText @ 0x140262F7C
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     BgkDrawText @ 0x1407611CC (BgkDrawText.c)
 */

__int64 __fastcall NtDrawText(int *a1)
{
  unsigned int v2; // esi
  void *v3; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // eax
  void *v7; // r14
  ULONG64 v8; // rcx
  PVOID PoolWithTag; // rax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  void *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !PreviousMode )
    goto LABEL_17;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (int *)MmUserProbeAddress;
  v6 = *a1;
  v12 = *a1;
  v10 = *a1;
  v7 = (void *)*((_QWORD *)a1 + 1);
  v11 = v7;
  if ( !v7 || !HIWORD(v6) )
    goto LABEL_18;
  v8 = (ULONG64)v7 + HIWORD(v12);
  if ( v8 > MmUserProbeAddress || v8 < (unsigned __int64)v7 )
    *(_BYTE *)MmUserProbeAddress = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v12), 0x67727453u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v7, HIWORD(v12));
    v11 = v3;
    a1 = &v10;
LABEL_17:
    v2 = BgkDrawText(*((_QWORD *)a1 + 1));
    goto LABEL_18;
  }
  v2 = -1073741801;
LABEL_18:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
