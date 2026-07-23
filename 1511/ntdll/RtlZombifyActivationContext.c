/*
 * XREFs of RtlZombifyActivationContext @ 0x1800D2620
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __cdecl RtlZombifyActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  NTSTATUS v1; // edi
  void (__fastcall *v3)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, char *); // rsi
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !ActivationContext
    || (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return -1073741811;
  }
  if ( (ActivationContext->Flags & 1) == 0 )
  {
    v3 = *(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, char *))ActivationContext->SentNotifications;
    if ( v3 )
    {
      v5 = 0;
      v3(
        2LL,
        ActivationContext,
        ActivationContext->NotificationContext,
        *(_QWORD *)&ActivationContext->SentNotifications[2],
        0LL,
        &v5);
    }
    ActivationContext->Flags |= 1u;
  }
  return v1;
}
