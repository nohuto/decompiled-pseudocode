/*
 * XREFs of PopAudioAccountingCallback @ 0x140529338
 * Callers:
 *     PopWnfAudioCallback @ 0x14052925C (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140328898 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140328848 )
    {
      if ( qword_140328848 <= (unsigned __int64)qword_140328898 )
        result = MEMORY[0xFFFFF78000000008] - qword_140328898;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140328848;
      qword_1403288A0 += result;
    }
    qword_140328898 = 0LL;
  }
  return result;
}
