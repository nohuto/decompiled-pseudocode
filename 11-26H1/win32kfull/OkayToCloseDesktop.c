/*
 * XREFs of OkayToCloseDesktop @ 0x1401BB310
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x1401BB438 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseDesktop(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(a1 + 40) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 16)) == -1 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v2 + 48) & 0x10) == 0 )
    return 3221225473LL;
  if ( (unsigned int)CheckHandleFlag(*(PRKPROCESS *)(a1 + 16)) )
    return 2147483665LL;
  return (unsigned int)CheckHandleFlag(*(PRKPROCESS *)(a1 + 16)) != 0 ? 0x80000011 : 0;
}
