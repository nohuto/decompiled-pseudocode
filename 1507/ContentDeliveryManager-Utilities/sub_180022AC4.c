/*
 * XREFs of sub_180022AC4 @ 0x180022AC4
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800217DC (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_180022AC4(void *a1)
{
  PVOID result; // rax

  if ( !qword_18003A008 )
    abort();
  --qword_18003A008;
  result = EncodePointer(a1);
  qword_18003A490[qword_18003A008] = result;
  return result;
}
