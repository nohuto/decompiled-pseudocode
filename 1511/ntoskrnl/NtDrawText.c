/*
 * XREFs of NtDrawText @ 0x1402136BC
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     BgkDrawText @ 0x1406DE14C (BgkDrawText.c)
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS v2; // esi
  wchar_t *v3; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // eax
  wchar_t *Buffer; // r14
  ULONG64 v8; // rcx
  wchar_t *PoolWithTag; // rax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( !Text )
    return -1073741811;
  if ( !PreviousMode )
    goto LABEL_17;
  if ( (unsigned __int64)Text >= MmUserProbeAddress )
    Text = (PUNICODE_STRING)MmUserProbeAddress;
  v6 = *(_DWORD *)&Text->Length;
  v12 = *(_DWORD *)&Text->Length;
  v10 = *(_DWORD *)&Text->Length;
  Buffer = Text->Buffer;
  v11 = Buffer;
  if ( !Buffer || !HIWORD(v6) )
    goto LABEL_18;
  v8 = (ULONG64)Buffer + HIWORD(v12);
  if ( v8 > MmUserProbeAddress || v8 < (unsigned __int64)Buffer )
    *(_BYTE *)MmUserProbeAddress = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v12), 0x67727453u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Buffer, HIWORD(v12));
    v11 = v3;
    Text = (PUNICODE_STRING)&v10;
LABEL_17:
    v2 = BgkDrawText(Text->Buffer);
    goto LABEL_18;
  }
  v2 = -1073741801;
LABEL_18:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
