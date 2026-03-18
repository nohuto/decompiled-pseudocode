/*
 * XREFs of GetWindowWorker @ 0x1C02497F8
 * Callers:
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetAppCompatFlags @ 0x1C00F4660 (GetAppCompatFlags.c)
 */

__int64 __fastcall GetWindowWorker(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 i; // rcx
  __int64 v9; // rax
  int v10; // eax

  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D && a2 != 5 )
    return 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 != 1 )
            {
              UserSetLastError(1443);
              return 0LL;
            }
            return *(_QWORD *)(a1 + 96);
          }
          else
          {
            return *(_QWORD *)(a1 + 104);
          }
        }
        else
        {
          return *(_QWORD *)(a1 + 80);
        }
      }
      else
      {
        return *(_QWORD *)(a1 + 72);
      }
    }
    else
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 96LL); i; i = *(_QWORD *)(i + 72) )
        v3 = i;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
    {
      v3 = *(_QWORD *)(v9 + 96);
      v10 = GetAppCompatFlags(0LL) & 8;
      while ( v3 && v10 && (*(_BYTE *)(v3 + 48) & 8) != 0 )
        v3 = *(_QWORD *)(v3 + 72);
    }
  }
  return v3;
}
