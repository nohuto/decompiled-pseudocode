/*
 * XREFs of PopAudioAccountingCallback @ 0x140529878
 * Callers:
 *     PopWnfAudioCallback @ 0x14052979C (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_1403288D8 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140328888 )
    {
      if ( qword_140328888 <= (unsigned __int64)qword_1403288D8 )
        result = MEMORY[0xFFFFF78000000008] - qword_1403288D8;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140328888;
      qword_1403288E0 += result;
    }
    qword_1403288D8 = 0LL;
  }
  return result;
}
