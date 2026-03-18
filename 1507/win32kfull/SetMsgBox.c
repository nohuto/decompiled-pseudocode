/*
 * XREFs of SetMsgBox @ 0x1C01D5C80
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 */

__int64 __fastcall SetMsgBox(__int64 a1)
{
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 256LL);
  SetOrClrWF(1, (_DWORD *)a1, 0x20u, 1);
  return 1LL;
}
