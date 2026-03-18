/*
 * XREFs of NtUserGetDpiSystemMetrics @ 0x1C00C6F00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsDpiDependentMetric @ 0x1C00953D8 (IsDpiDependentMetric.c)
 *     _CacheSecondaryDpiMetric @ 0x1C01E95A0 (_CacheSecondaryDpiMetric.c)
 */

__int64 __fastcall NtUserGetDpiSystemMetrics(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebx

  v2 = a1;
  EnterCrit(1LL);
  if ( a2 <= 0 || (unsigned int)v2 > 0x60 )
  {
    v6 = 0;
    UserSetLastError(87);
  }
  else if ( (_DWORD)v2 == 31 || (_DWORD)v2 == 50 )
  {
LABEL_4:
    v5 = gpsi;
    if ( a2 == *(unsigned __int16 *)(gpsi + 7286LL) || !IsDpiDependentMetric(v2) )
    {
      v6 = *(_DWORD *)(v5 + 4 * v2 + 1880);
    }
    else if ( a2 == 96 )
    {
      v6 = *(_DWORD *)(v5 + 4 * v2 + 2268);
    }
    else
    {
      v4 = *(_QWORD *)(v5 + 3048);
      if ( !v4 )
        goto LABEL_17;
      while ( *(_DWORD *)v4 != a2 )
      {
        v4 = *(_QWORD *)(v4 + 8);
        if ( !v4 )
          goto LABEL_17;
      }
      if ( *(_DWORD *)(v5 + 4 * v2 + 3056) == *(_DWORD *)(v5 + 4 * v2 + 1880) && *(_WORD *)(v4 + 2 * v2 + 404) )
        v6 = *(_DWORD *)(v4 + 4 * v2 + 16);
      else
LABEL_17:
        v6 = CacheSecondaryDpiMetric((unsigned int)v2, (unsigned int)a2);
    }
  }
  else
  {
    switch ( (int)v2 )
    {
      case 2:
      case 3:
      case 4:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 20:
      case 21:
      case 30:
      case 31:
      case 32:
      case 33:
      case 38:
      case 39:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 71:
      case 72:
      case 92:
        goto LABEL_4;
      default:
        UserSetLastError(87);
        v6 = 0;
        break;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v5);
  return v6;
}
