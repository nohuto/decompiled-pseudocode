/*
 * XREFs of SbpRecalculateDynamicContext @ 0x18004528C
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x180041A50 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     SbGetContextDetailsById @ 0x180041C90 (SbGetContextDetailsById.c)
 */

__int64 __fastcall SbpRecalculateDynamicContext(_QWORD *a1)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  unsigned int i; // ecx

  result = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = &unk_180143894;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v3 )
        break;
      v3 += 2;
    }
    if ( i < 5 )
    {
      SbGetContextDetailsById(i, a1);
      return 1LL;
    }
  }
  return result;
}
