/*
 * XREFs of SupportsOnlyRawAccess @ 0x1C00148E4
 * Callers:
 *     WriteField @ 0x1C00147DC (WriteField.c)
 * Callees:
 *     FindRSAccess @ 0x1C0017848 (FindRSAccess.c)
 */

char __fastcall SupportsOnlyRawAccess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 RSAccess; // rax
  __int64 v4; // rcx
  char v6; // al

  LOBYTE(v1) = 0;
  if ( *(_WORD *)(a1 + 2) == 5 )
  {
    v2 = **(_QWORD **)(a1 + 32);
    if ( *(_WORD *)(v2 + 58) == 131 )
    {
      RSAccess = FindRSAccess(*(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v2 + 88) + 88LL) + 12LL));
      v4 = RSAccess;
      if ( RSAccess )
      {
        if ( *(_QWORD *)(RSAccess + 32) != v1 )
        {
          v6 = v1;
          if ( *(_QWORD *)(v4 + 16) == v1 )
            v6 = 1;
          LOBYTE(v1) = v6;
        }
      }
    }
  }
  return v1;
}
