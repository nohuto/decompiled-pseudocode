/*
 * XREFs of NtDrawText @ 0x14022C560
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     BgkDrawText @ 0x14072A138 (BgkDrawText.c)
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS v2; // edi
  wchar_t *v3; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // eax
  wchar_t *Buffer; // r14
  unsigned __int64 v8; // rax
  wchar_t *PoolWithTag; // rax
  unsigned __int16 v10; // cx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( !Text )
    return -1073741811;
  if ( !PreviousMode )
    goto LABEL_17;
  if ( (unsigned __int64)Text >= 0x7FFFFFFF0000LL )
    Text = (PUNICODE_STRING)0x7FFFFFFF0000LL;
  v6 = *(_DWORD *)&Text->Length;
  v13 = *(_DWORD *)&Text->Length;
  v11 = *(_DWORD *)&Text->Length;
  Buffer = Text->Buffer;
  v12 = Buffer;
  if ( !Buffer || !HIWORD(v6) )
    goto LABEL_24;
  v8 = (unsigned __int64)Buffer + HIWORD(v13);
  if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)Buffer )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v13), 0x67727453u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Buffer, HIWORD(v13));
    v12 = v3;
    Text = (PUNICODE_STRING)&v11;
LABEL_17:
    v2 = -1073741811;
    v10 = Text->MaximumLength >> 1;
    if ( v10 )
    {
      while ( Text->Buffer[v10 - 1] )
      {
        if ( !--v10 )
          goto LABEL_22;
      }
      v2 = 0;
    }
LABEL_22:
    if ( v2 >= 0 )
      v2 = BgkDrawText(Text->Buffer);
    goto LABEL_24;
  }
  v2 = -1073741801;
LABEL_24:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
