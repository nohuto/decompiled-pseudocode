/*
 * XREFs of MmVerifierTrimMemory @ 0x140701908
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004EF10 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14015E0C0 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401E9FC8 (MiTrimAllSystemPagableMemory.c)
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
        ++dword_140307260;
        v2 = (unsigned int)ViTrimSpaces >> 31;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, v2);
          if ( (_DWORD)result == 1 )
            ++dword_140307264;
        }
        if ( (v1 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, v2);
          if ( (_DWORD)result == 1 )
            ++dword_14030727C;
        }
        if ( (v1 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, v2);
          if ( (_DWORD)result == 1 )
            ++dword_1403072B4;
        }
      }
    }
  }
  return result;
}
