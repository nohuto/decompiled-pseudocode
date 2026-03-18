/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z @ 0x1C0215868
 * Callers:
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(struct tagPOPUPMENU *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    while ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 && *((_QWORD *)a1 + 4) == *((_QWORD *)a1 + 1) )
      {
        a1 = (struct tagPOPUPMENU *)*((_QWORD *)a1 + 8);
        return *(unsigned int *)(*((_QWORD *)a1 + 5) + 96LL);
      }
      v2 = *((_QWORD *)a1 + 4);
      if ( v2 )
      {
        v3 = safe_cast_fnid_to_PMENUWND(v2);
        if ( v3 )
        {
          a1 = *(struct tagPOPUPMENU **)(v3 + 376);
          if ( a1 )
            continue;
        }
      }
      return 0LL;
    }
  }
  return *(unsigned int *)(*((_QWORD *)a1 + 5) + 96LL);
}
