/*
 * XREFs of PopFxAcpiForwardNotification @ 0x140242C80
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140242B78 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rbx
  NTSTATUS v9; // edi
  char v10; // si

  v5 = a1 + 240;
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 80) + 112LL))(a2, a3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 4), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
    *a5 = v10;
  }
  return (unsigned int)v9;
}
