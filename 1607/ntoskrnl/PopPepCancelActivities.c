/*
 * XREFs of PopPepCancelActivities @ 0x1400C0604
 * Callers:
 *     PopPepTriggerActivity @ 0x1400C0888 (PopPepTriggerActivity.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x1400C0944 (PopPepCancelActivityRange.c)
 */

__int64 __fastcall PopPepCancelActivities(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // edi

  result = *((unsigned int *)&unk_140257674 + 34 * a3);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v5 = a1 + 120;
      v6 = a1 + 72;
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, a1 + 120);
      return PopPepCancelActivityRange(v6, a3, 4, 5, v5);
    }
    else if ( (_DWORD)result == 2 )
    {
      return PopPepCancelActivityRange((int)a2 + 56, a3, 0, 5, a2 + 104);
    }
  }
  return result;
}
