/*
 * XREFs of GetWindowWorker @ 0x1C0245B20
 * Callers:
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetAppCompatFlags @ 0x1C01140E0 (GetAppCompatFlags.c)
 */

__int64 __fastcall GetWindowWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 i; // rcx
  __int64 v11; // rax
  int v12; // eax

  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D && (_DWORD)a2 != 5 )
    return 0LL;
  v5 = 0LL;
  if ( (_DWORD)a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
            {
              UserSetLastError(1443LL);
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
        v5 = i;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 88);
    if ( v11 )
    {
      v5 = *(_QWORD *)(v11 + 96);
      v12 = GetAppCompatFlags(0LL, a2, a3, a4) & 8;
      while ( v5 && v12 && (*(_BYTE *)(v5 + 48) & 8) != 0 )
        v5 = *(_QWORD *)(v5 + 72);
    }
  }
  return v5;
}
