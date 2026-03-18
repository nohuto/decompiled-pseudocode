/*
 * XREFs of ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C000B1B8
 * Callers:
 *     ?EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B270 (-EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0045670 (ReferenceDwmProcess.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void *__fastcall DirectComposition::CSharedSectionMarshaler::CreateDwmHandle(PVOID *this)
{
  struct _KPROCESS *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPROCESS *v7; // rbx
  void *Handle; // [rsp+40h] [rbp-48h] BYREF
  _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  GreLockDwmState();
  v2 = (struct _KPROCESS *)ReferenceDwmProcess();
  v7 = v2;
  if ( v2 )
  {
    KeStackAttachProcess(v2, &ApcState);
    ObOpenObjectByPointer(this[5], 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v7);
  }
  GreUnlockDwmState(v4, v3, v5, v6);
  return Handle;
}
