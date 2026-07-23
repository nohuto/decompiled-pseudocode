/*
 * XREFs of SbGetContextDetailsByGuid @ 0x18002E948
 * Callers:
 *     SbpDetermineDllContext @ 0x18002E2F4 (SbpDetermineDllContext.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002E6DC (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsByGuid(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  _QWORD *v5; // r10
  __int64 v6; // rcx

  result = 0LL;
  if ( a2 && a1 )
  {
    *a2 = 0LL;
    v4 = 0;
    while ( 1 )
    {
      v5 = (_QWORD *)((char *)&unk_180108284 + 32 * v4);
      v6 = *a1 - *v5;
      if ( *a1 == *v5 )
        v6 = a1[1] - v5[1];
      if ( !v6 )
        break;
      if ( ++v4 >= 5 )
        return result;
    }
    result = 1LL;
    *a2 = (char *)&SbSupportedOsList + 32 * v4;
  }
  return result;
}
