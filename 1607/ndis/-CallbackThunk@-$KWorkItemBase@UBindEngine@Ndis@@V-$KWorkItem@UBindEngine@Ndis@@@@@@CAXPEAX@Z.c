/*
 * XREFs of ?CallbackThunk@?$KWorkItemBase@UBindEngine@Ndis@@V?$KWorkItem@UBindEngine@Ndis@@@@@@CAXPEAX@Z @ 0x1C00B0420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KWorkItemBase<Ndis::BindEngine,KWorkItem<Ndis::BindEngine>>::CallbackThunk(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 32));
}
