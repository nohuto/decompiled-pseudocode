/*
 * XREFs of SdbpFindMatcher @ 0x140535430
 * Callers:
 *     SdbpMatchList @ 0x14053533C (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindMatcher(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 TagFromTagID; // ax
  unsigned __int16 v8; // r8

  TagFromTagID = SdbGetTagFromTagID(a3, a4);
  v8 = 0;
  if ( !a4 )
    return 0LL;
  while ( TagFromTagID != *(_DWORD *)(a2 + 24 * (v8 + 24LL)) )
  {
    if ( ++v8 >= 0x10u )
      return 0LL;
  }
  *a1 = *(_QWORD *)(a2 + 24LL * v8 + 592);
  return *(_QWORD *)(a2 + 24LL * v8 + 584);
}
