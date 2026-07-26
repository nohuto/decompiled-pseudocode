/*
 * XREFs of ?CallbackThunk@?$KWorkItemBase@U_NDIS_PROTOCOL_BLOCK@@V?$KCoalescingWorkItem@U_NDIS_PROTOCOL_BLOCK@@@@@@CAXPEAX@Z @ 0x1C00A8350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KWorkItemBase<_NDIS_PROTOCOL_BLOCK,KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK>>::CallbackThunk(
        __int64 a1)
{
  _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 32));
}
