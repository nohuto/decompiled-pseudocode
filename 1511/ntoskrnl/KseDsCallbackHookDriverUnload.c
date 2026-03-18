/*
 * XREFs of KseDsCallbackHookDriverUnload @ 0x1401CD430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KseDsCallbackHookDriverUnload(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (**)(void))qword_1402D1F40)();
  (*(void (__fastcall **)(__int64))(v2 + 16))(a1);
  return KsepDsEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
