/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C00D5DE0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0037440 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0037478 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(__int64 a1, HANDLE *a2)
{
  struct _KPROCESS *v4; // rsi
  char v5; // r15
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+48h] [rbp-70h] BYREF
  struct _KPROCESS *v12; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v5 = CheckOrAcquireDwmStateLock();
  Handle = 0LL;
  v6 = 0;
  if ( !a2 )
    v6 = -1073741811;
  if ( v6 < 0 )
    goto LABEL_12;
  v4 = (struct _KPROCESS *)ReferenceDwmProcess();
  v12 = v4;
  if ( !v4 )
    v6 = -1073741811;
  if ( v6 < 0
    || (CurrentProcess = PsGetCurrentProcess(v8, v7),
        v6 = ObDuplicateObject(CurrentProcess, a1, v4, &Handle, 0, 0, 6, 0),
        v6 < 0) )
  {
LABEL_12:
    if ( Handle )
    {
      KeStackAttachProcess(v4, &ApcState);
      ObCloseHandle(Handle, 1);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v5 )
    GreUnlockDwmState();
  return (unsigned int)v6;
}
