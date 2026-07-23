/*
 * XREFs of ??$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@@Z @ 0x1800F778C
 * Callers:
 *     ??$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@I@Z @ 0x1800F76FC (--$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCCompareCacheIDs @ 0x180086270 (ResCCompareCacheIDs.c)
 */

__int64 __fastcall GetFirstEntryIndex<_RESCDIRECTORY *,_RESCDENTRY *,0>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r11
  int v7; // ebp
  int v8; // edi
  _QWORD *v9; // r10
  int v10; // eax
  __int64 v11; // r10
  unsigned int v12; // r11d
  int v13; // r11d

  v2 = -1;
  if ( a1
    && (v4 = *(_QWORD *)(a1 + 24)) != 0
    && (v5 = *(_QWORD *)(a1 + 48)) != 0
    && (v6 = *(int *)(v4 + 88), v7 = *(_DWORD *)(v4 + 72), (int)v6 < v7)
    && (*a2 || a2[1]) )
  {
    if ( (int)v6 >= 0 )
    {
      v8 = *(_DWORD *)(v4 + 72);
      v9 = (_QWORD *)(v5 + 48 * v6);
      if ( v9 )
      {
        while ( v8 )
        {
          v10 = ResCCompareCacheIDs(a2, v9);
          if ( v10 >= 0 )
          {
            if ( v10 <= 0 )
              return v12;
            v13 = *(_DWORD *)(v11 + 40);
          }
          else
          {
            v13 = *(_DWORD *)(v11 + 32);
          }
          if ( v13 < 0 || v13 >= v7 )
            v9 = 0LL;
          else
            v9 = (_QWORD *)(v5 + 48LL * v13);
          --v8;
          if ( !v9 )
            return v2;
        }
      }
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return v2;
}
