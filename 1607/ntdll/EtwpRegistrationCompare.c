/*
 * XREFs of EtwpRegistrationCompare @ 0x18002A8FC
 * Callers:
 *     EtwpFindRegistration @ 0x18002A0D0 (EtwpFindRegistration.c)
 *     EtwpInsertRegistration @ 0x18002A85C (EtwpInsertRegistration.c)
 * Callees:
 *     memcmp @ 0x18009A690 (memcmp.c)
 */

int __fastcall EtwpRegistrationCompare(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a2 + 96);
    if ( *(_WORD *)(a1 + 8) <= v5 )
    {
      if ( *(_WORD *)(a1 + 8) < v5 )
        return 1;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
