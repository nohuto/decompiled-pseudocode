/*
 * XREFs of NtDisplayString @ 0x1406ACF94
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     BgkDisplayStringEx @ 0x1401C3C3C (BgkDisplayStringEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __stdcall NtDisplayString(PUNICODE_STRING DisplayString)
{
  unsigned __int64 v1; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  _WORD *v4; // rsi
  unsigned __int64 v5; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rdi
  _WORD *v8; // rax
  unsigned __int16 v9; // cx
  _WORD *v10; // rax
  char v11; // bl
  int P; // [rsp+40h] [rbp+8h]

  v1 = (unsigned __int64)DisplayString;
  if ( !DisplayString )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    if ( v1 >= 0x7FFFFFFF0000LL )
      v1 = 0x7FFFFFFF0000LL;
    P = *(_DWORD *)v1;
    v4 = *(_WORD **)(v1 + 8);
    if ( !v4 || !HIWORD(*(_DWORD *)v1) )
      return 0;
    v5 = (unsigned __int64)v4 + HIWORD(P);
    if ( v5 > 0x7FFFFFFF0000LL || v5 < (unsigned __int64)v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !*v4 )
      return 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(P) + 2LL, 0x67727453u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741801;
    memmove(PoolWithTag, v4, HIWORD(P));
    v7[(unsigned __int64)HIWORD(P) >> 1] = 0;
    goto LABEL_24;
  }
  v8 = *(_WORD **)(v1 + 8);
  if ( v8 )
  {
    v9 = *(_WORD *)(v1 + 2);
    if ( v9 )
    {
      if ( *v8 )
      {
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2LL, 0x67727453u);
        v7 = v10;
        if ( !v10 )
          return -1073741801;
        memmove(v10, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 2));
        v7[(unsigned __int64)*(unsigned __int16 *)(v1 + 2) >> 1] = 0;
LABEL_24:
        v11 = BgkDisplayStringEx(v7);
        ExFreePoolWithTag(v7, 0);
        return v11 == 0 ? 0xC0000001 : 0;
      }
    }
  }
  return 0;
}
