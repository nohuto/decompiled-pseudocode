/*
 * XREFs of ProcessInfoFromHandle @ 0x140265578
 * Callers:
 *     NtUserSetAdditionalPowerThrottlingProcess @ 0x140279E40 (NtUserSetAdditionalPowerThrottlingProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessInfoFromHandle(void *a1)
{
  __int64 v1; // rbx
  NTSTATUS v2; // eax
  PVOID v3; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v5; // r8
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0LL;
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(a1, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v3 = Object;
  if ( v2 >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v5 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v5 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)ProcessWin32Process >> 64) & ProcessWin32Process;
    v1 = v5;
    ObfDereferenceObject(v3);
  }
  return v1;
}
