/*
 * XREFs of MmMapErrataPage @ 0x140784E48
 * Callers:
 *     KiInitMachineDependent @ 0x1401336B4 (KiInitMachineDependent.c)
 * Callees:
 *     MiMapSinglePage @ 0x1400FE59C (MiMapSinglePage.c)
 *     MiGetPhysicalAddress @ 0x1401042C0 (MiGetPhysicalAddress.c)
 */

ULONG_PTR __fastcall MmMapErrataPage(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( ((unsigned int)KiSanitizeFpu & 0xFFF) != 0
    || !PsNtosImageBase
    || ((char *)KiSanitizeFpu < PsNtosImageBase || (unsigned __int64)KiSanitizeFpu >= PsNtosImageEnd)
    && ((char *)KiSanitizeFpu < PsHalImageBase || (unsigned __int64)KiSanitizeFpu >= PsHalImageEnd) )
  {
    return 0LL;
  }
  v1 = qword_1402FE5B0;
  if ( !qword_1402FE5B0 )
    return 0LL;
  if ( dword_1402FE5B8 )
    return 0LL;
  if ( !(unsigned int)MiGetPhysicalAddress((unsigned __int64)KiSanitizeFpu, (__int64 *)&v4, &v3) )
    return 0LL;
  result = MiMapSinglePage(v1 << 25 >> 16, v4 >> 12, 0x80000000uLL);
  if ( !result )
    return 0LL;
  dword_1402FE5B8 = 1;
  return result;
}
