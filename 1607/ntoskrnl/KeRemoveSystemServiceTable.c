/*
 * XREFs of KeRemoveSystemServiceTable @ 0x14064F6F8
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_1403AA7E0 || (_QWORD)xmmword_1403AA7A0 || (_QWORD)xmmword_1403AA820) )
  {
    if ( a1 == 1 )
    {
      *(_QWORD *)&xmmword_1403AA7A0 = 0LL;
      LODWORD(xmmword_1403AA7B0) = 0;
      *((_QWORD *)&xmmword_1403AA7B0 + 1) = 0LL;
    }
    else
    {
      v3 = 2LL * (unsigned int)(a1 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v3] = 0LL;
      LODWORD(KeServiceDescriptorTableFilter[v3 + 1]) = 0;
      *((_QWORD *)&KeServiceDescriptorTableFilter[v3 + 1] + 1) = 0LL;
    }
    return 1;
  }
  return 0;
}
