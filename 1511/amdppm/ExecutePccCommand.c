/*
 * XREFs of ExecutePccCommand @ 0x1C001DE38
 * Callers:
 *     ExecutePccWrite @ 0x1C0005850 (ExecutePccWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutePccCommand(char a1, __int64 a2)
{
  LOBYTE(a2) = a1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C0009848 + 104))(*(_QWORD *)(qword_1C0009848 + 56), a2);
}
