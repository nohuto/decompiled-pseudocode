/*
 * XREFs of SetMsgBox @ 0x1C014F8A0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

__int64 __fastcall SetMsgBox(__int64 a1)
{
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 240LL);
  SetOrClrWF(1, (_DWORD *)a1, 0x20u, 1);
  return 1LL;
}
