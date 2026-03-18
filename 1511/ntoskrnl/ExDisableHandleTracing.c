/*
 * XREFs of ExDisableHandleTracing @ 0x1402137F0
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14063EDC4 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x14009642C (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x14009646C (ExpLockHandleTableExclusive.c)
 *     ExDereferenceHandleDebugInfo @ 0x14066C7D4 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v3 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  result = ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( v3 )
    return ExDereferenceHandleDebugInfo(a1, v3);
  return result;
}
