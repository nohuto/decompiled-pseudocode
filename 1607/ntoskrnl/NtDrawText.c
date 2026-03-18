/*
 * XREFs of NtDrawText @ 0x14022C734
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     BgkDrawText @ 0x14072A138 (BgkDrawText.c)
 */

__int64 __fastcall NtDrawText(unsigned __int64 a1)
{
  int v2; // edi
  void *v3; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // eax
  void *v7; // r14
  unsigned __int64 v8; // rax
  PVOID PoolWithTag; // rax
  unsigned __int16 v10; // cx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  void *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !PreviousMode )
    goto LABEL_17;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v6 = *(_DWORD *)a1;
  v13 = *(_DWORD *)a1;
  v11 = *(_DWORD *)a1;
  v7 = *(void **)(a1 + 8);
  v12 = v7;
  if ( !v7 || !HIWORD(v6) )
    goto LABEL_24;
  v8 = (unsigned __int64)v7 + HIWORD(v13);
  if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v7 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v13), 0x67727453u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v7, HIWORD(v13));
    v12 = v3;
    a1 = (unsigned __int64)&v11;
LABEL_17:
    v2 = -1073741811;
    v10 = *(_WORD *)(a1 + 2) >> 1;
    if ( v10 )
    {
      while ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * (v10 - 1)) )
      {
        if ( !--v10 )
          goto LABEL_22;
      }
      v2 = 0;
    }
LABEL_22:
    if ( v2 >= 0 )
      v2 = BgkDrawText(*(_QWORD *)(a1 + 8));
    goto LABEL_24;
  }
  v2 = -1073741801;
LABEL_24:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v2;
}
