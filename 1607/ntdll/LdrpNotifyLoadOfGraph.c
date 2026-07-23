/*
 * XREFs of LdrpNotifyLoadOfGraph @ 0x18002E458
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrpNotifyLoadOfGraph @ 0x18002E458 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x18002E458 (LdrpNotifyLoadOfGraph.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 */

__int64 __fastcall LdrpNotifyLoadOfGraph(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v1 = *(_QWORD **)(a1 + 40);
  if ( !v1 )
  {
    result = 0LL;
    goto LABEL_3;
  }
  v4 = *(_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v5 = v4[1];
    if ( *(_DWORD *)(v5 + 56) == 6 )
    {
      result = LdrpNotifyLoadOfGraph(v4[1]);
      goto LABEL_14;
    }
    if ( *(int *)(v5 + 56) >= 7 )
    {
      result = 0LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(v5 + 56) == -4 )
      break;
    result = 3221225701LL;
LABEL_14:
    if ( (int)result < 0 )
      return result;
LABEL_11:
    if ( v4 == v1 )
      goto LABEL_3;
  }
  result = 3221225794LL;
LABEL_3:
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) = 7;
    result = LdrpSendPostSnapNotifications(a1);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
