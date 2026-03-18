/*
 * XREFs of MmVerifierTrimMemory @ 0x1407018D8
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004F390 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14015DB50 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401EA19C (MiTrimAllSystemPagableMemory.c)
 */

char *MmVerifierTrimMemory()
{
  char *result; // rax
  char v1; // di
  unsigned int v2; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = (char *)MEMORY[0xFFFFF78000000320];
  if ( (MEMORY[0xFFFFF78000000320] & MmVerifierTrimFrequency) == 0 )
  {
    result = (char *)RtlpGetStackLimits((__int64)&v3, (__int64)&v4);
    if ( (_BYTE)result )
    {
      result = &KeGetCurrentStackPointer()[-v3];
      if ( (unsigned __int64)result > 0x1A30 )
      {
        v1 = ViTrimSpaces;
        ++dword_140307220;
        v2 = (unsigned int)ViTrimSpaces >> 31;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, v2);
          if ( (_DWORD)result == 1 )
            ++dword_140307224;
        }
        if ( (v1 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, v2);
          if ( (_DWORD)result == 1 )
            ++dword_14030723C;
        }
        if ( (v1 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, v2);
          if ( (_DWORD)result == 1 )
            ++dword_140307274;
        }
      }
    }
  }
  return result;
}
