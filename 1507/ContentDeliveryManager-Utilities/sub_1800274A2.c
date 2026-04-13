/*
 * XREFs of sub_1800274A2 @ 0x1800274A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800274A2(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 + 112) + 24LL;
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 - 24) + 4LL) + v3 - 24) = off_18002DBB0;
  result = *(_QWORD *)(v3 - 24);
  *(_DWORD *)(*(int *)(result + 4) + v3 - 28) = *(_DWORD *)(result + 4) - 24;
  return result;
}
