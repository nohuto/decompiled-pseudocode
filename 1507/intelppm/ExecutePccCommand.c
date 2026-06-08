/*
 * XREFs of ExecutePccCommand @ 0x1C001CF8C
 * Callers:
 *     ExecutePccWrite @ 0x1C0004640 (ExecutePccWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutePccCommand(char a1, __int64 a2)
{
  LOBYTE(a2) = a1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C000DE68 + 104))(*(_QWORD *)(qword_1C000DE68 + 56), a2);
}
